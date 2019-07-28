#include "utils/Log.h"
#include <spdlog/sinks/stdout_color_sinks.h>

namespace message::utils {
    void Logger::init_logger (const std::string& name) {
        _logger = spdlog::stdout_color_mt (name);
        _logger->set_pattern ("[%Y-%m-%d %H:%I:%S.%e] [%P:%t] [%n] %^[%l]%$ %v");
#ifndef NDEBUG
        _logger->set_level (spdlog::level::debug);
#else
        mLogger->set_level (spdlog::level::info);
#endif
    }

    std::string Logger::sanitize_type_name(const std::string &name) {
        const auto idx_space = name.find(' ');
        if(idx_space == std::string::npos) {
            return name;
        }

        return name.substr(idx_space + 1);
    }
}