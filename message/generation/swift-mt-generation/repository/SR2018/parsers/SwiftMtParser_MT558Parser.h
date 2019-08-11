
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT558Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT558.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT558Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, TAG_BH = 31, TAG_AH = 32, 
    TAG_UH = 33, TAG_MT = 34, TAG_TR = 35, MT_END = 36, LBRACE = 37, RBRACE = 38, 
    COLON = 39, START_OF_FIELD = 40, ANY = 41
  };

  enum {
    RuleMessage = 0, RuleBh = 1, RuleBh_content = 2, RuleAh = 3, RuleAh_content = 4, 
    RuleUh = 5, RuleTr = 6, RuleSys_block = 7, RuleSys_element = 8, RuleSys_element_key = 9, 
    RuleSys_element_content = 10, RuleMt = 11, RuleSeq_A = 12, RuleSeq_A1 = 13, 
    RuleSeq_A2 = 14, RuleSeq_A2a = 15, RuleSeq_A3 = 16, RuleSeq_B = 17, 
    RuleSeq_C = 18, RuleSeq_D = 19, RuleSeq_E = 20, RuleFld_16R_A = 21, 
    RuleFld_28E_A = 22, RuleFld_20C_A = 23, RuleFld_23G_A = 24, RuleFld_98a_A = 25, 
    RuleFld_22a_A = 26, RuleFld_13B_A = 27, RuleFld_16R_A1 = 28, RuleFld_95a_A1 = 29, 
    RuleFld_97a_A1 = 30, RuleFld_16S_A1 = 31, RuleFld_16R_A2 = 32, RuleFld_25D_A2 = 33, 
    RuleFld_16R_A2a = 34, RuleFld_24B_A2a = 35, RuleFld_70D_A2a = 36, RuleFld_16S_A2a = 37, 
    RuleFld_16S_A2 = 38, RuleFld_17B_A = 39, RuleFld_19A_A = 40, RuleFld_70a_A = 41, 
    RuleFld_16R_A3 = 42, RuleFld_13a_A3 = 43, RuleFld_20C_A3 = 44, RuleFld_16S_A3 = 45, 
    RuleFld_16S_A = 46, RuleFld_16R_B = 47, RuleFld_99B_B = 48, RuleFld_98a_B = 49, 
    RuleFld_19A_B = 50, RuleFld_92a_B = 51, RuleFld_22a_B = 52, RuleFld_16S_B = 53, 
    RuleFld_16R_C = 54, RuleFld_22H_C = 55, RuleFld_35B_C = 56, RuleFld_36B_C = 57, 
    RuleFld_25D_C = 58, RuleFld_17B_C = 59, RuleFld_97a_C = 60, RuleFld_20C_C = 61, 
    RuleFld_19A_C = 62, RuleFld_70D_C = 63, RuleFld_16S_C = 64, RuleFld_16R_D = 65, 
    RuleFld_22H_D = 66, RuleFld_19A_D = 67, RuleFld_20C_D = 68, RuleFld_25D_D = 69, 
    RuleFld_17B_D = 70, RuleFld_97a_D = 71, RuleFld_70D_D = 72, RuleFld_16S_D = 73, 
    RuleFld_16R_E = 74, RuleFld_95a_E = 75, RuleFld_16S_E = 76, RuleFld_28E_A_E = 77, 
    RuleFld_20C_A_C = 78, RuleFld_23G_A_G = 79, RuleFld_98a_A_A = 80, RuleFld_98a_A_C = 81, 
    RuleFld_98a_A_E = 82, RuleFld_22a_A_F = 83, RuleFld_22a_A_H = 84, RuleFld_13B_A_B = 85, 
    RuleFld_95a_A1_P = 86, RuleFld_95a_A1_Q = 87, RuleFld_95a_A1_R = 88, 
    RuleFld_97a_A1_A = 89, RuleFld_97a_A1_B = 90, RuleFld_25D_A2_D = 91, 
    RuleFld_24B_A2a_B = 92, RuleFld_70D_A2a_D = 93, RuleFld_17B_A_B = 94, 
    RuleFld_19A_A_A = 95, RuleFld_70a_A_D = 96, RuleFld_70a_A_E = 97, RuleFld_13a_A3_A = 98, 
    RuleFld_13a_A3_B = 99, RuleFld_20C_A3_C = 100, RuleFld_99B_B_B = 101, 
    RuleFld_98a_B_A = 102, RuleFld_98a_B_B = 103, RuleFld_98a_B_C = 104, 
    RuleFld_19A_B_A = 105, RuleFld_92a_B_A = 106, RuleFld_92a_B_C = 107, 
    RuleFld_22a_B_F = 108, RuleFld_22a_B_H = 109, RuleFld_22H_C_H = 110, 
    RuleFld_35B_C_B = 111, RuleFld_36B_C_B = 112, RuleFld_25D_C_D = 113, 
    RuleFld_17B_C_B = 114, RuleFld_97a_C_A = 115, RuleFld_97a_C_B = 116, 
    RuleFld_20C_C_C = 117, RuleFld_19A_C_A = 118, RuleFld_70D_C_D = 119, 
    RuleFld_22H_D_H = 120, RuleFld_19A_D_A = 121, RuleFld_20C_D_C = 122, 
    RuleFld_25D_D_D = 123, RuleFld_17B_D_B = 124, RuleFld_97a_D_A = 125, 
    RuleFld_97a_D_E = 126, RuleFld_70D_D_D = 127, RuleFld_95a_E_P = 128, 
    RuleFld_95a_E_Q = 129, RuleFld_95a_E_R = 130
  };

  SwiftMtParser_MT558Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT558Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  public:
      typedef SwiftMtParser_MT558Lexer tLexer;
      typedef SwiftMtParser_MT558Parser tParser;

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
  class Seq_A2aContext;
  class Seq_A3Context;
  class Seq_BContext;
  class Seq_CContext;
  class Seq_DContext;
  class Seq_EContext;
  class Fld_16R_AContext;
  class Fld_28E_AContext;
  class Fld_20C_AContext;
  class Fld_23G_AContext;
  class Fld_98a_AContext;
  class Fld_22a_AContext;
  class Fld_13B_AContext;
  class Fld_16R_A1Context;
  class Fld_95a_A1Context;
  class Fld_97a_A1Context;
  class Fld_16S_A1Context;
  class Fld_16R_A2Context;
  class Fld_25D_A2Context;
  class Fld_16R_A2aContext;
  class Fld_24B_A2aContext;
  class Fld_70D_A2aContext;
  class Fld_16S_A2aContext;
  class Fld_16S_A2Context;
  class Fld_17B_AContext;
  class Fld_19A_AContext;
  class Fld_70a_AContext;
  class Fld_16R_A3Context;
  class Fld_13a_A3Context;
  class Fld_20C_A3Context;
  class Fld_16S_A3Context;
  class Fld_16S_AContext;
  class Fld_16R_BContext;
  class Fld_99B_BContext;
  class Fld_98a_BContext;
  class Fld_19A_BContext;
  class Fld_92a_BContext;
  class Fld_22a_BContext;
  class Fld_16S_BContext;
  class Fld_16R_CContext;
  class Fld_22H_CContext;
  class Fld_35B_CContext;
  class Fld_36B_CContext;
  class Fld_25D_CContext;
  class Fld_17B_CContext;
  class Fld_97a_CContext;
  class Fld_20C_CContext;
  class Fld_19A_CContext;
  class Fld_70D_CContext;
  class Fld_16S_CContext;
  class Fld_16R_DContext;
  class Fld_22H_DContext;
  class Fld_19A_DContext;
  class Fld_20C_DContext;
  class Fld_25D_DContext;
  class Fld_17B_DContext;
  class Fld_97a_DContext;
  class Fld_70D_DContext;
  class Fld_16S_DContext;
  class Fld_16R_EContext;
  class Fld_95a_EContext;
  class Fld_16S_EContext;
  class Fld_28E_A_EContext;
  class Fld_20C_A_CContext;
  class Fld_23G_A_GContext;
  class Fld_98a_A_AContext;
  class Fld_98a_A_CContext;
  class Fld_98a_A_EContext;
  class Fld_22a_A_FContext;
  class Fld_22a_A_HContext;
  class Fld_13B_A_BContext;
  class Fld_95a_A1_PContext;
  class Fld_95a_A1_QContext;
  class Fld_95a_A1_RContext;
  class Fld_97a_A1_AContext;
  class Fld_97a_A1_BContext;
  class Fld_25D_A2_DContext;
  class Fld_24B_A2a_BContext;
  class Fld_70D_A2a_DContext;
  class Fld_17B_A_BContext;
  class Fld_19A_A_AContext;
  class Fld_70a_A_DContext;
  class Fld_70a_A_EContext;
  class Fld_13a_A3_AContext;
  class Fld_13a_A3_BContext;
  class Fld_20C_A3_CContext;
  class Fld_99B_B_BContext;
  class Fld_98a_B_AContext;
  class Fld_98a_B_BContext;
  class Fld_98a_B_CContext;
  class Fld_19A_B_AContext;
  class Fld_92a_B_AContext;
  class Fld_92a_B_CContext;
  class Fld_22a_B_FContext;
  class Fld_22a_B_HContext;
  class Fld_22H_C_HContext;
  class Fld_35B_C_BContext;
  class Fld_36B_C_BContext;
  class Fld_25D_C_DContext;
  class Fld_17B_C_BContext;
  class Fld_97a_C_AContext;
  class Fld_97a_C_BContext;
  class Fld_20C_C_CContext;
  class Fld_19A_C_AContext;
  class Fld_70D_C_DContext;
  class Fld_22H_D_HContext;
  class Fld_19A_D_AContext;
  class Fld_20C_D_CContext;
  class Fld_25D_D_DContext;
  class Fld_17B_D_BContext;
  class Fld_97a_D_AContext;
  class Fld_97a_D_EContext;
  class Fld_70D_D_DContext;
  class Fld_95a_E_PContext;
  class Fld_95a_E_QContext;
  class Fld_95a_E_RContext; 

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
    std::vector<Seq_DContext *> seq_D();
    Seq_DContext* seq_D(size_t i);
    Seq_EContext *seq_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MtContext* mt();

  class  Seq_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_28E_AContext *fld_28E_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_98a_AContext *fld_98a_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_22a_AContext *fld_22a_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_13B_AContext *fld_13B_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT558Parser::Seq_A2Context *seq_A2Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_17B_AContext *fld_17B_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_19A_AContext *fld_19A_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_70a_AContext *fld_70a_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Seq_A3Context *seq_A3Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_28E_AContext *fld_28E_A();
    Fld_23G_AContext *fld_23G_A();
    Fld_16S_AContext *fld_16S_A();
    std::vector<Fld_20C_AContext *> fld_20C_A();
    Fld_20C_AContext* fld_20C_A(size_t i);
    std::vector<Fld_98a_AContext *> fld_98a_A();
    Fld_98a_AContext* fld_98a_A(size_t i);
    std::vector<Fld_22a_AContext *> fld_22a_A();
    Fld_22a_AContext* fld_22a_A(size_t i);
    std::vector<Fld_13B_AContext *> fld_13B_A();
    Fld_13B_AContext* fld_13B_A(size_t i);
    std::vector<Seq_A1Context *> seq_A1();
    Seq_A1Context* seq_A1(size_t i);
    std::vector<Seq_A2Context *> seq_A2();
    Seq_A2Context* seq_A2(size_t i);
    std::vector<Fld_17B_AContext *> fld_17B_A();
    Fld_17B_AContext* fld_17B_A(size_t i);
    std::vector<Fld_19A_AContext *> fld_19A_A();
    Fld_19A_AContext* fld_19A_A(size_t i);
    std::vector<Fld_70a_AContext *> fld_70a_A();
    Fld_70a_AContext* fld_70a_A(size_t i);
    std::vector<Seq_A3Context *> seq_A3();
    Seq_A3Context* seq_A3(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_AContext* seq_A();

  class  Seq_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_95a_A1Context *fld_95a_A1Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_97a_A1Context *fld_97a_A1Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
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
    SwiftMtParser_MT558Parser::Fld_16R_A2Context *fld_16R_A2Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_25D_A2Context *fld_25D_A2Context = nullptr;;
    SwiftMtParser_MT558Parser::Seq_A2aContext *seq_A2aContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_A2Context *fld_16S_A2Context = nullptr;;
    Seq_A2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A2Context *fld_16R_A2();
    Fld_25D_A2Context *fld_25D_A2();
    Fld_16S_A2Context *fld_16S_A2();
    std::vector<Seq_A2aContext *> seq_A2a();
    Seq_A2aContext* seq_A2a(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A2Context* seq_A2();

  class  Seq_A2aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_A2aContext *fld_16R_A2aContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_24B_A2aContext *fld_24B_A2aContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_70D_A2aContext *fld_70D_A2aContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_A2aContext *fld_16S_A2aContext = nullptr;;
    Seq_A2aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A2aContext *fld_16R_A2a();
    Fld_24B_A2aContext *fld_24B_A2a();
    Fld_16S_A2aContext *fld_16S_A2a();
    Fld_70D_A2aContext *fld_70D_A2a();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A2aContext* seq_A2a();

  class  Seq_A3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_A3Context *fld_16R_A3Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_13a_A3Context *fld_13a_A3Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_20C_A3Context *fld_20C_A3Context = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_A3Context *fld_16S_A3Context = nullptr;;
    Seq_A3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A3Context *fld_16R_A3();
    Fld_20C_A3Context *fld_20C_A3();
    Fld_16S_A3Context *fld_16S_A3();
    Fld_13a_A3Context *fld_13a_A3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A3Context* seq_A3();

  class  Seq_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_99B_BContext *fld_99B_BContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_98a_BContext *fld_98a_BContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_19A_BContext *fld_19A_BContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_92a_BContext *fld_92a_BContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_22a_BContext *fld_22a_BContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_BContext *fld_16S_BContext = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    Fld_98a_BContext *fld_98a_B();
    Fld_16S_BContext *fld_16S_B();
    Fld_99B_BContext *fld_99B_B();
    std::vector<Fld_19A_BContext *> fld_19A_B();
    Fld_19A_BContext* fld_19A_B(size_t i);
    std::vector<Fld_92a_BContext *> fld_92a_B();
    Fld_92a_BContext* fld_92a_B(size_t i);
    std::vector<Fld_22a_BContext *> fld_22a_B();
    Fld_22a_BContext* fld_22a_B(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_CContext *fld_16R_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_22H_CContext *fld_22H_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_35B_CContext *fld_35B_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_36B_CContext *fld_36B_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_25D_CContext *fld_25D_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_17B_CContext *fld_17B_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_97a_CContext *fld_97a_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_20C_CContext *fld_20C_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_19A_CContext *fld_19A_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_70D_CContext *fld_70D_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_CContext *fld_16S_CContext = nullptr;;
    Seq_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_CContext *fld_16R_C();
    Fld_22H_CContext *fld_22H_C();
    Fld_35B_CContext *fld_35B_C();
    Fld_36B_CContext *fld_36B_C();
    Fld_16S_CContext *fld_16S_C();
    Fld_25D_CContext *fld_25D_C();
    std::vector<Fld_17B_CContext *> fld_17B_C();
    Fld_17B_CContext* fld_17B_C(size_t i);
    Fld_97a_CContext *fld_97a_C();
    std::vector<Fld_20C_CContext *> fld_20C_C();
    Fld_20C_CContext* fld_20C_C(size_t i);
    Fld_19A_CContext *fld_19A_C();
    Fld_70D_CContext *fld_70D_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_CContext* seq_C();

  class  Seq_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_DContext *fld_16R_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_22H_DContext *fld_22H_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_19A_DContext *fld_19A_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_20C_DContext *fld_20C_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_25D_DContext *fld_25D_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_17B_DContext *fld_17B_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_97a_DContext *fld_97a_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_70D_DContext *fld_70D_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_DContext *fld_16S_DContext = nullptr;;
    Seq_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_DContext *fld_16R_D();
    Fld_22H_DContext *fld_22H_D();
    Fld_19A_DContext *fld_19A_D();
    Fld_16S_DContext *fld_16S_D();
    std::vector<Fld_20C_DContext *> fld_20C_D();
    Fld_20C_DContext* fld_20C_D(size_t i);
    Fld_25D_DContext *fld_25D_D();
    std::vector<Fld_17B_DContext *> fld_17B_D();
    Fld_17B_DContext* fld_17B_D(size_t i);
    Fld_97a_DContext *fld_97a_D();
    Fld_70D_DContext *fld_70D_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_DContext* seq_D();

  class  Seq_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT558Parser::Fld_16R_EContext *fld_16R_EContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_95a_EContext *fld_95a_EContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_16S_EContext *fld_16S_EContext = nullptr;;
    Seq_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_EContext *fld_16R_E();
    Fld_16S_EContext *fld_16S_E();
    std::vector<Fld_95a_EContext *> fld_95a_E();
    Fld_95a_EContext* fld_95a_E(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_EContext* seq_E();

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
    SwiftMtParser_MT558Parser::Fld_28E_A_EContext *fld_28E_A_EContext = nullptr;;
    Fld_28E_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_28E_A_EContext *fld_28E_A_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_28E_AContext* fld_28E_A();

  class  Fld_20C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
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
    SwiftMtParser_MT558Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
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
    SwiftMtParser_MT558Parser::Fld_98a_A_AContext *fld_98a_A_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_98a_A_CContext *fld_98a_A_CContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_98a_A_EContext *fld_98a_A_EContext = nullptr;;
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
    SwiftMtParser_MT558Parser::Fld_22a_A_FContext *fld_22a_A_FContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_22a_A_HContext *fld_22a_A_HContext = nullptr;;
    Fld_22a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_A_FContext *fld_22a_A_F();
    Fld_22a_A_HContext *fld_22a_A_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_AContext* fld_22a_A();

  class  Fld_13B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_13B_A_BContext *fld_13B_A_BContext = nullptr;;
    Fld_13B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13B_A_BContext *fld_13B_A_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_AContext* fld_13B_A();

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
    SwiftMtParser_MT558Parser::Fld_95a_A1_PContext *fld_95a_A1_PContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_95a_A1_QContext *fld_95a_A1_QContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_95a_A1_RContext *fld_95a_A1_RContext = nullptr;;
    Fld_95a_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
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
    SwiftMtParser_MT558Parser::Fld_97a_A1_AContext *fld_97a_A1_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_97a_A1_BContext *fld_97a_A1_BContext = nullptr;;
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

  class  Fld_25D_A2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_25D_A2_DContext *fld_25D_A2_DContext = nullptr;;
    Fld_25D_A2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_A2_DContext *fld_25D_A2_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_A2Context* fld_25D_A2();

  class  Fld_16R_A2aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_A2aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_A2aContext* fld_16R_A2a();

  class  Fld_24B_A2aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_24B_A2a_BContext *fld_24B_A2a_BContext = nullptr;;
    Fld_24B_A2aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_24B_A2a_BContext *fld_24B_A2a_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_24B_A2aContext* fld_24B_A2a();

  class  Fld_70D_A2aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_70D_A2a_DContext *fld_70D_A2a_DContext = nullptr;;
    Fld_70D_A2aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70D_A2a_DContext *fld_70D_A2a_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70D_A2aContext* fld_70D_A2a();

  class  Fld_16S_A2aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_A2aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_A2aContext* fld_16S_A2a();

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

  class  Fld_17B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_17B_A_BContext *fld_17B_A_BContext = nullptr;;
    Fld_17B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_A_BContext *fld_17B_A_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_AContext* fld_17B_A();

  class  Fld_19A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_19A_A_AContext *fld_19A_A_AContext = nullptr;;
    Fld_19A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_A_AContext *fld_19A_A_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_AContext* fld_19A_A();

  class  Fld_70a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_70a_A_DContext *fld_70a_A_DContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_70a_A_EContext *fld_70a_A_EContext = nullptr;;
    Fld_70a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70a_A_DContext *fld_70a_A_D();
    Fld_70a_A_EContext *fld_70a_A_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_AContext* fld_70a_A();

  class  Fld_16R_A3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_A3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_A3Context* fld_16R_A3();

  class  Fld_13a_A3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_13a_A3_AContext *fld_13a_A3_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_13a_A3_BContext *fld_13a_A3_BContext = nullptr;;
    Fld_13a_A3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13a_A3_AContext *fld_13a_A3_A();
    Fld_13a_A3_BContext *fld_13a_A3_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A3Context* fld_13a_A3();

  class  Fld_20C_A3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_20C_A3_CContext *fld_20C_A3_CContext = nullptr;;
    Fld_20C_A3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_A3_CContext *fld_20C_A3_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_A3Context* fld_20C_A3();

  class  Fld_16S_A3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_A3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_A3Context* fld_16S_A3();

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

  class  Fld_99B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_99B_B_BContext *fld_99B_B_BContext = nullptr;;
    Fld_99B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_99B_B_BContext *fld_99B_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99B_BContext* fld_99B_B();

  class  Fld_98a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_98a_B_AContext *fld_98a_B_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_98a_B_BContext *fld_98a_B_BContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_98a_B_CContext *fld_98a_B_CContext = nullptr;;
    Fld_98a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B_AContext *fld_98a_B_A();
    Fld_98a_B_BContext *fld_98a_B_B();
    Fld_98a_B_CContext *fld_98a_B_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_BContext* fld_98a_B();

  class  Fld_19A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_19A_B_AContext *fld_19A_B_AContext = nullptr;;
    Fld_19A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_B_AContext *fld_19A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_BContext* fld_19A_B();

  class  Fld_92a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_92a_B_AContext *fld_92a_B_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_92a_B_CContext *fld_92a_B_CContext = nullptr;;
    Fld_92a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92a_B_AContext *fld_92a_B_A();
    Fld_92a_B_CContext *fld_92a_B_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_BContext* fld_92a_B();

  class  Fld_22a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_22a_B_FContext *fld_22a_B_FContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_22a_B_HContext *fld_22a_B_HContext = nullptr;;
    Fld_22a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_B_FContext *fld_22a_B_F();
    Fld_22a_B_HContext *fld_22a_B_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_BContext* fld_22a_B();

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

  class  Fld_22H_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_22H_C_HContext *fld_22H_C_HContext = nullptr;;
    Fld_22H_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_C_HContext *fld_22H_C_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_CContext* fld_22H_C();

  class  Fld_35B_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_35B_C_BContext *fld_35B_C_BContext = nullptr;;
    Fld_35B_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_C_BContext *fld_35B_C_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_CContext* fld_35B_C();

  class  Fld_36B_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_36B_C_BContext *fld_36B_C_BContext = nullptr;;
    Fld_36B_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_C_BContext *fld_36B_C_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_CContext* fld_36B_C();

  class  Fld_25D_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_25D_C_DContext *fld_25D_C_DContext = nullptr;;
    Fld_25D_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_C_DContext *fld_25D_C_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_CContext* fld_25D_C();

  class  Fld_17B_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_17B_C_BContext *fld_17B_C_BContext = nullptr;;
    Fld_17B_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_C_BContext *fld_17B_C_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_CContext* fld_17B_C();

  class  Fld_97a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_97a_C_AContext *fld_97a_C_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_97a_C_BContext *fld_97a_C_BContext = nullptr;;
    Fld_97a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_C_AContext *fld_97a_C_A();
    Fld_97a_C_BContext *fld_97a_C_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_CContext* fld_97a_C();

  class  Fld_20C_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_20C_C_CContext *fld_20C_C_CContext = nullptr;;
    Fld_20C_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_C_CContext *fld_20C_C_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_CContext* fld_20C_C();

  class  Fld_19A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_19A_C_AContext *fld_19A_C_AContext = nullptr;;
    Fld_19A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_C_AContext *fld_19A_C_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_CContext* fld_19A_C();

  class  Fld_70D_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_70D_C_DContext *fld_70D_C_DContext = nullptr;;
    Fld_70D_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70D_C_DContext *fld_70D_C_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70D_CContext* fld_70D_C();

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

  class  Fld_16R_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_DContext* fld_16R_D();

  class  Fld_22H_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_22H_D_HContext *fld_22H_D_HContext = nullptr;;
    Fld_22H_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_D_HContext *fld_22H_D_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_DContext* fld_22H_D();

  class  Fld_19A_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_19A_D_AContext *fld_19A_D_AContext = nullptr;;
    Fld_19A_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_D_AContext *fld_19A_D_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_DContext* fld_19A_D();

  class  Fld_20C_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_20C_D_CContext *fld_20C_D_CContext = nullptr;;
    Fld_20C_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_D_CContext *fld_20C_D_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_DContext* fld_20C_D();

  class  Fld_25D_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_25D_D_DContext *fld_25D_D_DContext = nullptr;;
    Fld_25D_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_D_DContext *fld_25D_D_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_DContext* fld_25D_D();

  class  Fld_17B_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_17B_D_BContext *fld_17B_D_BContext = nullptr;;
    Fld_17B_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_D_BContext *fld_17B_D_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_DContext* fld_17B_D();

  class  Fld_97a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_97a_D_AContext *fld_97a_D_AContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_97a_D_EContext *fld_97a_D_EContext = nullptr;;
    Fld_97a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_D_AContext *fld_97a_D_A();
    Fld_97a_D_EContext *fld_97a_D_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_DContext* fld_97a_D();

  class  Fld_70D_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_70D_D_DContext *fld_70D_D_DContext = nullptr;;
    Fld_70D_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70D_D_DContext *fld_70D_D_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70D_DContext* fld_70D_D();

  class  Fld_16S_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_DContext* fld_16S_D();

  class  Fld_16R_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_EContext* fld_16R_E();

  class  Fld_95a_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT558Parser::Fld_95a_E_PContext *fld_95a_E_PContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_95a_E_QContext *fld_95a_E_QContext = nullptr;;
    SwiftMtParser_MT558Parser::Fld_95a_E_RContext *fld_95a_E_RContext = nullptr;;
    Fld_95a_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_E_PContext *fld_95a_E_P();
    Fld_95a_E_QContext *fld_95a_E_Q();
    Fld_95a_E_RContext *fld_95a_E_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_EContext* fld_95a_E();

  class  Fld_16S_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_EContext* fld_16S_E();

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

  class  Fld_13B_A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13B_A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_A_BContext* fld_13B_A_B();

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

  class  Fld_25D_A2_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_25D_A2_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_A2_DContext* fld_25D_A2_D();

  class  Fld_24B_A2a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_24B_A2a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_24B_A2a_BContext* fld_24B_A2a_B();

  class  Fld_70D_A2a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70D_A2a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70D_A2a_DContext* fld_70D_A2a_D();

  class  Fld_17B_A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_A_BContext* fld_17B_A_B();

  class  Fld_19A_A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_A_AContext* fld_19A_A_A();

  class  Fld_70a_A_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70a_A_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_A_DContext* fld_70a_A_D();

  class  Fld_70a_A_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70a_A_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_A_EContext* fld_70a_A_E();

  class  Fld_13a_A3_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A3_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A3_AContext* fld_13a_A3_A();

  class  Fld_13a_A3_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A3_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A3_BContext* fld_13a_A3_B();

  class  Fld_20C_A3_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_A3_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_A3_CContext* fld_20C_A3_C();

  class  Fld_99B_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_99B_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99B_B_BContext* fld_99B_B_B();

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

  class  Fld_98a_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B_BContext* fld_98a_B_B();

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

  class  Fld_92a_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_B_AContext* fld_92a_B_A();

  class  Fld_92a_B_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_B_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_B_CContext* fld_92a_B_C();

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

  class  Fld_22H_C_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22H_C_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_C_HContext* fld_22H_C_H();

  class  Fld_35B_C_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_C_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_C_BContext* fld_35B_C_B();

  class  Fld_36B_C_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_36B_C_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_C_BContext* fld_36B_C_B();

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

  class  Fld_17B_C_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_C_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_C_BContext* fld_17B_C_B();

  class  Fld_97a_C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C_AContext* fld_97a_C_A();

  class  Fld_97a_C_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_C_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C_BContext* fld_97a_C_B();

  class  Fld_20C_C_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_C_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_C_CContext* fld_20C_C_C();

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

  class  Fld_70D_C_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70D_C_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70D_C_DContext* fld_70D_C_D();

  class  Fld_22H_D_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22H_D_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_D_HContext* fld_22H_D_H();

  class  Fld_19A_D_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_D_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_D_AContext* fld_19A_D_A();

  class  Fld_20C_D_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_D_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_D_CContext* fld_20C_D_C();

  class  Fld_25D_D_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_25D_D_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_D_DContext* fld_25D_D_D();

  class  Fld_17B_D_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_D_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_D_BContext* fld_17B_D_B();

  class  Fld_97a_D_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_D_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_D_AContext* fld_97a_D_A();

  class  Fld_97a_D_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_D_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_D_EContext* fld_97a_D_E();

  class  Fld_70D_D_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70D_D_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70D_D_DContext* fld_70D_D_D();

  class  Fld_95a_E_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_E_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_E_PContext* fld_95a_E_P();

  class  Fld_95a_E_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_E_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_E_QContext* fld_95a_E_Q();

  class  Fld_95a_E_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_E_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_E_RContext* fld_95a_E_R();


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
