
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT505Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT505.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT505Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, TAG_BH = 19, TAG_AH = 20, 
    TAG_UH = 21, TAG_MT = 22, TAG_TR = 23, MT_END = 24, LBRACE = 25, RBRACE = 26, 
    COLON = 27, START_OF_FIELD = 28, ANY = 29
  };

  enum {
    RuleMessage = 0, RuleBh = 1, RuleBh_content = 2, RuleAh = 3, RuleAh_content = 4, 
    RuleUh = 5, RuleTr = 6, RuleSys_block = 7, RuleSys_element = 8, RuleSys_element_key = 9, 
    RuleSys_element_content = 10, RuleMt = 11, RuleSeq_A = 12, RuleSeq_A1 = 13, 
    RuleSeq_A2 = 14, RuleSeq_B = 15, RuleSeq_B1 = 16, RuleSeq_B1a = 17, 
    RuleFld_16R_A = 18, RuleFld_20C_A = 19, RuleFld_23G_A = 20, RuleFld_16R_A1 = 21, 
    RuleFld_22F_A1 = 22, RuleFld_98A_A1 = 23, RuleFld_13B_A1 = 24, RuleFld_70C_A1 = 25, 
    RuleFld_16S_A1 = 26, RuleFld_98a_A = 27, RuleFld_22a_A = 28, RuleFld_95a_A = 29, 
    RuleFld_70C_A = 30, RuleFld_16R_A2 = 31, RuleFld_13a_A2 = 32, RuleFld_20C_A2 = 33, 
    RuleFld_16S_A2 = 34, RuleFld_16S_A = 35, RuleFld_16R_B = 36, RuleFld_20C_B = 37, 
    RuleFld_22a_B = 38, RuleFld_98A_B = 39, RuleFld_16R_B1 = 40, RuleFld_35B_B1 = 41, 
    RuleFld_36B_B1 = 42, RuleFld_17B_B1 = 43, RuleFld_16R_B1a = 44, RuleFld_22a_B1a = 45, 
    RuleFld_20C_A_C = 46, RuleFld_23G_A_G = 47, RuleFld_22F_A1_F = 48, RuleFld_98A_A1_A = 49, 
    RuleFld_13B_A1_B = 50, RuleFld_70C_A1_C = 51, RuleFld_98a_A_A = 52, 
    RuleFld_98a_A_C = 53, RuleFld_98a_A_E = 54, RuleFld_22a_A_F = 55, RuleFld_22a_A_H = 56, 
    RuleFld_95a_A_P = 57, RuleFld_95a_A_Q = 58, RuleFld_95a_A_R = 59, RuleFld_70C_A_C = 60, 
    RuleFld_13a_A2_A = 61, RuleFld_13a_A2_B = 62, RuleFld_20C_A2_C = 63, 
    RuleFld_20C_B_C = 64, RuleFld_22a_B_F = 65, RuleFld_22a_B_H = 66, RuleFld_98A_B_A = 67, 
    RuleFld_35B_B1_B = 68, RuleFld_36B_B1_B = 69, RuleFld_17B_B1_B = 70, 
    RuleFld_22a_B1a_F = 71, RuleFld_22a_B1a_H = 72
  };

  SwiftMtParser_MT505Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT505Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  public:
      typedef SwiftMtParser_MT505Lexer tLexer;
      typedef SwiftMtParser_MT505Parser tParser;

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
  class Seq_A2Context;
  class Seq_BContext;
  class Seq_B1Context;
  class Seq_B1aContext;
  class Fld_16R_AContext;
  class Fld_20C_AContext;
  class Fld_23G_AContext;
  class Fld_16R_A1Context;
  class Fld_22F_A1Context;
  class Fld_98A_A1Context;
  class Fld_13B_A1Context;
  class Fld_70C_A1Context;
  class Fld_16S_A1Context;
  class Fld_98a_AContext;
  class Fld_22a_AContext;
  class Fld_95a_AContext;
  class Fld_70C_AContext;
  class Fld_16R_A2Context;
  class Fld_13a_A2Context;
  class Fld_20C_A2Context;
  class Fld_16S_A2Context;
  class Fld_16S_AContext;
  class Fld_16R_BContext;
  class Fld_20C_BContext;
  class Fld_22a_BContext;
  class Fld_98A_BContext;
  class Fld_16R_B1Context;
  class Fld_35B_B1Context;
  class Fld_36B_B1Context;
  class Fld_17B_B1Context;
  class Fld_16R_B1aContext;
  class Fld_22a_B1aContext;
  class Fld_20C_A_CContext;
  class Fld_23G_A_GContext;
  class Fld_22F_A1_FContext;
  class Fld_98A_A1_AContext;
  class Fld_13B_A1_BContext;
  class Fld_70C_A1_CContext;
  class Fld_98a_A_AContext;
  class Fld_98a_A_CContext;
  class Fld_98a_A_EContext;
  class Fld_22a_A_FContext;
  class Fld_22a_A_HContext;
  class Fld_95a_A_PContext;
  class Fld_95a_A_QContext;
  class Fld_95a_A_RContext;
  class Fld_70C_A_CContext;
  class Fld_13a_A2_AContext;
  class Fld_13a_A2_BContext;
  class Fld_20C_A2_CContext;
  class Fld_20C_B_CContext;
  class Fld_22a_B_FContext;
  class Fld_22a_B_HContext;
  class Fld_98A_B_AContext;
  class Fld_35B_B1_BContext;
  class Fld_36B_B1_BContext;
  class Fld_17B_B1_BContext;
  class Fld_22a_B1a_FContext;
  class Fld_22a_B1a_HContext; 

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

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MtContext* mt();

  class  Seq_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT505Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_98a_AContext *fld_98a_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_22a_AContext *fld_22a_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_95a_AContext *fld_95a_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_70C_AContext *fld_70C_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Seq_A2Context *seq_A2Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_23G_AContext *fld_23G_A();
    Fld_22a_AContext *fld_22a_A();
    Fld_16S_AContext *fld_16S_A();
    std::vector<Fld_20C_AContext *> fld_20C_A();
    Fld_20C_AContext* fld_20C_A(size_t i);
    std::vector<Seq_A1Context *> seq_A1();
    Seq_A1Context* seq_A1(size_t i);
    Fld_98a_AContext *fld_98a_A();
    std::vector<Fld_95a_AContext *> fld_95a_A();
    Fld_95a_AContext* fld_95a_A(size_t i);
    Fld_70C_AContext *fld_70C_A();
    std::vector<Seq_A2Context *> seq_A2();
    Seq_A2Context* seq_A2(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_AContext* seq_A();

  class  Seq_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT505Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_22F_A1Context *fld_22F_A1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_98A_A1Context *fld_98A_A1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_13B_A1Context *fld_13B_A1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_70C_A1Context *fld_70C_A1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
    Seq_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A1Context *fld_16R_A1();
    Fld_16S_A1Context *fld_16S_A1();
    Fld_22F_A1Context *fld_22F_A1();
    Fld_98A_A1Context *fld_98A_A1();
    Fld_13B_A1Context *fld_13B_A1();
    Fld_70C_A1Context *fld_70C_A1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A1Context* seq_A1();

  class  Seq_A2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT505Parser::Fld_16R_A2Context *fld_16R_A2Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_13a_A2Context *fld_13a_A2Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_20C_A2Context *fld_20C_A2Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_16S_A2Context *fld_16S_A2Context = nullptr;;
    Seq_A2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A2Context *fld_16R_A2();
    Fld_20C_A2Context *fld_20C_A2();
    Fld_16S_A2Context *fld_16S_A2();
    Fld_13a_A2Context *fld_13a_A2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A2Context* seq_A2();

  class  Seq_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT505Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_20C_BContext *fld_20C_BContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_22a_BContext *fld_22a_BContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_98A_BContext *fld_98A_BContext = nullptr;;
    SwiftMtParser_MT505Parser::Seq_B1Context *seq_B1Context = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    Fld_20C_BContext *fld_20C_B();
    std::vector<Fld_22a_BContext *> fld_22a_B();
    Fld_22a_BContext* fld_22a_B(size_t i);
    Fld_98A_BContext *fld_98A_B();
    Seq_B1Context *seq_B1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT505Parser::Fld_16R_B1Context *fld_16R_B1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_35B_B1Context *fld_35B_B1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_36B_B1Context *fld_36B_B1Context = nullptr;;
    SwiftMtParser_MT505Parser::Fld_17B_B1Context *fld_17B_B1Context = nullptr;;
    SwiftMtParser_MT505Parser::Seq_B1aContext *seq_B1aContext = nullptr;;
    Seq_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1Context *fld_16R_B1();
    Fld_35B_B1Context *fld_35B_B1();
    Fld_36B_B1Context *fld_36B_B1();
    Fld_17B_B1Context *fld_17B_B1();
    Seq_B1aContext *seq_B1a();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1Context* seq_B1();

  class  Seq_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT505Parser::Fld_16R_B1aContext *fld_16R_B1aContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_22a_B1aContext *fld_22a_B1aContext = nullptr;;
    Seq_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1aContext *fld_16R_B1a();
    std::vector<Fld_22a_B1aContext *> fld_22a_B1a();
    Fld_22a_B1aContext* fld_22a_B1a(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1aContext* seq_B1a();

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
    SwiftMtParser_MT505Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
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
    SwiftMtParser_MT505Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
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

  class  Fld_22F_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_22F_A1_FContext *fld_22F_A1_FContext = nullptr;;
    Fld_22F_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_A1_FContext *fld_22F_A1_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_A1Context* fld_22F_A1();

  class  Fld_98A_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_98A_A1_AContext *fld_98A_A1_AContext = nullptr;;
    Fld_98A_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_A1_AContext *fld_98A_A1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_A1Context* fld_98A_A1();

  class  Fld_13B_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_13B_A1_BContext *fld_13B_A1_BContext = nullptr;;
    Fld_13B_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13B_A1_BContext *fld_13B_A1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_A1Context* fld_13B_A1();

  class  Fld_70C_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_70C_A1_CContext *fld_70C_A1_CContext = nullptr;;
    Fld_70C_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_A1_CContext *fld_70C_A1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_A1Context* fld_70C_A1();

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

  class  Fld_98a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_98a_A_AContext *fld_98a_A_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_98a_A_CContext *fld_98a_A_CContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_98a_A_EContext *fld_98a_A_EContext = nullptr;;
    Fld_98a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_A_AContext *fld_98a_A_A();
    Fld_98a_A_CContext *fld_98a_A_C();
    Fld_98a_A_EContext *fld_98a_A_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_AContext* fld_98a_A();

  class  Fld_22a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_22a_A_FContext *fld_22a_A_FContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_22a_A_HContext *fld_22a_A_HContext = nullptr;;
    Fld_22a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_A_FContext *fld_22a_A_F();
    Fld_22a_A_HContext *fld_22a_A_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_AContext* fld_22a_A();

  class  Fld_95a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_95a_A_PContext *fld_95a_A_PContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_95a_A_QContext *fld_95a_A_QContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_95a_A_RContext *fld_95a_A_RContext = nullptr;;
    Fld_95a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_A_PContext *fld_95a_A_P();
    Fld_95a_A_QContext *fld_95a_A_Q();
    Fld_95a_A_RContext *fld_95a_A_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_AContext* fld_95a_A();

  class  Fld_70C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_70C_A_CContext *fld_70C_A_CContext = nullptr;;
    Fld_70C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_A_CContext *fld_70C_A_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_AContext* fld_70C_A();

  class  Fld_16R_A2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_A2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_A2Context* fld_16R_A2();

  class  Fld_13a_A2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_13a_A2_AContext *fld_13a_A2_AContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_13a_A2_BContext *fld_13a_A2_BContext = nullptr;;
    Fld_13a_A2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13a_A2_AContext *fld_13a_A2_A();
    Fld_13a_A2_BContext *fld_13a_A2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A2Context* fld_13a_A2();

  class  Fld_20C_A2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_20C_A2_CContext *fld_20C_A2_CContext = nullptr;;
    Fld_20C_A2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_A2_CContext *fld_20C_A2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_A2Context* fld_20C_A2();

  class  Fld_16S_A2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_A2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_A2Context* fld_16S_A2();

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

  class  Fld_20C_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_20C_B_CContext *fld_20C_B_CContext = nullptr;;
    Fld_20C_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_B_CContext *fld_20C_B_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_BContext* fld_20C_B();

  class  Fld_22a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_22a_B_FContext *fld_22a_B_FContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_22a_B_HContext *fld_22a_B_HContext = nullptr;;
    Fld_22a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_B_FContext *fld_22a_B_F();
    Fld_22a_B_HContext *fld_22a_B_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_BContext* fld_22a_B();

  class  Fld_98A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_98A_B_AContext *fld_98A_B_AContext = nullptr;;
    Fld_98A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_B_AContext *fld_98A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_BContext* fld_98A_B();

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

  class  Fld_35B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_35B_B1_BContext *fld_35B_B1_BContext = nullptr;;
    Fld_35B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_B1_BContext *fld_35B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B1Context* fld_35B_B1();

  class  Fld_36B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_36B_B1_BContext *fld_36B_B1_BContext = nullptr;;
    Fld_36B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_B1_BContext *fld_36B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B1Context* fld_36B_B1();

  class  Fld_17B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_17B_B1_BContext *fld_17B_B1_BContext = nullptr;;
    Fld_17B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_B1_BContext *fld_17B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B1Context* fld_17B_B1();

  class  Fld_16R_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_B1aContext* fld_16R_B1a();

  class  Fld_22a_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext *fld_22a_B1a_FContext = nullptr;;
    SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext *fld_22a_B1a_HContext = nullptr;;
    Fld_22a_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_B1a_FContext *fld_22a_B1a_F();
    Fld_22a_B1a_HContext *fld_22a_B1a_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B1aContext* fld_22a_B1a();

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

  class  Fld_22F_A1_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_A1_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_A1_FContext* fld_22F_A1_F();

  class  Fld_98A_A1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_A1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_A1_AContext* fld_98A_A1_A();

  class  Fld_13B_A1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13B_A1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_A1_BContext* fld_13B_A1_B();

  class  Fld_70C_A1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70C_A1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_A1_CContext* fld_70C_A1_C();

  class  Fld_98a_A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_A_AContext* fld_98a_A_A();

  class  Fld_98a_A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_A_CContext* fld_98a_A_C();

  class  Fld_98a_A_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_A_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_A_EContext* fld_98a_A_E();

  class  Fld_22a_A_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_A_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_A_FContext* fld_22a_A_F();

  class  Fld_22a_A_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_A_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_A_HContext* fld_22a_A_H();

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

  class  Fld_95a_A_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A_RContext* fld_95a_A_R();

  class  Fld_70C_A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70C_A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_A_CContext* fld_70C_A_C();

  class  Fld_13a_A2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A2_AContext* fld_13a_A2_A();

  class  Fld_13a_A2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A2_BContext* fld_13a_A2_B();

  class  Fld_20C_A2_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_A2_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_A2_CContext* fld_20C_A2_C();

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

  class  Fld_22a_B_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_B_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B_FContext* fld_22a_B_F();

  class  Fld_22a_B_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_B_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B_HContext* fld_22a_B_H();

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

  class  Fld_35B_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B1_BContext* fld_35B_B1_B();

  class  Fld_36B_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_36B_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B1_BContext* fld_36B_B1_B();

  class  Fld_17B_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B1_BContext* fld_17B_B1_B();

  class  Fld_22a_B1a_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_B1a_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B1a_FContext* fld_22a_B1a_F();

  class  Fld_22a_B1a_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_B1a_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B1a_HContext* fld_22a_B1a_H();


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
