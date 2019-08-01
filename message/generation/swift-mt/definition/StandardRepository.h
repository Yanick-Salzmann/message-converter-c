#ifndef MESSAGE_CONVERTER_C_STANDARDREPOSITORY_H
#define MESSAGE_CONVERTER_C_STANDARDREPOSITORY_H

#include <functional>
#include <string>
#include <map>
#include <proto/SwiftMtMessageDefinition.pb.h>

#include "http-utils/HtmlDocument.h"
#include "utils/Log.h"

namespace message::generation::swift::mt {
    class StandardRepository {
        LOGGER;

        std::string _service_release;
        std::string _base_url;
        std::string _local_directory;
        std::map<std::string, definition::swift::mt::SwiftMtMessageDefinition> _message_cache;

        void write_file(const std::string& content, const std::string& file);

        utils::http::HtmlDocument load_document(const std::string& relative_url);

        void for_each_message(const std::function<void (const std::string&, const std::string&, const std::string&)>& callback);

        void process_message_definition(const std::string& mt, const std::string& description, const std::string& href);

    public:
        StandardRepository(std::string sr, std::string base_url, std::string local_directory);

        void generate_definitions();

        definition::swift::mt::SwiftMtMessageDefinition message_definition(const std::string& mt) {
            return _message_cache.at(mt);
        }
    };
}


#endif //MESSAGE_CONVERTER_C_STANDARDREPOSITORY_H
