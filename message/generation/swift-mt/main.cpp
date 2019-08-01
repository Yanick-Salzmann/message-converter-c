#include "definition/StandardRepository.h"
#include "inja/inja.hpp"

#include <sstream>
#include <utils/String.h>

void print_field(const std::string& cur_seq, std::stringstream& stream, const message::definition::swift::mt::ObjDef& obj) {
    if(obj.has_seq()) {
        for(const auto& child : obj.seq().children()) {
            auto seq_tag = obj.seq().tag();
            auto idx_slash = seq_tag.rfind('/');
            if(idx_slash != std::string::npos) {
                seq_tag = seq_tag.substr(idx_slash + 1);
            }

            print_field(seq_tag, stream, child);
        }
    } else {
        const auto& fld = obj.fld();
        std::string fld_name { "FLD_"};
        fld_name.append(fld.tag()).append("_").append(cur_seq);

        std::string padding(static_cast<std::size_t>(23 - fld_name.length()), ' ');

        stream << fld_name << padding << ": ':" << fld.tag() << "' ~(CRLF)+  ;" << std::endl;
    }
}

int main(int argc, const char *argv[]) {
    message::generation::swift::mt::StandardRepository repo { "SR2018", "https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/", "."};

    repo.generate_definitions();

    const auto defn = repo.message_definition("321");
    inja::Environment env;
    env.add_callback("print_fields", 0, [&defn](inja::Arguments& args) {
        std::stringstream stream;
        for(const auto& child : defn.objs()) {
            print_field("", stream, child);
        }

        return stream.str();
    });

    std::ifstream is("SwiftMtParser.g4", std::ios::in | std::ios::binary);
    is.seekg(0, std::ios::end);
    const auto full_size = is.tellg();
    is.seekg(0, std::ios::beg);
    std::vector<uint8_t> characters(static_cast<std::size_t>(full_size) + 1);
    is.read((char*) characters.data(), full_size);

    std::string inja_template = message::utils::to_string_utf8(characters);
    const auto ret = env.render(inja_template, nlohmann::json{});

    std::ofstream os("SwiftMtParser_MT321.g4", std::ios::out | std::ios::binary);
    os.write(ret.c_str(), ret.size());

    return 0;
}