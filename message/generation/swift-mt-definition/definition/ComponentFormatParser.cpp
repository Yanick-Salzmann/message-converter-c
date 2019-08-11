#include "ComponentFormatParser.h"

namespace message::definition::swift::mt {

    std::vector<ComponentFormat> ComponentFormatParser::parse_format(const std::string &format) {
        ParserState state{format};
        while(state.has_more()) {
            uint32_t num0 = 0;
            if(state.read_number(num0)) {

            }
        }
        return {};
    }

    bool ComponentFormatParser::ParserState::read_number(uint32_t &out_number) {
        char digit0 = read();
        if (!std::isdigit(digit0)) {
            return false;
        }

        const auto num0 =(uint32_t) (digit0 - '0');
        char digit1 = peek();
        if (!std::isdigit(digit1)) {
            out_number = num0;
            return true;
        }

        ++_position;

        const auto num1 = (uint32_t) (digit1 - '0');
        out_number = num0 + num1 * 10;
        return true;
    }

    void ComponentFormatParser::ParserState::read_multiplicity(bool &exact, bool &range, bool& multi_line) {
        switch(peek()) {
            case '*': {
                multi_line = true;
                read();
                break;
            }

            case '-': {
                range = true;
                read();
                break;
            }

            case '!': {
                exact = true;
                read();
                break;
            }
        }
    }
}