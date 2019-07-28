#ifndef MESSAGE_CONVERTER_C_LOG_H
#define MESSAGE_CONVERTER_C_LOG_H


#include <memory>
#include <spdlog/spdlog.h>

namespace message::utils {
    class Logger {
        std::shared_ptr<spdlog::logger> _logger;

        void init_logger (const std::string& name);
        std::string static sanitize_type_name(const std::string& name);

    public:
        template<typename T>
        struct type_tag {

        };

        template<typename T>
        explicit Logger(type_tag<T>&& tag) {
            init_logger (sanitize_type_name(typeid(T).name()));
        }

        explicit Logger(const std::string& name) {
            init_logger (name);
        }

        const std::shared_ptr<spdlog::logger>& operator->() const {
            return _logger;
        }
    };
}

#define LOGGER static message::utils::Logger log
#define LOGGER_IMPL(T) message::utils::Logger T::log = message::utils::Logger{message::utils::Logger::type_tag<T>()}

#endif //MESSAGE_CONVERTER_C_LOG_H
