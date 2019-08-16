#include "http-utils/HttpClient.h"
#include "utils/String.h"

namespace message::utils::http {

    HttpClient::HttpClient() {
        _curl = curl_easy_init();
    }

    HttpClient::HttpClient(HttpClient &&other) noexcept : _curl(other._curl) {
        other._curl = nullptr;
    }

    HttpClient::~HttpClient() {
        if (_curl != nullptr) {
            curl_easy_cleanup(_curl);
        }
    }

    HttpClient &HttpClient::operator=(HttpClient &&other) {
        _curl = other._curl;
        other._curl = nullptr;
        return *this;
    }

    bool HttpClient::execute_request(const std::string &url) {
        curl_easy_setopt(_curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(_curl, CURLOPT_WRITEFUNCTION, &HttpClient::data_callback);
        curl_easy_setopt(_curl, CURLOPT_WRITEDATA, this);
        curl_easy_setopt(_curl, CURLOPT_SSL_VERIFYHOST, 0);
        curl_easy_setopt(_curl, CURLOPT_SSL_VERIFYPEER, 0);
        curl_easy_setopt(_curl, CURLOPT_FOLLOWLOCATION, 1);
        curl_easy_setopt(_curl, CURLOPT_COOKIEFILE, "");

        const auto rc = curl_easy_perform(_curl);
        return rc == CURLE_OK;
    }

    std::size_t HttpClient::data_callback(char *ptr, std::size_t size, size_t nmemb, void *userdata) {
        auto client = reinterpret_cast<HttpClient *>(userdata);
        if (client == nullptr) {
            return 0;
        }

        client->_buffer.insert(client->_buffer.end(), (uint8_t*) ptr, ((uint8_t*) ptr) + (size * nmemb));
        return size * nmemb;
    }

    std::string HttpClient::download_string(const std::string &url) {
        HttpClient client{};
        if(!client.execute_request(url)) {
            throw std::runtime_error("Error executing request");
        }

        return to_string_utf8(client.data());
    }
}