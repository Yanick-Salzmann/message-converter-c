#include "definition/StandardRepository.h"
#include "inja/inja.hpp"

#include <sstream>
#include <utils/String.h>
#include <filesystem>

std::string print_suffix(bool mandatory, bool repeated) {
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

void print_mt_body(std::stringstream &stream, const message::definition::swift::mt::SwiftMtMessageDefinition &msg) {
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

void print_field_options(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj) {
    if (obj.has_seq()) {
        auto seq_tag = obj.seq().tag();
        auto idx_slash = seq_tag.rfind('/');
        if (idx_slash != std::string::npos) {
            seq_tag = seq_tag.substr(idx_slash + 1);
        }

        for (const auto &child : obj.seq().children()) {
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
            std::string padding(static_cast<std::size_t>(23 - optn_name.length()), ' ');
            stream << optn_name << padding << ": START_OF_FIELD '" << fld.tag().substr(0, 2) << fmt.option() << ":' ~(START_OF_FIELD)+ ;" << std::endl;
        }

        stream << std::endl;
    }
}

void print_field_format(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::FldDef &fld) {
    std::string fld_name{"fld_"};
    fld_name.append(fld.tag()).append("_").append(cur_seq);

    std::string padding(static_cast<std::size_t>(23 - fld_name.length()), ' ');

    stream << fld_name << padding << ": ";

    if (fld.tag() == "16R" || fld.tag() == "16S") {
        stream << "START_OF_FIELD '" << fld.tag() << ":' ~(START_OF_FIELD)+";
    } else {
        auto is_first = true;
        for (const auto &fmt : fld.format()) {
            if (!is_first) {
                stream << " | ";
            } else {
                is_first = false;
            }

            stream << fld_name << "_" << fmt.option();
        }
    }


    stream << " ;" << std::endl;
}

void print_sequences(std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj) {
    if (obj.has_seq()) {
        const auto &seq = obj.seq();
        auto seq_tag = seq.tag();
        auto idx_slash = seq_tag.rfind('/');
        if (idx_slash != std::string::npos) {
            seq_tag = seq_tag.substr(idx_slash + 1);
        }
        std::string padding(static_cast<std::size_t>(23 - 4 - seq_tag.length()), ' ');
        stream << "seq_" << seq_tag << padding << ": ";

        for (const auto &child : seq.children()) {
            if (child.has_fld()) {
                const auto &fld = child.fld();
                std::string fld_name{"fld_"};
                fld_name.append(fld.tag()).append("_").append(seq_tag);
                stream << fld_name << print_suffix(fld.mandatory(), fld.repeated()) << " ";
            } else {
                auto sub_seq = child.seq().tag();
                idx_slash = sub_seq.rfind('/');
                if (idx_slash != std::string::npos) {
                    sub_seq = sub_seq.substr(idx_slash + 1);
                }

                stream << "seq_" << sub_seq << print_suffix(child.seq().mandatory(), child.seq().repeated()) << " ";
            }
        }

        stream << ";" << std::endl;

        for (const auto &child : seq.children()) {
            if (child.has_seq()) {
                print_sequences(stream, child);
            }
        }
    }
}

void print_field(const std::string &cur_seq, std::stringstream &stream, const message::definition::swift::mt::ObjDef &obj) {
    if (obj.has_seq()) {
        for (const auto &child : obj.seq().children()) {
            auto seq_tag = obj.seq().tag();
            auto idx_slash = seq_tag.rfind('/');
            if (idx_slash != std::string::npos) {
                seq_tag = seq_tag.substr(idx_slash + 1);
            }

            print_field(seq_tag, stream, child);
        }
    } else {
        print_field_format(cur_seq, stream, obj.fld());
    }
}

int main(int argc, const char *argv[]) {
    std::string sr = argc > 1 ? argv[1] : "SR2018";
    std::string url = argc > 2 ? argv[2] : "https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/";
    std::string local_dir = argc > 3 ? argv[3] : ".";
    std::string cur_dir = argc > 4 ? argv[4] : ".";

    auto grammar_dir = std::filesystem::path{local_dir};
    grammar_dir /= sr;
    grammar_dir /= "grammars";

    if (!std::filesystem::exists(grammar_dir)) {
        std::filesystem::create_directories(grammar_dir);
    }

    message::generation::swift::mt::StandardRepository repo{sr, url, local_dir};

    repo.generate_definitions();

    for (const auto &pair : repo.message_cache()) {
        const auto defn = pair.second;
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

        std::string out_name{local_dir + "/" + sr + "/grammars/SwiftMtParser_MT"};
        out_name.append(pair.first).append(".g4");
        std::string inja_template = message::utils::to_string_utf8(characters);
        const auto ret = env.render(inja_template, nlohmann::json{{"message_type", pair.first}});

        std::ofstream os(out_name, std::ios::out | std::ios::binary);
        os.write(ret.c_str(), ret.size() - 1);
    }

    return 0;
}