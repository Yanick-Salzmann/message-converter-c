#include "StandardRepository.h"
#include "DefinitionParser.h"
#include <iostream>
#include <spdlog/fmt/fmt.h>
#include <regex>
#include <filesystem>
#include <fstream>
#include <google/protobuf/util/json_util.h>

namespace message::generation::swift::mt {
    LOGGER_IMPL(StandardRepository);

    StandardRepository::StandardRepository(std::string sr, std::string base_url, std::string local_directory) :
            _service_release(std::move(sr)),
            _base_url(std::move(base_url)),
            _local_directory(std::move(local_directory)) {

    }

    void StandardRepository::process_message_definition(const std::string &mt, const std::string &description, const std::string &href) {
        log->info("MT{} -> {}", mt, href);

        std::string target_file{"SwiftMtMsgDef_"};
        target_file.append(mt).append(".json");

        const auto existing = read_file(target_file);
        if(!existing.empty()) {
            log->info("Parsing from cached definition '{}'", target_file);
            definition::swift::mt::SwiftMtMessageDefinition msg_def;
            google::protobuf::util::JsonStringToMessage(existing, &msg_def);
            _message_cache.emplace(mt, msg_def);
            return;
        }

        auto mt_doc = load_document(href);
        const auto nodes = mt_doc.find_all("table.fmttable tr");
        const auto defn = DefinitionParser{
                _service_release,
                mt,
                description,
                std::bind(&StandardRepository::load_document, this, std::placeholders::_1),
                nodes
        }.message_definition();

        _message_cache.emplace(mt, defn);

        std::string json_defn;
        google::protobuf::util::JsonPrintOptions optns;
        optns.add_whitespace = true;
        google::protobuf::util::MessageToJsonString(defn, &json_defn, optns);

        write_file(json_defn, target_file);
    }

    void StandardRepository::write_file(const std::string &content, const std::string &file) {
        std::filesystem::path base_path(_local_directory);
        base_path /= _service_release;
        base_path /= "definitions";
        if(!std::filesystem::exists(base_path)) {
            std::filesystem::create_directories(base_path);
        }

        base_path /= file;

        const auto absolute_path = std::filesystem::absolute(base_path);
        std::ofstream os{absolute_path.string(), std::ios::out | std::ios::binary};
        os.write(content.c_str(), content.size());
    }

    std::string StandardRepository::read_file(const std::string &file) {
        std::filesystem::path base_path(_local_directory);
        base_path /= _service_release;
        base_path /= "definitions";
        base_path /= file;

        const auto absolute_path = std::filesystem::absolute(base_path);
        std::ifstream is{absolute_path.string(), std::ios::out | std::ios::binary};
        if(!is) {
            return {};
        }

        is.seekg(0, std::ios::end);
        const auto size = static_cast<std::size_t>(is.tellg());
        is.seekg(0, std::ios::beg);
        std::vector<char> content(size);
        is.read(content.data(), size);
        return std::string { content.begin(), content.end() };
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

    std::string StandardRepository::message_type_from_uri(const std::string &uri) {
        static std::regex uri_regex { "urn::msg::swift::mt::[^:]::([^:])" };
        std::smatch result;
        if(!std::regex_match(uri, result, uri_regex)) {
            return {};
        }

        return result[1].str();
    }

    void StandardRepository::load_message_definition(const std::string &mt) {
        process_message_definition(mt, "Desc", std::string("finmt").append(mt).append(".htm"));
    }
}