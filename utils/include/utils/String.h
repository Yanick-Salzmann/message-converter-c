#ifndef MESSAGE_CONVERTER_C_STRING_H
#define MESSAGE_CONVERTER_C_STRING_H

#include <string>
#include <vector>

namespace message::utils {
    std::string to_string_utf8(const std::vector<uint8_t>& data);

    std::string to_lower(const std::string& str);
    std::string to_upper(const std::string& str);

    std::string trim_left(const std::string& str);
    std::string trim_right(const std::string& str);

    inline std::string trim(const std::string& str) {
        return trim_right(trim_left(str));
    }
}

#endif //MESSAGE_CONVERTER_C_STRING_H
