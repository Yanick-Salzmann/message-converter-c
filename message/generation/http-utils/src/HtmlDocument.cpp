#include "http-utils/HtmlDocument.h"
#include "Document.h"
#include "Node.h"
#include "http-utils/HttpClient.h"

namespace message::utils::http {

    HtmlDocument::HtmlDocument(std::string html) : _document(std::make_unique<CDocument>()), _content(std::move(html)) {
        parse_document();
    }

    void HtmlDocument::parse_document() {
        _document->parse(_content);
    }

    HtmlDocument::HtmlDocument(const HtmlDocument &other) : _document(std::make_unique<CDocument>()), _content(other._content) {
        parse_document();
    }

    HtmlDocument &HtmlDocument::operator=(const HtmlDocument &other) {
        if(&other == this) {
            return *this;
        }

        _content = other._content;
        parse_document();

        return *this;
    }

    HtmlDocument HtmlDocument::from_url(const std::string &url) {
        return HtmlDocument{ HttpClient::download_string(url) };
    }

#pragma clang diagnostic push
#pragma ide diagnostic ignored "hicpp-use-equals-default"
// = default wont work because of _document being a forward declared std::unique_ptr
    HtmlDocument::~HtmlDocument() {

    }

    HtmlNode::~HtmlNode() {

    }
#pragma clang diagnostic pop

    HtmlDocument::HtmlDocument(HtmlDocument &&other) noexcept : _document(std::move(other._document)), _content(std::move(other._content)) {

    }

    std::list<HtmlNode> HtmlDocument::find_all(const std::string &query) {
        CSelection selection{_document->find(query)};
        const auto num_elements = selection.nodeNum();

        std::list<HtmlNode> nodes;

        for(auto i = std::size_t{0}; i < num_elements; ++i) {
            nodes.emplace_back(HtmlNode{selection.nodeAt(i)});
        }

        return nodes;
    }

    HtmlNode::HtmlNode(const CNode &node) : _node(std::make_unique<CNode>(node)) {

    }

    HtmlNode::HtmlNode(const HtmlNode &other) : _node(std::make_unique<CNode>(*other._node)) {

    }

    HtmlNode::HtmlNode(HtmlNode &&other) noexcept : _node(std::move(other._node)) {

    }

    HtmlNode &HtmlNode::operator=(const HtmlNode &other) {
        if(&other == this) {
            return *this;
        }

        _node = std::make_unique<CNode>(*other._node);
        return *this;
    }

    HtmlNode &HtmlNode::operator=(HtmlNode &&other) noexcept {
        _node = std::move(other._node);
        return *this;
    }

    std::string HtmlNode::own_text() const {
        return _node->ownText();
    }

    std::string HtmlNode::node_text() const {
        return _node->text();
    }

    std::string HtmlNode::attribute(const std::string &key) const {
        return _node->attribute(key);
    }
}