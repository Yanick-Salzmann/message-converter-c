grammar SwiftMtParser_MT502;

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
#include "SwiftMtParser_MT502Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT502Lexer tLexer;
    typedef SwiftMtParser_MT502Parser tParser;

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
                       : TAG_MT seq_A seq_B seq_C? seq_D* seq_E?  MT_END;

seq_A                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A"); } :
                       fld_16R_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A.fld); }
                       fld_20C_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A.fld); }
                       fld_23G_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_23G_A.fld); }
                       fld_98a_A? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_A.fld); }
                       fld_22F_A+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_A.fld); }
                       seq_A1* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_A1.elem); }
                       fld_16S_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A.fld); }
                       ;

seq_A1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A1"); } :
                       fld_16R_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A1.fld); }
                       fld_22F_A1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_A1.fld); }
                       fld_13a_A1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13a_A1.fld); }
                       fld_20C_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A1.fld); }
                       fld_16S_A1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_A1.fld); }
                       ;

seq_B                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B"); } :
                       fld_16R_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B.fld); }
                       fld_94a_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94a_B.fld); }
                       seq_B1* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_B1.elem); }
                       fld_22a_B+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_B.fld); }
                       fld_98a_B+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_B.fld); }
                       fld_92A_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92A_B.fld); }
                       fld_11A_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_B.fld); }
                       seq_B2+ { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_B2.elem); }
                       fld_36B_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_B.fld); }
                       fld_19A_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19A_B.fld); }
                       fld_35B_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_B.fld); }
                       seq_B3? { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_B3.elem); }
                       fld_13a_B* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13a_B.fld); }
                       fld_70E_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70E_B.fld); }
                       fld_16S_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B.fld); }
                       ;

seq_B1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B1"); } :
                       fld_16R_B1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B1.fld); }
                       fld_90a_B1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_B1.fld); }
                       fld_22F_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_B1.fld); }
                       fld_16S_B1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B1.fld); }
                       ;

seq_B2                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B2"); } :
                       fld_16R_B2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B2.fld); }
                       fld_95a_B2+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_B2.fld); }
                       fld_97a_B2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_B2.fld); }
                       fld_98a_B2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_B2.fld); }
                       fld_20C_B2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_B2.fld); }
                       fld_70a_B2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70a_B2.fld); }
                       fld_22F_B2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_B2.fld); }
                       fld_16S_B2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B2.fld); }
                       ;

seq_B3                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B3"); } :
                       fld_16R_B3 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B3.fld); }
                       fld_94B_B3? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94B_B3.fld); }
                       fld_22F_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_B3.fld); }
                       fld_12a_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_12a_B3.fld); }
                       fld_11A_B3? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_B3.fld); }
                       fld_98A_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98A_B3.fld); }
                       fld_92A_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92A_B3.fld); }
                       fld_13a_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13a_B3.fld); }
                       fld_17B_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_17B_B3.fld); }
                       fld_90a_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_B3.fld); }
                       fld_36B_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_B3.fld); }
                       fld_35B_B3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_B3.fld); }
                       fld_70E_B3? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70E_B3.fld); }
                       fld_16S_B3 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B3.fld); }
                       ;

seq_C                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C"); } :
                       fld_16R_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C.fld); }
                       fld_22F_C+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_C.fld); }
                       fld_11A_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_C.fld); }
                       seq_C1* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_C1.elem); }
                       seq_C2* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_C2.elem); }
                       seq_C3* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_C3.elem); }
                       fld_16S_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_C.fld); }
                       ;

seq_C1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C1"); } :
                       fld_16R_C1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C1.fld); }
                       fld_95a_C1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_C1.fld); }
                       fld_97a_C1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_C1.fld); }
                       fld_98a_C1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_C1.fld); }
                       fld_20C_C1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_C1.fld); }
                       fld_70a_C1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70a_C1.fld); }
                       fld_16S_C1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_C1.fld); }
                       ;

seq_C2                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C2"); } :
                       fld_16R_C2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C2.fld); }
                       fld_95a_C2+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_C2.fld); }
                       fld_97a_C2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_C2.fld); }
                       fld_98a_C2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_C2.fld); }
                       fld_20C_C2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_C2.fld); }
                       fld_70C_C2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70C_C2.fld); }
                       fld_16S_C2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_C2.fld); }
                       ;

seq_C3                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C3"); } :
                       fld_16R_C3 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C3.fld); }
                       fld_17B_C3* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_17B_C3.fld); }
                       fld_19A_C3+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19A_C3.fld); }
                       fld_98a_C3? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_C3.fld); }
                       fld_92B_C3? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92B_C3.fld); }
                       fld_16S_C3 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_C3.fld); }
                       ;

seq_D                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D"); } :
                       fld_16R_D { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D.fld); }
                       fld_95a_D+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_D.fld); }
                       fld_97a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_D.fld); }
                       fld_70C_D? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70C_D.fld); }
                       fld_20C_D? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_D.fld); }
                       fld_16S_D { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D.fld); }
                       ;

seq_E                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("E"); } :
                       fld_16R_E { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_E.fld); }
                       fld_98a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_E.fld); }
                       fld_22F_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_E.fld); }
                       fld_20C_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_E.fld); }
                       fld_92a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_E.fld); }
                       fld_99B_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_99B_E.fld); }
                       fld_19A_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19A_E.fld); }
                       fld_70C_E? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70C_E.fld); }
                       fld_16S_E { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_E.fld); }
                       ;



fld_16R_A              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

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

fld_22F_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_A_F { $fld.MergeFrom($fld_22F_A_F.fld); }
                       ;

fld_16R_A1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_22F_A1             returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_A1_F { $fld.MergeFrom($fld_22F_A1_F.fld); }
                       ;

fld_13a_A1             returns [message::definition::swift::mt::Field fld]  :
                         fld_13a_A1_A { $fld.MergeFrom($fld_13a_A1_A.fld); }
                       | fld_13a_A1_B { $fld.MergeFrom($fld_13a_A1_B.fld); }
                       ;

fld_20C_A1             returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_A1_C { $fld.MergeFrom($fld_20C_A1_C.fld); }
                       ;

fld_16S_A1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_A              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_94a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_94a_B_B { $fld.MergeFrom($fld_94a_B_B.fld); }
                       | fld_94a_B_C { $fld.MergeFrom($fld_94a_B_C.fld); }
                       | fld_94a_B_F { $fld.MergeFrom($fld_94a_B_F.fld); }
                       | fld_94a_B_L { $fld.MergeFrom($fld_94a_B_L.fld); }
                       ;

fld_16R_B1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_90a_B1             returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_B1_A { $fld.MergeFrom($fld_90a_B1_A.fld); }
                       | fld_90a_B1_B { $fld.MergeFrom($fld_90a_B1_B.fld); }
                       ;

fld_22F_B1             returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_B1_F { $fld.MergeFrom($fld_22F_B1_F.fld); }
                       ;

fld_16S_B1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_22a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_B_F { $fld.MergeFrom($fld_22a_B_F.fld); }
                       | fld_22a_B_H { $fld.MergeFrom($fld_22a_B_H.fld); }
                       ;

fld_98a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_B_A { $fld.MergeFrom($fld_98a_B_A.fld); }
                       | fld_98a_B_B { $fld.MergeFrom($fld_98a_B_B.fld); }
                       | fld_98a_B_C { $fld.MergeFrom($fld_98a_B_C.fld); }
                       ;

fld_92A_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_92A_B_A { $fld.MergeFrom($fld_92A_B_A.fld); }
                       ;

fld_11A_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_B_A { $fld.MergeFrom($fld_11A_B_A.fld); }
                       ;

fld_16R_B2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_B2_L { $fld.MergeFrom($fld_95a_B2_L.fld); }
                       | fld_95a_B2_P { $fld.MergeFrom($fld_95a_B2_P.fld); }
                       | fld_95a_B2_Q { $fld.MergeFrom($fld_95a_B2_Q.fld); }
                       | fld_95a_B2_R { $fld.MergeFrom($fld_95a_B2_R.fld); }
                       | fld_95a_B2_S { $fld.MergeFrom($fld_95a_B2_S.fld); }
                       ;

fld_97a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_B2_A { $fld.MergeFrom($fld_97a_B2_A.fld); }
                       | fld_97a_B2_B { $fld.MergeFrom($fld_97a_B2_B.fld); }
                       | fld_97a_B2_E { $fld.MergeFrom($fld_97a_B2_E.fld); }
                       ;

fld_98a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_B2_A { $fld.MergeFrom($fld_98a_B2_A.fld); }
                       | fld_98a_B2_C { $fld.MergeFrom($fld_98a_B2_C.fld); }
                       ;

fld_20C_B2             returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_B2_C { $fld.MergeFrom($fld_20C_B2_C.fld); }
                       ;

fld_70a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_70a_B2_C { $fld.MergeFrom($fld_70a_B2_C.fld); }
                       | fld_70a_B2_E { $fld.MergeFrom($fld_70a_B2_E.fld); }
                       ;

fld_22F_B2             returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_B2_F { $fld.MergeFrom($fld_22F_B2_F.fld); }
                       ;

fld_16S_B2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_36B_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_B_B { $fld.MergeFrom($fld_36B_B_B.fld); }
                       ;

fld_19A_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_19A_B_A { $fld.MergeFrom($fld_19A_B_A.fld); }
                       ;

fld_35B_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_B_B { $fld.MergeFrom($fld_35B_B_B.fld); }
                       ;

fld_16R_B3             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_94B_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_94B_B3_B { $fld.MergeFrom($fld_94B_B3_B.fld); }
                       ;

fld_22F_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_B3_F { $fld.MergeFrom($fld_22F_B3_F.fld); }
                       ;

fld_12a_B3             returns [message::definition::swift::mt::Field fld]  :
                         fld_12a_B3_A { $fld.MergeFrom($fld_12a_B3_A.fld); }
                       | fld_12a_B3_B { $fld.MergeFrom($fld_12a_B3_B.fld); }
                       | fld_12a_B3_C { $fld.MergeFrom($fld_12a_B3_C.fld); }
                       ;

fld_11A_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_B3_A { $fld.MergeFrom($fld_11A_B3_A.fld); }
                       ;

fld_98A_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_98A_B3_A { $fld.MergeFrom($fld_98A_B3_A.fld); }
                       ;

fld_92A_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_92A_B3_A { $fld.MergeFrom($fld_92A_B3_A.fld); }
                       ;

fld_13a_B3             returns [message::definition::swift::mt::Field fld]  :
                         fld_13a_B3_A { $fld.MergeFrom($fld_13a_B3_A.fld); }
                       | fld_13a_B3_B { $fld.MergeFrom($fld_13a_B3_B.fld); }
                       ;

fld_17B_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_17B_B3_B { $fld.MergeFrom($fld_17B_B3_B.fld); }
                       ;

fld_90a_B3             returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_B3_A { $fld.MergeFrom($fld_90a_B3_A.fld); }
                       | fld_90a_B3_B { $fld.MergeFrom($fld_90a_B3_B.fld); }
                       ;

fld_36B_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_B3_B { $fld.MergeFrom($fld_36B_B3_B.fld); }
                       ;

fld_35B_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_B3_B { $fld.MergeFrom($fld_35B_B3_B.fld); }
                       ;

fld_70E_B3             returns [message::definition::swift::mt::Field fld]  :
                       fld_70E_B3_E { $fld.MergeFrom($fld_70E_B3_E.fld); }
                       ;

fld_16S_B3             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_13a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_13a_B_A { $fld.MergeFrom($fld_13a_B_A.fld); }
                       | fld_13a_B_B { $fld.MergeFrom($fld_13a_B_B.fld); }
                       ;

fld_70E_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_70E_B_E { $fld.MergeFrom($fld_70E_B_E.fld); }
                       ;

fld_16S_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_22F_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_C_F { $fld.MergeFrom($fld_22F_C_F.fld); }
                       ;

fld_11A_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_C_A { $fld.MergeFrom($fld_11A_C_A.fld); }
                       ;

fld_16R_C1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_C1             returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_C1_C { $fld.MergeFrom($fld_95a_C1_C.fld); }
                       | fld_95a_C1_L { $fld.MergeFrom($fld_95a_C1_L.fld); }
                       | fld_95a_C1_P { $fld.MergeFrom($fld_95a_C1_P.fld); }
                       | fld_95a_C1_Q { $fld.MergeFrom($fld_95a_C1_Q.fld); }
                       | fld_95a_C1_R { $fld.MergeFrom($fld_95a_C1_R.fld); }
                       | fld_95a_C1_S { $fld.MergeFrom($fld_95a_C1_S.fld); }
                       ;

fld_97a_C1             returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_C1_A { $fld.MergeFrom($fld_97a_C1_A.fld); }
                       | fld_97a_C1_B { $fld.MergeFrom($fld_97a_C1_B.fld); }
                       ;

fld_98a_C1             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_C1_A { $fld.MergeFrom($fld_98a_C1_A.fld); }
                       | fld_98a_C1_C { $fld.MergeFrom($fld_98a_C1_C.fld); }
                       ;

fld_20C_C1             returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_C1_C { $fld.MergeFrom($fld_20C_C1_C.fld); }
                       ;

fld_70a_C1             returns [message::definition::swift::mt::Field fld]  :
                         fld_70a_C1_C { $fld.MergeFrom($fld_70a_C1_C.fld); }
                       | fld_70a_C1_D { $fld.MergeFrom($fld_70a_C1_D.fld); }
                       ;

fld_16S_C1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_C2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_C2             returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_C2_L { $fld.MergeFrom($fld_95a_C2_L.fld); }
                       | fld_95a_C2_P { $fld.MergeFrom($fld_95a_C2_P.fld); }
                       | fld_95a_C2_Q { $fld.MergeFrom($fld_95a_C2_Q.fld); }
                       | fld_95a_C2_R { $fld.MergeFrom($fld_95a_C2_R.fld); }
                       | fld_95a_C2_S { $fld.MergeFrom($fld_95a_C2_S.fld); }
                       ;

fld_97a_C2             returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_C2_A { $fld.MergeFrom($fld_97a_C2_A.fld); }
                       | fld_97a_C2_E { $fld.MergeFrom($fld_97a_C2_E.fld); }
                       ;

fld_98a_C2             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_C2_A { $fld.MergeFrom($fld_98a_C2_A.fld); }
                       | fld_98a_C2_C { $fld.MergeFrom($fld_98a_C2_C.fld); }
                       ;

fld_20C_C2             returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_C2_C { $fld.MergeFrom($fld_20C_C2_C.fld); }
                       ;

fld_70C_C2             returns [message::definition::swift::mt::Field fld]  :
                       fld_70C_C2_C { $fld.MergeFrom($fld_70C_C2_C.fld); }
                       ;

fld_16S_C2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_C3             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_17B_C3             returns [message::definition::swift::mt::Field fld]  :
                       fld_17B_C3_B { $fld.MergeFrom($fld_17B_C3_B.fld); }
                       ;

fld_19A_C3             returns [message::definition::swift::mt::Field fld]  :
                       fld_19A_C3_A { $fld.MergeFrom($fld_19A_C3_A.fld); }
                       ;

fld_98a_C3             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_C3_A { $fld.MergeFrom($fld_98a_C3_A.fld); }
                       | fld_98a_C3_C { $fld.MergeFrom($fld_98a_C3_C.fld); }
                       ;

fld_92B_C3             returns [message::definition::swift::mt::Field fld]  :
                       fld_92B_C3_B { $fld.MergeFrom($fld_92B_C3_B.fld); }
                       ;

fld_16S_C3             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_D              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_D_L { $fld.MergeFrom($fld_95a_D_L.fld); }
                       | fld_95a_D_P { $fld.MergeFrom($fld_95a_D_P.fld); }
                       | fld_95a_D_Q { $fld.MergeFrom($fld_95a_D_Q.fld); }
                       | fld_95a_D_R { $fld.MergeFrom($fld_95a_D_R.fld); }
                       | fld_95a_D_S { $fld.MergeFrom($fld_95a_D_S.fld); }
                       ;

fld_97a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_D_A { $fld.MergeFrom($fld_97a_D_A.fld); }
                       | fld_97a_D_B { $fld.MergeFrom($fld_97a_D_B.fld); }
                       | fld_97a_D_E { $fld.MergeFrom($fld_97a_D_E.fld); }
                       ;

fld_70C_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_70C_D_C { $fld.MergeFrom($fld_70C_D_C.fld); }
                       ;

fld_20C_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_D_C { $fld.MergeFrom($fld_20C_D_C.fld); }
                       ;

fld_16S_D              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_E              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_98a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_E_A { $fld.MergeFrom($fld_98a_E_A.fld); }
                       | fld_98a_E_B { $fld.MergeFrom($fld_98a_E_B.fld); }
                       | fld_98a_E_C { $fld.MergeFrom($fld_98a_E_C.fld); }
                       ;

fld_22F_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_E_F { $fld.MergeFrom($fld_22F_E_F.fld); }
                       ;

fld_20C_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_E_C { $fld.MergeFrom($fld_20C_E_C.fld); }
                       ;

fld_92a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_E_A { $fld.MergeFrom($fld_92a_E_A.fld); }
                       | fld_92a_E_C { $fld.MergeFrom($fld_92a_E_C.fld); }
                       ;

fld_99B_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_99B_E_B { $fld.MergeFrom($fld_99B_E_B.fld); }
                       ;

fld_19A_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_19A_E_A { $fld.MergeFrom($fld_19A_E_A.fld); }
                       ;

fld_70C_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_70C_E_C { $fld.MergeFrom($fld_70C_E_C.fld); }
                       ;

fld_16S_E              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;



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

fld_22F_A_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94F"); }:
                       START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;
fld_94a_B_L            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94L"); }:
                       START_OF_FIELD '94L:' ~(START_OF_FIELD)+ ;

fld_90a_B1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_22a_B_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_B_H            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_98a_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_B_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_92A_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_11A_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_95a_B2_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95L"); }:
                       START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_B2_P           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B2_Q           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_B2_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_B2_S           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95S"); }:
                       START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_B2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97B"); }:
                       START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;
fld_97a_B2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97E"); }:
                       START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_98a_B2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_B2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_B2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_B2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70C"); }:
                       START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_B2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_B2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_36B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_19A_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19A"); }:
                       START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B3_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12A"); }:
                       START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12B"); }:
                       START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_B3_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12C"); }:
                       START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92A_B3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_13a_B3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_B3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("17B"); }:
                       START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_90a_B3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_B3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_36B_B3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_35B_B3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_70E_B3_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_13a_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_70E_B_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_11A_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_95a_C1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95C"); }:
                       START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_C1_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95L"); }:
                       START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C1_P           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C1_Q           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C1_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C1_S           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95S"); }:
                       START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_C1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97B"); }:
                       START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;

fld_98a_C1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_C1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70a_C1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70C"); }:
                       START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;
fld_70a_C1_D           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70D"); }:
                       START_OF_FIELD '70D:' ~(START_OF_FIELD)+ ;

fld_95a_C2_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95L"); }:
                       START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_C2_P           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_C2_Q           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_C2_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_C2_S           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95S"); }:
                       START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_C2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_C2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97E"); }:
                       START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_98a_C2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_20C_C2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_70C_C2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70C"); }:
                       START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_17B_C3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("17B"); }:
                       START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_19A_C3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19A"); }:
                       START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_98a_C3_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C3_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_92B_C3_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92B"); }:
                       START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;

fld_95a_D_L            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95L"); }:
                       START_OF_FIELD '95L:' ~(START_OF_FIELD)+ ;
fld_95a_D_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D_Q            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D_S            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95S"); }:
                       START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97B"); }:
                       START_OF_FIELD '97B:' ~(START_OF_FIELD)+ ;
fld_97a_D_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97E"); }:
                       START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_70C_D_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70C"); }:
                       START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;

fld_20C_D_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_98a_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_22F_E_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_20C_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_92a_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92C"); }:
                       START_OF_FIELD '92C:' ~(START_OF_FIELD)+ ;

fld_99B_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("99B"); }:
                       START_OF_FIELD '99B:' ~(START_OF_FIELD)+ ;

fld_19A_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19A"); }:
                       START_OF_FIELD '19A:' ~(START_OF_FIELD)+ ;

fld_70C_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70C"); }:
                       START_OF_FIELD '70C:' ~(START_OF_FIELD)+ ;



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