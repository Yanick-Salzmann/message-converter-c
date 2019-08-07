grammar SwiftMtParser_MT506;

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
#include "SwiftMtParser_MT506Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT506Lexer tLexer;
    typedef SwiftMtParser_MT506Parser tParser;

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

mt                     : TAG_MT seq_A seq_B seq_C* seq_D* seq_E?  MT_END;

seq_A                  : fld_16R_A fld_28E_A fld_20C_A+ fld_23G_A seq_A1+ fld_98a_A? fld_22a_A fld_95a_A+ fld_70C_A? seq_A2* fld_16S_A ;
seq_A1                 : fld_16R_A1 fld_22F_A1? fld_98A_A1? fld_13B_A1? fld_70C_A1? fld_16S_A1 ;
seq_A2                 : fld_16R_A2 fld_13a_A2? fld_20C_A2 fld_16S_A2 ;
seq_B                  : fld_16R_B fld_95a_B fld_19B_B+ fld_98a_B+ seq_B1? fld_16S_B ;
seq_B1                 : fld_16R_B1 fld_19B_B1* fld_16S_B1 ;
seq_C                  : fld_16R_C fld_20C_C* fld_22a_C fld_98A_C? fld_95a_C* fld_19A_C+ fld_99A_C? fld_22F_C? fld_92a_C+ fld_70D_C? seq_C1? seq_C2? seq_C3? fld_16S_C ;
seq_C1                 : fld_16R_C1 fld_19B_C1 fld_35B_C1 fld_36B_C1 fld_92A_C1 fld_16S_C1 ;
seq_C2                 : fld_16R_C2 fld_98A_C2+ fld_19B_C2* fld_70C_C2? fld_12B_C2? fld_90a_C2? fld_16S_C2 ;
seq_C3                 : fld_16R_C3 fld_98A_C3+ fld_19B_C3+ fld_92A_C3 fld_16S_C3 ;
seq_D                  : fld_16R_D fld_20C_D fld_22H_D fld_25D_D? fld_19B_D+ fld_99A_D? fld_22F_D? fld_92a_D+ seq_D1? seq_D2? seq_D3? fld_16S_D ;
seq_D1                 : fld_16R_D1 fld_19B_D1 fld_35B_D1 fld_36B_D1 fld_92A_D1 fld_98A_D1? fld_94B_D1* fld_70C_D1? fld_16S_D1 ;
seq_D2                 : fld_16R_D2 fld_19B_D2 fld_22H_D2 fld_98A_D2? fld_16S_D2 ;
seq_D3                 : fld_16R_D3 fld_22H_D3 fld_98a_D3+ fld_95a_D3 fld_19B_D3 fld_16S_D3 ;
seq_E                  : fld_16R_E fld_95a_E* fld_19A_E* fld_16S_E ;


fld_16R_A              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_28E_A              : fld_28E_A_E ;
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
fld_70C_A              : fld_70C_A_C ;
fld_16R_A2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_13a_A2             : fld_13a_A2_A | fld_13a_A2_B ;
fld_20C_A2             : fld_20C_A2_C ;
fld_16S_A2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_A              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_B              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_B              : fld_95a_B_P | fld_95a_B_Q | fld_95a_B_R ;
fld_19B_B              : fld_19B_B_B ;
fld_98a_B              : fld_98a_B_A | fld_98a_B_C ;
fld_16R_B1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_19B_B1             : fld_19B_B1_B ;
fld_16S_B1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_B              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_C              : fld_20C_C_C ;
fld_22a_C              : fld_22a_C_F | fld_22a_C_H ;
fld_98A_C              : fld_98A_C_A ;
fld_95a_C              : fld_95a_C_P | fld_95a_C_Q | fld_95a_C_R ;
fld_19A_C              : fld_19A_C_A ;
fld_99A_C              : fld_99A_C_A ;
fld_22F_C              : fld_22F_C_F ;
fld_92a_C              : fld_92a_C_A | fld_92a_C_B ;
fld_70D_C              : fld_70D_C_D ;
fld_16R_C1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_19B_C1             : fld_19B_C1_B ;
fld_35B_C1             : fld_35B_C1_B ;
fld_36B_C1             : fld_36B_C1_B ;
fld_92A_C1             : fld_92A_C1_A ;
fld_16S_C1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98A_C2             : fld_98A_C2_A ;
fld_19B_C2             : fld_19B_C2_B ;
fld_70C_C2             : fld_70C_C2_C ;
fld_12B_C2             : fld_12B_C2_B ;
fld_90a_C2             : fld_90a_C2_A | fld_90a_C2_B ;
fld_16S_C2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_C3             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_98A_C3             : fld_98A_C3_A ;
fld_19B_C3             : fld_19B_C3_B ;
fld_92A_C3             : fld_92A_C3_A ;
fld_16S_C3             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_C              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_20C_D              : fld_20C_D_C ;
fld_22H_D              : fld_22H_D_H ;
fld_25D_D              : fld_25D_D_D ;
fld_19B_D              : fld_19B_D_B ;
fld_99A_D              : fld_99A_D_A ;
fld_22F_D              : fld_22F_D_F ;
fld_92a_D              : fld_92a_D_A | fld_92a_D_B ;
fld_16R_D1             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_19B_D1             : fld_19B_D1_B ;
fld_35B_D1             : fld_35B_D1_B ;
fld_36B_D1             : fld_36B_D1_B ;
fld_92A_D1             : fld_92A_D1_A ;
fld_98A_D1             : fld_98A_D1_A ;
fld_94B_D1             : fld_94B_D1_B ;
fld_70C_D1             : fld_70C_D1_C ;
fld_16S_D1             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D2             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_19B_D2             : fld_19B_D2_B ;
fld_22H_D2             : fld_22H_D2_H ;
fld_98A_D2             : fld_98A_D2_A ;
fld_16S_D2             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_D3             : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_22H_D3             : fld_22H_D3_H ;
fld_98a_D3             : fld_98a_D3_A | fld_98a_D3_B ;
fld_95a_D3             : fld_95a_D3_P | fld_95a_D3_Q | fld_95a_D3_R ;
fld_19B_D3             : fld_19B_D3_B ;
fld_16S_D3             : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16S_D              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;
fld_16R_E              : START_OF_FIELD '16R:' ~(START_OF_FIELD)+ ;
fld_95a_E              : fld_95a_E_P | fld_95a_E_Q | fld_95a_E_R ;
fld_19A_E              : fld_19A_E_A ;
fld_16S_E              : START_OF_FIELD '16S:' ~(START_OF_FIELD)+ ;


fld_28E_A_E            : START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

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

fld_70C_A_C            : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_13a_A2_A           : START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A2_B           : START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A2_C           : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_B_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_19B_B_B            : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            : START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_19B_B1_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_20C_C_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22a_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_C_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_98A_C_A            : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_95a_C_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_19A_C_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_99A_C_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_92a_C_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_C_B            : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_70D_C_D            : START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_19B_C1_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_35B_C1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36B_C1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_92A_C1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_98A_C2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_19B_C2_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_70C_C2_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_12B_C2_B           : START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;

fld_90a_C2_A           : START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_C2_B           : START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_98A_C3_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_19B_C3_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_92A_C3_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_20C_D_C            : START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22H_D_H            : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_25D_D_D            : START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_19B_D_B            : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_99A_D_A            : START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_22F_D_F            : START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_92a_D_A            : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D_B            : START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_19B_D1_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_35B_D1_B           : START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36B_D1_B           : START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_92A_D1_A           : START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_98A_D1_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_94B_D1_B           : START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_70C_D1_C           : START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_19B_D2_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_22H_D2_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_98A_D2_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_22H_D3_H           : START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_98a_D3_A           : START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D3_B           : START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;

fld_95a_D3_P           : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D3_Q           : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D3_R           : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_19B_D3_B           : START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_95a_E_P            : START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_E_Q            : START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_E_R            : START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_19A_E_A            : START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;



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