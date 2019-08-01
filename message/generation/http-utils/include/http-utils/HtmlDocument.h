#ifndef MESSAGE_CONVERTER_C_HTMLDOCUMENT_H
#define MESSAGE_CONVERTER_C_HTMLDOCUMENT_H

#include <string>
#include <memory>
#include <list>

class CDocument;
class CNode;

namespace message::utils::http {
    class HtmlNode {
        friend class HtmlDocument;

        std::unique_ptr<CNode> _node;

        explicit HtmlNode(const CNode& node);

    public:
        HtmlNode(const HtmlNode& other);
        HtmlNode(HtmlNode&& other) noexcept;

        ~HtmlNode();

        HtmlNode& operator = (const HtmlNode& other);
        HtmlNode& operator = (HtmlNode&& other) noexcept;

        [[nodiscard]] std::list<HtmlNode> find_all(const std::string& query) const;

        [[nodiscard]] std::string own_text() const;
        [[nodiscard]] std::string node_text() const;

        [[nodiscard]] std::string attribute(const std::string& key) const;
    };

    class HtmlDocument {
        std::string _content;
        std::unique_ptr<CDocument> _document;

        void parse_document();

    public:
        explicit HtmlDocument(std::string html);
        HtmlDocument(const HtmlDocument& other);
        HtmlDocument(HtmlDocument&& other) noexcept;

        ~HtmlDocument();

        HtmlDocument& operator = (const HtmlDocument& other);
        HtmlDocument& operator = (HtmlDocument&& other) = default;

        std::list<HtmlNode> find_all(const std::string& query);

        [[nodiscard]] std::string content() const {
            return _content;
        }

        static HtmlDocument from_url(const std::string& url);
    };
}

#endif //MESSAGE_CONVERTER_C_HTMLDOCUMENT_H
