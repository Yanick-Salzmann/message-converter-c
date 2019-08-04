#include <utils/String.h>
#include "DefinitionParser.h"
#include "SequenceStack.h"
#include <google/protobuf/util/json_util.h>

#include <regex>

namespace message::generation::swift::mt {
    LOGGER_IMPL(DefinitionParser);

    DefinitionParser::DefinitionParser(std::string sr, std::string mt, std::string description, tDocumentLoader doc_loader, std::list<utils::http::HtmlNode> field_nodes) :
            _service_release(std::move(sr)),
            _message_type(std::move(mt)),
            _message_name(std::move(description)),
            _document_loader(std::move(doc_loader)),
            _field_nodes(std::move(field_nodes)) {

        process();
    }

    void DefinitionParser::process() {
        log->info("Processing message definition MT{}", _message_type);
        log->info("---->");

        auto itr = _field_nodes.begin();
        if(itr == _field_nodes.end()) {
            log->warn("No field nodes found");
            log->info("----|");
            return;
        }

        definition::swift::mt::SwiftMtMessageDefinition msg_def;
        SequenceStack sequence_stack(msg_def);

        const auto header_node = *itr++;
        const auto headings = header_node.find_all("th");
        if(is_extended_header_row(headings)) {
            process_long_definition(itr, sequence_stack);
        } else {
            process_short_definition(itr, sequence_stack);
        }

        msg_def.set_uri(fmt::format("urn::msg::swift::mt::{}::{}", _service_release, _message_type));

        std::string msg_text;
        google::protobuf::util::MessageToJsonString(msg_def, &msg_text);
        log->info("JSON: {}", msg_text);

        log->info("----|");

        _message_definition = msg_def;
    }

    bool DefinitionParser::is_extended_header_row(const std::list<utils::http::HtmlNode> &header_nodes) {
        return std::find_if(header_nodes.begin(), header_nodes.end(), [](const auto& node) {
            const auto text = utils::to_lower(node.node_text());
            return text == "detailed field name" || text == "qualifier" || text == "generic field name";
        }) != header_nodes.end();
    }

    void DefinitionParser::process_long_definition(std::list<utils::http::HtmlNode>::iterator field_iterator, SequenceStack& sequence_stack) {
        auto is_repeated_field = false;
        for(auto itr = field_iterator; itr != _field_nodes.end(); ++itr) {
            const auto elems = (*itr).find_all("td");
            if(elems.empty()) {
                continue;
            }

            if(elems.size() == 1) {
                const auto elem = utils::trim(elems.front().node_text());
                if(elem == "----->") {
                    is_repeated_field = true;
                } else if(elem == "-----|") {
                    is_repeated_field = false;
                } else {
                    if(!parse_sequence(elems.front().node_text(), sequence_stack)) {
                        log->error("Skipping message...");
                        return;
                    }
                }
                continue;
            }

            auto row_itr = elems.begin();

            auto status = utils::trim((*row_itr++).node_text());
            auto tag = utils::trim((*row_itr++).node_text());
            auto qualifier = utils::trim((*row_itr++).node_text());
            auto field_name_generic = utils::trim((*row_itr++).node_text());
            auto field_name_node = *row_itr++;
            auto field_name = utils::trim(field_name_node.node_text());
            auto content_options = utils::trim((*row_itr++).node_text());
            auto field_num = std::stoi(utils::trim((*row_itr++).node_text()));

            definition::swift::mt::FldDef fld_def;
            fld_def.set_repeated(is_repeated_field);
            fld_def.set_tag(tag);
            fld_def.set_name(is_empty_string(field_name_generic) ? field_name : field_name_generic);
            fld_def.set_mandatory(status == "M");

            if(tag == "16R" || tag == "16S") {
                handle_marker_field(fld_def, tag, content_options);
            } else {
                auto fld_links = field_name_node.find_all("a");
                if (fld_links.empty()) {
                    log->warn("No link to field definition found for field {}", field_name);
                    continue;
                }

                const auto field_def_link = fld_links.front().attribute("href");
                if (field_def_link.empty()) {
                    log->warn("Link to field definition for field {} is empty", field_name);
                    continue;
                }

                load_field_definition(fld_def, field_def_link);
            }

            definition::swift::mt::ObjDef obj_def;
            obj_def.mutable_fld()->MergeFrom(fld_def);

            sequence_stack.append_object(obj_def);
        }
    }

    void DefinitionParser::process_short_definition(std::list<utils::http::HtmlNode>::iterator field_iterator, SequenceStack& sequence_stack) {
        for(auto itr = field_iterator; itr != _field_nodes.end(); ++itr) {

        }
    }

    bool DefinitionParser::parse_sequence(const std::string &code, SequenceStack &sequence_stack) {
        static std::regex sequence_regex { "((-----(>|\\|)) )?((((Mandatory)|(Optional)) (Repetitive )?)|(End of ))((Subs)|S)equence ([A-Z0-9]{1,2}[a-z]?) (.*)"};

        std::smatch result;
        if(!std::regex_match(code, result, sequence_regex)) {
            log->error("Value {} does not match regex for sequences", code);
            return false;
        }

        auto repetitive = result[2].matched || result[9].matched;
        auto is_end = result[10].matched;
        auto is_mandatory = result[7].matched;
        auto tag = result[13].str();
        auto name = result[14].str();

        if(!is_end) {
            definition::swift::mt::SeqDef seq;
            seq.set_value(name);
            seq.set_repeated(repetitive);
            seq.set_mandatory(is_mandatory);

            sequence_stack.push(tag, seq);
            log->info("START {} --> {}", name, sequence_stack.to_path());
        } else {
            log->info("END {} --> {}", name, sequence_stack.to_path());
            sequence_stack.pop();
        }

        return true;
    }

    bool DefinitionParser::is_empty_string(const std::string &str) {
        if(str.empty()) {
            return true;
        }

        if(utils::trim(str).empty()) {
            return true;
        }

        return str.size() == 2 && str[0] == static_cast<char>(0xC2) && str[1] == static_cast<char>(0xA0);

    }

    void DefinitionParser::load_field_definition(definition::swift::mt::FldDef &fld_def, const std::string &link) {
        auto fld_doc = _document_loader(link);
        load_field_formats(fld_def, fld_doc);
        load_field_qualifiers(fld_def, fld_doc);
    }

    std::list<std::string> DefinitionParser::split_components(const std::string &str) {
        if(str.empty()) {
            return {};
        }

        static std::regex comp_regex { "\\(([a-zA-Z0-9 ]+)\\)"};

        auto cur_start = str.begin();
        std::smatch match;

        std::list<std::string> ret;

        while(std::regex_search(cur_start, str.end(), match, comp_regex)) {
            ret.emplace_back(match[1].str());
            cur_start = match.suffix().first;
        }

        return ret;
    }

    void DefinitionParser::load_field_formats(definition::swift::mt::FldDef &fld_def, utils::http::HtmlDocument &doc) {
        const auto format_rows = doc.find_all("div.fldfmt > table.formattable tr");
        for(auto& row : format_rows) {
            const auto fields = row.find_all("td");
            if(fields.size() < 2) {
                continue;
            }

            auto fld_itr = fields.begin();

            const auto option = (*fld_itr++).node_text().substr(7);
            const auto format = (*fld_itr++).node_text();
            std::string components;
            if(fields.size() >= 3) {
                components = (*fld_itr++).node_text();
            }

            definition::swift::mt::OptnFrmt* opt = fld_def.mutable_format()->Add();
            opt->set_option(option);
            opt->set_format(format);
            const auto comps = split_components(components);
            for(const auto& comp : comps) {
                auto cmp = opt->mutable_components()->Add();
                cmp->set_name(comp);
            }
        }
    }

    void DefinitionParser::load_field_qualifiers(definition::swift::mt::FldDef &fld_def, utils::http::HtmlDocument &doc) {
        const auto qualifier_rows = doc.find_all("div.fldqual > table.qualifiertab tr");
        if(qualifier_rows.size() <= 1) {
            return;
        }

        auto itr = qualifier_rows.begin();
        const auto header_fields = (*itr++).find_all("th");

        std::vector<std::string> headers;
        std::transform(header_fields.begin(), header_fields.end(), std::back_inserter(headers), [](auto& node) { return node.node_text(); });

        const auto itr_qlfr = std::find(headers.begin(), headers.end(), "Qualifier");
        const auto itr_opts = std::find(headers.begin(), headers.end(), "Options");
        const auto itr_desc = std::find(headers.begin(), headers.end(), "Qualifier Description");

        std::ptrdiff_t idx_qlfr = itr_qlfr == headers.end() ? -1 : std::distance(headers.begin(), itr_qlfr);
        std::ptrdiff_t idx_opts = itr_opts == headers.end() ? -1 : std::distance(headers.begin(), itr_opts);
        std::ptrdiff_t idx_desc = itr_desc == headers.end() ? -1 : std::distance(headers.begin(), itr_desc);

        if(idx_qlfr < 0) {
            log->warn("Invalid qualifier description for field {}. No header named 'Qualifier' found", fld_def.name());
            return;
        }

        for(; itr != qualifier_rows.end(); ++itr) {
            const auto field_elems = (*itr).find_all("td");
            if(field_elems.empty()) {
                continue;
            }

            std::vector<std::string> fields;
            std::transform(field_elems.begin(), field_elems.end(), std::back_inserter(fields), [](auto& node) { return node.node_text(); });

            auto qlfr_def = fld_def.mutable_qualifier()->Add();
            qlfr_def->set_qualifier(fields[idx_qlfr]);

            if(idx_desc >= 0) {
                qlfr_def->set_description(fields[idx_desc]);
            }

            if(idx_opts >= 0) {
                add_qualifier_options(*qlfr_def, fields[idx_opts]);
            }
        }
    }

    void DefinitionParser::add_qualifier_options(definition::swift::mt::FldQlfr &qlfr_def, const std::string &raw_options) {
        static std::regex group_regex{ "(([A-Z])( or)?)+" };

        auto cur_start = raw_options.begin();
        std::smatch match;

        while(std::regex_search(cur_start, raw_options.end(), match, group_regex)) {
            const auto optn = match[2].str();
            *qlfr_def.mutable_options()->Add() = optn;

            cur_start = match.suffix().first;
        }
    }

    void DefinitionParser::handle_marker_field(definition::swift::mt::FldDef &fld_def, const std::string &tag, const std::string &block) {
        if(tag == "16R") {
            auto frmt = fld_def.mutable_format()->Add();
            const auto cmp = frmt->mutable_components()->Add();
            cmp->set_name("Blk");
            cmp->set_constant(block);
            frmt->set_option("R");
            frmt->set_format(block);
        } else {
            auto frmt = fld_def.mutable_format()->Add();
            const auto cmp = frmt->mutable_components()->Add();
            cmp->set_name("Blk");
            cmp->set_constant(block);
            frmt->set_option("S");
            frmt->set_format(block);
        }
    }
}