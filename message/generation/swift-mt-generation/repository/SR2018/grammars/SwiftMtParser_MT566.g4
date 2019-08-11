grammar SwiftMtParser_MT566;

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
#include "SwiftMtParser_MT566Lexer.h"
}

@parser::members {
public:
    typedef SwiftMtParser_MT566Lexer tLexer;
    typedef SwiftMtParser_MT566Parser tParser;

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
                       : TAG_MT seq_A seq_B seq_C? seq_D seq_E?  MT_END;

seq_A                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("A"); } :
                       fld_16R_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_A.fld); }
                       fld_20C_A+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_A.fld); }
                       fld_23G_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_23G_A.fld); }
                       fld_22F_A { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_A.fld); }
                       fld_98a_A? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_A.fld); }
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
                       fld_95a_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_B.fld); }
                       fld_97A_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97A_B.fld); }
                       fld_94a_B? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94a_B.fld); }
                       fld_35B_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_B.fld); }
                       seq_B1? { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_B1.elem); }
                       fld_93a_B+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_93a_B.fld); }
                       fld_16S_B { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B.fld); }
                       ;

seq_B1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("B1"); } :
                       fld_16R_B1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_B1.fld); }
                       fld_94B_B1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94B_B1.fld); }
                       fld_22F_B1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_B1.fld); }
                       fld_12a_B1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_12a_B1.fld); }
                       fld_11A_B1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_B1.fld); }
                       fld_98A_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98A_B1.fld); }
                       fld_92a_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_B1.fld); }
                       fld_36B_B1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_B1.fld); }
                       fld_16S_B1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_B1.fld); }
                       ;

seq_C                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("C"); } :
                       fld_16R_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_C.fld); }
                       fld_98a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_C.fld); }
                       fld_69a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_69a_C.fld); }
                       fld_99A_C? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_99A_C.fld); }
                       fld_92a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_C.fld); }
                       fld_90a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_C.fld); }
                       fld_36a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36a_C.fld); }
                       fld_13a_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13a_C.fld); }
                       fld_17B_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_17B_C.fld); }
                       fld_22F_C* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_C.fld); }
                       fld_16S_C { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_C.fld); }
                       ;

seq_D                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D"); } :
                       fld_16R_D { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D.fld); }
                       fld_13A_D { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_13A_D.fld); }
                       fld_22a_D+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_D.fld); }
                       fld_11A_D? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_D.fld); }
                       fld_98a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_D.fld); }
                       fld_69a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_69a_D.fld); }
                       fld_92a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_D.fld); }
                       fld_90a_D* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_D.fld); }
                       fld_94B_D? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94B_D.fld); }
                       seq_D1* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_D1.elem); }
                       seq_D2* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_D2.elem); }
                       fld_16S_D { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D.fld); }
                       ;

seq_D1                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D1"); } :
                       fld_16R_D1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D1.fld); }
                       fld_22a_D1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_D1.fld); }
                       fld_35B_D1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_35B_D1.fld); }
                       seq_D1a? { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_D1a.elem); }
                       fld_36B_D1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_D1.fld); }
                       fld_94a_D1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94a_D1.fld); }
                       fld_22F_D1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_D1.fld); }
                       fld_11A_D1? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_D1.fld); }
                       fld_90a_D1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_D1.fld); }
                       fld_92a_D1* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_D1.fld); }
                       fld_98a_D1+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_D1.fld); }
                       seq_D1b* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_D1b.elem); }
                       fld_16S_D1 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D1.fld); }
                       ;

seq_D1a                returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D1a"); } :
                       fld_16R_D1a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D1a.fld); }
                       fld_94B_D1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94B_D1a.fld); }
                       fld_22F_D1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22F_D1a.fld); }
                       fld_12a_D1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_12a_D1a.fld); }
                       fld_11A_D1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_11A_D1a.fld); }
                       fld_98A_D1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98A_D1a.fld); }
                       fld_90a_D1a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_D1a.fld); }
                       fld_92A_D1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92A_D1a.fld); }
                       fld_36B_D1a* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_36B_D1a.fld); }
                       fld_16S_D1a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D1a.fld); }
                       ;

seq_D1b                returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D1b"); } :
                       fld_16R_D1b { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D1b.fld); }
                       fld_95a_D1b+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_D1b.fld); }
                       fld_97A_D1b? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97A_D1b.fld); }
                       fld_20C_D1b? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_D1b.fld); }
                       fld_16S_D1b { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D1b.fld); }
                       ;

seq_D2                 returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D2"); } :
                       fld_16R_D2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D2.fld); }
                       fld_22a_D2+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_22a_D2.fld); }
                       fld_94C_D2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_94C_D2.fld); }
                       fld_97a_D2? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_D2.fld); }
                       seq_D2a* { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_D2a.elem); }
                       fld_19B_D2+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_19B_D2.fld); }
                       fld_98a_D2+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_D2.fld); }
                       fld_92a_D2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_92a_D2.fld); }
                       fld_90a_D2* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_90a_D2.fld); }
                       seq_D2b? { $elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom($seq_D2b.elem); }
                       fld_16S_D2 { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D2.fld); }
                       ;

seq_D2a                returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D2a"); } :
                       fld_16R_D2a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D2a.fld); }
                       fld_95a_D2a+ { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_D2a.fld); }
                       fld_97a_D2a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_97a_D2a.fld); }
                       fld_20C_D2a? { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_D2a.fld); }
                       fld_16S_D2a { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D2a.fld); }
                       ;

seq_D2b                returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("D2b"); } :
                       fld_16R_D2b { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_D2b.fld); }
                       fld_20C_D2b { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_20C_D2b.fld); }
                       fld_98a_D2b* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_98a_D2b.fld); }
                       fld_16S_D2b { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16S_D2b.fld); }
                       ;

seq_E                  returns [message::definition::swift::mt::Sequence elem] @init { $elem.set_tag("E"); } :
                       fld_16R_E { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_16R_E.fld); }
                       fld_70E_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_70E_E.fld); }
                       fld_95a_E* { $elem.mutable_objects()->Add()->mutable_field()->MergeFrom($fld_95a_E.fld); }
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

fld_22F_A              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_A_F { $fld.MergeFrom($fld_22F_A_F.fld); }
                       ;

fld_98a_A              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_A_A { $fld.MergeFrom($fld_98a_A_A.fld); }
                       | fld_98a_A_C { $fld.MergeFrom($fld_98a_A_C.fld); }
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

fld_95a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_B_P { $fld.MergeFrom($fld_95a_B_P.fld); }
                       | fld_95a_B_R { $fld.MergeFrom($fld_95a_B_R.fld); }
                       ;

fld_97A_B              returns [message::definition::swift::mt::Field fld]  :
                       fld_97A_B_A { $fld.MergeFrom($fld_97A_B_A.fld); }
                       ;

fld_94a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_94a_B_B { $fld.MergeFrom($fld_94a_B_B.fld); }
                       | fld_94a_B_C { $fld.MergeFrom($fld_94a_B_C.fld); }
                       | fld_94a_B_F { $fld.MergeFrom($fld_94a_B_F.fld); }
                       ;

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
                       ;

fld_36B_B1             returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_B1_B { $fld.MergeFrom($fld_36B_B1_B.fld); }
                       ;

fld_16S_B1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_93a_B              returns [message::definition::swift::mt::Field fld]  :
                         fld_93a_B_B { $fld.MergeFrom($fld_93a_B_B.fld); }
                       | fld_93a_B_C { $fld.MergeFrom($fld_93a_B_C.fld); }
                       ;

fld_16S_B              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_98a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_C_A { $fld.MergeFrom($fld_98a_C_A.fld); }
                       | fld_98a_C_B { $fld.MergeFrom($fld_98a_C_B.fld); }
                       | fld_98a_C_C { $fld.MergeFrom($fld_98a_C_C.fld); }
                       | fld_98a_C_E { $fld.MergeFrom($fld_98a_C_E.fld); }
                       ;

fld_69a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_69a_C_A { $fld.MergeFrom($fld_69a_C_A.fld); }
                       | fld_69a_C_B { $fld.MergeFrom($fld_69a_C_B.fld); }
                       | fld_69a_C_C { $fld.MergeFrom($fld_69a_C_C.fld); }
                       | fld_69a_C_D { $fld.MergeFrom($fld_69a_C_D.fld); }
                       | fld_69a_C_E { $fld.MergeFrom($fld_69a_C_E.fld); }
                       | fld_69a_C_F { $fld.MergeFrom($fld_69a_C_F.fld); }
                       ;

fld_99A_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_99A_C_A { $fld.MergeFrom($fld_99A_C_A.fld); }
                       ;

fld_92a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_C_A { $fld.MergeFrom($fld_92a_C_A.fld); }
                       | fld_92a_C_F { $fld.MergeFrom($fld_92a_C_F.fld); }
                       | fld_92a_C_K { $fld.MergeFrom($fld_92a_C_K.fld); }
                       | fld_92a_C_P { $fld.MergeFrom($fld_92a_C_P.fld); }
                       ;

fld_90a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_C_A { $fld.MergeFrom($fld_90a_C_A.fld); }
                       | fld_90a_C_B { $fld.MergeFrom($fld_90a_C_B.fld); }
                       | fld_90a_C_L { $fld.MergeFrom($fld_90a_C_L.fld); }
                       ;

fld_36a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_36a_C_B { $fld.MergeFrom($fld_36a_C_B.fld); }
                       | fld_36a_C_C { $fld.MergeFrom($fld_36a_C_C.fld); }
                       ;

fld_13a_C              returns [message::definition::swift::mt::Field fld]  :
                         fld_13a_C_A { $fld.MergeFrom($fld_13a_C_A.fld); }
                       | fld_13a_C_B { $fld.MergeFrom($fld_13a_C_B.fld); }
                       ;

fld_17B_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_17B_C_B { $fld.MergeFrom($fld_17B_C_B.fld); }
                       ;

fld_22F_C              returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_C_F { $fld.MergeFrom($fld_22F_C_F.fld); }
                       ;

fld_16S_C              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_D              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_13A_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_13A_D_A { $fld.MergeFrom($fld_13A_D_A.fld); }
                       ;

fld_22a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_D_F { $fld.MergeFrom($fld_22a_D_F.fld); }
                       | fld_22a_D_H { $fld.MergeFrom($fld_22a_D_H.fld); }
                       ;

fld_11A_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_D_A { $fld.MergeFrom($fld_11A_D_A.fld); }
                       ;

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
                       ;

fld_92a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_D_A { $fld.MergeFrom($fld_92a_D_A.fld); }
                       | fld_92a_D_F { $fld.MergeFrom($fld_92a_D_F.fld); }
                       | fld_92a_D_H { $fld.MergeFrom($fld_92a_D_H.fld); }
                       | fld_92a_D_J { $fld.MergeFrom($fld_92a_D_J.fld); }
                       | fld_92a_D_R { $fld.MergeFrom($fld_92a_D_R.fld); }
                       ;

fld_90a_D              returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_D_A { $fld.MergeFrom($fld_90a_D_A.fld); }
                       | fld_90a_D_B { $fld.MergeFrom($fld_90a_D_B.fld); }
                       ;

fld_94B_D              returns [message::definition::swift::mt::Field fld]  :
                       fld_94B_D_B { $fld.MergeFrom($fld_94B_D_B.fld); }
                       ;

fld_16R_D1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_22a_D1             returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_D1_F { $fld.MergeFrom($fld_22a_D1_F.fld); }
                       | fld_22a_D1_H { $fld.MergeFrom($fld_22a_D1_H.fld); }
                       ;

fld_35B_D1             returns [message::definition::swift::mt::Field fld]  :
                       fld_35B_D1_B { $fld.MergeFrom($fld_35B_D1_B.fld); }
                       ;

fld_16R_D1a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_94B_D1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_94B_D1a_B { $fld.MergeFrom($fld_94B_D1a_B.fld); }
                       ;

fld_22F_D1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_D1a_F { $fld.MergeFrom($fld_22F_D1a_F.fld); }
                       ;

fld_12a_D1a            returns [message::definition::swift::mt::Field fld]  :
                         fld_12a_D1a_A { $fld.MergeFrom($fld_12a_D1a_A.fld); }
                       | fld_12a_D1a_C { $fld.MergeFrom($fld_12a_D1a_C.fld); }
                       ;

fld_11A_D1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_D1a_A { $fld.MergeFrom($fld_11A_D1a_A.fld); }
                       ;

fld_98A_D1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_98A_D1a_A { $fld.MergeFrom($fld_98A_D1a_A.fld); }
                       ;

fld_90a_D1a            returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_D1a_A { $fld.MergeFrom($fld_90a_D1a_A.fld); }
                       | fld_90a_D1a_B { $fld.MergeFrom($fld_90a_D1a_B.fld); }
                       ;

fld_92A_D1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_92A_D1a_A { $fld.MergeFrom($fld_92A_D1a_A.fld); }
                       ;

fld_36B_D1a            returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_D1a_B { $fld.MergeFrom($fld_36B_D1a_B.fld); }
                       ;

fld_16S_D1a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_36B_D1             returns [message::definition::swift::mt::Field fld]  :
                       fld_36B_D1_B { $fld.MergeFrom($fld_36B_D1_B.fld); }
                       ;

fld_94a_D1             returns [message::definition::swift::mt::Field fld]  :
                         fld_94a_D1_B { $fld.MergeFrom($fld_94a_D1_B.fld); }
                       | fld_94a_D1_C { $fld.MergeFrom($fld_94a_D1_C.fld); }
                       | fld_94a_D1_F { $fld.MergeFrom($fld_94a_D1_F.fld); }
                       ;

fld_22F_D1             returns [message::definition::swift::mt::Field fld]  :
                       fld_22F_D1_F { $fld.MergeFrom($fld_22F_D1_F.fld); }
                       ;

fld_11A_D1             returns [message::definition::swift::mt::Field fld]  :
                       fld_11A_D1_A { $fld.MergeFrom($fld_11A_D1_A.fld); }
                       ;

fld_90a_D1             returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_D1_A { $fld.MergeFrom($fld_90a_D1_A.fld); }
                       | fld_90a_D1_B { $fld.MergeFrom($fld_90a_D1_B.fld); }
                       | fld_90a_D1_F { $fld.MergeFrom($fld_90a_D1_F.fld); }
                       | fld_90a_D1_J { $fld.MergeFrom($fld_90a_D1_J.fld); }
                       | fld_90a_D1_K { $fld.MergeFrom($fld_90a_D1_K.fld); }
                       | fld_90a_D1_L { $fld.MergeFrom($fld_90a_D1_L.fld); }
                       ;

fld_92a_D1             returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_D1_A { $fld.MergeFrom($fld_92a_D1_A.fld); }
                       | fld_92a_D1_D { $fld.MergeFrom($fld_92a_D1_D.fld); }
                       | fld_92a_D1_F { $fld.MergeFrom($fld_92a_D1_F.fld); }
                       | fld_92a_D1_L { $fld.MergeFrom($fld_92a_D1_L.fld); }
                       | fld_92a_D1_M { $fld.MergeFrom($fld_92a_D1_M.fld); }
                       | fld_92a_D1_N { $fld.MergeFrom($fld_92a_D1_N.fld); }
                       ;

fld_98a_D1             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_D1_A { $fld.MergeFrom($fld_98a_D1_A.fld); }
                       | fld_98a_D1_B { $fld.MergeFrom($fld_98a_D1_B.fld); }
                       | fld_98a_D1_C { $fld.MergeFrom($fld_98a_D1_C.fld); }
                       | fld_98a_D1_E { $fld.MergeFrom($fld_98a_D1_E.fld); }
                       ;

fld_16R_D1b            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_D1b            returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_D1b_C { $fld.MergeFrom($fld_95a_D1b_C.fld); }
                       | fld_95a_D1b_P { $fld.MergeFrom($fld_95a_D1b_P.fld); }
                       | fld_95a_D1b_Q { $fld.MergeFrom($fld_95a_D1b_Q.fld); }
                       | fld_95a_D1b_R { $fld.MergeFrom($fld_95a_D1b_R.fld); }
                       | fld_95a_D1b_S { $fld.MergeFrom($fld_95a_D1b_S.fld); }
                       ;

fld_97A_D1b            returns [message::definition::swift::mt::Field fld]  :
                       fld_97A_D1b_A { $fld.MergeFrom($fld_97A_D1b_A.fld); }
                       ;

fld_20C_D1b            returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_D1b_C { $fld.MergeFrom($fld_20C_D1b_C.fld); }
                       ;

fld_16S_D1b            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_D1             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_D2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_22a_D2             returns [message::definition::swift::mt::Field fld]  :
                         fld_22a_D2_F { $fld.MergeFrom($fld_22a_D2_F.fld); }
                       | fld_22a_D2_H { $fld.MergeFrom($fld_22a_D2_H.fld); }
                       ;

fld_94C_D2             returns [message::definition::swift::mt::Field fld]  :
                       fld_94C_D2_C { $fld.MergeFrom($fld_94C_D2_C.fld); }
                       ;

fld_97a_D2             returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_D2_A { $fld.MergeFrom($fld_97a_D2_A.fld); }
                       | fld_97a_D2_E { $fld.MergeFrom($fld_97a_D2_E.fld); }
                       ;

fld_16R_D2a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_95a_D2a            returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_D2a_P { $fld.MergeFrom($fld_95a_D2a_P.fld); }
                       | fld_95a_D2a_Q { $fld.MergeFrom($fld_95a_D2a_Q.fld); }
                       | fld_95a_D2a_R { $fld.MergeFrom($fld_95a_D2a_R.fld); }
                       | fld_95a_D2a_S { $fld.MergeFrom($fld_95a_D2a_S.fld); }
                       ;

fld_97a_D2a            returns [message::definition::swift::mt::Field fld]  :
                         fld_97a_D2a_A { $fld.MergeFrom($fld_97a_D2a_A.fld); }
                       | fld_97a_D2a_E { $fld.MergeFrom($fld_97a_D2a_E.fld); }
                       ;

fld_20C_D2a            returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_D2a_C { $fld.MergeFrom($fld_20C_D2a_C.fld); }
                       ;

fld_16S_D2a            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_19B_D2             returns [message::definition::swift::mt::Field fld]  :
                       fld_19B_D2_B { $fld.MergeFrom($fld_19B_D2_B.fld); }
                       ;

fld_98a_D2             returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_D2_A { $fld.MergeFrom($fld_98a_D2_A.fld); }
                       | fld_98a_D2_C { $fld.MergeFrom($fld_98a_D2_C.fld); }
                       | fld_98a_D2_E { $fld.MergeFrom($fld_98a_D2_E.fld); }
                       ;

fld_92a_D2             returns [message::definition::swift::mt::Field fld]  :
                         fld_92a_D2_A { $fld.MergeFrom($fld_92a_D2_A.fld); }
                       | fld_92a_D2_B { $fld.MergeFrom($fld_92a_D2_B.fld); }
                       | fld_92a_D2_F { $fld.MergeFrom($fld_92a_D2_F.fld); }
                       | fld_92a_D2_H { $fld.MergeFrom($fld_92a_D2_H.fld); }
                       | fld_92a_D2_J { $fld.MergeFrom($fld_92a_D2_J.fld); }
                       | fld_92a_D2_M { $fld.MergeFrom($fld_92a_D2_M.fld); }
                       | fld_92a_D2_R { $fld.MergeFrom($fld_92a_D2_R.fld); }
                       ;

fld_90a_D2             returns [message::definition::swift::mt::Field fld]  :
                         fld_90a_D2_A { $fld.MergeFrom($fld_90a_D2_A.fld); }
                       | fld_90a_D2_B { $fld.MergeFrom($fld_90a_D2_B.fld); }
                       | fld_90a_D2_F { $fld.MergeFrom($fld_90a_D2_F.fld); }
                       | fld_90a_D2_J { $fld.MergeFrom($fld_90a_D2_J.fld); }
                       | fld_90a_D2_K { $fld.MergeFrom($fld_90a_D2_K.fld); }
                       | fld_90a_D2_L { $fld.MergeFrom($fld_90a_D2_L.fld); }
                       ;

fld_16R_D2b            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_20C_D2b            returns [message::definition::swift::mt::Field fld]  :
                       fld_20C_D2b_C { $fld.MergeFrom($fld_20C_D2b_C.fld); }
                       ;

fld_98a_D2b            returns [message::definition::swift::mt::Field fld]  :
                         fld_98a_D2b_A { $fld.MergeFrom($fld_98a_D2b_A.fld); }
                       | fld_98a_D2b_C { $fld.MergeFrom($fld_98a_D2b_C.fld); }
                       ;

fld_16S_D2b            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_D2             returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16S_D              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
                       START_OF_FIELD '16S:' ~(START_OF_FIELD)+;

fld_16R_E              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16R"); } : 
                       START_OF_FIELD '16R:' ~(START_OF_FIELD)+;

fld_70E_E              returns [message::definition::swift::mt::Field fld]  :
                       fld_70E_E_E { $fld.MergeFrom($fld_70E_E_E.fld); }
                       ;

fld_95a_E              returns [message::definition::swift::mt::Field fld]  :
                         fld_95a_E_P { $fld.MergeFrom($fld_95a_E_P.fld); }
                       | fld_95a_E_Q { $fld.MergeFrom($fld_95a_E_Q.fld); }
                       | fld_95a_E_R { $fld.MergeFrom($fld_95a_E_R.fld); }
                       ;

fld_16S_E              returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("16S"); } : 
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

fld_22F_A1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13a_A1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_A1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_20C_A1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_95a_B_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_B_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;

fld_97A_B_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_94a_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_B_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_B_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94F"); }:
                       START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_35B_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_B1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_B1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_B1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12A"); }:
                       START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
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

fld_36B_B1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_93a_B_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("93B"); }:
                       START_OF_FIELD '93B:' ~(START_OF_FIELD)+ ;
fld_93a_B_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("93C"); }:
                       START_OF_FIELD '93C:' ~(START_OF_FIELD)+ ;

fld_98a_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_C_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_C_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

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

fld_99A_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("99A"); }:
                       START_OF_FIELD '99A:' ~(START_OF_FIELD)+ ;

fld_92a_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_C_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_C_K            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92K"); }:
                       START_OF_FIELD '92K:' ~(START_OF_FIELD)+ ;
fld_92a_C_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92P"); }:
                       START_OF_FIELD '92P:' ~(START_OF_FIELD)+ ;

fld_90a_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_C_L            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90L"); }:
                       START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_36a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;
fld_36a_C_C            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36C"); }:
                       START_OF_FIELD '36C:' ~(START_OF_FIELD)+ ;

fld_13a_C_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;
fld_13a_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13B"); }:
                       START_OF_FIELD '13B:' ~(START_OF_FIELD)+ ;

fld_17B_C_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("17B"); }:
                       START_OF_FIELD '17B:' ~(START_OF_FIELD)+ ;

fld_22F_C_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_13A_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("13A"); }:
                       START_OF_FIELD '13A:' ~(START_OF_FIELD)+ ;

fld_22a_D_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_D_H            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_11A_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

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

fld_92a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D_F            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D_H            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92H"); }:
                       START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_D_J            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92J"); }:
                       START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_D_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92R"); }:
                       START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_D_A            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_94B_D_B            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22a_D1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_D1_H           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_35B_D1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("35B"); }:
                       START_OF_FIELD '35B:' ~(START_OF_FIELD)+ ;

fld_94B_D1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;

fld_22F_D1a_F          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_12a_D1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12A"); }:
                       START_OF_FIELD '12A:' ~(START_OF_FIELD)+ ;
fld_12a_D1a_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("12C"); }:
                       START_OF_FIELD '12C:' ~(START_OF_FIELD)+ ;

fld_11A_D1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_98A_D1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;

fld_90a_D1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;

fld_92A_D1a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;

fld_36B_D1a_B          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_36B_D1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("36B"); }:
                       START_OF_FIELD '36B:' ~(START_OF_FIELD)+ ;

fld_94a_D1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94B"); }:
                       START_OF_FIELD '94B:' ~(START_OF_FIELD)+ ;
fld_94a_D1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;
fld_94a_D1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94F"); }:
                       START_OF_FIELD '94F:' ~(START_OF_FIELD)+ ;

fld_22F_D1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;

fld_11A_D1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("11A"); }:
                       START_OF_FIELD '11A:' ~(START_OF_FIELD)+ ;

fld_90a_D1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_D1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90F"); }:
                       START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_D1_J           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90J"); }:
                       START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_D1_K           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90K"); }:
                       START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_D1_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90L"); }:
                       START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_92a_D1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D1_D           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92D"); }:
                       START_OF_FIELD '92D:' ~(START_OF_FIELD)+ ;
fld_92a_D1_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D1_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92L"); }:
                       START_OF_FIELD '92L:' ~(START_OF_FIELD)+ ;
fld_92a_D1_M           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92M"); }:
                       START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_D1_N           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92N"); }:
                       START_OF_FIELD '92N:' ~(START_OF_FIELD)+ ;

fld_98a_D1_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D1_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98B"); }:
                       START_OF_FIELD '98B:' ~(START_OF_FIELD)+ ;
fld_98a_D1_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_D1_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_95a_D1b_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95C"); }:
                       START_OF_FIELD '95C:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_P          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_Q          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_R          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D1b_S          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95S"); }:
                       START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97A_D1b_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;

fld_20C_D1b_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_22a_D2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22F"); }:
                       START_OF_FIELD '22F:' ~(START_OF_FIELD)+ ;
fld_22a_D2_H           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("22H"); }:
                       START_OF_FIELD '22H:' ~(START_OF_FIELD)+ ;

fld_94C_D2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("94C"); }:
                       START_OF_FIELD '94C:' ~(START_OF_FIELD)+ ;

fld_97a_D2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97E"); }:
                       START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_95a_D2a_P          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_D2a_Q          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_D2a_R          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
                       START_OF_FIELD '95R:' ~(START_OF_FIELD)+ ;
fld_95a_D2a_S          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95S"); }:
                       START_OF_FIELD '95S:' ~(START_OF_FIELD)+ ;

fld_97a_D2a_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97A"); }:
                       START_OF_FIELD '97A:' ~(START_OF_FIELD)+ ;
fld_97a_D2a_E          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("97E"); }:
                       START_OF_FIELD '97E:' ~(START_OF_FIELD)+ ;

fld_20C_D2a_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_19B_D2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("19B"); }:
                       START_OF_FIELD '19B:' ~(START_OF_FIELD)+ ;

fld_98a_D2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D2_C           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;
fld_98a_D2_E           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98E"); }:
                       START_OF_FIELD '98E:' ~(START_OF_FIELD)+ ;

fld_92a_D2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92A"); }:
                       START_OF_FIELD '92A:' ~(START_OF_FIELD)+ ;
fld_92a_D2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92B"); }:
                       START_OF_FIELD '92B:' ~(START_OF_FIELD)+ ;
fld_92a_D2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92F"); }:
                       START_OF_FIELD '92F:' ~(START_OF_FIELD)+ ;
fld_92a_D2_H           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92H"); }:
                       START_OF_FIELD '92H:' ~(START_OF_FIELD)+ ;
fld_92a_D2_J           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92J"); }:
                       START_OF_FIELD '92J:' ~(START_OF_FIELD)+ ;
fld_92a_D2_M           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92M"); }:
                       START_OF_FIELD '92M:' ~(START_OF_FIELD)+ ;
fld_92a_D2_R           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("92R"); }:
                       START_OF_FIELD '92R:' ~(START_OF_FIELD)+ ;

fld_90a_D2_A           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90A"); }:
                       START_OF_FIELD '90A:' ~(START_OF_FIELD)+ ;
fld_90a_D2_B           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90B"); }:
                       START_OF_FIELD '90B:' ~(START_OF_FIELD)+ ;
fld_90a_D2_F           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90F"); }:
                       START_OF_FIELD '90F:' ~(START_OF_FIELD)+ ;
fld_90a_D2_J           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90J"); }:
                       START_OF_FIELD '90J:' ~(START_OF_FIELD)+ ;
fld_90a_D2_K           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90K"); }:
                       START_OF_FIELD '90K:' ~(START_OF_FIELD)+ ;
fld_90a_D2_L           returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("90L"); }:
                       START_OF_FIELD '90L:' ~(START_OF_FIELD)+ ;

fld_20C_D2b_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("20C"); }:
                       START_OF_FIELD '20C:' ~(START_OF_FIELD)+ ;

fld_98a_D2b_A          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98A"); }:
                       START_OF_FIELD '98A:' ~(START_OF_FIELD)+ ;
fld_98a_D2b_C          returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("98C"); }:
                       START_OF_FIELD '98C:' ~(START_OF_FIELD)+ ;

fld_70E_E_E            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("70E"); }:
                       START_OF_FIELD '70E:' ~(START_OF_FIELD)+ ;

fld_95a_E_P            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95P"); }:
                       START_OF_FIELD '95P:' ~(START_OF_FIELD)+ ;
fld_95a_E_Q            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95Q"); }:
                       START_OF_FIELD '95Q:' ~(START_OF_FIELD)+ ;
fld_95a_E_R            returns [message::definition::swift::mt::Field fld] @init { $fld.set_tag("95R"); }:
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