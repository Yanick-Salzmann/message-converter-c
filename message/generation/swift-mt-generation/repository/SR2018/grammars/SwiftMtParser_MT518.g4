grammar SwiftMtParser_MT518;

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
#include "SwiftMtParser_MT518Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT518Lexer tLexer;
    typedef SwiftMtParser_MT518Parser tParser;

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

mt                     : TAG_MT seq_A seq_B seq_C? seq_D* seq_E?  MT_END;

seq_A                  : fld_16R_A fld_20C_A fld_23G_A fld_98a_A? fld_22F_A seq_A1* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_13a_A1? fld_20C_A1 fld_16S_A1 ;
seq_B                  : fld_16R_B fld_98a_B+ fld_90a_B fld_92A_B* fld_99A_B* fld_94a_B* fld_19A_B? fld_22a_B+ fld_11A_B? seq_B1+ fld_36B_B fld_35B_B seq_B2? fld_13B_B* fld_70E_B* fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_95a_B1+ fld_97a_B1* fld_98a_B1? fld_20C_B1? fld_70a_B1* fld_22F_B1* fld_16S_B1 ;
seq_B2                 : fld_16R_B2 fld_94B_B2? fld_22F_B2* fld_12a_B2* fld_11A_B2? fld_98A_B2* fld_92A_B2* fld_13a_B2* fld_17B_B2* fld_90a_B2* fld_36B_B2* fld_35B_B2* fld_70E_B2? fld_16S_B2 ;
seq_C                  : fld_16R_C fld_22F_C+ fld_11A_C? seq_C1* seq_C2* seq_C3* fld_16S_C ;
seq_C1                 : fld_16R_C1 fld_95a_C1+ fld_97a_C1? fld_98a_C1? fld_20C_C1? fld_70a_C1* fld_16S_C1 ;
seq_C2                 : fld_16R_C2 fld_95a_C2+ fld_97a_C2* fld_98a_C2? fld_20C_C2? fld_70C_C2? fld_16S_C2 ;
seq_C3                 : fld_16R_C3 fld_17B_C3* fld_19A_C3+ fld_98a_C3? fld_92B_C3? fld_16S_C3 ;
seq_D                  : fld_16R_D fld_95a_D+ fld_97a_D* fld_70C_D? fld_20C_D? fld_16S_D ;
seq_E                  : fld_16R_E fld_98a_E* fld_22F_E* fld_20C_E* fld_92a_E* fld_99B_E* fld_19A_E* fld_70C_E? fld_16S_E ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_A              : fld_20C_A_C ;
fld_23G_A              : fld_23G_A_G ;
fld_98a_A              : fld_98a_A_A | fld_98a_A_C | fld_98a_A_E ;
fld_22F_A              : fld_22F_A_F ;
fld_16R_A1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A1             : fld_13a_A1_A | fld_13a_A1_B ;
fld_20C_A1             : fld_20C_A1_C ;
fld_16S_A1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_B | fld_98a_B_C | fld_98a_B_E ;
fld_90a_B              : fld_90a_B_A | fld_90a_B_B ;
fld_92A_B              : fld_92A_B_A ;
fld_99A_B              : fld_99A_B_A ;
fld_94a_B              : fld_94a_B_B | fld_94a_B_C | fld_94a_B_F | fld_94a_B_L ;
fld_19A_B              : fld_19A_B_A ;
fld_22a_B              : fld_22a_B_F | fld_22a_B_H ;
fld_11A_B              : fld_11A_B_A ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B1             : fld_95a_B1_L | fld_95a_B1_P | fld_95a_B1_Q | fld_95a_B1_R | fld_95a_B1_S ;
fld_97a_B1             : fld_97a_B1_A | fld_97a_B1_B | fld_97a_B1_E ;
fld_98a_B1             : fld_98a_B1_A | fld_98a_B1_C ;
fld_20C_B1             : fld_20C_B1_C ;
fld_70a_B1             : fld_70a_B1_C | fld_70a_B1_E ;
fld_22F_B1             : fld_22F_B1_F ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_36B_B              : fld_36B_B_B ;
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
fld_13B_B              : fld_13B_B_B ;
fld_70E_B              : fld_70E_B_E ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22F_C              : fld_22F_C_F ;
fld_11A_C              : fld_11A_C_A ;
fld_16R_C1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C1             : fld_95a_C1_C | fld_95a_C1_L | fld_95a_C1_P | fld_95a_C1_Q | fld_95a_C1_R | fld_95a_C1_S ;
fld_97a_C1             : fld_97a_C1_A | fld_97a_C1_B ;
fld_98a_C1             : fld_98a_C1_A | fld_98a_C1_C ;
fld_20C_C1             : fld_20C_C1_C ;
fld_70a_C1             : fld_70a_C1_C | fld_70a_C1_D ;
fld_16S_C1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_C2             : fld_95a_C2_L | fld_95a_C2_P | fld_95a_C2_Q | fld_95a_C2_R | fld_95a_C2_S ;
fld_97a_C2             : fld_97a_C2_A | fld_97a_C2_E ;
fld_98a_C2             : fld_98a_C2_A | fld_98a_C2_C ;
fld_20C_C2             : fld_20C_C2_C ;
fld_70C_C2             : fld_70C_C2_C ;
fld_16S_C2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C3             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_17B_C3             : fld_17B_C3_B ;
fld_19A_C3             : fld_19A_C3_A ;
fld_98a_C3             : fld_98a_C3_A | fld_98a_C3_C ;
fld_92B_C3             : fld_92B_C3_B ;
fld_16S_C3             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_D              : fld_95a_D_L | fld_95a_D_P | fld_95a_D_Q | fld_95a_D_R | fld_95a_D_S ;
fld_97a_D              : fld_97a_D_A | fld_97a_D_B | fld_97a_D_E ;
fld_70C_D              : fld_70C_D_C ;
fld_20C_D              : fld_20C_D_C ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98a_E              : fld_98a_E_A | fld_98a_E_B | fld_98a_E_C ;
fld_22F_E              : fld_22F_E_F ;
fld_20C_E              : fld_20C_E_C ;
fld_92a_E              : fld_92a_E_A | fld_92a_E_C ;
fld_99B_E              : fld_99B_E_B ;
fld_19A_E              : fld_19A_E_A ;
fld_70C_E              : fld_70C_E_C ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_20C_A_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            : START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_B_E            : START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_90a_B_A            : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B_B            : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_92A_B_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_99A_B_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_C            : START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_F            : START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_B_L            : START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_19A_B_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_22a_B_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_11A_B_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_95a_B1_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_B1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_B1_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_B1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B1_B           : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;
fld_97a_B1_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_98a_B1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_B1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_B1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_B1_E           : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_36B_B_B            : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

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

fld_13B_B_B            : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_70E_B_E            : START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_11A_C_A            : START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_95a_C1_C           : START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_C1_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C1_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C1_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C1_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C1_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_C1_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C1_B           : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_98a_C1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C1_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_C1_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_C1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_C1_D           : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_95a_C2_L           : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C2_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C2_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C2_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C2_S           : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_C2_A           : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C2_E           : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_98a_C2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C2_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_C2_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70C_C2_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_17B_C3_B           : START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_19A_C3_A           : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_98a_C3_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C3_C           : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_92B_C3_B           : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_95a_D_L            : START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_D_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D_S            : START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_D_A            : START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D_B            : START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;
fld_97a_D_E            : START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_70C_D_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_20C_D_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_98a_E_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E_B            : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_22F_E_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_20C_E_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_92a_E_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E_C            : START_OF_FIELD '92C:' ~(START_OF_FIELD)+ ;

fld_99B_E_B            : START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_19A_E_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_70C_E_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;



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