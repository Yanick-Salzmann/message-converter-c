grammar SwiftMtParser_MT586;

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
#include "SwiftMtParser_MT586Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT586Lexer tLexer;
    typedef SwiftMtParser_MT586Parser tParser;

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

mt                     : TAG_MT seq_A seq_B* seq_C*  MT_END;

seq_A                  : fld_16R_A fld_28E_A fld_13a_A? fld_20C_A fld_23G_A fld_98a_A+ fld_22F_A* seq_A1* fld_95a_A* fld_97a_A fld_17B_A fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B seq_B1* fld_25D_B? fld_94a_B* fld_98a_B+ fld_90a_B? fld_99A_B? fld_35B_B seq_B2? fld_22a_B+ seq_B3 seq_B4? seq_B5 fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_13a_B1? fld_20C_B1 fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_94B_B2? fld_22F_B2* fld_12a_B2* fld_11A_B2? fld_98A_B2* fld_92A_B2* fld_13a_B2* fld_17B_B2* fld_90a_B2* fld_36B_B2* fld_35B_B2* fld_70E_B2? fld_16S_B2 ;
seq_B3                 : fld_16R_B3 fld_36B_B3 fld_70D_B3? fld_97a_B3? fld_94a_B3* seq_B3a* fld_16S_B3 ;
seq_B3a                : fld_16R_B3a fld_13B_B3a? fld_36B_B3a? fld_98a_B3a? fld_90a_B3a? fld_22F_B3a? fld_16S_B3a ;
seq_B4                 : fld_16R_B4 fld_98a_B4? fld_22F_B4* fld_20C_B4* fld_92a_B4* fld_99B_B4? fld_19A_B4* fld_70C_B4? fld_16S_B4 ;
seq_B5                 : fld_16R_B5 fld_22F_B5+ seq_B5a+ seq_B5b* fld_16S_B5 ;
seq_B5a                : fld_16R_B5a fld_95a_B5a+ fld_97a_B5a? fld_98a_B5a? fld_20C_B5a? fld_70a_B5a* fld_16S_B5a ;
seq_B5b                : fld_16R_B5b fld_19A_B5b+ fld_98a_B5b? fld_92B_B5b? fld_16S_B5b ;
seq_C                  : fld_16R_C fld_95a_C* fld_16S_C ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
fld_13a_A              : fld_13a_A_A | fld_13a_A_J ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22F_A              : fld_22F_A_F ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_95a_A              : fld_95a_A_L | fld_95a_A_P | fld_95a_A_Q | fld_95a_A_R ;
fld_97a_A              : fld_97a_A_A | fld_97a_A_B ;
fld_17B_A              : fld_17B_A_B ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_B1             : fld_13a_B1_A | fld_13a_B1_B ;
fld_20C_B1             : fld_20C_B1_C ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_25D_B              : fld_25D_B_D ;
fld_94a_B              : fld_94a_B_B | fld_94a_B_H | fld_94a_B_L ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_B | fld_98a_B_C ;
fld_90a_B              : fld_90a_B_A | fld_90a_B_B ;
fld_99A_B              : fld_99A_B_A ;
fld_35B_B              : fld_35B_B_B ;
fld_16R_B2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_94B_B2             : fld_94B_B2_B ;
fld_22F_B2             : fld_22F_B2_F ;
fld_12a_B2             : fld_12a_B2_A | fld_12a_B2_B | fld_12a_B2_C ;
fld_11A_B2             : fld_11A_B2_A ;
fld_98A_B2             : fld_98A_B2_A ;
fld_92A_B2             : fld_92A_B2_A ;
fld_13a_B2             : fld_13a_B2_A | fld_13a_B2_B ;
fld_17B_B2             : fld_17B_B2_B ;
fld_90a_B2             : fld_90a_B2_A | fld_90a_B2_B ;
fld_36B_B2             : fld_36B_B2_B ;
fld_35B_B2             : fld_35B_B2_B ;
fld_70E_B2             : fld_70E_B2_E ;
fld_16S_B2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_22a_B              : fld_22a_B_F | fld_22a_B_H ;
fld_16R_B3             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_36B_B3             : fld_36B_B3_B ;
fld_70D_B3             : fld_70D_B3_D ;
fld_97a_B3             : fld_97a_B3_A | fld_97a_B3_E ;
fld_94a_B3             : fld_94a_B3_B | fld_94a_B3_C | fld_94a_B3_F | fld_94a_B3_L ;
fld_16R_B3a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13B_B3a            : fld_13B_B3a_B ;
fld_36B_B3a            : fld_36B_B3a_B ;
fld_98a_B3a            : fld_98a_B3a_A | fld_98a_B3a_C | fld_98a_B3a_E ;
fld_90a_B3a            : fld_90a_B3a_A | fld_90a_B3a_B ;
fld_22F_B3a            : fld_22F_B3a_F ;
fld_16S_B3a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B3             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B4             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_B4             : fld_98a_B4_A | fld_98a_B4_B | fld_98a_B4_C ;
fld_22F_B4             : fld_22F_B4_F ;
fld_20C_B4             : fld_20C_B4_C ;
fld_92a_B4             : fld_92a_B4_A | fld_92a_B4_C ;
fld_99B_B4             : fld_99B_B4_B ;
fld_19A_B4             : fld_19A_B4_A ;
fld_70C_B4             : fld_70C_B4_C ;
fld_16S_B4             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B5             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_B5             : fld_22F_B5_F ;
fld_16R_B5a            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B5a            : fld_95a_B5a_C | fld_95a_B5a_L | fld_95a_B5a_P | fld_95a_B5a_Q | fld_95a_B5a_R | fld_95a_B5a_S ;
fld_97a_B5a            : fld_97a_B5a_A | fld_97a_B5a_B ;
fld_98a_B5a            : fld_98a_B5a_A | fld_98a_B5a_C ;
fld_20C_B5a            : fld_20C_B5a_C ;
fld_70a_B5a            : fld_70a_B5a_C | fld_70a_B5a_D | fld_70a_B5a_E ;
fld_16S_B5a            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B5b            : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_19A_B5b            : fld_19A_B5b_A ;
fld_98a_B5b            : fld_98a_B5b_A | fld_98a_B5b_C ;
fld_92B_B5b            : fld_92B_B5b_B ;
fld_16S_B5b            : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B5             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C              : fld_95a_C_C | fld_95a_C_L | fld_95a_C_P | fld_95a_C_Q | fld_95a_C_R | fld_95a_C_S ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_13a_A_A            : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A_J            : START_OF_FIELD '13J:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_A_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_A_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_A_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_A_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_A_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_17B_A_B            : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_13a_B1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_B1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_25D_B_D            : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_H            : START_OF_FIELD '94H:' ~(START_OF_FIELD)+ ;
fld_94a_B_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_90a_B_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_99A_B_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B2_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B2_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B2_A           : START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B2_B           : START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_B2_C           : START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B2_A           : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92A_B2_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_13a_B2_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B2_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_B2_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_90a_B2_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B2_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_36B_B2_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_35B_B2_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_70E_B2_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22a_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_36B_B3_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_70D_B3_D           : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_97a_B3_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B3_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_94a_B3_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B3_C           : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B3_F           : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_B3_L           : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_13B_B3a_B          : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_36B_B3a_B          : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_98a_B3a_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B3a_C          : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_B3a_E          : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_90a_B3a_A          : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B3a_B          : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_22F_B3a_F          : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98a_B4_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B4_B           : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_B4_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_22F_B4_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_20C_B4_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_92a_B4_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_B4_C           : START_OF_FIELD '92C:' ~(START_OF_FIELD)+ ;

fld_99B_B4_B           : START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_19A_B4_A           : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_70C_B4_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_22F_B5_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_95a_B5a_C          : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_B5a_L          : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_B5a_P          : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B5a_Q          : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B5a_R          : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_B5a_S          : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_B5a_A          : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B5a_B          : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_98a_B5a_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B5a_C          : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_B5a_C          : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_B5a_C          : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_B5a_D          : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;
fld_70a_B5a_E          : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_19A_B5b_A          : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_98a_B5b_A          : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B5b_C          : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_92B_B5b_B          : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_95a_C_C            : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_C_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C_S            : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;



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