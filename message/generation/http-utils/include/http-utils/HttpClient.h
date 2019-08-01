#ifndef MESSAGE_CONVERTER_C_HTTPCLIENT_H
#define MESSAGE_CONVERTER_C_HTTPCLIENT_H

#include <curl/curl.h>
#include <memory>
#include <vector>
#include <cstdint>

namespace message::utils::http {
    class HttpClient {
        static std::size_t data_callback(char *ptr, std::size_t size, size_t nmemb, void *userdata);

        CURL* _curl;

        std::vector<uint8_t> _buffer;

    public:
        HttpClient();
        HttpClient(const HttpClient&) = delete;
        HttpClient(HttpClient&&) noexcept;

        ~HttpClient();

        void operator = (const HttpClient&) = delete;
        HttpClient& operator = (HttpClient&& other);

        bool execute_request(const std::string& url);

        [[nodiscard]] const std::vector<uint8_t>& data() const {
            return _buffer;
        }

        static std::string download_string(const std::string& url);
    };
}


#endif //MESSAGE_CONVERTER_C_HTTPCLIENT_H
