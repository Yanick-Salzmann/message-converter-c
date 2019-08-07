#ifndef MESSAGE_CONVERTER_C_GENERATION_I_SWIFT_MT_PARSER
#define MESSAGE_CONVERTER_C_GENERATION_I_SWIFT_MT_PARSER

#include "antlr4-runtime.h"
#include <vector>
#include <string>

namespace message::definition::swift::mt {
    class ISwiftMtParser {
    public:
        virtual ~ISwiftMtParser() = default;

        virtual bool parse_message(const std::string& message, std::vector<std::string>& errors) = 0;
    };
}

#endif