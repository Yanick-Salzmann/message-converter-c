grammar SwiftMtParser_MT696;

@lexer::header {
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
}

@parser::header {
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT696Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT696Lexer tLexer;
    typedef SwiftMtParser_MT696Parser tParser;

private:
    std::vector<std::string> _errors;

public:
    [[nodiscard]] const std::vector<std::string>& errors() const { return _errors; }

private:
    class DefaultErrorListener : public antlr4::BaseErrorListener {
    private:
        std::vector<std::string>& _errors;

    public:
        explicit DefaultErrorListener(std::vector<std::string>& errors) : _errors(errors) { }

        void syntaxError(Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, size_t charPositionInLine,
                               const std::string &msg, std::exception_ptr e) override {
            _errors.push_back(msg);
        }
    };

    DefaultErrorListener _error_listener { _errors };

public:
    class Helper : public ISwiftMtParser {
    public:
        bool parse_message(const std::string& message, std::vector<std::string>& errors, SwiftMtMessage& out_message) override {
            antlr4::ANTLRInputStream stream{message};
            tLexer lexer{&stream};
            antlr4::CommonTokenStream token_stream{&lexer};

            tParser parser{&token_stream};
            return parser.process(errors, out_message);
        }
    };

private:
    SwiftMtMessage _message_builder{};

    bool process(std::vector<std::string>& errors, SwiftMtMessage& out_message) {
        _errors.clear();
        removeErrorListeners();
        addErrorListener(&_error_listener);

        _message_builder = SwiftMtMessage{};

        message();
        if(!_errors.empty()) {
            errors.insert(errors.end(), _errors.begin(), _errors.end());
            return false;
        }

        out_message = _message_builder;
        return true;
    }
public:

    [[nodiscard]] SwiftMtMessage parsed_message() const {
        return _message_builder;
    }
}

message                : bh ah uh? mt tr? EOF;
bh                     : TAG_BH bh_content RBRACE ;
bh_content             : ~(RBRACE)+ ;

ah                     : TAG_AH ah_content RBRACE ;
ah_content             : ~( RBRACE )+ ;

uh                     : TAG_UH sys_block RBRACE ;

tr                     : TAG_TR sys_block RBRACE ;

sys_block              : sys_element+ ;
sys_element            : LBRACE sys_element_key COLON sys_element_content RBRACE ;
sys_element_key        : ~( COLON | RBRACE )+ ;
sys_element_content    : ~( RBRACE )+ ;

mt                     returns [message::definition::swift::mt::MessageText elem] @after { _message_builder.mutable_msg_text()->MergeFrom($elem); }
                       : TAG_MT  MT_END;







TAG_BH                 : '{1:' ;
TAG_AH                 : '{2:' ;
TAG_UH                 : '{3:' ;
TAG_MT                 : '{4:' ;
TAG_TR                 : '{5:' ;

MT_END                 : '-}';

LBRACE                 : '{';
RBRACE                 : '}' ;

COLON                  : ':';

START_OF_FIELD         : '\r'? '\n:' ;

ANY                    : . ;