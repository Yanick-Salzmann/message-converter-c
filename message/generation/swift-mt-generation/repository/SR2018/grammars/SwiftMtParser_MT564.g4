grammar SwiftMtParser_MT564;

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
#include "SwiftMtParser_MT564Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT564Lexer tLexer;
    typedef SwiftMtParser_MT564Parser tParser;

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
                       : TAG_MT seq_A seq_B seq_C? seq_D? seq_E* seq_F?  MT_END;

seq_A                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A"); } :
                       fld_16R_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A.fld); }
                       fld_28E_A? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_28E_A.fld); }
                       fld_20C_A+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A.fld); }
                       fld_23G_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_23G_A.fld); }
                       fld_22F_A+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_A.fld); }
                       fld_98a_A? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_A.fld); }
                       fld_25D_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_25D_A.fld); }
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
                       fld_35B_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_B.fld); }
                       seq_B1? { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_B1.elem); }
                       seq_B2+ { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_B2.elem); }
                       fld_16S_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B.fld); }
                       ;

seq_B1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B1"); } :
                       fld_16R_B1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B1.fld); }
                       fld_94B_B1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94B_B1.fld); }
                       fld_22F_B1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_B1.fld); }
                       fld_12a_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_12a_B1.fld); }
                       fld_11A_B1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_B1.fld); }
                       fld_98A_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98A_B1.fld); }
                       fld_92a_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_B1.fld); }
                       fld_36B_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_B1.fld); }
                       fld_16S_B1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B1.fld); }
                       ;

seq_B2                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B2"); } :
                       fld_16R_B2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B2.fld); }
                       fld_95a_B2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_B2.fld); }
                       fld_97a_B2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_B2.fld); }
                       fld_94a_B2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94a_B2.fld); }
                       fld_93a_B2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_93a_B2.fld); }
                       fld_16S_B2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B2.fld); }
                       ;

seq_C                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C"); } :
                       fld_16R_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C.fld); }
                       fld_35B_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_C.fld); }
                       fld_36a_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36a_C.fld); }
                       fld_93a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_93a_C.fld); }
                       fld_22F_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_C.fld); }
                       fld_92D_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92D_C.fld); }
                       fld_90B_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90B_C.fld); }
                       fld_98a_C+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_C.fld); }
                       fld_69a_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_69a_C.fld); }
                       fld_16S_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_C.fld); }
                       ;

seq_D                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D"); } :
                       fld_16R_D { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D.fld); }
                       fld_98a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_D.fld); }
                       fld_69a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_69a_D.fld); }
                       fld_99A_D? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_99A_D.fld); }
                       fld_92a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_D.fld); }
                       fld_90a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_D.fld); }
                       fld_36a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36a_D.fld); }
                       fld_13a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13a_D.fld); }
                       fld_17B_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_17B_D.fld); }
                       fld_22F_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_D.fld); }
                       fld_94E_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94E_D.fld); }
                       fld_70a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70a_D.fld); }
                       fld_16S_D { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D.fld); }
                       ;

seq_E                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("E"); } :
                       fld_16R_E { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_E.fld); }
                       fld_13A_E { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13A_E.fld); }
                       fld_22F_E+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_E.fld); }
                       fld_94C_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94C_E.fld); }
                       fld_11A_E? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_E.fld); }
                       fld_17B_E+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_17B_E.fld); }
                       fld_35B_E? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_E.fld); }
                       fld_98a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_E.fld); }
                       fld_69a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_69a_E.fld); }
                       fld_92a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_E.fld); }
                       fld_90a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_E.fld); }
                       fld_36a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36a_E.fld); }
                       seq_E1* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_E1.elem); }
                       seq_E2* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_E2.elem); }
                       fld_70E_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70E_E.fld); }
                       fld_16S_E { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_E.fld); }
                       ;

seq_E1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("E1"); } :
                       fld_16R_E1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_E1.fld); }
                       fld_22a_E1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_E1.fld); }
                       fld_35B_E1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_E1.fld); }
                       seq_E1a? { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_E1a.elem); }
                       fld_36B_E1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_E1.fld); }
                       fld_94a_E1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94a_E1.fld); }
                       fld_22F_E1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_E1.fld); }
                       fld_11A_E1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_E1.fld); }
                       fld_69a_E1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_69a_E1.fld); }
                       fld_90a_E1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_E1.fld); }
                       fld_92a_E1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_E1.fld); }
                       fld_98a_E1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_E1.fld); }
                       fld_16S_E1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_E1.fld); }
                       ;

seq_E1a                returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("E1a"); } :
                       fld_16R_E1a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_E1a.fld); }
                       fld_94B_E1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94B_E1a.fld); }
                       fld_22F_E1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_E1a.fld); }
                       fld_12a_E1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_12a_E1a.fld); }
                       fld_11A_E1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_E1a.fld); }
                       fld_98A_E1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98A_E1a.fld); }
                       fld_90a_E1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_E1a.fld); }
                       fld_92a_E1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_E1a.fld); }
                       fld_36B_E1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_E1a.fld); }
                       fld_16S_E1a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_E1a.fld); }
                       ;

seq_E2                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("E2"); } :
                       fld_16R_E2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_E2.fld); }
                       fld_22a_E2+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_E2.fld); }
                       fld_94C_E2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94C_E2.fld); }
                       fld_97a_E2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_E2.fld); }
                       fld_19B_E2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19B_E2.fld); }
                       fld_98a_E2+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_E2.fld); }
                       fld_92a_E2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_E2.fld); }
                       fld_90a_E2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_E2.fld); }
                       fld_16S_E2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_E2.fld); }
                       ;

seq_F                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("F"); } :
                       fld_16R_F { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_F.fld); }
                       fld_70E_F* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70E_F.fld); }
                       fld_95a_F* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_F.fld); }
                       fld_16S_F { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_F.fld); }
                       ;



fld_16R_A              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_28E_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_28E_A_E { $fld.MergeFrom($fld_28E_A_E.fld); }
                       ;

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

fld_25D_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_25D_A_D { $fld.MergeFrom($fld_25D_A_D.fld); }
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

fld_35B_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_B_B { $fld.MergeFrom($fld_35B_B_B.fld); }
                       ;

fld_16R_B1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_94B_B1             returns [message::definition::swift::mt::Field fld]  :
                       fld_94B_B1_B { $fld.MergeFrom($fld_94B_B1_B.fld); }
                       ;

fld_22F_B1             returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_B1_F { $fld.MergeFrom($fld_22F_B1_F.fld); }
                       ;

fld_12a_B1             returns [message::definition::swift::mt::Field fld]  :
                         fld_12a_B1_A { $fld.MergeFrom($fld_12a_B1_A.fld); }
                       | fld_12a_B1_B { $fld.MergeFrom($fld_12a_B1_B.fld); }
                       | fld_12a_B1_C { $fld.MergeFrom($fld_12a_B1_C.fld); }
                       ;

fld_11A_B1             returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_B1_A { $fld.MergeFrom($fld_11A_B1_A.fld); }
                       ;

fld_98A_B1             returns [message::definition::swift::mt::Field fld]  :
                       fld_98A_B1_A { $fld.MergeFrom($fld_98A_B1_A.fld); }
                       ;

fld_92a_B1             returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_B1_A { $fld.MergeFrom($fld_92a_B1_A.fld); }
                       | fld_92a_B1_D { $fld.MergeFrom($fld_92a_B1_D.fld); }
                       | fld_92a_B1_K { $fld.MergeFrom($fld_92a_B1_K.fld); }
                       ;

fld_36B_B1             returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_B1_B { $fld.MergeFrom($fld_36B_B1_B.fld); }
                       ;

fld_16S_B1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_B2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_B2_P { $fld.MergeFrom($fld_95a_B2_P.fld); }
                       | fld_95a_B2_R { $fld.MergeFrom($fld_95a_B2_R.fld); }
                       ;

fld_97a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_B2_A { $fld.MergeFrom($fld_97a_B2_A.fld); }
                       | fld_97a_B2_C { $fld.MergeFrom($fld_97a_B2_C.fld); }
                       ;

fld_94a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_94a_B2_B { $fld.MergeFrom($fld_94a_B2_B.fld); }
                       | fld_94a_B2_C { $fld.MergeFrom($fld_94a_B2_C.fld); }
                       | fld_94a_B2_F { $fld.MergeFrom($fld_94a_B2_F.fld); }
                       ;

fld_93a_B2             returns [message::definition::swift::mt::Field fld]  :
                         fld_93a_B2_B { $fld.MergeFrom($fld_93a_B2_B.fld); }
                       | fld_93a_B2_C { $fld.MergeFrom($fld_93a_B2_C.fld); }
                       ;

fld_16S_B2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_35B_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_C_B { $fld.MergeFrom($fld_35B_C_B.fld); }
                       ;

fld_36a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_36a_C_B { $fld.MergeFrom($fld_36a_C_B.fld); }
                       | fld_36a_C_E { $fld.MergeFrom($fld_36a_C_E.fld); }
                       ;

fld_93a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_93a_C_B { $fld.MergeFrom($fld_93a_C_B.fld); }
                       | fld_93a_C_C { $fld.MergeFrom($fld_93a_C_C.fld); }
                       ;

fld_22F_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_C_F { $fld.MergeFrom($fld_22F_C_F.fld); }
                       ;

fld_92D_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_92D_C_D { $fld.MergeFrom($fld_92D_C_D.fld); }
                       ;

fld_90B_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_90B_C_B { $fld.MergeFrom($fld_90B_C_B.fld); }
                       ;

fld_98a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_C_A { $fld.MergeFrom($fld_98a_C_A.fld); }
                       | fld_98a_C_B { $fld.MergeFrom($fld_98a_C_B.fld); }
                       ;

fld_69a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_69a_C_A { $fld.MergeFrom($fld_69a_C_A.fld); }
                       | fld_69a_C_B { $fld.MergeFrom($fld_69a_C_B.fld); }
                       | fld_69a_C_C { $fld.MergeFrom($fld_69a_C_C.fld); }
                       | fld_69a_C_D { $fld.MergeFrom($fld_69a_C_D.fld); }
                       | fld_69a_C_E { $fld.MergeFrom($fld_69a_C_E.fld); }
                       | fld_69a_C_F { $fld.MergeFrom($fld_69a_C_F.fld); }
                       ;

fld_16S_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_D              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_98a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_D_A { $fld.MergeFrom($fld_98a_D_A.fld); }
                       | fld_98a_D_B { $fld.MergeFrom($fld_98a_D_B.fld); }
                       | fld_98a_D_C { $fld.MergeFrom($fld_98a_D_C.fld); }
                       | fld_98a_D_E { $fld.MergeFrom($fld_98a_D_E.fld); }
                       ;

fld_69a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_69a_D_A { $fld.MergeFrom($fld_69a_D_A.fld); }
                       | fld_69a_D_B { $fld.MergeFrom($fld_69a_D_B.fld); }
                       | fld_69a_D_C { $fld.MergeFrom($fld_69a_D_C.fld); }
                       | fld_69a_D_D { $fld.MergeFrom($fld_69a_D_D.fld); }
                       | fld_69a_D_E { $fld.MergeFrom($fld_69a_D_E.fld); }
                       | fld_69a_D_F { $fld.MergeFrom($fld_69a_D_F.fld); }
                       | fld_69a_D_J { $fld.MergeFrom($fld_69a_D_J.fld); }
                       ;

fld_99A_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_99A_D_A { $fld.MergeFrom($fld_99A_D_A.fld); }
                       ;

fld_92a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_D_A { $fld.MergeFrom($fld_92a_D_A.fld); }
                       | fld_92a_D_F { $fld.MergeFrom($fld_92a_D_F.fld); }
                       | fld_92a_D_K { $fld.MergeFrom($fld_92a_D_K.fld); }
                       | fld_92a_D_P { $fld.MergeFrom($fld_92a_D_P.fld); }
                       ;

fld_90a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_D_A { $fld.MergeFrom($fld_90a_D_A.fld); }
                       | fld_90a_D_B { $fld.MergeFrom($fld_90a_D_B.fld); }
                       | fld_90a_D_E { $fld.MergeFrom($fld_90a_D_E.fld); }
                       | fld_90a_D_L { $fld.MergeFrom($fld_90a_D_L.fld); }
                       ;

fld_36a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_36a_D_B { $fld.MergeFrom($fld_36a_D_B.fld); }
                       | fld_36a_D_C { $fld.MergeFrom($fld_36a_D_C.fld); }
                       ;

fld_13a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_13a_D_A { $fld.MergeFrom($fld_13a_D_A.fld); }
                       | fld_13a_D_B { $fld.MergeFrom($fld_13a_D_B.fld); }
                       ;

fld_17B_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_17B_D_B { $fld.MergeFrom($fld_17B_D_B.fld); }
                       ;

fld_22F_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_D_F { $fld.MergeFrom($fld_22F_D_F.fld); }
                       ;

fld_94E_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_94E_D_E { $fld.MergeFrom($fld_94E_D_E.fld); }
                       ;

fld_70a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_70a_D_E { $fld.MergeFrom($fld_70a_D_E.fld); }
                       | fld_70a_D_G { $fld.MergeFrom($fld_70a_D_G.fld); }
                       ;

fld_16S_D              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_E              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_13A_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_13A_E_A { $fld.MergeFrom($fld_13A_E_A.fld); }
                       ;

fld_22F_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_E_F { $fld.MergeFrom($fld_22F_E_F.fld); }
                       ;

fld_94C_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_94C_E_C { $fld.MergeFrom($fld_94C_E_C.fld); }
                       ;

fld_11A_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_E_A { $fld.MergeFrom($fld_11A_E_A.fld); }
                       ;

fld_17B_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_17B_E_B { $fld.MergeFrom($fld_17B_E_B.fld); }
                       ;

fld_35B_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_E_B { $fld.MergeFrom($fld_35B_E_B.fld); }
                       ;

fld_98a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_E_A { $fld.MergeFrom($fld_98a_E_A.fld); }
                       | fld_98a_E_B { $fld.MergeFrom($fld_98a_E_B.fld); }
                       | fld_98a_E_C { $fld.MergeFrom($fld_98a_E_C.fld); }
                       | fld_98a_E_E { $fld.MergeFrom($fld_98a_E_E.fld); }
                       | fld_98a_E_F { $fld.MergeFrom($fld_98a_E_F.fld); }
                       | fld_98a_E_J { $fld.MergeFrom($fld_98a_E_J.fld); }
                       | fld_98a_E_K { $fld.MergeFrom($fld_98a_E_K.fld); }
                       ;

fld_69a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_69a_E_A { $fld.MergeFrom($fld_69a_E_A.fld); }
                       | fld_69a_E_B { $fld.MergeFrom($fld_69a_E_B.fld); }
                       | fld_69a_E_C { $fld.MergeFrom($fld_69a_E_C.fld); }
                       | fld_69a_E_D { $fld.MergeFrom($fld_69a_E_D.fld); }
                       | fld_69a_E_E { $fld.MergeFrom($fld_69a_E_E.fld); }
                       | fld_69a_E_F { $fld.MergeFrom($fld_69a_E_F.fld); }
                       | fld_69a_E_J { $fld.MergeFrom($fld_69a_E_J.fld); }
                       ;

fld_92a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_E_A { $fld.MergeFrom($fld_92a_E_A.fld); }
                       | fld_92a_E_B { $fld.MergeFrom($fld_92a_E_B.fld); }
                       | fld_92a_E_F { $fld.MergeFrom($fld_92a_E_F.fld); }
                       | fld_92a_E_H { $fld.MergeFrom($fld_92a_E_H.fld); }
                       | fld_92a_E_J { $fld.MergeFrom($fld_92a_E_J.fld); }
                       | fld_92a_E_K { $fld.MergeFrom($fld_92a_E_K.fld); }
                       | fld_92a_E_R { $fld.MergeFrom($fld_92a_E_R.fld); }
                       ;

fld_90a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_E_A { $fld.MergeFrom($fld_90a_E_A.fld); }
                       | fld_90a_E_B { $fld.MergeFrom($fld_90a_E_B.fld); }
                       | fld_90a_E_E { $fld.MergeFrom($fld_90a_E_E.fld); }
                       ;

fld_36a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_36a_E_B { $fld.MergeFrom($fld_36a_E_B.fld); }
                       | fld_36a_E_C { $fld.MergeFrom($fld_36a_E_C.fld); }
                       ;

fld_16R_E1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_22a_E1             returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_E1_F { $fld.MergeFrom($fld_22a_E1_F.fld); }
                       | fld_22a_E1_H { $fld.MergeFrom($fld_22a_E1_H.fld); }
                       ;

fld_35B_E1             returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_E1_B { $fld.MergeFrom($fld_35B_E1_B.fld); }
                       ;

fld_16R_E1a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_94B_E1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_94B_E1a_B { $fld.MergeFrom($fld_94B_E1a_B.fld); }
                       ;

fld_22F_E1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_E1a_F { $fld.MergeFrom($fld_22F_E1a_F.fld); }
                       ;

fld_12a_E1a            returns [message::definition::swift::mt::Field fld]  :
                         fld_12a_E1a_A { $fld.MergeFrom($fld_12a_E1a_A.fld); }
                       | fld_12a_E1a_B { $fld.MergeFrom($fld_12a_E1a_B.fld); }
                       | fld_12a_E1a_C { $fld.MergeFrom($fld_12a_E1a_C.fld); }
                       ;

fld_11A_E1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_E1a_A { $fld.MergeFrom($fld_11A_E1a_A.fld); }
                       ;

fld_98A_E1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_98A_E1a_A { $fld.MergeFrom($fld_98A_E1a_A.fld); }
                       ;

fld_90a_E1a            returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_E1a_A { $fld.MergeFrom($fld_90a_E1a_A.fld); }
                       | fld_90a_E1a_B { $fld.MergeFrom($fld_90a_E1a_B.fld); }
                       | fld_90a_E1a_E { $fld.MergeFrom($fld_90a_E1a_E.fld); }
                       ;

fld_92a_E1a            returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_E1a_A { $fld.MergeFrom($fld_92a_E1a_A.fld); }
                       | fld_92a_E1a_K { $fld.MergeFrom($fld_92a_E1a_K.fld); }
                       ;

fld_36B_E1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_E1a_B { $fld.MergeFrom($fld_36B_E1a_B.fld); }
                       ;

fld_16S_E1a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_36B_E1             returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_E1_B { $fld.MergeFrom($fld_36B_E1_B.fld); }
                       ;

fld_94a_E1             returns [message::definition::swift::mt::Field fld]  :
                         fld_94a_E1_B { $fld.MergeFrom($fld_94a_E1_B.fld); }
                       | fld_94a_E1_C { $fld.MergeFrom($fld_94a_E1_C.fld); }
                       | fld_94a_E1_F { $fld.MergeFrom($fld_94a_E1_F.fld); }
                       ;

fld_22F_E1             returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_E1_F { $fld.MergeFrom($fld_22F_E1_F.fld); }
                       ;

fld_11A_E1             returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_E1_A { $fld.MergeFrom($fld_11A_E1_A.fld); }
                       ;

fld_69a_E1             returns [message::definition::swift::mt::Field fld]  :
                         fld_69a_E1_A { $fld.MergeFrom($fld_69a_E1_A.fld); }
                       | fld_69a_E1_B { $fld.MergeFrom($fld_69a_E1_B.fld); }
                       | fld_69a_E1_C { $fld.MergeFrom($fld_69a_E1_C.fld); }
                       | fld_69a_E1_D { $fld.MergeFrom($fld_69a_E1_D.fld); }
                       | fld_69a_E1_E { $fld.MergeFrom($fld_69a_E1_E.fld); }
                       | fld_69a_E1_F { $fld.MergeFrom($fld_69a_E1_F.fld); }
                       | fld_69a_E1_J { $fld.MergeFrom($fld_69a_E1_J.fld); }
                       ;

fld_90a_E1             returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_E1_A { $fld.MergeFrom($fld_90a_E1_A.fld); }
                       | fld_90a_E1_B { $fld.MergeFrom($fld_90a_E1_B.fld); }
                       | fld_90a_E1_E { $fld.MergeFrom($fld_90a_E1_E.fld); }
                       | fld_90a_E1_F { $fld.MergeFrom($fld_90a_E1_F.fld); }
                       | fld_90a_E1_J { $fld.MergeFrom($fld_90a_E1_J.fld); }
                       | fld_90a_E1_K { $fld.MergeFrom($fld_90a_E1_K.fld); }
                       | fld_90a_E1_L { $fld.MergeFrom($fld_90a_E1_L.fld); }
                       ;

fld_92a_E1             returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_E1_A { $fld.MergeFrom($fld_92a_E1_A.fld); }
                       | fld_92a_E1_D { $fld.MergeFrom($fld_92a_E1_D.fld); }
                       | fld_92a_E1_F { $fld.MergeFrom($fld_92a_E1_F.fld); }
                       | fld_92a_E1_K { $fld.MergeFrom($fld_92a_E1_K.fld); }
                       | fld_92a_E1_L { $fld.MergeFrom($fld_92a_E1_L.fld); }
                       | fld_92a_E1_M { $fld.MergeFrom($fld_92a_E1_M.fld); }
                       | fld_92a_E1_N { $fld.MergeFrom($fld_92a_E1_N.fld); }
                       ;

fld_98a_E1             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_E1_A { $fld.MergeFrom($fld_98a_E1_A.fld); }
                       | fld_98a_E1_B { $fld.MergeFrom($fld_98a_E1_B.fld); }
                       | fld_98a_E1_C { $fld.MergeFrom($fld_98a_E1_C.fld); }
                       | fld_98a_E1_E { $fld.MergeFrom($fld_98a_E1_E.fld); }
                       ;

fld_16S_E1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_E2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_22a_E2             returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_E2_F { $fld.MergeFrom($fld_22a_E2_F.fld); }
                       | fld_22a_E2_H { $fld.MergeFrom($fld_22a_E2_H.fld); }
                       ;

fld_94C_E2             returns [message::definition::swift::mt::Field fld]  :
                       fld_94C_E2_C { $fld.MergeFrom($fld_94C_E2_C.fld); }
                       ;

fld_97a_E2             returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_E2_A { $fld.MergeFrom($fld_97a_E2_A.fld); }
                       | fld_97a_E2_E { $fld.MergeFrom($fld_97a_E2_E.fld); }
                       ;

fld_19B_E2             returns [message::definition::swift::mt::Field fld]  :
                       fld_19B_E2_B { $fld.MergeFrom($fld_19B_E2_B.fld); }
                       ;

fld_98a_E2             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_E2_A { $fld.MergeFrom($fld_98a_E2_A.fld); }
                       | fld_98a_E2_B { $fld.MergeFrom($fld_98a_E2_B.fld); }
                       | fld_98a_E2_C { $fld.MergeFrom($fld_98a_E2_C.fld); }
                       | fld_98a_E2_E { $fld.MergeFrom($fld_98a_E2_E.fld); }
                       ;

fld_92a_E2             returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_E2_A { $fld.MergeFrom($fld_92a_E2_A.fld); }
                       | fld_92a_E2_B { $fld.MergeFrom($fld_92a_E2_B.fld); }
                       | fld_92a_E2_F { $fld.MergeFrom($fld_92a_E2_F.fld); }
                       | fld_92a_E2_H { $fld.MergeFrom($fld_92a_E2_H.fld); }
                       | fld_92a_E2_J { $fld.MergeFrom($fld_92a_E2_J.fld); }
                       | fld_92a_E2_K { $fld.MergeFrom($fld_92a_E2_K.fld); }
                       | fld_92a_E2_M { $fld.MergeFrom($fld_92a_E2_M.fld); }
                       | fld_92a_E2_R { $fld.MergeFrom($fld_92a_E2_R.fld); }
                       ;

fld_90a_E2             returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_E2_A { $fld.MergeFrom($fld_90a_E2_A.fld); }
                       | fld_90a_E2_B { $fld.MergeFrom($fld_90a_E2_B.fld); }
                       | fld_90a_E2_E { $fld.MergeFrom($fld_90a_E2_E.fld); }
                       | fld_90a_E2_F { $fld.MergeFrom($fld_90a_E2_F.fld); }
                       | fld_90a_E2_J { $fld.MergeFrom($fld_90a_E2_J.fld); }
                       | fld_90a_E2_K { $fld.MergeFrom($fld_90a_E2_K.fld); }
                       | fld_90a_E2_L { $fld.MergeFrom($fld_90a_E2_L.fld); }
                       ;

fld_16S_E2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_70E_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_70E_E_E { $fld.MergeFrom($fld_70E_E_E.fld); }
                       ;

fld_16S_E              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_F              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_70E_F              returns [message::definition::swift::mt::Field fld]  :
                       fld_70E_F_E { $fld.MergeFrom($fld_70E_F_E.fld); }
                       ;

fld_95a_F              returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_F_P { $fld.MergeFrom($fld_95a_F_P.fld); }
                       | fld_95a_F_Q { $fld.MergeFrom($fld_95a_F_Q.fld); }
                       | fld_95a_F_R { $fld.MergeFrom($fld_95a_F_R.fld); }
                       ;

fld_16S_F              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;



fld_28E_A_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("28E"); }:
                       START_OF_FIELD '28E:' ~(START_OF_FIELD)+ ;

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

fld_25D_A_D            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("25D"); }:
                       START_OF_FIELD '25D:' ~(START_OF_FIELD)+ ;

fld_22F_A1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12A"); }:
                       START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_B1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12B"); }:
                       START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_B1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12C"); }:
                       START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_B1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_B1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_92a_B1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_B1_D           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92D"); }:
                       START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;
fld_92a_B1_K           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92K"); }:
                       START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;

fld_36B_B1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_95a_B2_P           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B2_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97a_B2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_B2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97C"); }:
                       START_OF_FIELD '97C:' ~(START_OF_FIELD)+ ;

fld_94a_B2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94F"); }:
                       START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_93a_B2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("93B"); }:
                       START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_B2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("93C"); }:
                       START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_35B_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_36a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_C_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36E"); }:
                       START_OF_FIELD '36E:' ~(START_OF_FIELD)+ ;

fld_93a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("93B"); }:
                       START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_C_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("93C"); }:
                       START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_92D_C_D            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92D"); }:
                       START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;

fld_90B_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_98a_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;

fld_69a_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69A"); }:
                       START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69B"); }:
                       START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_C_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69C"); }:
                       START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_C_D            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69D"); }:
                       START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_C_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69E"); }:
                       START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_C_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69F"); }:
                       START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;

fld_98a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_D_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_D_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_69a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69A"); }:
                       START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69B"); }:
                       START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_D_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69C"); }:
                       START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_D_D            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69D"); }:
                       START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_D_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69E"); }:
                       START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_D_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69F"); }:
                       START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;
fld_69a_D_J            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69J"); }:
                       START_OF_FIELD '69J:' ~(START_OF_FIELD)+ ;

fld_99A_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("99A"); }:
                       START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_92a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D_K            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92K"); }:
                       START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_D_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92P"); }:
                       START_OF_FIELD '92P:' ~(START_OF_FIELD)+ ;

fld_90a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_D_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90E"); }:
                       START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;
fld_90a_D_L            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90L"); }:
                       START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_36a_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_D_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36C"); }:
                       START_OF_FIELD '36C:' ~(START_OF_FIELD)+ ;

fld_13a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("17B"); }:
                       START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_22F_D_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_94E_D_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94E"); }:
                       START_OF_FIELD '94E:' ~(START_OF_FIELD)+ ;

fld_70a_D_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;
fld_70a_D_G            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70G"); }:
                       START_OF_FIELD '70G:' ~(START_OF_FIELD)+ ;

fld_13A_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_22F_E_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_94C_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_11A_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_17B_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("17B"); }:
                       START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_35B_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_98a_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_E_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;
fld_98a_E_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98F"); }:
                       START_OF_FIELD '98F:' ~(START_OF_FIELD)+ ;
fld_98a_E_J            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98J"); }:
                       START_OF_FIELD '98J:' ~(START_OF_FIELD)+ ;
fld_98a_E_K            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98K"); }:
                       START_OF_FIELD '98K:' ~(START_OF_FIELD)+ ;

fld_69a_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69A"); }:
                       START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69B"); }:
                       START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69C"); }:
                       START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_E_D            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69D"); }:
                       START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_E_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69E"); }:
                       START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_E_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69F"); }:
                       START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;
fld_69a_E_J            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69J"); }:
                       START_OF_FIELD '69J:' ~(START_OF_FIELD)+ ;

fld_92a_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92B"); }:
                       START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;
fld_92a_E_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_E_H            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92H"); }:
                       START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_E_J            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92J"); }:
                       START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_E_K            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92K"); }:
                       START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_E_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92R"); }:
                       START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_E_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90E"); }:
                       START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;

fld_36a_E_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_E_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36C"); }:
                       START_OF_FIELD '36C:' ~(START_OF_FIELD)+ ;

fld_22a_E1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_E1_H           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_35B_E1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_E1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_E1a_F          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_E1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12A"); }:
                       START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_E1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12B"); }:
                       START_OF_FIELD '12B:' ~(START_OF_FIELD)+ ;
fld_12a_E1a_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12C"); }:
                       START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_E1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_E1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_90a_E1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E1a_E          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90E"); }:
                       START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;

fld_92a_E1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E1a_K          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92K"); }:
                       START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;

fld_36B_E1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_36B_E1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_94a_E1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_E1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_E1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94F"); }:
                       START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_22F_E1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_11A_E1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_69a_E1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69A"); }:
                       START_OF_FIELD '69A:' ~(START_OF_FIELD)+ ;
fld_69a_E1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69B"); }:
                       START_OF_FIELD '69B:' ~(START_OF_FIELD)+ ;
fld_69a_E1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69C"); }:
                       START_OF_FIELD '69C:' ~(START_OF_FIELD)+ ;
fld_69a_E1_D           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69D"); }:
                       START_OF_FIELD '69D:' ~(START_OF_FIELD)+ ;
fld_69a_E1_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69E"); }:
                       START_OF_FIELD '69E:' ~(START_OF_FIELD)+ ;
fld_69a_E1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69F"); }:
                       START_OF_FIELD '69F:' ~(START_OF_FIELD)+ ;
fld_69a_E1_J           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("69J"); }:
                       START_OF_FIELD '69J:' ~(START_OF_FIELD)+ ;

fld_90a_E1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E1_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90E"); }:
                       START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;
fld_90a_E1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90F"); }:
                       START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_E1_J           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90J"); }:
                       START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_E1_K           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90K"); }:
                       START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_E1_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90L"); }:
                       START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_92a_E1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E1_D           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92D"); }:
                       START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;
fld_92a_E1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_E1_K           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92K"); }:
                       START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_E1_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92L"); }:
                       START_OF_FIELD '92L:' ~(START_OF_FIELD)+ ;
fld_92a_E1_M           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92M"); }:
                       START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_E1_N           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92N"); }:
                       START_OF_FIELD '92N:' ~(START_OF_FIELD)+ ;

fld_98a_E1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_E1_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_22a_E2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_E2_H           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_94C_E2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_97a_E2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_E2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97E"); }:
                       START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_19B_E2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19B"); }:
                       START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_98a_E2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_E2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_E2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_E2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_92a_E2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_E2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92B"); }:
                       START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;
fld_92a_E2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_E2_H           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92H"); }:
                       START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_E2_J           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92J"); }:
                       START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_E2_K           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92K"); }:
                       START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_E2_M           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92M"); }:
                       START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_E2_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92R"); }:
                       START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_E2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_E2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_E2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90E"); }:
                       START_OF_FIELD '90E:' ~(START_OF_FIELD)+ ;
fld_90a_E2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90F"); }:
                       START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_E2_J           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90J"); }:
                       START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_E2_K           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90K"); }:
                       START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_E2_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90L"); }:
                       START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_70E_E_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_70E_F_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_95a_F_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_F_Q            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_F_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
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