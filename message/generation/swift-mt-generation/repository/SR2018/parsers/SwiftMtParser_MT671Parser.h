
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT671Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT671.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT671Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    TAG_BH = 15, TAG_AH = 16, TAG_UH = 17, TAG_MT = 18, TAG_TR = 19, MT_END = 20, 
    LBRACE = 21, RBRACE = 22, COLON = 23, START_OF_FIELD = 24, ANY = 25
  };

  enum {
    RuleMessage = 0, RuleBh = 1, RuleBh_content = 2, RuleAh = 3, RuleAh_content = 4, 
    RuleUh = 5, RuleTr = 6, RuleSys_block = 7, RuleSys_element = 8, RuleSys_element_key = 9, 
    RuleSys_element_content = 10, RuleMt = 11, RuleSeq_A = 12, RuleSeq_A1 = 13, 
    RuleSeq_B = 14, RuleSeq_B1 = 15, RuleSeq_B2 = 16, RuleSeq_C = 17, RuleFld_16R_A = 18, 
    RuleFld_20C_A = 19, RuleFld_23G_A = 20, RuleFld_16R_A1 = 21, RuleFld_20C_A1 = 22, 
    RuleFld_16S_A1 = 23, RuleFld_95a_A = 24, RuleFld_22F_A = 25, RuleFld_97A_A = 26, 
    RuleFld_16S_A = 27, RuleFld_16R_B = 28, RuleFld_22H_B = 29, RuleFld_20C_B = 30, 
    RuleFld_11A_B = 31, RuleFld_98A_B = 32, RuleFld_22F_B = 33, RuleFld_16R_B1 = 34, 
    RuleFld_95a_B1 = 35, RuleFld_97A_B1 = 36, RuleFld_16S_B1 = 37, RuleFld_16R_B2 = 38, 
    RuleFld_70E_B2 = 39, RuleFld_22F_B2 = 40, RuleFld_22H_B2 = 41, RuleFld_16S_B2 = 42, 
    RuleFld_16S_B = 43, RuleFld_16R_C = 44, RuleFld_70E_C = 45, RuleFld_22F_C = 46, 
    RuleFld_16S_C = 47, RuleFld_20C_A_C = 48, RuleFld_23G_A_G = 49, RuleFld_20C_A1_C = 50, 
    RuleFld_95a_A_P = 51, RuleFld_95a_A_Q = 52, RuleFld_22F_A_F = 53, RuleFld_97A_A_A = 54, 
    RuleFld_22H_B_H = 55, RuleFld_20C_B_C = 56, RuleFld_11A_B_A = 57, RuleFld_98A_B_A = 58, 
    RuleFld_22F_B_F = 59, RuleFld_95a_B1_P = 60, RuleFld_95a_B1_Q = 61, 
    RuleFld_95a_B1_R = 62, RuleFld_95a_B1_S = 63, RuleFld_97A_B1_A = 64, 
    RuleFld_70E_B2_E = 65, RuleFld_22F_B2_F = 66, RuleFld_22H_B2_H = 67, 
    RuleFld_70E_C_E = 68, RuleFld_22F_C_F = 69
  };

  SwiftMtParser_MT671Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT671Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  public:
      typedef SwiftMtParser_MT671Lexer tLexer;
      typedef SwiftMtParser_MT671Parser tParser;

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


  class MessageContext;
  class BhContext;
  class Bh_contentContext;
  class AhContext;
  class Ah_contentContext;
  class UhContext;
  class TrContext;
  class Sys_blockContext;
  class Sys_elementContext;
  class Sys_element_keyContext;
  class Sys_element_contentContext;
  class MtContext;
  class Seq_AContext;
  class Seq_A1Context;
  class Seq_BContext;
  class Seq_B1Context;
  class Seq_B2Context;
  class Seq_CContext;
  class Fld_16R_AContext;
  class Fld_20C_AContext;
  class Fld_23G_AContext;
  class Fld_16R_A1Context;
  class Fld_20C_A1Context;
  class Fld_16S_A1Context;
  class Fld_95a_AContext;
  class Fld_22F_AContext;
  class Fld_97A_AContext;
  class Fld_16S_AContext;
  class Fld_16R_BContext;
  class Fld_22H_BContext;
  class Fld_20C_BContext;
  class Fld_11A_BContext;
  class Fld_98A_BContext;
  class Fld_22F_BContext;
  class Fld_16R_B1Context;
  class Fld_95a_B1Context;
  class Fld_97A_B1Context;
  class Fld_16S_B1Context;
  class Fld_16R_B2Context;
  class Fld_70E_B2Context;
  class Fld_22F_B2Context;
  class Fld_22H_B2Context;
  class Fld_16S_B2Context;
  class Fld_16S_BContext;
  class Fld_16R_CContext;
  class Fld_70E_CContext;
  class Fld_22F_CContext;
  class Fld_16S_CContext;
  class Fld_20C_A_CContext;
  class Fld_23G_A_GContext;
  class Fld_20C_A1_CContext;
  class Fld_95a_A_PContext;
  class Fld_95a_A_QContext;
  class Fld_22F_A_FContext;
  class Fld_97A_A_AContext;
  class Fld_22H_B_HContext;
  class Fld_20C_B_CContext;
  class Fld_11A_B_AContext;
  class Fld_98A_B_AContext;
  class Fld_22F_B_FContext;
  class Fld_95a_B1_PContext;
  class Fld_95a_B1_QContext;
  class Fld_95a_B1_RContext;
  class Fld_95a_B1_SContext;
  class Fld_97A_B1_AContext;
  class Fld_70E_B2_EContext;
  class Fld_22F_B2_FContext;
  class Fld_22H_B2_HContext;
  class Fld_70E_C_EContext;
  class Fld_22F_C_FContext; 

  class  MessageContext : public antlr4::ParserRuleContext {
  public:
    MessageContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BhContext *bh();
    AhContext *ah();
    MtContext *mt();
    antlr4::tree::TerminalNode *EOF();
    UhContext *uh();
    TrContext *tr();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MessageContext* message();

  class  BhContext : public antlr4::ParserRuleContext {
  public:
    BhContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAG_BH();
    Bh_contentContext *bh_content();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BhContext* bh();

  class  Bh_contentContext : public antlr4::ParserRuleContext {
  public:
    Bh_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RBRACE();
    antlr4::tree::TerminalNode* RBRACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Bh_contentContext* bh_content();

  class  AhContext : public antlr4::ParserRuleContext {
  public:
    AhContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAG_AH();
    Ah_contentContext *ah_content();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AhContext* ah();

  class  Ah_contentContext : public antlr4::ParserRuleContext {
  public:
    Ah_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RBRACE();
    antlr4::tree::TerminalNode* RBRACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Ah_contentContext* ah_content();

  class  UhContext : public antlr4::ParserRuleContext {
  public:
    UhContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAG_UH();
    Sys_blockContext *sys_block();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  UhContext* uh();

  class  TrContext : public antlr4::ParserRuleContext {
  public:
    TrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAG_TR();
    Sys_blockContext *sys_block();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TrContext* tr();

  class  Sys_blockContext : public antlr4::ParserRuleContext {
  public:
    Sys_blockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Sys_elementContext *> sys_element();
    Sys_elementContext* sys_element(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sys_blockContext* sys_block();

  class  Sys_elementContext : public antlr4::ParserRuleContext {
  public:
    Sys_elementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    Sys_element_keyContext *sys_element_key();
    antlr4::tree::TerminalNode *COLON();
    Sys_element_contentContext *sys_element_content();
    antlr4::tree::TerminalNode *RBRACE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sys_elementContext* sys_element();

  class  Sys_element_keyContext : public antlr4::ParserRuleContext {
  public:
    Sys_element_keyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACE();
    antlr4::tree::TerminalNode* RBRACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sys_element_keyContext* sys_element_key();

  class  Sys_element_contentContext : public antlr4::ParserRuleContext {
  public:
    Sys_element_contentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> RBRACE();
    antlr4::tree::TerminalNode* RBRACE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Sys_element_contentContext* sys_element_content();

  class  MtContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::MessageText elem;
    MtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAG_MT();
    Seq_AContext *seq_A();
    antlr4::tree::TerminalNode *MT_END();
    std::vector<Seq_BContext *> seq_B();
    Seq_BContext* seq_B(size_t i);
    Seq_CContext *seq_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MtContext* mt();

  class  Seq_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT671Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT671Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_95a_AContext *fld_95a_AContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_22F_AContext *fld_22F_AContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_97A_AContext *fld_97A_AContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_20C_AContext *fld_20C_A();
    Fld_23G_AContext *fld_23G_A();
    Fld_22F_AContext *fld_22F_A();
    Fld_16S_AContext *fld_16S_A();
    std::vector<Seq_A1Context *> seq_A1();
    Seq_A1Context* seq_A1(size_t i);
    std::vector<Fld_95a_AContext *> fld_95a_A();
    Fld_95a_AContext* fld_95a_A(size_t i);
    Fld_97A_AContext *fld_97A_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_AContext* seq_A();

  class  Seq_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT671Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_20C_A1Context *fld_20C_A1Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
    Seq_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A1Context *fld_16R_A1();
    Fld_20C_A1Context *fld_20C_A1();
    Fld_16S_A1Context *fld_16S_A1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A1Context* seq_A1();

  class  Seq_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT671Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_22H_BContext *fld_22H_BContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_20C_BContext *fld_20C_BContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_11A_BContext *fld_11A_BContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_98A_BContext *fld_98A_BContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_22F_BContext *fld_22F_BContext = nullptr;;
    SwiftMtParser_MT671Parser::Seq_B1Context *seq_B1Context = nullptr;;
    SwiftMtParser_MT671Parser::Seq_B2Context *seq_B2Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_16S_BContext *fld_16S_BContext = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    Fld_22H_BContext *fld_22H_B();
    Fld_11A_BContext *fld_11A_B();
    Fld_98A_BContext *fld_98A_B();
    Fld_16S_BContext *fld_16S_B();
    Fld_20C_BContext *fld_20C_B();
    std::vector<Fld_22F_BContext *> fld_22F_B();
    Fld_22F_BContext* fld_22F_B(size_t i);
    std::vector<Seq_B1Context *> seq_B1();
    Seq_B1Context* seq_B1(size_t i);
    Seq_B2Context *seq_B2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT671Parser::Fld_16R_B1Context *fld_16R_B1Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_95a_B1Context *fld_95a_B1Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_97A_B1Context *fld_97A_B1Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_16S_B1Context *fld_16S_B1Context = nullptr;;
    Seq_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1Context *fld_16R_B1();
    Fld_16S_B1Context *fld_16S_B1();
    std::vector<Fld_95a_B1Context *> fld_95a_B1();
    Fld_95a_B1Context* fld_95a_B1(size_t i);
    Fld_97A_B1Context *fld_97A_B1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1Context* seq_B1();

  class  Seq_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT671Parser::Fld_16R_B2Context *fld_16R_B2Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_70E_B2Context *fld_70E_B2Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_22F_B2Context *fld_22F_B2Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_22H_B2Context *fld_22H_B2Context = nullptr;;
    SwiftMtParser_MT671Parser::Fld_16S_B2Context *fld_16S_B2Context = nullptr;;
    Seq_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B2Context *fld_16R_B2();
    Fld_16S_B2Context *fld_16S_B2();
    std::vector<Fld_70E_B2Context *> fld_70E_B2();
    Fld_70E_B2Context* fld_70E_B2(size_t i);
    Fld_22F_B2Context *fld_22F_B2();
    Fld_22H_B2Context *fld_22H_B2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B2Context* seq_B2();

  class  Seq_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT671Parser::Fld_16R_CContext *fld_16R_CContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_70E_CContext *fld_70E_CContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_22F_CContext *fld_22F_CContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_16S_CContext *fld_16S_CContext = nullptr;;
    Seq_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_CContext *fld_16R_C();
    Fld_16S_CContext *fld_16S_C();
    std::vector<Fld_70E_CContext *> fld_70E_C();
    Fld_70E_CContext* fld_70E_C(size_t i);
    Fld_22F_CContext *fld_22F_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_CContext* seq_C();

  class  Fld_16R_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_AContext* fld_16R_A();

  class  Fld_20C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
    Fld_20C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_A_CContext *fld_20C_A_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_AContext* fld_20C_A();

  class  Fld_23G_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
    Fld_23G_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_23G_A_GContext *fld_23G_A_G();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_23G_AContext* fld_23G_A();

  class  Fld_16R_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_A1Context* fld_16R_A1();

  class  Fld_20C_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_20C_A1_CContext *fld_20C_A1_CContext = nullptr;;
    Fld_20C_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_A1_CContext *fld_20C_A1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_A1Context* fld_20C_A1();

  class  Fld_16S_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_A1Context* fld_16S_A1();

  class  Fld_95a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_95a_A_PContext *fld_95a_A_PContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_95a_A_QContext *fld_95a_A_QContext = nullptr;;
    Fld_95a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_A_PContext *fld_95a_A_P();
    Fld_95a_A_QContext *fld_95a_A_Q();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_AContext* fld_95a_A();

  class  Fld_22F_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_22F_A_FContext *fld_22F_A_FContext = nullptr;;
    Fld_22F_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_A_FContext *fld_22F_A_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_AContext* fld_22F_A();

  class  Fld_97A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_97A_A_AContext *fld_97A_A_AContext = nullptr;;
    Fld_97A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97A_A_AContext *fld_97A_A_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97A_AContext* fld_97A_A();

  class  Fld_16S_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_AContext* fld_16S_A();

  class  Fld_16R_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_BContext* fld_16R_B();

  class  Fld_22H_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_22H_B_HContext *fld_22H_B_HContext = nullptr;;
    Fld_22H_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_B_HContext *fld_22H_B_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_BContext* fld_22H_B();

  class  Fld_20C_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_20C_B_CContext *fld_20C_B_CContext = nullptr;;
    Fld_20C_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_B_CContext *fld_20C_B_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_BContext* fld_20C_B();

  class  Fld_11A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_11A_B_AContext *fld_11A_B_AContext = nullptr;;
    Fld_11A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_11A_B_AContext *fld_11A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_BContext* fld_11A_B();

  class  Fld_98A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_98A_B_AContext *fld_98A_B_AContext = nullptr;;
    Fld_98A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_B_AContext *fld_98A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_BContext* fld_98A_B();

  class  Fld_22F_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_22F_B_FContext *fld_22F_B_FContext = nullptr;;
    Fld_22F_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_B_FContext *fld_22F_B_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_BContext* fld_22F_B();

  class  Fld_16R_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_B1Context* fld_16R_B1();

  class  Fld_95a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_95a_B1_PContext *fld_95a_B1_PContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_95a_B1_QContext *fld_95a_B1_QContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_95a_B1_RContext *fld_95a_B1_RContext = nullptr;;
    SwiftMtParser_MT671Parser::Fld_95a_B1_SContext *fld_95a_B1_SContext = nullptr;;
    Fld_95a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_B1_PContext *fld_95a_B1_P();
    Fld_95a_B1_QContext *fld_95a_B1_Q();
    Fld_95a_B1_RContext *fld_95a_B1_R();
    Fld_95a_B1_SContext *fld_95a_B1_S();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B1Context* fld_95a_B1();

  class  Fld_97A_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_97A_B1_AContext *fld_97A_B1_AContext = nullptr;;
    Fld_97A_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97A_B1_AContext *fld_97A_B1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97A_B1Context* fld_97A_B1();

  class  Fld_16S_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_B1Context* fld_16S_B1();

  class  Fld_16R_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_B2Context* fld_16R_B2();

  class  Fld_70E_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_70E_B2_EContext *fld_70E_B2_EContext = nullptr;;
    Fld_70E_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70E_B2_EContext *fld_70E_B2_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B2Context* fld_70E_B2();

  class  Fld_22F_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_22F_B2_FContext *fld_22F_B2_FContext = nullptr;;
    Fld_22F_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_B2_FContext *fld_22F_B2_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B2Context* fld_22F_B2();

  class  Fld_22H_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_22H_B2_HContext *fld_22H_B2_HContext = nullptr;;
    Fld_22H_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_B2_HContext *fld_22H_B2_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_B2Context* fld_22H_B2();

  class  Fld_16S_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_B2Context* fld_16S_B2();

  class  Fld_16S_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_BContext* fld_16S_B();

  class  Fld_16R_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_CContext* fld_16R_C();

  class  Fld_70E_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_70E_C_EContext *fld_70E_C_EContext = nullptr;;
    Fld_70E_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70E_C_EContext *fld_70E_C_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_CContext* fld_70E_C();

  class  Fld_22F_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT671Parser::Fld_22F_C_FContext *fld_22F_C_FContext = nullptr;;
    Fld_22F_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_C_FContext *fld_22F_C_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_CContext* fld_22F_C();

  class  Fld_16S_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_CContext* fld_16S_C();

  class  Fld_20C_A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_A_CContext* fld_20C_A_C();

  class  Fld_23G_A_GContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_23G_A_GContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_23G_A_GContext* fld_23G_A_G();

  class  Fld_20C_A1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_A1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_A1_CContext* fld_20C_A1_C();

  class  Fld_95a_A_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A_PContext* fld_95a_A_P();

  class  Fld_95a_A_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A_QContext* fld_95a_A_Q();

  class  Fld_22F_A_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_A_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_A_FContext* fld_22F_A_F();

  class  Fld_97A_A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97A_A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97A_A_AContext* fld_97A_A_A();

  class  Fld_22H_B_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22H_B_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_B_HContext* fld_22H_B_H();

  class  Fld_20C_B_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_B_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_B_CContext* fld_20C_B_C();

  class  Fld_11A_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_11A_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_B_AContext* fld_11A_B_A();

  class  Fld_98A_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_B_AContext* fld_98A_B_A();

  class  Fld_22F_B_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_B_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B_FContext* fld_22F_B_F();

  class  Fld_95a_B1_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B1_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B1_PContext* fld_95a_B1_P();

  class  Fld_95a_B1_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B1_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B1_QContext* fld_95a_B1_Q();

  class  Fld_95a_B1_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B1_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B1_RContext* fld_95a_B1_R();

  class  Fld_95a_B1_SContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B1_SContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B1_SContext* fld_95a_B1_S();

  class  Fld_97A_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97A_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97A_B1_AContext* fld_97A_B1_A();

  class  Fld_70E_B2_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70E_B2_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B2_EContext* fld_70E_B2_E();

  class  Fld_22F_B2_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_B2_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B2_FContext* fld_22F_B2_F();

  class  Fld_22H_B2_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22H_B2_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_B2_HContext* fld_22H_B2_H();

  class  Fld_70E_C_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70E_C_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_C_EContext* fld_70E_C_E();

  class  Fld_22F_C_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_C_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_C_FContext* fld_22F_C_F();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace message::definition::swift::mt::parsers::sr2018
