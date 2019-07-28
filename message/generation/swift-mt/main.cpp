#include "definition/StandardRepository.h"

int main(int argc, const char *argv[]) {
    message::generation::swift::mt::StandardRepository repo { "SR2018", "https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/", "."};

    repo.generate_definitions();

    return 0;
}