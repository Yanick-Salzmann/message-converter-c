grammar SwiftMtParser_MT569;

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
#include "SwiftMtParser_MT569Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT569Lexer tLexer;
    typedef SwiftMtParser_MT569Parser tParser;

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
                       : TAG_MT seq_A seq_B seq_C+  MT_END;

seq_A                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A"); } :
                       fld_16R_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A.fld); }
                       fld_28E_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_28E_A.fld); }
                       fld_13A_A? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13A_A.fld); }
                       fld_20C_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A.fld); }
                       fld_23G_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_23G_A.fld); }
                       fld_98a_A? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_A.fld); }
                       fld_22a_A+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_A.fld); }
                       seq_A1* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_A1.elem); }
                       seq_A2* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_A2.elem); }
                       fld_16S_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A.fld); }
                       ;

seq_A1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A1"); } :
                       fld_16R_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A1.fld); }
                       fld_95a_A1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_A1.fld); }
                       fld_97a_A1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_A1.fld); }
                       fld_16S_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A1.fld); }
                       ;

seq_A2                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A2"); } :
                       fld_16R_A2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A2.fld); }
                       fld_13a_A2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13a_A2.fld); }
                       fld_20C_A2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A2.fld); }
                       fld_16S_A2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A2.fld); }
                       ;

seq_B                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B"); } :
                       fld_16R_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B.fld); }
                       fld_19A_B+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19A_B.fld); }
                       fld_92A_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92A_B.fld); }
                       fld_25D_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_25D_B.fld); }
                       fld_98a_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_B.fld); }
                       fld_70E_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70E_B.fld); }
                       fld_16S_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B.fld); }
                       ;

seq_C                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C"); } :
                       fld_16R_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C.fld); }
                       fld_22a_C+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_C.fld); }
                       fld_19A_C+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19A_C.fld); }
                       fld_92A_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92A_C.fld); }
                       fld_25D_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_25D_C.fld); }
                       seq_C1* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_C1.elem); }
                       ;

seq_C1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C1"); } :
                       fld_16R_C1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C1.fld); }
                       fld_13B_C1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13B_C1.fld); }
                       fld_95a_C1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_C1.fld); }
                       fld_19A_C1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19A_C1.fld); }
                       fld_92A_C1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92A_C1.fld); }
                       fld_25D_C1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_25D_C1.fld); }
                       seq_C1a+ { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_C1a.elem); }
                       ;

seq_C1a                returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C1a"); } :
                       fld_16R_C1a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C1a.fld); }
                       fld_20C_C1a+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_C1a.fld); }
                       fld_98a_C1a+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_C1a.fld); }
                       fld_19A_C1a+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19A_C1a.fld); }
                       fld_22F_C1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_C1a.fld); }
                       fld_92a_C1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_C1a.fld); }
                       fld_25D_C1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_25D_C1a.fld); }
                       ;



fld_16R_A              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_28E_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_28E_A_E { $fld.MergeFrom($fld_28E_A_E.fld); }
                       ;

fld_13A_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_13A_A_A { $fld.MergeFrom($fld_13A_A_A.fld); }
                       ;

fld_20C_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_A_C { $fld.MergeFrom($fld_20C_A_C.fld); }
                       ;

fld_23G_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_23G_A_G { $fld.MergeFrom($fld_23G_A_G.fld); }
                       ;

fld_98a_A              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_A_A { $fld.MergeFrom($fld_98a_A_A.fld); }
                       | fld_98a_A_C { $fld.MergeFrom($fld_98a_A_C.fld); }
                       | fld_98a_A_E { $fld.MergeFrom($fld_98a_A_E.fld); }
                       ;

fld_22a_A              returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_A_F { $fld.MergeFrom($fld_22a_A_F.fld); }
                       | fld_22a_A_H { $fld.MergeFrom($fld_22a_A_H.fld); }
                       ;

fld_16R_A1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_A1             returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_A1_L { $fld.MergeFrom($fld_95a_A1_L.fld); }
                       | fld_95a_A1_P { $fld.MergeFrom($fld_95a_A1_P.fld); }
                       | fld_95a_A1_Q { $fld.MergeFrom($fld_95a_A1_Q.fld); }
                       | fld_95a_A1_R { $fld.MergeFrom($fld_95a_A1_R.fld); }
                       ;

fld_97a_A1             returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_A1_A { $fld.MergeFrom($fld_97a_A1_A.fld); }
                       | fld_97a_A1_B { $fld.MergeFrom($fld_97a_A1_B.fld); }
                       ;

fld_16S_A1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_A2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_13a_A2             returns [message::definition::swift::mt::Field fld]  :
                         fld_13a_A2_A { $fld.MergeFrom($fld_13a_A2_A.fld); }
                       | fld_13a_A2_B { $fld.MergeFrom($fld_13a_A2_B.fld); }
                       ;

fld_20C_A2             returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_A2_C { $fld.MergeFrom($fld_20C_A2_C.fld); }
                       ;

fld_16S_A2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_A              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_19A_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_19A_B_A { $fld.MergeFrom($fld_19A_B_A.fld); }
                       ;

fld_92A_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_92A_B_A { $fld.MergeFrom($fld_92A_B_A.fld); }
                       ;

fld_25D_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_25D_B_D { $fld.MergeFrom($fld_25D_B_D.fld); }
                       ;

fld_98a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_B_A { $fld.MergeFrom($fld_98a_B_A.fld); }
                       | fld_98a_B_C { $fld.MergeFrom($fld_98a_B_C.fld); }
                       ;

fld_70E_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_70E_B_E { $fld.MergeFrom($fld_70E_B_E.fld); }
                       ;

fld_16S_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_22a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_C_F { $fld.MergeFrom($fld_22a_C_F.fld); }
                       | fld_22a_C_H { $fld.MergeFrom($fld_22a_C_H.fld); }
                       ;

fld_19A_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_19A_C_A { $fld.MergeFrom($fld_19A_C_A.fld); }
                       ;

fld_92A_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_92A_C_A { $fld.MergeFrom($fld_92A_C_A.fld); }
                       ;

fld_25D_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_25D_C_D { $fld.MergeFrom($fld_25D_C_D.fld); }
                       ;

fld_16R_C1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_13B_C1             returns [message::definition::swift::mt::Field fld]  :
                       fld_13B_C1_B { $fld.MergeFrom($fld_13B_C1_B.fld); }
                       ;

fld_95a_C1             returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_C1_L { $fld.MergeFrom($fld_95a_C1_L.fld); }
                       | fld_95a_C1_P { $fld.MergeFrom($fld_95a_C1_P.fld); }
                       | fld_95a_C1_Q { $fld.MergeFrom($fld_95a_C1_Q.fld); }
                       | fld_95a_C1_R { $fld.MergeFrom($fld_95a_C1_R.fld); }
                       ;

fld_19A_C1             returns [message::definition::swift::mt::Field fld]  :
                       fld_19A_C1_A { $fld.MergeFrom($fld_19A_C1_A.fld); }
                       ;

fld_92A_C1             returns [message::definition::swift::mt::Field fld]  :
                       fld_92A_C1_A { $fld.MergeFrom($fld_92A_C1_A.fld); }
                       ;

fld_25D_C1             returns [message::definition::swift::mt::Field fld]  :
                       fld_25D_C1_D { $fld.MergeFrom($fld_25D_C1_D.fld); }
                       ;

fld_16R_C1a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_20C_C1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_C1a_C { $fld.MergeFrom($fld_20C_C1a_C.fld); }
                       ;

fld_98a_C1a            returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_C1a_A { $fld.MergeFrom($fld_98a_C1a_A.fld); }
                       | fld_98a_C1a_B { $fld.MergeFrom($fld_98a_C1a_B.fld); }
                       | fld_98a_C1a_C { $fld.MergeFrom($fld_98a_C1a_C.fld); }
                       ;

fld_19A_C1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_19A_C1a_A { $fld.MergeFrom($fld_19A_C1a_A.fld); }
                       ;

fld_22F_C1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_C1a_F { $fld.MergeFrom($fld_22F_C1a_F.fld); }
                       ;

fld_92a_C1a            returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_C1a_A { $fld.MergeFrom($fld_92a_C1a_A.fld); }
                       | fld_92a_C1a_C { $fld.MergeFrom($fld_92a_C1a_C.fld); }
                       ;

fld_25D_C1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_25D_C1a_D { $fld.MergeFrom($fld_25D_C1a_D.fld); }
                       ;



fld_28E_A_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("28E"); }:
                       START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

fld_13A_A_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_20C_A_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_23G_A_G            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("23G"); }:
                       START_OF_FIELD '23G:' ~(START_OF_FIELD)+ ;

fld_98a_A_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_A_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_A_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22a_A_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_A_H            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_95a_A1_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95L"); }:
                       START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_A1_P           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_A1_Q           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_A1_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_A1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_A1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97B"); }:
                       START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_13a_A2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_19A_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19A"); }:
                       START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_92A_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_25D_B_D            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("25D"); }:
                       START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_70E_B_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22a_C_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_C_H            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_19A_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19A"); }:
                       START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_92A_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_25D_C_D            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("25D"); }:
                       START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_13B_C1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_95a_C1_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95L"); }:
                       START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C1_P           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C1_Q           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C1_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_19A_C1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19A"); }:
                       START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_92A_C1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_25D_C1_D           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("25D"); }:
                       START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_20C_C1a_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_98a_C1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_C1a_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_19A_C1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19A"); }:
                       START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_22F_C1a_F          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_92a_C1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_C1a_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92C"); }:
                       START_OF_FIELD '92C:' ~(START_OF_FIELD)+ ;

fld_25D_C1a_D          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("25D"); }:
                       START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;



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