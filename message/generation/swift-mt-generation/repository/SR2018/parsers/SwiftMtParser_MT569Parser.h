
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT569Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT569.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT569Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, TAG_BH = 25, TAG_AH = 26, 
    TAG_UH = 27, TAG_MT = 28, TAG_TR = 29, MT_END = 30, LBRACE = 31, RBRACE = 32, 
    COLON = 33, START_OF_FIELD = 34, ANY = 35
  };

  enum {
    RuleMessage = 0, RuleBh = 1, RuleBh_content = 2, RuleAh = 3, RuleAh_content = 4, 
    RuleUh = 5, RuleTr = 6, RuleSys_block = 7, RuleSys_element = 8, RuleSys_element_key = 9, 
    RuleSys_element_content = 10, RuleMt = 11, RuleSeq_A = 12, RuleSeq_A1 = 13, 
    RuleSeq_A2 = 14, RuleSeq_B = 15, RuleSeq_C = 16, RuleSeq_C1 = 17, RuleSeq_C1a = 18, 
    RuleFld_16R_A = 19, RuleFld_28E_A = 20, RuleFld_13A_A = 21, RuleFld_20C_A = 22, 
    RuleFld_23G_A = 23, RuleFld_98a_A = 24, RuleFld_22a_A = 25, RuleFld_16R_A1 = 26, 
    RuleFld_95a_A1 = 27, RuleFld_97a_A1 = 28, RuleFld_16S_A1 = 29, RuleFld_16R_A2 = 30, 
    RuleFld_13a_A2 = 31, RuleFld_20C_A2 = 32, RuleFld_16S_A2 = 33, RuleFld_16S_A = 34, 
    RuleFld_16R_B = 35, RuleFld_19A_B = 36, RuleFld_92A_B = 37, RuleFld_25D_B = 38, 
    RuleFld_98a_B = 39, RuleFld_70E_B = 40, RuleFld_16S_B = 41, RuleFld_16R_C = 42, 
    RuleFld_22a_C = 43, RuleFld_19A_C = 44, RuleFld_92A_C = 45, RuleFld_25D_C = 46, 
    RuleFld_16R_C1 = 47, RuleFld_13B_C1 = 48, RuleFld_95a_C1 = 49, RuleFld_19A_C1 = 50, 
    RuleFld_92A_C1 = 51, RuleFld_25D_C1 = 52, RuleFld_16R_C1a = 53, RuleFld_20C_C1a = 54, 
    RuleFld_98a_C1a = 55, RuleFld_19A_C1a = 56, RuleFld_22F_C1a = 57, RuleFld_92a_C1a = 58, 
    RuleFld_25D_C1a = 59, RuleFld_28E_A_E = 60, RuleFld_13A_A_A = 61, RuleFld_20C_A_C = 62, 
    RuleFld_23G_A_G = 63, RuleFld_98a_A_A = 64, RuleFld_98a_A_C = 65, RuleFld_98a_A_E = 66, 
    RuleFld_22a_A_F = 67, RuleFld_22a_A_H = 68, RuleFld_95a_A1_L = 69, RuleFld_95a_A1_P = 70, 
    RuleFld_95a_A1_Q = 71, RuleFld_95a_A1_R = 72, RuleFld_97a_A1_A = 73, 
    RuleFld_97a_A1_B = 74, RuleFld_13a_A2_A = 75, RuleFld_13a_A2_B = 76, 
    RuleFld_20C_A2_C = 77, RuleFld_19A_B_A = 78, RuleFld_92A_B_A = 79, RuleFld_25D_B_D = 80, 
    RuleFld_98a_B_A = 81, RuleFld_98a_B_C = 82, RuleFld_70E_B_E = 83, RuleFld_22a_C_F = 84, 
    RuleFld_22a_C_H = 85, RuleFld_19A_C_A = 86, RuleFld_92A_C_A = 87, RuleFld_25D_C_D = 88, 
    RuleFld_13B_C1_B = 89, RuleFld_95a_C1_L = 90, RuleFld_95a_C1_P = 91, 
    RuleFld_95a_C1_Q = 92, RuleFld_95a_C1_R = 93, RuleFld_19A_C1_A = 94, 
    RuleFld_92A_C1_A = 95, RuleFld_25D_C1_D = 96, RuleFld_20C_C1a_C = 97, 
    RuleFld_98a_C1a_A = 98, RuleFld_98a_C1a_B = 99, RuleFld_98a_C1a_C = 100, 
    RuleFld_19A_C1a_A = 101, RuleFld_22F_C1a_F = 102, RuleFld_92a_C1a_A = 103, 
    RuleFld_92a_C1a_C = 104, RuleFld_25D_C1a_D = 105
  };

  SwiftMtParser_MT569Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT569Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


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
  class Seq_CContext;
  class Seq_C1Context;
  class Seq_C1aContext;
  class Fld_16R_AContext;
  class Fld_28E_AContext;
  class Fld_13A_AContext;
  class Fld_20C_AContext;
  class Fld_23G_AContext;
  class Fld_98a_AContext;
  class Fld_22a_AContext;
  class Fld_16R_A1Context;
  class Fld_95a_A1Context;
  class Fld_97a_A1Context;
  class Fld_16S_A1Context;
  class Fld_16R_A2Context;
  class Fld_13a_A2Context;
  class Fld_20C_A2Context;
  class Fld_16S_A2Context;
  class Fld_16S_AContext;
  class Fld_16R_BContext;
  class Fld_19A_BContext;
  class Fld_92A_BContext;
  class Fld_25D_BContext;
  class Fld_98a_BContext;
  class Fld_70E_BContext;
  class Fld_16S_BContext;
  class Fld_16R_CContext;
  class Fld_22a_CContext;
  class Fld_19A_CContext;
  class Fld_92A_CContext;
  class Fld_25D_CContext;
  class Fld_16R_C1Context;
  class Fld_13B_C1Context;
  class Fld_95a_C1Context;
  class Fld_19A_C1Context;
  class Fld_92A_C1Context;
  class Fld_25D_C1Context;
  class Fld_16R_C1aContext;
  class Fld_20C_C1aContext;
  class Fld_98a_C1aContext;
  class Fld_19A_C1aContext;
  class Fld_22F_C1aContext;
  class Fld_92a_C1aContext;
  class Fld_25D_C1aContext;
  class Fld_28E_A_EContext;
  class Fld_13A_A_AContext;
  class Fld_20C_A_CContext;
  class Fld_23G_A_GContext;
  class Fld_98a_A_AContext;
  class Fld_98a_A_CContext;
  class Fld_98a_A_EContext;
  class Fld_22a_A_FContext;
  class Fld_22a_A_HContext;
  class Fld_95a_A1_LContext;
  class Fld_95a_A1_PContext;
  class Fld_95a_A1_QContext;
  class Fld_95a_A1_RContext;
  class Fld_97a_A1_AContext;
  class Fld_97a_A1_BContext;
  class Fld_13a_A2_AContext;
  class Fld_13a_A2_BContext;
  class Fld_20C_A2_CContext;
  class Fld_19A_B_AContext;
  class Fld_92A_B_AContext;
  class Fld_25D_B_DContext;
  class Fld_98a_B_AContext;
  class Fld_98a_B_CContext;
  class Fld_70E_B_EContext;
  class Fld_22a_C_FContext;
  class Fld_22a_C_HContext;
  class Fld_19A_C_AContext;
  class Fld_92A_C_AContext;
  class Fld_25D_C_DContext;
  class Fld_13B_C1_BContext;
  class Fld_95a_C1_LContext;
  class Fld_95a_C1_PContext;
  class Fld_95a_C1_QContext;
  class Fld_95a_C1_RContext;
  class Fld_19A_C1_AContext;
  class Fld_92A_C1_AContext;
  class Fld_25D_C1_DContext;
  class Fld_20C_C1a_CContext;
  class Fld_98a_C1a_AContext;
  class Fld_98a_C1a_BContext;
  class Fld_98a_C1a_CContext;
  class Fld_19A_C1a_AContext;
  class Fld_22F_C1a_FContext;
  class Fld_92a_C1a_AContext;
  class Fld_92a_C1a_CContext;
  class Fld_25D_C1a_DContext; 

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
    Seq_BContext *seq_B();
    antlr4::tree::TerminalNode *MT_END();
    std::vector<Seq_CContext *> seq_C();
    Seq_CContext* seq_C(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MtContext* mt();

  class  Seq_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT569Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_28E_AContext *fld_28E_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_13A_AContext *fld_13A_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_AContext *fld_98a_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_22a_AContext *fld_22a_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT569Parser::Seq_A2Context *seq_A2Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_28E_AContext *fld_28E_A();
    Fld_20C_AContext *fld_20C_A();
    Fld_23G_AContext *fld_23G_A();
    Fld_16S_AContext *fld_16S_A();
    Fld_13A_AContext *fld_13A_A();
    Fld_98a_AContext *fld_98a_A();
    std::vector<Fld_22a_AContext *> fld_22a_A();
    Fld_22a_AContext* fld_22a_A(size_t i);
    std::vector<Seq_A1Context *> seq_A1();
    Seq_A1Context* seq_A1(size_t i);
    std::vector<Seq_A2Context *> seq_A2();
    Seq_A2Context* seq_A2(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_AContext* seq_A();

  class  Seq_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT569Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_A1Context *fld_95a_A1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_97a_A1Context *fld_97a_A1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
    Seq_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A1Context *fld_16R_A1();
    Fld_16S_A1Context *fld_16S_A1();
    std::vector<Fld_95a_A1Context *> fld_95a_A1();
    Fld_95a_A1Context* fld_95a_A1(size_t i);
    Fld_97a_A1Context *fld_97a_A1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A1Context* seq_A1();

  class  Seq_A2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT569Parser::Fld_16R_A2Context *fld_16R_A2Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_13a_A2Context *fld_13a_A2Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_20C_A2Context *fld_20C_A2Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_16S_A2Context *fld_16S_A2Context = nullptr;;
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
    SwiftMtParser_MT569Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_19A_BContext *fld_19A_BContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_92A_BContext *fld_92A_BContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_25D_BContext *fld_25D_BContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_BContext *fld_98a_BContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_70E_BContext *fld_70E_BContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_16S_BContext *fld_16S_BContext = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    Fld_98a_BContext *fld_98a_B();
    Fld_16S_BContext *fld_16S_B();
    std::vector<Fld_19A_BContext *> fld_19A_B();
    Fld_19A_BContext* fld_19A_B(size_t i);
    Fld_92A_BContext *fld_92A_B();
    Fld_25D_BContext *fld_25D_B();
    Fld_70E_BContext *fld_70E_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT569Parser::Fld_16R_CContext *fld_16R_CContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_22a_CContext *fld_22a_CContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_19A_CContext *fld_19A_CContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_92A_CContext *fld_92A_CContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_25D_CContext *fld_25D_CContext = nullptr;;
    SwiftMtParser_MT569Parser::Seq_C1Context *seq_C1Context = nullptr;;
    Seq_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_CContext *fld_16R_C();
    std::vector<Fld_22a_CContext *> fld_22a_C();
    Fld_22a_CContext* fld_22a_C(size_t i);
    std::vector<Fld_19A_CContext *> fld_19A_C();
    Fld_19A_CContext* fld_19A_C(size_t i);
    Fld_92A_CContext *fld_92A_C();
    Fld_25D_CContext *fld_25D_C();
    std::vector<Seq_C1Context *> seq_C1();
    Seq_C1Context* seq_C1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_CContext* seq_C();

  class  Seq_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT569Parser::Fld_16R_C1Context *fld_16R_C1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_13B_C1Context *fld_13B_C1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_C1Context *fld_95a_C1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_19A_C1Context *fld_19A_C1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_92A_C1Context *fld_92A_C1Context = nullptr;;
    SwiftMtParser_MT569Parser::Fld_25D_C1Context *fld_25D_C1Context = nullptr;;
    SwiftMtParser_MT569Parser::Seq_C1aContext *seq_C1aContext = nullptr;;
    Seq_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C1Context *fld_16R_C1();
    std::vector<Fld_13B_C1Context *> fld_13B_C1();
    Fld_13B_C1Context* fld_13B_C1(size_t i);
    std::vector<Fld_95a_C1Context *> fld_95a_C1();
    Fld_95a_C1Context* fld_95a_C1(size_t i);
    std::vector<Fld_19A_C1Context *> fld_19A_C1();
    Fld_19A_C1Context* fld_19A_C1(size_t i);
    Fld_92A_C1Context *fld_92A_C1();
    Fld_25D_C1Context *fld_25D_C1();
    std::vector<Seq_C1aContext *> seq_C1a();
    Seq_C1aContext* seq_C1a(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C1Context* seq_C1();

  class  Seq_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT569Parser::Fld_16R_C1aContext *fld_16R_C1aContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_20C_C1aContext *fld_20C_C1aContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_C1aContext *fld_98a_C1aContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_19A_C1aContext *fld_19A_C1aContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_22F_C1aContext *fld_22F_C1aContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_92a_C1aContext *fld_92a_C1aContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_25D_C1aContext *fld_25D_C1aContext = nullptr;;
    Seq_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C1aContext *fld_16R_C1a();
    std::vector<Fld_20C_C1aContext *> fld_20C_C1a();
    Fld_20C_C1aContext* fld_20C_C1a(size_t i);
    std::vector<Fld_98a_C1aContext *> fld_98a_C1a();
    Fld_98a_C1aContext* fld_98a_C1a(size_t i);
    std::vector<Fld_19A_C1aContext *> fld_19A_C1a();
    Fld_19A_C1aContext* fld_19A_C1a(size_t i);
    std::vector<Fld_22F_C1aContext *> fld_22F_C1a();
    Fld_22F_C1aContext* fld_22F_C1a(size_t i);
    std::vector<Fld_92a_C1aContext *> fld_92a_C1a();
    Fld_92a_C1aContext* fld_92a_C1a(size_t i);
    std::vector<Fld_25D_C1aContext *> fld_25D_C1a();
    Fld_25D_C1aContext* fld_25D_C1a(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C1aContext* seq_C1a();

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

  class  Fld_28E_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_28E_A_EContext *fld_28E_A_EContext = nullptr;;
    Fld_28E_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_28E_A_EContext *fld_28E_A_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_28E_AContext* fld_28E_A();

  class  Fld_13A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_13A_A_AContext *fld_13A_A_AContext = nullptr;;
    Fld_13A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13A_A_AContext *fld_13A_A_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13A_AContext* fld_13A_A();

  class  Fld_20C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
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
    SwiftMtParser_MT569Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
    Fld_23G_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_23G_A_GContext *fld_23G_A_G();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_23G_AContext* fld_23G_A();

  class  Fld_98a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_98a_A_AContext *fld_98a_A_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_A_CContext *fld_98a_A_CContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_A_EContext *fld_98a_A_EContext = nullptr;;
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
    SwiftMtParser_MT569Parser::Fld_22a_A_FContext *fld_22a_A_FContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_22a_A_HContext *fld_22a_A_HContext = nullptr;;
    Fld_22a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_A_FContext *fld_22a_A_F();
    Fld_22a_A_HContext *fld_22a_A_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_AContext* fld_22a_A();

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

  class  Fld_95a_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_95a_A1_LContext *fld_95a_A1_LContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_A1_PContext *fld_95a_A1_PContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_A1_QContext *fld_95a_A1_QContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_A1_RContext *fld_95a_A1_RContext = nullptr;;
    Fld_95a_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_A1_LContext *fld_95a_A1_L();
    Fld_95a_A1_PContext *fld_95a_A1_P();
    Fld_95a_A1_QContext *fld_95a_A1_Q();
    Fld_95a_A1_RContext *fld_95a_A1_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A1Context* fld_95a_A1();

  class  Fld_97a_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_97a_A1_AContext *fld_97a_A1_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_97a_A1_BContext *fld_97a_A1_BContext = nullptr;;
    Fld_97a_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_A1_AContext *fld_97a_A1_A();
    Fld_97a_A1_BContext *fld_97a_A1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_A1Context* fld_97a_A1();

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
    SwiftMtParser_MT569Parser::Fld_13a_A2_AContext *fld_13a_A2_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_13a_A2_BContext *fld_13a_A2_BContext = nullptr;;
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
    SwiftMtParser_MT569Parser::Fld_20C_A2_CContext *fld_20C_A2_CContext = nullptr;;
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

  class  Fld_19A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_19A_B_AContext *fld_19A_B_AContext = nullptr;;
    Fld_19A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_B_AContext *fld_19A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_BContext* fld_19A_B();

  class  Fld_92A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_92A_B_AContext *fld_92A_B_AContext = nullptr;;
    Fld_92A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_B_AContext *fld_92A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_BContext* fld_92A_B();

  class  Fld_25D_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_25D_B_DContext *fld_25D_B_DContext = nullptr;;
    Fld_25D_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_B_DContext *fld_25D_B_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_BContext* fld_25D_B();

  class  Fld_98a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_98a_B_AContext *fld_98a_B_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_B_CContext *fld_98a_B_CContext = nullptr;;
    Fld_98a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B_AContext *fld_98a_B_A();
    Fld_98a_B_CContext *fld_98a_B_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_BContext* fld_98a_B();

  class  Fld_70E_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_70E_B_EContext *fld_70E_B_EContext = nullptr;;
    Fld_70E_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70E_B_EContext *fld_70E_B_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_BContext* fld_70E_B();

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

  class  Fld_22a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_22a_C_FContext *fld_22a_C_FContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_22a_C_HContext *fld_22a_C_HContext = nullptr;;
    Fld_22a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_C_FContext *fld_22a_C_F();
    Fld_22a_C_HContext *fld_22a_C_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_CContext* fld_22a_C();

  class  Fld_19A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_19A_C_AContext *fld_19A_C_AContext = nullptr;;
    Fld_19A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_C_AContext *fld_19A_C_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_CContext* fld_19A_C();

  class  Fld_92A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_92A_C_AContext *fld_92A_C_AContext = nullptr;;
    Fld_92A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_C_AContext *fld_92A_C_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_CContext* fld_92A_C();

  class  Fld_25D_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_25D_C_DContext *fld_25D_C_DContext = nullptr;;
    Fld_25D_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_C_DContext *fld_25D_C_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_CContext* fld_25D_C();

  class  Fld_16R_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_C1Context* fld_16R_C1();

  class  Fld_13B_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_13B_C1_BContext *fld_13B_C1_BContext = nullptr;;
    Fld_13B_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13B_C1_BContext *fld_13B_C1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_C1Context* fld_13B_C1();

  class  Fld_95a_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_95a_C1_LContext *fld_95a_C1_LContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_C1_PContext *fld_95a_C1_PContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_C1_QContext *fld_95a_C1_QContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_95a_C1_RContext *fld_95a_C1_RContext = nullptr;;
    Fld_95a_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_C1_LContext *fld_95a_C1_L();
    Fld_95a_C1_PContext *fld_95a_C1_P();
    Fld_95a_C1_QContext *fld_95a_C1_Q();
    Fld_95a_C1_RContext *fld_95a_C1_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1Context* fld_95a_C1();

  class  Fld_19A_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_19A_C1_AContext *fld_19A_C1_AContext = nullptr;;
    Fld_19A_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_C1_AContext *fld_19A_C1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_C1Context* fld_19A_C1();

  class  Fld_92A_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_92A_C1_AContext *fld_92A_C1_AContext = nullptr;;
    Fld_92A_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_C1_AContext *fld_92A_C1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_C1Context* fld_92A_C1();

  class  Fld_25D_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_25D_C1_DContext *fld_25D_C1_DContext = nullptr;;
    Fld_25D_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_C1_DContext *fld_25D_C1_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_C1Context* fld_25D_C1();

  class  Fld_16R_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_C1aContext* fld_16R_C1a();

  class  Fld_20C_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_20C_C1a_CContext *fld_20C_C1a_CContext = nullptr;;
    Fld_20C_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_C1a_CContext *fld_20C_C1a_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_C1aContext* fld_20C_C1a();

  class  Fld_98a_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_98a_C1a_AContext *fld_98a_C1a_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_C1a_BContext *fld_98a_C1a_BContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_98a_C1a_CContext *fld_98a_C1a_CContext = nullptr;;
    Fld_98a_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_C1a_AContext *fld_98a_C1a_A();
    Fld_98a_C1a_BContext *fld_98a_C1a_B();
    Fld_98a_C1a_CContext *fld_98a_C1a_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C1aContext* fld_98a_C1a();

  class  Fld_19A_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_19A_C1a_AContext *fld_19A_C1a_AContext = nullptr;;
    Fld_19A_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_C1a_AContext *fld_19A_C1a_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_C1aContext* fld_19A_C1a();

  class  Fld_22F_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_22F_C1a_FContext *fld_22F_C1a_FContext = nullptr;;
    Fld_22F_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_C1a_FContext *fld_22F_C1a_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_C1aContext* fld_22F_C1a();

  class  Fld_92a_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_92a_C1a_AContext *fld_92a_C1a_AContext = nullptr;;
    SwiftMtParser_MT569Parser::Fld_92a_C1a_CContext *fld_92a_C1a_CContext = nullptr;;
    Fld_92a_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92a_C1a_AContext *fld_92a_C1a_A();
    Fld_92a_C1a_CContext *fld_92a_C1a_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_C1aContext* fld_92a_C1a();

  class  Fld_25D_C1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT569Parser::Fld_25D_C1a_DContext *fld_25D_C1a_DContext = nullptr;;
    Fld_25D_C1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_C1a_DContext *fld_25D_C1a_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_C1aContext* fld_25D_C1a();

  class  Fld_28E_A_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_28E_A_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_28E_A_EContext* fld_28E_A_E();

  class  Fld_13A_A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13A_A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13A_A_AContext* fld_13A_A_A();

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

  class  Fld_95a_A1_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A1_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A1_LContext* fld_95a_A1_L();

  class  Fld_95a_A1_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A1_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A1_PContext* fld_95a_A1_P();

  class  Fld_95a_A1_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A1_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A1_QContext* fld_95a_A1_Q();

  class  Fld_95a_A1_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A1_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A1_RContext* fld_95a_A1_R();

  class  Fld_97a_A1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_A1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_A1_AContext* fld_97a_A1_A();

  class  Fld_97a_A1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_A1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_A1_BContext* fld_97a_A1_B();

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

  class  Fld_19A_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_B_AContext* fld_19A_B_A();

  class  Fld_92A_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_B_AContext* fld_92A_B_A();

  class  Fld_25D_B_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_25D_B_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_B_DContext* fld_25D_B_D();

  class  Fld_98a_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B_AContext* fld_98a_B_A();

  class  Fld_98a_B_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B_CContext* fld_98a_B_C();

  class  Fld_70E_B_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70E_B_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B_EContext* fld_70E_B_E();

  class  Fld_22a_C_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_C_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_C_FContext* fld_22a_C_F();

  class  Fld_22a_C_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_C_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_C_HContext* fld_22a_C_H();

  class  Fld_19A_C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_C_AContext* fld_19A_C_A();

  class  Fld_92A_C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_C_AContext* fld_92A_C_A();

  class  Fld_25D_C_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_25D_C_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_C_DContext* fld_25D_C_D();

  class  Fld_13B_C1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13B_C1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_C1_BContext* fld_13B_C1_B();

  class  Fld_95a_C1_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C1_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1_LContext* fld_95a_C1_L();

  class  Fld_95a_C1_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C1_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1_PContext* fld_95a_C1_P();

  class  Fld_95a_C1_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C1_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1_QContext* fld_95a_C1_Q();

  class  Fld_95a_C1_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C1_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1_RContext* fld_95a_C1_R();

  class  Fld_19A_C1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_C1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_C1_AContext* fld_19A_C1_A();

  class  Fld_92A_C1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_C1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_C1_AContext* fld_92A_C1_A();

  class  Fld_25D_C1_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_25D_C1_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_C1_DContext* fld_25D_C1_D();

  class  Fld_20C_C1a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_C1a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_C1a_CContext* fld_20C_C1a_C();

  class  Fld_98a_C1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C1a_AContext* fld_98a_C1a_A();

  class  Fld_98a_C1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C1a_BContext* fld_98a_C1a_B();

  class  Fld_98a_C1a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C1a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C1a_CContext* fld_98a_C1a_C();

  class  Fld_19A_C1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_C1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_C1a_AContext* fld_19A_C1a_A();

  class  Fld_22F_C1a_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_C1a_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_C1a_FContext* fld_22F_C1a_F();

  class  Fld_92a_C1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_C1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_C1a_AContext* fld_92a_C1a_A();

  class  Fld_92a_C1a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_C1a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_C1a_CContext* fld_92a_C1a_C();

  class  Fld_25D_C1a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_25D_C1a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_C1a_DContext* fld_25D_C1a_D();


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
