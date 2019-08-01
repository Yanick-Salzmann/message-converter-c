#include "StandardRepository.h"
#include "DefinitionParser.h"
#include <iostream>
#include <spdlog/fmt/fmt.h>
#include <regex>
#include <filesystem>
#include <fstream>

namespace message::generation::swift::mt {
    LOGGER_IMPL(StandardRepository);

    StandardRepository::StandardRepository(std::string sr, std::string base_url, std::string local_directory) :
            _service_release(std::move(sr)),
            _base_url(std::move(base_url)),
            _local_directory(std::move(local_directory)) {

    }

    void StandardRepository::generate_definitions() {
        for_each_message(std::bind(&StandardRepository::process_message_definition, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
    }

    void StandardRepository::process_message_definition(const std::string &mt, const std::string &description, const std::string &href) {
        if (mt != "321") {
            return;
        }

        log->info("MT{} -> {}", mt, href);
        auto mt_doc = load_document(href);
        const auto nodes = mt_doc.find_all("table.fmttable tr");
        _message_cache.emplace(mt, DefinitionParser{
                _service_release,
                mt,
                description,
                std::bind(&StandardRepository::load_document, this, std::placeholders::_1),
                nodes
        }.message_definition());
    }

    void StandardRepository::write_file(const std::string &content, const std::string &file) {
        std::filesystem::path base_path(_local_directory);
        base_path /= file;

        const auto absolute_path = std::filesystem::absolute(base_path);
        std::ofstream os{absolute_path.string(), std::ios::out | std::ios::binary};
        os.write(content.c_str(), content.size());
    }

    utils::http::HtmlDocument StandardRepository::load_document(const std::string &relative_url) {
        std::string url = fmt::format("{}/{}", _base_url, relative_url);
        log->info("Fetching {}...", url);
        return utils::http::HtmlDocument::from_url(url);
    }

    void StandardRepository::for_each_message(const std::function<void(const std::string &, const std::string &, const std::string &)> &callback) {
        std::regex mt_regex{"MT ([0-9n][0-9]{2}) (.*)$", std::regex::extended};

        auto doc = load_document("idx_msg.htm");
        const auto elements = doc.find_all("table.idxtbl tr td a");

        for (const auto &element : elements) {
            const auto own_text = element.node_text();
            if (own_text.empty()) {
                continue;
            }

            const auto link = element.attribute("href");
            if (link.empty()) {
                continue;
            }

            std::smatch results{};
            if (!std::regex_match(own_text, results, mt_regex)) {
                continue;
            }

            callback(results[1], results[2], link);
        }
    }
}