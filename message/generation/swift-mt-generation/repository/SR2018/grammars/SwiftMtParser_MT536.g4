grammar SwiftMtParser_MT536;

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
#include "SwiftMtParser_MT536Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT536Lexer tLexer;
    typedef SwiftMtParser_MT536Parser tParser;

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

seq_A                  : fld_16R_A fld_28E_A fld_13a_A? fld_20C_A fld_23G_A fld_98a_A? fld_69a_A fld_22F_A+ seq_A1* fld_95a_A* fld_97a_A fld_17B_A+ fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_95a_B* fld_97a_B? fld_94a_B* fld_17B_B? seq_B1* ;
seq_B1                 : fld_16R_B1 fld_35B_B1 fld_90a_B1? fld_94B_B1? fld_98a_B1? fld_93B_B1* seq_B1a+ ;
seq_B1a                : fld_16R_B1a ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
fld_13a_A              : fld_13a_A_A | fld_13a_A_J ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_69a_A              : fld_69a_A_A | fld_69a_A_B ;
fld_22F_A              : fld_22F_A_F ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_95a_A              : fld_95a_A_L | fld_95a_A_P | fld_95a_A_R ;
fld_97a_A              : fld_97a_A_A | fld_97a_A_B ;
fld_17B_A              : fld_17B_A_B ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B              : fld_95a_B_L | fld_95a_B_P | fld_95a_B_R ;
fld_97a_B              : fld_97a_B_A | fld_97a_B_B ;
fld_94a_B              : fld_94a_B_B | fld_94a_B_C | fld_94a_B_F | fld_94a_B_L ;
fld_17B_B              : fld_17B_B_B ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_35B_B1             : fld_35B_B1_B ;
fld_90a_B1             : fld_90a_B1_A | fld_90a_B1_B ;
fld_94B_B1             : fld_94B_B1_B ;
fld_98a_B1             : fld_98a_B1_A | fld_98a_B1_C ;
fld_93B_B1             : fld_93B_B1_B ;
fld_16R_B1a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_13a_A_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A_J            : START_OF_FIELD '13J:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_69a_A_A            : START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_A_B            : START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_A_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_A_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_A_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_17B_A_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_95a_B_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_B_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_B_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_F            : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_B_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_17B_B_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_35B_B1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_90a_B1_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B1_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_98a_B1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_93B_B1_B           : START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;



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