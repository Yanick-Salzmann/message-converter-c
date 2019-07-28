#include <iostream>
#include <http-utils/HtmlDocument.h>
#include <regex>

int main(int argc, const char *argv[]) {
    std::regex mt_regex{ "MT ([0-9n][0-9]{2}) (.*)$", std::regex::extended};

    auto doc = message::utils::http::HtmlDocument::from_url("https://www2.swift.com/knowledgecentre/rest/v1/publications/usgf_20180720/3.0/idx_msg.htm");
    const auto elements = doc.find_all("table.idxtbl tr td a");

    for(const auto& element : elements) {
        const auto own_text = element.node_text();
        if(own_text.empty()) {
            continue;
        }

        const auto link = element.attribute("href");
        if(link.empty()) {
            continue;
        }

        std::smatch results{};
        if(!std::regex_match(own_text, results, mt_regex)) {
            continue;
        }

        std::cout << "Type: " << results[1] << " -- Description: " << results[2] << " -- @link: " << link << std::endl;
    }

    return 0;
}