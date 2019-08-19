grammar SwiftMtComponentFormat;

@lexer::header {
#include "../proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
}

@parser::header {
#include "../proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtComponentFormatLexer.h"
}

@parser::members {
private:
    std::vector<std::string> _errors;
    std::vector<ComponentFormat> _components;
    ComponentFormat _current_component;

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

    bool parse_format(std::vector<ComponentFormat>& components, std::vector<std::string>& errors) {
        _errors.clear();
        removeErrorListeners();
        addErrorListener(&_error_listener);

        _components.clear();

        field_format();

        if(!_errors.empty()) {
            errors.insert(errors.end(), _errors.begin(), _errors.end());
            return false;
        }

        components.insert(components.end(), _components.begin(), _components.end());
        return true;
    }

    void new_component() {
        _current_component = ComponentFormat{};
    }

    uint32_t to_unsigned_int(const std::string& text) {
        return std::stoul(text);
    }

public:

    static bool parse(const std::string& format, std::vector<ComponentFormat>& components, std::vector<std::string>& errors) {
        antlr4::ANTLRInputStream stream{format};
        SwiftMtComponentFormatLexer lexer{&stream};
        antlr4::CommonTokenStream token_stream{&lexer};

        SwiftMtComponentFormatParser parser{&token_stream};
        return parser.parse_format(components, errors);
    }
}

field_format           : (comp_format separator?)+ EOF;

comp_format            @init { new_component(); }
                       @after {
                            _components.emplace_back(_current_component);
                       }
                       : component | optional_component;

optional_component     @init { _current_component.set_is_optional(true); }
                       : LBRACKET cntt = opt_comp_cttnt { *_current_component.mutable_full_format() = $cntt.text; } RBRACKET;

opt_comp_cttnt         : sep_before = separator? { *_current_component.mutable_separator_before() = $sep_before.text; }
                         (length_restricted | sign | constant | comp_format)+
                         sep_after = separator? { *_current_component.mutable_separator_after() = $sep_after.text; }
                       ;

component              @after {
                            *_current_component.mutable_full_format() = $text;
                       }
                       : separator? (length_restricted | constant) separator?;

separator              : ANY+;

length_restricted      : length_restriction charset_type;

sign                   : 'N';

constant               : IDENTIFIER;

charset_type           : CHARSET_NUMERIC | CHARSET_ALPHA | CHARSET_ALPHA_NUMERIC | CHARSET_HEX | CHARSET_X | CHARSET_Y | CHARSET_Z | CHARSET_DECIMALS | CHARSET_BLANK;

length_restriction     : exact_restriction | range_restriction | line_restriction | max_restriction;

exact_restriction      @after {
                            _current_component.set_fixed_length(true);
                            const auto length = to_unsigned_int($text);
                            _current_component.set_min_length(length);
                            _current_component.set_max_length(length);
                       }
                       : max_two_digit '!';

range_restriction      : range_min = max_two_digit { _current_component.set_min_length(to_unsigned_int($range_min.text)); }
                         '-'
                         range_max = max_two_digit { _current_component.set_max_length(to_unsigned_int($range_max.text)); }
                       ;

line_restriction       : num_lines = max_two_digit { _current_component.set_line_count(to_unsigned_int($num_lines.text)); }
                         '*'
                         line_size = max_two_digit { _current_component.set_max_length(to_unsigned_int($line_size.text)); };

max_restriction        @after {
                           _current_component.set_min_length(0);
                           _current_component.set_max_length(to_unsigned_int($text));
                       }
                       : max_two_digit;

max_two_digit          : DIGIT DIGIT? ;

IDENTIFIER             : UPPERCASE_CHAR+;


CHARSET_NUMERIC        : 'n';
CHARSET_ALPHA          : 'a';
CHARSET_ALPHA_NUMERIC  : 'c';
CHARSET_HEX            : 'h';
CHARSET_X              : 'x';
CHARSET_Y              : 'y';
CHARSET_Z              : 'z';
CHARSET_DECIMALS       : 'd';
CHARSET_BLANK          : 'e';

DIGIT                  : '0'..'9';
UPPERCASE_CHAR         : 'A'..'Z';

LBRACKET               : '[';
RBRACKET               : ']';

ANY                    : . ;