grammar SwiftMtParser_MT567;

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
#include "SwiftMtParser_MT567Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT567Lexer tLexer;
    typedef SwiftMtParser_MT567Parser tParser;

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
                       : TAG_MT seq_A seq_B? seq_C?  MT_END;

seq_A                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A"); } :
                       fld_16R_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A.fld); }
                       fld_20C_A+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A.fld); }
                       fld_23G_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_23G_A.fld); }
                       fld_22F_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_A.fld); }
                       fld_98a_A? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_A.fld); }
                       seq_A1+ { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_A1.elem); }
                       seq_A2+ { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_A2.elem); }
                       fld_16S_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A.fld); }
                       ;

seq_A1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A1"); } :
                       fld_16R_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A1.fld); }
                       fld_13a_A1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13a_A1.fld); }
                       fld_20C_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A1.fld); }
                       fld_16S_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A1.fld); }
                       ;

seq_A2                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A2"); } :
                       fld_16R_A2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A2.fld); }
                       fld_25D_A2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_25D_A2.fld); }
                       seq_A2a* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_A2a.elem); }
                       fld_16S_A2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A2.fld); }
                       ;

seq_A2a                returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A2a"); } :
                       fld_16R_A2a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A2a.fld); }
                       fld_24B_A2a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_24B_A2a.fld); }
                       fld_70D_A2a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70D_A2a.fld); }
                       fld_16S_A2a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A2a.fld); }
                       ;

seq_B                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B"); } :
                       fld_16R_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B.fld); }
                       fld_13A_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13A_B.fld); }
                       fld_22a_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_B.fld); }
                       fld_95a_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_B.fld); }
                       fld_97a_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_B.fld); }
                       fld_94a_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94a_B.fld); }
                       fld_35B_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_B.fld); }
                       fld_36B_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_B.fld); }
                       fld_19B_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19B_B.fld); }
                       fld_93B_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_93B_B.fld); }
                       fld_16S_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B.fld); }
                       ;

seq_C                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C"); } :
                       fld_16R_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C.fld); }
                       fld_70E_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70E_C.fld); }
                       fld_95a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_C.fld); }
                       fld_16S_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_C.fld); }
                       ;



fld_16R_A              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_20C_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_A_C { $fld.MergeFrom($fld_20C_A_C.fld); }
                       ;

fld_23G_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_23G_A_G { $fld.MergeFrom($fld_23G_A_G.fld); }
                       ;

fld_22F_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_A_F { $fld.MergeFrom($fld_22F_A_F.fld); }
                       ;

fld_98a_A              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_A_A { $fld.MergeFrom($fld_98a_A_A.fld); }
                       | fld_98a_A_C { $fld.MergeFrom($fld_98a_A_C.fld); }
                       ;

fld_16R_A1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_13a_A1             returns [message::definition::swift::mt::Field fld]  :
                         fld_13a_A1_A { $fld.MergeFrom($fld_13a_A1_A.fld); }
                       | fld_13a_A1_B { $fld.MergeFrom($fld_13a_A1_B.fld); }
                       ;

fld_20C_A1             returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_A1_C { $fld.MergeFrom($fld_20C_A1_C.fld); }
                       ;

fld_16S_A1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_A2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_25D_A2             returns [message::definition::swift::mt::Field fld]  :
                       fld_25D_A2_D { $fld.MergeFrom($fld_25D_A2_D.fld); }
                       ;

fld_16R_A2a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_24B_A2a            returns [message::definition::swift::mt::Field fld]  :
                       fld_24B_A2a_B { $fld.MergeFrom($fld_24B_A2a_B.fld); }
                       ;

fld_70D_A2a            returns [message::definition::swift::mt::Field fld]  :
                       fld_70D_A2a_D { $fld.MergeFrom($fld_70D_A2a_D.fld); }
                       ;

fld_16S_A2a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_A2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_A              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_13A_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_13A_B_A { $fld.MergeFrom($fld_13A_B_A.fld); }
                       ;

fld_22a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_B_F { $fld.MergeFrom($fld_22a_B_F.fld); }
                       | fld_22a_B_H { $fld.MergeFrom($fld_22a_B_H.fld); }
                       ;

fld_95a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_B_P { $fld.MergeFrom($fld_95a_B_P.fld); }
                       | fld_95a_B_R { $fld.MergeFrom($fld_95a_B_R.fld); }
                       ;

fld_97a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_B_A { $fld.MergeFrom($fld_97a_B_A.fld); }
                       | fld_97a_B_E { $fld.MergeFrom($fld_97a_B_E.fld); }
                       ;

fld_94a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_94a_B_B { $fld.MergeFrom($fld_94a_B_B.fld); }
                       | fld_94a_B_C { $fld.MergeFrom($fld_94a_B_C.fld); }
                       | fld_94a_B_F { $fld.MergeFrom($fld_94a_B_F.fld); }
                       ;

fld_35B_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_B_B { $fld.MergeFrom($fld_35B_B_B.fld); }
                       ;

fld_36B_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_B_B { $fld.MergeFrom($fld_36B_B_B.fld); }
                       ;

fld_19B_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_19B_B_B { $fld.MergeFrom($fld_19B_B_B.fld); }
                       ;

fld_93B_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_93B_B_B { $fld.MergeFrom($fld_93B_B_B.fld); }
                       ;

fld_16S_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_70E_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_70E_C_E { $fld.MergeFrom($fld_70E_C_E.fld); }
                       ;

fld_95a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_C_P { $fld.MergeFrom($fld_95a_C_P.fld); }
                       | fld_95a_C_Q { $fld.MergeFrom($fld_95a_C_Q.fld); }
                       | fld_95a_C_R { $fld.MergeFrom($fld_95a_C_R.fld); }
                       ;

fld_16S_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;



fld_20C_A_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("23G"); }:
                       START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_22F_A_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_25D_A2_D           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("25D"); }:
                       START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_24B_A2a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("24B"); }:
                       START_OF_FIELD '24B:' ~(START_OF_FIELD)+ ;

fld_70D_A2a_D          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70D"); }:
                       START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_13A_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_22a_B_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B_H            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_95a_B_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97E"); }:
                       START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94F"); }:
                       START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_19B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19B"); }:
                       START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_93B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("93B"); }:
                       START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;

fld_70E_C_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_95a_C_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C_Q            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;



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