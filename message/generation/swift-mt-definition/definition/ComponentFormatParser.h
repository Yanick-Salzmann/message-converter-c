#ifndef MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_COMPONENTFORMATPARSER_H
#define MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_COMPONENTFORMATPARSER_H

#include "proto/SwiftMtMessageDefinition.pb.h"
#include <vector>

namespace message::definition::swift::mt {
    class ComponentFormatParser {
    private:
        class ParserState {
            std::string _format;
            std::string::size_type _position = 0;

        public:
            explicit ParserState(std::string format) : _format(std::move(format)) { }

            [[nodiscard]] bool has_more() const {
                return _position < _format.size();
            }

            bool read_number(uint32_t& out_number);
            void read_multiplicity(bool& exact, bool& range, bool& multi_line);

            char read() {
                return _format.at(_position++);
            }

            char peek() {
                return _format.at(_position);
            }
        };
    public:
        static std::vector<ComponentFormat> parse_format(const std::string& format);
    };
}



#endif //MESSAGE_CONVERTER_C_SWIFT_MT_DEFINITION_COMPONENTFORMATPARSER_H
