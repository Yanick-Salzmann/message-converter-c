#ifndef MESSAGE_CONVERTER_C_DEFINITIONPARSER_H
#define MESSAGE_CONVERTER_C_DEFINITIONPARSER_H


#include <string>
#include <functional>
#include <list>

#include "utils/Log.h"
#include "http-utils/HtmlDocument.h"

#include "proto/SwiftMtMessageDefinition.pb.h"

namespace message::generation::swift::mt {
    class SequenceStack;

    typedef std::function<utils::http::HtmlDocument (const std::string&)> tDocumentLoader;

    class DefinitionParser {
        LOGGER;

        std::string _service_release;
        std::string _message_type;
        std::string _message_name;

        tDocumentLoader _document_loader;

        std::list<utils::http::HtmlNode> _field_nodes;

        definition::swift::mt::SwiftMtMessageDefinition _message_definition;

        void process();

        bool is_extended_header_row(const std::list<utils::http::HtmlNode>& header_nodes);

        void process_long_definition(std::list<utils::http::HtmlNode>::iterator field_iterator, SequenceStack& sequence_stack);
        void process_short_definition(std::list<utils::http::HtmlNode>::iterator field_iterator, SequenceStack& sequence_stack);

        void load_field_definition(definition::swift::mt::FldDef& fld_def, const std::string& link);
        static void load_field_formats(definition::swift::mt::FldDef& fld_def, utils::http::HtmlDocument& doc);
        static void load_field_qualifiers(definition::swift::mt::FldDef& fld_def, utils::http::HtmlDocument& doc);

        static void add_qualifier_options(definition::swift::mt::FldQlfr& qlfr_def, const std::string& raw_options);

        static bool parse_sequence(const std::string& code, SequenceStack& sequence_stack);
        static bool is_empty_string(const std::string& str);
        static std::list<std::string> split_components(const std::string& str);


    public:
        DefinitionParser(std::string sr, std::string mt, std::string description, tDocumentLoader doc_loader, std::list<utils::http::HtmlNode> field_nodes);

        [[nodiscard]] const definition::swift::mt::SwiftMtMessageDefinition& message_definition() const {
            return _message_definition;
        }
    };
}



#endif //MESSAGE_CONVERTER_C_DEFINITIONPARSER_H
