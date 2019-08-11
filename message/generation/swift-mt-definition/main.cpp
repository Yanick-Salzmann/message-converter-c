#include "definition/StandardRepository.h"

#include <filesystem>
#include <definition/GrammarGenerator.h>
#include <fstream>

int main(int argc, const char *argv[]) {
    std::string mt = argv[1];
    std::string sr = argc > 2 ? argv[2] : "SR2018";
    std::string url = argc > 3 ? argv[3] : "https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/";
    std::string local_dir = argc > 4 ? argv[4] : ".";
    std::string cur_dir = argc > 5 ? argv[5] : ".";

    auto grammar_dir = std::filesystem::path{local_dir};
    grammar_dir /= sr;
    grammar_dir /= "grammars";

    if (!std::filesystem::exists(grammar_dir)) {
        std::filesystem::create_directories(grammar_dir);
    }

    message::generation::swift::mt::StandardRepository repo{sr, url, local_dir};

    repo.load_message_definition(mt);

    for (const auto &pair : repo.message_cache()) {
        const auto grammar = message::definition::swift::mt::GrammarGenerator::generate_grammar(cur_dir, pair.second, pair.first);

        auto grammar_path = local_dir;
        grammar_path.append("/").append(sr).append("/grammars/SwiftMtParser_MT");
        grammar_path.append(pair.first).append(".g4");

        std::ofstream os(grammar_path, std::ios::out | std::ios::binary);
        os.write(grammar.c_str(), grammar.size() - 1);
    }

    return 0;
}