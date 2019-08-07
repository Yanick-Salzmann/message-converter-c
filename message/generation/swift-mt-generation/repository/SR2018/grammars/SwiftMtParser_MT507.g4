grammar SwiftMtParser_MT507;

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
#include "SwiftMtParser_MT507Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT507Lexer tLexer;
    typedef SwiftMtParser_MT507Parser tParser;

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
        bool parse_message(const std::string& message, std::vector<std::string>& errors) override {
            antlr4::ANTLRInputStream stream{message};
            tLexer lexer{&stream};
            antlr4::CommonTokenStream token_stream{&lexer};

            tParser parser{&token_stream};
            return parser.process(errors);
        }
    };

private:
    bool process(std::vector<std::string>& errors) {
        _errors.clear();
        removeErrorListeners();
        addErrorListener(&_error_listener);

        message();
        if(!_errors.empty()) {
            errors.insert(errors.end(), _errors.begin(), _errors.end());
            return false;
        }

        return true;
    }
public:
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

mt                     : TAG_MT seq_A seq_B*  MT_END;

seq_A                  : fld_16R_A fld_20C_A+ fld_23G_A seq_A1+ fld_98a_A? fld_22a_A fld_95a_A+ fld_25D_A fld_24B_A? fld_70a_A* seq_A2+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_98A_A1? fld_13B_A1? fld_70C_A1? fld_16S_A1 ;
seq_A2                 : fld_16R_A2 fld_13a_A2? fld_20C_A2 fld_16S_A2 ;
seq_B                  : fld_16R_B fld_20C_B fld_22H_B fld_25D_B fld_24B_B? fld_70D_B? seq_B1? ;
seq_B1                 : fld_16R_B1 seq_B1a? ;
seq_B1a                : fld_16R_B1a fld_22a_B1a+ ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_A1             : fld_22F_A1_F ;
fld_98A_A1             : fld_98A_A1_A ;
fld_13B_A1             : fld_13B_A1_B ;
fld_70C_A1             : fld_70C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22a_A              : fld_22a_A_F | fld_22a_A_H ;
fld_95a_A              : fld_95a_A_P | fld_95a_A_Q | fld_95a_A_R ;
fld_25D_A              : fld_25D_A_D ;
fld_24B_A              : fld_24B_A_B ;
fld_70a_A              : fld_70a_A_C | fld_70a_A_D ;
fld_16R_A2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A2             : fld_13a_A2_A | fld_13a_A2_B ;
fld_20C_A2             : fld_20C_A2_C ;
fld_16S_A2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_B              : fld_20C_B_C ;
fld_22H_B              : fld_22H_B_H ;
fld_25D_B              : fld_25D_B_D ;
fld_24B_B              : fld_24B_B_B ;
fld_70D_B              : fld_70D_B_D ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_16R_B1a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22a_B1a            : fld_22a_B1a_F | fld_22a_B1a_H ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98A_A1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_13B_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_70C_A1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22a_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_A_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_25D_A_D            : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_24B_A_B            : START_OF_FIELD '24B:' ~(START_OF_FIELD)+ ;

fld_70a_A_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_A_D            : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_13a_A2_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A2_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A2_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_20C_B_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22H_B_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_25D_B_D            : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_24B_B_B            : START_OF_FIELD '24B:' ~(START_OF_FIELD)+ ;

fld_70D_B_D            : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_22a_B1a_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B1a_H          : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;



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