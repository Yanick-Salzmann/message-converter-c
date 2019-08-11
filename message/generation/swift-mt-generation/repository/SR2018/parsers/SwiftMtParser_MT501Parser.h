
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT501Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT501.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT501Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, TAG_BH = 35, TAG_AH = 36, TAG_UH = 37, TAG_MT = 38, 
    TAG_TR = 39, MT_END = 40, LBRACE = 41, RBRACE = 42, COLON = 43, START_OF_FIELD = 44, 
    ANY = 45
  };

  enum {
    RuleMessage = 0, RuleBh = 1, RuleBh_content = 2, RuleAh = 3, RuleAh_content = 4, 
    RuleUh = 5, RuleTr = 6, RuleSys_block = 7, RuleSys_element = 8, RuleSys_element_key = 9, 
    RuleSys_element_content = 10, RuleMt = 11, RuleSeq_A = 12, RuleSeq_A1 = 13, 
    RuleSeq_B = 14, RuleSeq_B1 = 15, RuleSeq_B2 = 16, RuleSeq_C = 17, RuleSeq_C1 = 18, 
    RuleSeq_C2 = 19, RuleSeq_D = 20, RuleSeq_E = 21, RuleFld_16R_A = 22, 
    RuleFld_20C_A = 23, RuleFld_23G_A = 24, RuleFld_98a_A = 25, RuleFld_22F_A = 26, 
    RuleFld_16R_A1 = 27, RuleFld_22F_A1 = 28, RuleFld_13a_A1 = 29, RuleFld_20C_A1 = 30, 
    RuleFld_16S_A1 = 31, RuleFld_16S_A = 32, RuleFld_16R_B = 33, RuleFld_20D_B = 34, 
    RuleFld_22F_B = 35, RuleFld_98a_B = 36, RuleFld_35B_B = 37, RuleFld_16R_B1 = 38, 
    RuleFld_94B_B1 = 39, RuleFld_22F_B1 = 40, RuleFld_12a_B1 = 41, RuleFld_11A_B1 = 42, 
    RuleFld_98A_B1 = 43, RuleFld_92A_B1 = 44, RuleFld_13a_B1 = 45, RuleFld_17B_B1 = 46, 
    RuleFld_90a_B1 = 47, RuleFld_36B_B1 = 48, RuleFld_70E_B1 = 49, RuleFld_16S_B1 = 50, 
    RuleFld_16R_B2 = 51, RuleFld_36B_B2 = 52, RuleFld_93B_B2 = 53, RuleFld_95a_B2 = 54, 
    RuleFld_97A_B2 = 55, RuleFld_16S_B2 = 56, RuleFld_16S_B = 57, RuleFld_16R_C = 58, 
    RuleFld_16R_C1 = 59, RuleFld_17B_C1 = 60, RuleFld_22F_C1 = 61, RuleFld_95a_C1 = 62, 
    RuleFld_94a_C1 = 63, RuleFld_13B_C1 = 64, RuleFld_16S_C1 = 65, RuleFld_16R_C2 = 66, 
    RuleFld_22F_C2 = 67, RuleFld_95U_C2 = 68, RuleFld_98a_C2 = 69, RuleFld_94C_C2 = 70, 
    RuleFld_70C_C2 = 71, RuleFld_16S_C2 = 72, RuleFld_16S_C = 73, RuleFld_16R_D = 74, 
    RuleFld_98a_D = 75, RuleFld_35B_D = 76, RuleFld_16S_D = 77, RuleFld_16R_E = 78, 
    RuleFld_95a_E = 79, RuleFld_16S_E = 80, RuleFld_20C_A_C = 81, RuleFld_23G_A_G = 82, 
    RuleFld_98a_A_A = 83, RuleFld_98a_A_C = 84, RuleFld_98a_A_E = 85, RuleFld_22F_A_F = 86, 
    RuleFld_22F_A1_F = 87, RuleFld_13a_A1_A = 88, RuleFld_13a_A1_B = 89, 
    RuleFld_20C_A1_C = 90, RuleFld_20D_B_D = 91, RuleFld_22F_B_F = 92, RuleFld_98a_B_A = 93, 
    RuleFld_98a_B_C = 94, RuleFld_35B_B_B = 95, RuleFld_94B_B1_B = 96, RuleFld_22F_B1_F = 97, 
    RuleFld_12a_B1_A = 98, RuleFld_12a_B1_B = 99, RuleFld_12a_B1_C = 100, 
    RuleFld_11A_B1_A = 101, RuleFld_98A_B1_A = 102, RuleFld_92A_B1_A = 103, 
    RuleFld_13a_B1_A = 104, RuleFld_13a_B1_B = 105, RuleFld_17B_B1_B = 106, 
    RuleFld_90a_B1_A = 107, RuleFld_90a_B1_B = 108, RuleFld_36B_B1_B = 109, 
    RuleFld_70E_B1_E = 110, RuleFld_36B_B2_B = 111, RuleFld_93B_B2_B = 112, 
    RuleFld_95a_B2_P = 113, RuleFld_95a_B2_R = 114, RuleFld_97A_B2_A = 115, 
    RuleFld_17B_C1_B = 116, RuleFld_22F_C1_F = 117, RuleFld_95a_C1_P = 118, 
    RuleFld_95a_C1_R = 119, RuleFld_95a_C1_S = 120, RuleFld_95a_C1_U = 121, 
    RuleFld_94a_C1_C = 122, RuleFld_94a_C1_D = 123, RuleFld_94a_C1_G = 124, 
    RuleFld_13B_C1_B = 125, RuleFld_22F_C2_F = 126, RuleFld_95U_C2_U = 127, 
    RuleFld_98a_C2_A = 128, RuleFld_98a_C2_C = 129, RuleFld_94C_C2_C = 130, 
    RuleFld_70C_C2_C = 131, RuleFld_98a_D_A = 132, RuleFld_98a_D_C = 133, 
    RuleFld_35B_D_B = 134, RuleFld_95a_E_P = 135, RuleFld_95a_E_Q = 136, 
    RuleFld_95a_E_R = 137
  };

  SwiftMtParser_MT501Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT501Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  public:
      typedef SwiftMtParser_MT501Lexer tLexer;
      typedef SwiftMtParser_MT501Parser tParser;

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
  class Seq_C1Context;
  class Seq_C2Context;
  class Seq_DContext;
  class Seq_EContext;
  class Fld_16R_AContext;
  class Fld_20C_AContext;
  class Fld_23G_AContext;
  class Fld_98a_AContext;
  class Fld_22F_AContext;
  class Fld_16R_A1Context;
  class Fld_22F_A1Context;
  class Fld_13a_A1Context;
  class Fld_20C_A1Context;
  class Fld_16S_A1Context;
  class Fld_16S_AContext;
  class Fld_16R_BContext;
  class Fld_20D_BContext;
  class Fld_22F_BContext;
  class Fld_98a_BContext;
  class Fld_35B_BContext;
  class Fld_16R_B1Context;
  class Fld_94B_B1Context;
  class Fld_22F_B1Context;
  class Fld_12a_B1Context;
  class Fld_11A_B1Context;
  class Fld_98A_B1Context;
  class Fld_92A_B1Context;
  class Fld_13a_B1Context;
  class Fld_17B_B1Context;
  class Fld_90a_B1Context;
  class Fld_36B_B1Context;
  class Fld_70E_B1Context;
  class Fld_16S_B1Context;
  class Fld_16R_B2Context;
  class Fld_36B_B2Context;
  class Fld_93B_B2Context;
  class Fld_95a_B2Context;
  class Fld_97A_B2Context;
  class Fld_16S_B2Context;
  class Fld_16S_BContext;
  class Fld_16R_CContext;
  class Fld_16R_C1Context;
  class Fld_17B_C1Context;
  class Fld_22F_C1Context;
  class Fld_95a_C1Context;
  class Fld_94a_C1Context;
  class Fld_13B_C1Context;
  class Fld_16S_C1Context;
  class Fld_16R_C2Context;
  class Fld_22F_C2Context;
  class Fld_95U_C2Context;
  class Fld_98a_C2Context;
  class Fld_94C_C2Context;
  class Fld_70C_C2Context;
  class Fld_16S_C2Context;
  class Fld_16S_CContext;
  class Fld_16R_DContext;
  class Fld_98a_DContext;
  class Fld_35B_DContext;
  class Fld_16S_DContext;
  class Fld_16R_EContext;
  class Fld_95a_EContext;
  class Fld_16S_EContext;
  class Fld_20C_A_CContext;
  class Fld_23G_A_GContext;
  class Fld_98a_A_AContext;
  class Fld_98a_A_CContext;
  class Fld_98a_A_EContext;
  class Fld_22F_A_FContext;
  class Fld_22F_A1_FContext;
  class Fld_13a_A1_AContext;
  class Fld_13a_A1_BContext;
  class Fld_20C_A1_CContext;
  class Fld_20D_B_DContext;
  class Fld_22F_B_FContext;
  class Fld_98a_B_AContext;
  class Fld_98a_B_CContext;
  class Fld_35B_B_BContext;
  class Fld_94B_B1_BContext;
  class Fld_22F_B1_FContext;
  class Fld_12a_B1_AContext;
  class Fld_12a_B1_BContext;
  class Fld_12a_B1_CContext;
  class Fld_11A_B1_AContext;
  class Fld_98A_B1_AContext;
  class Fld_92A_B1_AContext;
  class Fld_13a_B1_AContext;
  class Fld_13a_B1_BContext;
  class Fld_17B_B1_BContext;
  class Fld_90a_B1_AContext;
  class Fld_90a_B1_BContext;
  class Fld_36B_B1_BContext;
  class Fld_70E_B1_EContext;
  class Fld_36B_B2_BContext;
  class Fld_93B_B2_BContext;
  class Fld_95a_B2_PContext;
  class Fld_95a_B2_RContext;
  class Fld_97A_B2_AContext;
  class Fld_17B_C1_BContext;
  class Fld_22F_C1_FContext;
  class Fld_95a_C1_PContext;
  class Fld_95a_C1_RContext;
  class Fld_95a_C1_SContext;
  class Fld_95a_C1_UContext;
  class Fld_94a_C1_CContext;
  class Fld_94a_C1_DContext;
  class Fld_94a_C1_GContext;
  class Fld_13B_C1_BContext;
  class Fld_22F_C2_FContext;
  class Fld_95U_C2_UContext;
  class Fld_98a_C2_AContext;
  class Fld_98a_C2_CContext;
  class Fld_94C_C2_CContext;
  class Fld_70C_C2_CContext;
  class Fld_98a_D_AContext;
  class Fld_98a_D_CContext;
  class Fld_35B_D_BContext;
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
    Seq_DContext *seq_D();
    Seq_EContext *seq_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  MtContext* mt();

  class  Seq_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_AContext *fld_98a_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_22F_AContext *fld_22F_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_20C_AContext *fld_20C_A();
    Fld_23G_AContext *fld_23G_A();
    Fld_22F_AContext *fld_22F_A();
    Fld_16S_AContext *fld_16S_A();
    Fld_98a_AContext *fld_98a_A();
    std::vector<Seq_A1Context *> seq_A1();
    Seq_A1Context* seq_A1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_AContext* seq_A();

  class  Seq_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_22F_A1Context *fld_22F_A1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_13a_A1Context *fld_13a_A1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_20C_A1Context *fld_20C_A1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
    Seq_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A1Context *fld_16R_A1();
    Fld_20C_A1Context *fld_20C_A1();
    Fld_16S_A1Context *fld_16S_A1();
    Fld_22F_A1Context *fld_22F_A1();
    Fld_13a_A1Context *fld_13a_A1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A1Context* seq_A1();

  class  Seq_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_20D_BContext *fld_20D_BContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_22F_BContext *fld_22F_BContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_BContext *fld_98a_BContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_35B_BContext *fld_35B_BContext = nullptr;;
    SwiftMtParser_MT501Parser::Seq_B1Context *seq_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Seq_B2Context *seq_B2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_BContext *fld_16S_BContext = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    Fld_98a_BContext *fld_98a_B();
    Fld_35B_BContext *fld_35B_B();
    Seq_B2Context *seq_B2();
    Fld_16S_BContext *fld_16S_B();
    std::vector<Fld_20D_BContext *> fld_20D_B();
    Fld_20D_BContext* fld_20D_B(size_t i);
    std::vector<Fld_22F_BContext *> fld_22F_B();
    Fld_22F_BContext* fld_22F_B(size_t i);
    Seq_B1Context *seq_B1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_B1Context *fld_16R_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_94B_B1Context *fld_94B_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_22F_B1Context *fld_22F_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_12a_B1Context *fld_12a_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_11A_B1Context *fld_11A_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98A_B1Context *fld_98A_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_92A_B1Context *fld_92A_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_13a_B1Context *fld_13a_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_17B_B1Context *fld_17B_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_90a_B1Context *fld_90a_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_36B_B1Context *fld_36B_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_70E_B1Context *fld_70E_B1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_B1Context *fld_16S_B1Context = nullptr;;
    Seq_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1Context *fld_16R_B1();
    Fld_16S_B1Context *fld_16S_B1();
    Fld_94B_B1Context *fld_94B_B1();
    std::vector<Fld_22F_B1Context *> fld_22F_B1();
    Fld_22F_B1Context* fld_22F_B1(size_t i);
    std::vector<Fld_12a_B1Context *> fld_12a_B1();
    Fld_12a_B1Context* fld_12a_B1(size_t i);
    Fld_11A_B1Context *fld_11A_B1();
    std::vector<Fld_98A_B1Context *> fld_98A_B1();
    Fld_98A_B1Context* fld_98A_B1(size_t i);
    std::vector<Fld_92A_B1Context *> fld_92A_B1();
    Fld_92A_B1Context* fld_92A_B1(size_t i);
    std::vector<Fld_13a_B1Context *> fld_13a_B1();
    Fld_13a_B1Context* fld_13a_B1(size_t i);
    std::vector<Fld_17B_B1Context *> fld_17B_B1();
    Fld_17B_B1Context* fld_17B_B1(size_t i);
    std::vector<Fld_90a_B1Context *> fld_90a_B1();
    Fld_90a_B1Context* fld_90a_B1(size_t i);
    std::vector<Fld_36B_B1Context *> fld_36B_B1();
    Fld_36B_B1Context* fld_36B_B1(size_t i);
    Fld_70E_B1Context *fld_70E_B1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1Context* seq_B1();

  class  Seq_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_B2Context *fld_16R_B2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_36B_B2Context *fld_36B_B2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_93B_B2Context *fld_93B_B2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_B2Context *fld_95a_B2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_97A_B2Context *fld_97A_B2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_B2Context *fld_16S_B2Context = nullptr;;
    Seq_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B2Context *fld_16R_B2();
    Fld_36B_B2Context *fld_36B_B2();
    Fld_97A_B2Context *fld_97A_B2();
    Fld_16S_B2Context *fld_16S_B2();
    Fld_93B_B2Context *fld_93B_B2();
    Fld_95a_B2Context *fld_95a_B2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B2Context* seq_B2();

  class  Seq_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_CContext *fld_16R_CContext = nullptr;;
    SwiftMtParser_MT501Parser::Seq_C1Context *seq_C1Context = nullptr;;
    SwiftMtParser_MT501Parser::Seq_C2Context *seq_C2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_CContext *fld_16S_CContext = nullptr;;
    Seq_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_CContext *fld_16R_C();
    Fld_16S_CContext *fld_16S_C();
    Seq_C1Context *seq_C1();
    Seq_C2Context *seq_C2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_CContext* seq_C();

  class  Seq_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_C1Context *fld_16R_C1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_17B_C1Context *fld_17B_C1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_22F_C1Context *fld_22F_C1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_C1Context *fld_95a_C1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_94a_C1Context *fld_94a_C1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_13B_C1Context *fld_13B_C1Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_C1Context *fld_16S_C1Context = nullptr;;
    Seq_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C1Context *fld_16R_C1();
    Fld_17B_C1Context *fld_17B_C1();
    Fld_16S_C1Context *fld_16S_C1();
    std::vector<Fld_22F_C1Context *> fld_22F_C1();
    Fld_22F_C1Context* fld_22F_C1(size_t i);
    std::vector<Fld_95a_C1Context *> fld_95a_C1();
    Fld_95a_C1Context* fld_95a_C1(size_t i);
    std::vector<Fld_94a_C1Context *> fld_94a_C1();
    Fld_94a_C1Context* fld_94a_C1(size_t i);
    std::vector<Fld_13B_C1Context *> fld_13B_C1();
    Fld_13B_C1Context* fld_13B_C1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C1Context* seq_C1();

  class  Seq_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_C2Context *fld_16R_C2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_22F_C2Context *fld_22F_C2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95U_C2Context *fld_95U_C2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_C2Context *fld_98a_C2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_94C_C2Context *fld_94C_C2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_70C_C2Context *fld_70C_C2Context = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_C2Context *fld_16S_C2Context = nullptr;;
    Seq_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C2Context *fld_16R_C2();
    Fld_16S_C2Context *fld_16S_C2();
    std::vector<Fld_22F_C2Context *> fld_22F_C2();
    Fld_22F_C2Context* fld_22F_C2(size_t i);
    Fld_95U_C2Context *fld_95U_C2();
    std::vector<Fld_98a_C2Context *> fld_98a_C2();
    Fld_98a_C2Context* fld_98a_C2(size_t i);
    std::vector<Fld_94C_C2Context *> fld_94C_C2();
    Fld_94C_C2Context* fld_94C_C2(size_t i);
    Fld_70C_C2Context *fld_70C_C2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C2Context* seq_C2();

  class  Seq_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_DContext *fld_16R_DContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_DContext *fld_98a_DContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_35B_DContext *fld_35B_DContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_DContext *fld_16S_DContext = nullptr;;
    Seq_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_DContext *fld_16R_D();
    Fld_16S_DContext *fld_16S_D();
    std::vector<Fld_98a_DContext *> fld_98a_D();
    Fld_98a_DContext* fld_98a_D(size_t i);
    Fld_35B_DContext *fld_35B_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_DContext* seq_D();

  class  Seq_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT501Parser::Fld_16R_EContext *fld_16R_EContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_EContext *fld_95a_EContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_16S_EContext *fld_16S_EContext = nullptr;;
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

  class  Fld_20C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
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
    SwiftMtParser_MT501Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
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
    SwiftMtParser_MT501Parser::Fld_98a_A_AContext *fld_98a_A_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_A_CContext *fld_98a_A_CContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_A_EContext *fld_98a_A_EContext = nullptr;;
    Fld_98a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_A_AContext *fld_98a_A_A();
    Fld_98a_A_CContext *fld_98a_A_C();
    Fld_98a_A_EContext *fld_98a_A_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_AContext* fld_98a_A();

  class  Fld_22F_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_22F_A_FContext *fld_22F_A_FContext = nullptr;;
    Fld_22F_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_A_FContext *fld_22F_A_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_AContext* fld_22F_A();

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
    SwiftMtParser_MT501Parser::Fld_22F_A1_FContext *fld_22F_A1_FContext = nullptr;;
    Fld_22F_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_A1_FContext *fld_22F_A1_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_A1Context* fld_22F_A1();

  class  Fld_13a_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_13a_A1_AContext *fld_13a_A1_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_13a_A1_BContext *fld_13a_A1_BContext = nullptr;;
    Fld_13a_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13a_A1_AContext *fld_13a_A1_A();
    Fld_13a_A1_BContext *fld_13a_A1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A1Context* fld_13a_A1();

  class  Fld_20C_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_20C_A1_CContext *fld_20C_A1_CContext = nullptr;;
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

  class  Fld_20D_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_20D_B_DContext *fld_20D_B_DContext = nullptr;;
    Fld_20D_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20D_B_DContext *fld_20D_B_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20D_BContext* fld_20D_B();

  class  Fld_22F_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_22F_B_FContext *fld_22F_B_FContext = nullptr;;
    Fld_22F_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_B_FContext *fld_22F_B_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_BContext* fld_22F_B();

  class  Fld_98a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_98a_B_AContext *fld_98a_B_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_B_CContext *fld_98a_B_CContext = nullptr;;
    Fld_98a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B_AContext *fld_98a_B_A();
    Fld_98a_B_CContext *fld_98a_B_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_BContext* fld_98a_B();

  class  Fld_35B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_35B_B_BContext *fld_35B_B_BContext = nullptr;;
    Fld_35B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_B_BContext *fld_35B_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_BContext* fld_35B_B();

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

  class  Fld_94B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_94B_B1_BContext *fld_94B_B1_BContext = nullptr;;
    Fld_94B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94B_B1_BContext *fld_94B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94B_B1Context* fld_94B_B1();

  class  Fld_22F_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_22F_B1_FContext *fld_22F_B1_FContext = nullptr;;
    Fld_22F_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_B1_FContext *fld_22F_B1_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B1Context* fld_22F_B1();

  class  Fld_12a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_12a_B1_AContext *fld_12a_B1_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_12a_B1_BContext *fld_12a_B1_BContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_12a_B1_CContext *fld_12a_B1_CContext = nullptr;;
    Fld_12a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_12a_B1_AContext *fld_12a_B1_A();
    Fld_12a_B1_BContext *fld_12a_B1_B();
    Fld_12a_B1_CContext *fld_12a_B1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1Context* fld_12a_B1();

  class  Fld_11A_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_11A_B1_AContext *fld_11A_B1_AContext = nullptr;;
    Fld_11A_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_11A_B1_AContext *fld_11A_B1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_B1Context* fld_11A_B1();

  class  Fld_98A_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_98A_B1_AContext *fld_98A_B1_AContext = nullptr;;
    Fld_98A_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_B1_AContext *fld_98A_B1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_B1Context* fld_98A_B1();

  class  Fld_92A_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_92A_B1_AContext *fld_92A_B1_AContext = nullptr;;
    Fld_92A_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_B1_AContext *fld_92A_B1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_B1Context* fld_92A_B1();

  class  Fld_13a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_13a_B1_AContext *fld_13a_B1_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_13a_B1_BContext *fld_13a_B1_BContext = nullptr;;
    Fld_13a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13a_B1_AContext *fld_13a_B1_A();
    Fld_13a_B1_BContext *fld_13a_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B1Context* fld_13a_B1();

  class  Fld_17B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_17B_B1_BContext *fld_17B_B1_BContext = nullptr;;
    Fld_17B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_B1_BContext *fld_17B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B1Context* fld_17B_B1();

  class  Fld_90a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_90a_B1_AContext *fld_90a_B1_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_90a_B1_BContext *fld_90a_B1_BContext = nullptr;;
    Fld_90a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_90a_B1_AContext *fld_90a_B1_A();
    Fld_90a_B1_BContext *fld_90a_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1Context* fld_90a_B1();

  class  Fld_36B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_36B_B1_BContext *fld_36B_B1_BContext = nullptr;;
    Fld_36B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_B1_BContext *fld_36B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B1Context* fld_36B_B1();

  class  Fld_70E_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_70E_B1_EContext *fld_70E_B1_EContext = nullptr;;
    Fld_70E_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70E_B1_EContext *fld_70E_B1_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B1Context* fld_70E_B1();

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

  class  Fld_36B_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_36B_B2_BContext *fld_36B_B2_BContext = nullptr;;
    Fld_36B_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_B2_BContext *fld_36B_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B2Context* fld_36B_B2();

  class  Fld_93B_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_93B_B2_BContext *fld_93B_B2_BContext = nullptr;;
    Fld_93B_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_93B_B2_BContext *fld_93B_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_93B_B2Context* fld_93B_B2();

  class  Fld_95a_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_95a_B2_PContext *fld_95a_B2_PContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_B2_RContext *fld_95a_B2_RContext = nullptr;;
    Fld_95a_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_B2_PContext *fld_95a_B2_P();
    Fld_95a_B2_RContext *fld_95a_B2_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B2Context* fld_95a_B2();

  class  Fld_97A_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_97A_B2_AContext *fld_97A_B2_AContext = nullptr;;
    Fld_97A_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97A_B2_AContext *fld_97A_B2_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97A_B2Context* fld_97A_B2();

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

  class  Fld_17B_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_17B_C1_BContext *fld_17B_C1_BContext = nullptr;;
    Fld_17B_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_C1_BContext *fld_17B_C1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_C1Context* fld_17B_C1();

  class  Fld_22F_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_22F_C1_FContext *fld_22F_C1_FContext = nullptr;;
    Fld_22F_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_C1_FContext *fld_22F_C1_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_C1Context* fld_22F_C1();

  class  Fld_95a_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_95a_C1_PContext *fld_95a_C1_PContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_C1_RContext *fld_95a_C1_RContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_C1_SContext *fld_95a_C1_SContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_C1_UContext *fld_95a_C1_UContext = nullptr;;
    Fld_95a_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_C1_PContext *fld_95a_C1_P();
    Fld_95a_C1_RContext *fld_95a_C1_R();
    Fld_95a_C1_SContext *fld_95a_C1_S();
    Fld_95a_C1_UContext *fld_95a_C1_U();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1Context* fld_95a_C1();

  class  Fld_94a_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_94a_C1_CContext *fld_94a_C1_CContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_94a_C1_DContext *fld_94a_C1_DContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_94a_C1_GContext *fld_94a_C1_GContext = nullptr;;
    Fld_94a_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94a_C1_CContext *fld_94a_C1_C();
    Fld_94a_C1_DContext *fld_94a_C1_D();
    Fld_94a_C1_GContext *fld_94a_C1_G();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_C1Context* fld_94a_C1();

  class  Fld_13B_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_13B_C1_BContext *fld_13B_C1_BContext = nullptr;;
    Fld_13B_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13B_C1_BContext *fld_13B_C1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_C1Context* fld_13B_C1();

  class  Fld_16S_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_C1Context* fld_16S_C1();

  class  Fld_16R_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_C2Context* fld_16R_C2();

  class  Fld_22F_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_22F_C2_FContext *fld_22F_C2_FContext = nullptr;;
    Fld_22F_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_C2_FContext *fld_22F_C2_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_C2Context* fld_22F_C2();

  class  Fld_95U_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_95U_C2_UContext *fld_95U_C2_UContext = nullptr;;
    Fld_95U_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95U_C2_UContext *fld_95U_C2_U();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95U_C2Context* fld_95U_C2();

  class  Fld_98a_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_98a_C2_AContext *fld_98a_C2_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_C2_CContext *fld_98a_C2_CContext = nullptr;;
    Fld_98a_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_C2_AContext *fld_98a_C2_A();
    Fld_98a_C2_CContext *fld_98a_C2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C2Context* fld_98a_C2();

  class  Fld_94C_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_94C_C2_CContext *fld_94C_C2_CContext = nullptr;;
    Fld_94C_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94C_C2_CContext *fld_94C_C2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94C_C2Context* fld_94C_C2();

  class  Fld_70C_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_70C_C2_CContext *fld_70C_C2_CContext = nullptr;;
    Fld_70C_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_C2_CContext *fld_70C_C2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_C2Context* fld_70C_C2();

  class  Fld_16S_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_C2Context* fld_16S_C2();

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

  class  Fld_98a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_98a_D_AContext *fld_98a_D_AContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_98a_D_CContext *fld_98a_D_CContext = nullptr;;
    Fld_98a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_D_AContext *fld_98a_D_A();
    Fld_98a_D_CContext *fld_98a_D_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_DContext* fld_98a_D();

  class  Fld_35B_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT501Parser::Fld_35B_D_BContext *fld_35B_D_BContext = nullptr;;
    Fld_35B_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_D_BContext *fld_35B_D_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_DContext* fld_35B_D();

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
    SwiftMtParser_MT501Parser::Fld_95a_E_PContext *fld_95a_E_PContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_E_QContext *fld_95a_E_QContext = nullptr;;
    SwiftMtParser_MT501Parser::Fld_95a_E_RContext *fld_95a_E_RContext = nullptr;;
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

  class  Fld_13a_A1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A1_AContext* fld_13a_A1_A();

  class  Fld_13a_A1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A1_BContext* fld_13a_A1_B();

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

  class  Fld_20D_B_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20D_B_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20D_B_DContext* fld_20D_B_D();

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

  class  Fld_35B_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B_BContext* fld_35B_B_B();

  class  Fld_94B_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94B_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94B_B1_BContext* fld_94B_B1_B();

  class  Fld_22F_B1_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_B1_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B1_FContext* fld_22F_B1_F();

  class  Fld_12a_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1_AContext* fld_12a_B1_A();

  class  Fld_12a_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1_BContext* fld_12a_B1_B();

  class  Fld_12a_B1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1_CContext* fld_12a_B1_C();

  class  Fld_11A_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_11A_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_B1_AContext* fld_11A_B1_A();

  class  Fld_98A_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_B1_AContext* fld_98A_B1_A();

  class  Fld_92A_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_B1_AContext* fld_92A_B1_A();

  class  Fld_13a_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B1_AContext* fld_13a_B1_A();

  class  Fld_13a_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B1_BContext* fld_13a_B1_B();

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

  class  Fld_90a_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1_AContext* fld_90a_B1_A();

  class  Fld_90a_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1_BContext* fld_90a_B1_B();

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

  class  Fld_70E_B1_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70E_B1_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B1_EContext* fld_70E_B1_E();

  class  Fld_36B_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_36B_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B2_BContext* fld_36B_B2_B();

  class  Fld_93B_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_93B_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_93B_B2_BContext* fld_93B_B2_B();

  class  Fld_95a_B2_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B2_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B2_PContext* fld_95a_B2_P();

  class  Fld_95a_B2_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B2_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B2_RContext* fld_95a_B2_R();

  class  Fld_97A_B2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97A_B2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97A_B2_AContext* fld_97A_B2_A();

  class  Fld_17B_C1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_C1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_C1_BContext* fld_17B_C1_B();

  class  Fld_22F_C1_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_C1_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_C1_FContext* fld_22F_C1_F();

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

  class  Fld_95a_C1_SContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C1_SContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1_SContext* fld_95a_C1_S();

  class  Fld_95a_C1_UContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C1_UContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1_UContext* fld_95a_C1_U();

  class  Fld_94a_C1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_C1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_C1_CContext* fld_94a_C1_C();

  class  Fld_94a_C1_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_C1_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_C1_DContext* fld_94a_C1_D();

  class  Fld_94a_C1_GContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_C1_GContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_C1_GContext* fld_94a_C1_G();

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

  class  Fld_22F_C2_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_C2_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_C2_FContext* fld_22F_C2_F();

  class  Fld_95U_C2_UContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95U_C2_UContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95U_C2_UContext* fld_95U_C2_U();

  class  Fld_98a_C2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C2_AContext* fld_98a_C2_A();

  class  Fld_98a_C2_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C2_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C2_CContext* fld_98a_C2_C();

  class  Fld_94C_C2_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94C_C2_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94C_C2_CContext* fld_94C_C2_C();

  class  Fld_70C_C2_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70C_C2_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_C2_CContext* fld_70C_C2_C();

  class  Fld_98a_D_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_D_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_D_AContext* fld_98a_D_A();

  class  Fld_98a_D_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_D_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_D_CContext* fld_98a_D_C();

  class  Fld_35B_D_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_D_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_D_BContext* fld_35B_D_B();

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
