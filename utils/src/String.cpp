#include "utils/String.h"
#include <unicode/uchar.h>

#include <algorithm>
#include <functional>

std::string message::utils::to_string_utf8(const std::vector<uint8_t> &data) {
    return std::string{data.begin(), data.end()};
}

std::string message::utils::to_lower(const std::string &str) {
    std::string ret;
    std::transform(str.begin(), str.end(), std::back_inserter(ret), [](const auto &chr) { return std::tolower(chr); });
    return ret;
}

std::string message::utils::trim_left(const std::string &str) {
    static std::function<bool(const char &)> is_not_space{[](const auto &c) { return !u_isblank(c); }};

    const auto itr = std::find_if(str.begin(), str.end(), is_not_space);
    if (itr == str.end()) {
        return {};
    }

    return std::string{itr, str.end()};
}

std::string message::utils::trim_right(const std::string &str) {
    static std::function<bool(const char &)> is_not_space{[](const auto &c) { return !u_isblank(c); }};

    const auto itr = std::find_if(str.rbegin(), str.rend(), is_not_space);
    if (itr == str.rend()) {
        return {};
    }

    return std::string{str.begin(), itr.base()};
}
