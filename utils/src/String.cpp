#include "utils/String.h"

std::string message::utils::to_string_utf8(const std::vector<uint8_t> &data) {
    return std::string{data.begin(), data.end()};
}
