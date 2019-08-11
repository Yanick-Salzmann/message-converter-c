#include "GrammarGenerator.h"
#include <fstream>
#include <inja/inja.hpp>
#include <utils/String.h>

namespace message::definition::swift::mt {
    std::string GrammarGenerator::print_suffix(bool mandatory, bool repeated) {
        std::string suffix{};
        if (mandatory) {
            if (repeated) {
                suffix = "+";
            }
        } else {
            if (repeated) {
                suffix = "*";
            } else {
                suffix = "?";
            }
        }

        return suffix;
    }

    void GrammarGenerator::print_mt_body(std::stringstream &stream, const message::definition::swift::mt::SwiftMtMessageDefinition &msg) {
        for (const auto &obj : msg.objs()) {
            if (obj.has_seq()) {
                const auto &seq = obj.seq();
                stream << "seq_" << seq.tag() << print_suffix(seq.mandatory(), seq.repeated()) << " ";
            } else {
                const auto &fld = obj.fld();
                stream << "fld_" << fld.tag() << print_suffix(fld.mandatory(), fld.repeated()) << " ";
            }
        }
    }

    void GrammarGenerator::print_field_options(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj) {
        if (obj.has_seq()) {
            auto seq_tag = obj.seq().tag();
            auto idx_slash = seq_tag.rfind('/');
            if (idx_slash != std::string::npos) {
                seq_tag = seq_tag.substr(idx_slash + 1);
            }

            std::map<std::string, int> field_map{};
            for (const auto &child : obj.seq().children()) {
                if (child.has_fld()) {
                    const auto tag = child.fld().tag();
                    if (field_map.find(tag) != field_map.end()) {
                        // TODO: Add suffix like fld_95P_A_P_1
                        continue;
                    }

                    field_map.emplace(tag, 1);
                }

                print_field_options(seq_tag, stream, child);
            }
        } else {
            const auto &fld = obj.fld();
            if (fld.tag() == "16R" || fld.tag() == "16S") {
                return;
            }

            std::string fld_name{"fld_"};
            fld_name.append(fld.tag()).append("_").append(cur_seq);

            for (const auto &fmt : fld.format()) {
                auto optn_name = fld_name;
                optn_name.append("_").append(fmt.option());
                const auto fld_tag = fld.tag().substr(0, 2).append(fmt.option());
                std::string padding(static_cast<std::size_t>(23 - optn_name.length()), ' ');
                stream << optn_name << padding << "returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag(\"" << fld_tag << "\"); }:" << std::endl
                       << std::string(23, ' ') << "START_OF_FIELD '" << fld_tag << ":' ~(START_OF_FIELD)+ ;" << std::endl;
            }

            stream << std::endl;
        }
    }

    void GrammarGenerator::print_field_format(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::FldDef &fld) {
        std::string fld_name{"fld_"};
        fld_name.append(fld.tag()).append("_").append(cur_seq);

        std::string padding(static_cast<std::size_t>(23 - fld_name.length()), ' ');

        stream << fld_name << padding << "returns [message::definition::swift::mt::Field fld] ";

        if (fld.tag() == "16R" || fld.tag() == "16S") {
            stream << "@init { $fld.set_tag(\"" << fld.tag() << "\"); } : " << std::endl
                   << std::string(23, ' ');
            stream << "START_OF_FIELD '" << fld.tag() << ":' ~(START_OF_FIELD)+";
        } else {
            stream << " :" << std::endl
                   << std::string(23, ' ');

            auto is_first = true;
            for (const auto &fmt : fld.format()) {
                if (!is_first) {
                    stream << "| ";
                } else {
                    if (fld.format_size() > 1) {
                        stream << "  ";
                    }
                    is_first = false;
                }

                auto name = fld_name;
                name.append("_").append(fmt.option());
                stream << name << " { $fld.MergeFrom($" << name << ".fld); }" << std::endl << std::string(23, ' ');
            }
        }


        stream << ";" << std::endl << std::endl;
    }

    void GrammarGenerator::print_sequences(std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj) {
        if (obj.has_seq()) {
            const auto &seq = obj.seq();
            auto seq_tag = seq.tag();
            auto idx_slash = seq_tag.rfind('/');
            if (idx_slash != std::string::npos) {
                seq_tag = seq_tag.substr(idx_slash + 1);
            }
            std::string padding(static_cast<std::size_t>(23 - 4 - seq_tag.length()), ' ');
            stream << "seq_" << seq_tag << padding << "returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag(\"" << seq_tag << "\"); } :" << std::endl;

            for (const auto &child : seq.children()) {
                if (child.has_fld()) {
                    const auto &fld = child.fld();
                    std::string fld_name{"fld_"};
                    fld_name.append(fld.tag()).append("_").append(seq_tag);
                    stream << std::string(23, ' ') << fld_name << print_suffix(fld.mandatory(), fld.repeated())
                           << " { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($" << fld_name << ".fld); }" << std::endl;
                } else {
                    auto sub_seq = child.seq().tag();
                    idx_slash = sub_seq.rfind('/');
                    if (idx_slash != std::string::npos) {
                        sub_seq = sub_seq.substr(idx_slash + 1);
                    }

                    stream << std::string(23, ' ') << "seq_" << sub_seq << print_suffix(child.seq().mandatory(), child.seq().repeated())
                           << " { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_" << sub_seq << ".elem); }" << std::endl;
                }
            }

            stream << std::string(23, ' ') << ";" << std::endl << std::endl;

            for (const auto &child : seq.children()) {
                if (child.has_seq()) {
                    print_sequences(stream, child);
                }
            }
        }
    }

    void GrammarGenerator::print_field(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj) {
        if (obj.has_seq()) {
            std::map<std::string, int> field_map{};
            for (const auto &child : obj.seq().children()) {
                auto seq_tag = obj.seq().tag();
                auto idx_slash = seq_tag.rfind('/');
                if (idx_slash != std::string::npos) {
                    seq_tag = seq_tag.substr(idx_slash + 1);
                }

                if (child.has_fld()) {
                    const auto tag = child.fld().tag();
                    if (field_map.find(tag) != field_map.end()) {
                        continue;
                    }

                    field_map.emplace(tag, 1);
                }

                print_field(seq_tag, stream, child);
            }
        } else {
            print_field_format(cur_seq, stream, obj.fld());
        }
    }

    std::string GrammarGenerator::generate_grammar(const std::string& cur_dir, const message::definition::swift::mt::SwiftMtMessageDefinition& defn, const std::string& mt) {
        inja::Environment env;
        env.add_callback("print_fields", 0, [&defn](inja::Arguments &args) {
            std::stringstream stream;
            for (const auto &child : defn.objs()) {
                print_field("", stream, child);
            }

            return stream.str();
        });

        env.add_callback("print_sequences", 0, [&defn](inja::Arguments &args) {
            std::stringstream stream;
            for (const auto &child : defn.objs()) {
                print_sequences(stream, child);
            }

            return stream.str();
        });

        env.add_callback("print_field_options", 0, [&defn](inja::Arguments &args) {
            std::stringstream stream;
            for (const auto &child : defn.objs()) {
                print_field_options("", stream, child);
            }

            return stream.str();
        });

        env.add_callback("print_mt_body", 0, [&defn](inja::Arguments &args) {
            std::stringstream stream;
            print_mt_body(stream, defn);
            return stream.str();
        });

        std::ifstream is(cur_dir + "/SwiftMtParser.g4", std::ios::in | std::ios::binary);
        is.seekg(0, std::ios::end);
        const auto full_size = is.tellg();
        is.seekg(0, std::ios::beg);
        std::vector<uint8_t> characters(static_cast<std::size_t>(full_size) + 1);
        is.read((char *) characters.data(), full_size);

        std::string inja_template = message::utils::to_string_utf8(characters);
        return env.render(inja_template, nlohmann::json{{"message_type", mt}});
    }
}