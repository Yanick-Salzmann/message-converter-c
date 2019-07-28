#ifndef MESSAGE_CONVERTER_C_STRING_H
#define MESSAGE_CONVERTER_C_STRING_H

#include <string>
#include <vector>

namespace message::utils {
    std::string to_string_utf8(const std::vector<uint8_t>& data);
}

#endif //MESSAGE_CONVERTER_C_STRING_H
