
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT535Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT535.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT535Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, TAG_BH = 43, TAG_AH = 44, 
    TAG_UH = 45, TAG_MT = 46, TAG_TR = 47, MT_END = 48, LBRACE = 49, RBRACE = 50, 
    COLON = 51, START_OF_FIELD = 52, ANY = 53
  };

  enum {
    RuleMessage = 0, RuleBh = 1, RuleBh_content = 2, RuleAh = 3, RuleAh_content = 4, 
    RuleUh = 5, RuleTr = 6, RuleSys_block = 7, RuleSys_element = 8, RuleSys_element_key = 9, 
    RuleSys_element_content = 10, RuleMt = 11, RuleSeq_A = 12, RuleSeq_A1 = 13, 
    RuleSeq_B = 14, RuleSeq_B1 = 15, RuleSeq_B1a = 16, RuleSeq_B1b = 17, 
    RuleFld_16R_A = 18, RuleFld_28E_A = 19, RuleFld_13a_A = 20, RuleFld_20C_A = 21, 
    RuleFld_23G_A = 22, RuleFld_98a_A = 23, RuleFld_22F_A = 24, RuleFld_16R_A1 = 25, 
    RuleFld_13a_A1 = 26, RuleFld_20C_A1 = 27, RuleFld_16S_A1 = 28, RuleFld_95a_A = 29, 
    RuleFld_97a_A = 30, RuleFld_17B_A = 31, RuleFld_16S_A = 32, RuleFld_16R_B = 33, 
    RuleFld_95a_B = 34, RuleFld_97a_B = 35, RuleFld_94a_B = 36, RuleFld_17B_B = 37, 
    RuleFld_16R_B1 = 38, RuleFld_35B_B1 = 39, RuleFld_16R_B1a = 40, RuleFld_94a_B1a = 41, 
    RuleFld_22F_B1a = 42, RuleFld_12a_B1a = 43, RuleFld_11A_B1a = 44, RuleFld_98A_B1a = 45, 
    RuleFld_92A_B1a = 46, RuleFld_13a_B1a = 47, RuleFld_17B_B1a = 48, RuleFld_90a_B1a = 49, 
    RuleFld_36B_B1a = 50, RuleFld_35B_B1a = 51, RuleFld_70E_B1a = 52, RuleFld_16S_B1a = 53, 
    RuleFld_22H_B1 = 54, RuleFld_90a_B1 = 55, RuleFld_94B_B1 = 56, RuleFld_98a_B1 = 57, 
    RuleFld_93B_B1 = 58, RuleFld_16R_B1b = 59, RuleFld_93a_B1b = 60, RuleFld_22a_B1b = 61, 
    RuleFld_94a_B1b = 62, RuleFld_90a_B1b = 63, RuleFld_98a_B1b = 64, RuleFld_99A_B1b = 65, 
    RuleFld_19A_B1b = 66, RuleFld_92B_B1b = 67, RuleFld_70C_B1b = 68, RuleFld_28E_A_E = 69, 
    RuleFld_13a_A_A = 70, RuleFld_13a_A_J = 71, RuleFld_20C_A_C = 72, RuleFld_23G_A_G = 73, 
    RuleFld_98a_A_A = 74, RuleFld_98a_A_C = 75, RuleFld_98a_A_E = 76, RuleFld_22F_A_F = 77, 
    RuleFld_13a_A1_A = 78, RuleFld_13a_A1_B = 79, RuleFld_20C_A1_C = 80, 
    RuleFld_95a_A_L = 81, RuleFld_95a_A_P = 82, RuleFld_95a_A_R = 83, RuleFld_97a_A_A = 84, 
    RuleFld_97a_A_B = 85, RuleFld_17B_A_B = 86, RuleFld_95a_B_L = 87, RuleFld_95a_B_P = 88, 
    RuleFld_95a_B_R = 89, RuleFld_97a_B_A = 90, RuleFld_97a_B_B = 91, RuleFld_94a_B_B = 92, 
    RuleFld_94a_B_C = 93, RuleFld_94a_B_F = 94, RuleFld_94a_B_L = 95, RuleFld_17B_B_B = 96, 
    RuleFld_35B_B1_B = 97, RuleFld_94a_B1a_B = 98, RuleFld_94a_B1a_D = 99, 
    RuleFld_22F_B1a_F = 100, RuleFld_12a_B1a_A = 101, RuleFld_12a_B1a_B = 102, 
    RuleFld_12a_B1a_C = 103, RuleFld_11A_B1a_A = 104, RuleFld_98A_B1a_A = 105, 
    RuleFld_92A_B1a_A = 106, RuleFld_13a_B1a_A = 107, RuleFld_13a_B1a_B = 108, 
    RuleFld_13a_B1a_K = 109, RuleFld_17B_B1a_B = 110, RuleFld_90a_B1a_A = 111, 
    RuleFld_90a_B1a_B = 112, RuleFld_36B_B1a_B = 113, RuleFld_35B_B1a_B = 114, 
    RuleFld_70E_B1a_E = 115, RuleFld_22H_B1_H = 116, RuleFld_90a_B1_A = 117, 
    RuleFld_90a_B1_B = 118, RuleFld_90a_B1_E = 119, RuleFld_94B_B1_B = 120, 
    RuleFld_98a_B1_A = 121, RuleFld_98a_B1_C = 122, RuleFld_93B_B1_B = 123, 
    RuleFld_93a_B1b_B = 124, RuleFld_93a_B1b_C = 125, RuleFld_22a_B1b_F = 126, 
    RuleFld_22a_B1b_H = 127, RuleFld_94a_B1b_B = 128, RuleFld_94a_B1b_C = 129, 
    RuleFld_94a_B1b_F = 130, RuleFld_94a_B1b_L = 131, RuleFld_90a_B1b_A = 132, 
    RuleFld_90a_B1b_B = 133, RuleFld_90a_B1b_E = 134, RuleFld_98a_B1b_A = 135, 
    RuleFld_98a_B1b_C = 136, RuleFld_99A_B1b_A = 137, RuleFld_19A_B1b_A = 138, 
    RuleFld_92B_B1b_B = 139, RuleFld_70C_B1b_C = 140
  };

  SwiftMtParser_MT535Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT535Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  public:
      typedef SwiftMtParser_MT535Lexer tLexer;
      typedef SwiftMtParser_MT535Parser tParser;

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
  class Seq_B1aContext;
  class Seq_B1bContext;
  class Fld_16R_AContext;
  class Fld_28E_AContext;
  class Fld_13a_AContext;
  class Fld_20C_AContext;
  class Fld_23G_AContext;
  class Fld_98a_AContext;
  class Fld_22F_AContext;
  class Fld_16R_A1Context;
  class Fld_13a_A1Context;
  class Fld_20C_A1Context;
  class Fld_16S_A1Context;
  class Fld_95a_AContext;
  class Fld_97a_AContext;
  class Fld_17B_AContext;
  class Fld_16S_AContext;
  class Fld_16R_BContext;
  class Fld_95a_BContext;
  class Fld_97a_BContext;
  class Fld_94a_BContext;
  class Fld_17B_BContext;
  class Fld_16R_B1Context;
  class Fld_35B_B1Context;
  class Fld_16R_B1aContext;
  class Fld_94a_B1aContext;
  class Fld_22F_B1aContext;
  class Fld_12a_B1aContext;
  class Fld_11A_B1aContext;
  class Fld_98A_B1aContext;
  class Fld_92A_B1aContext;
  class Fld_13a_B1aContext;
  class Fld_17B_B1aContext;
  class Fld_90a_B1aContext;
  class Fld_36B_B1aContext;
  class Fld_35B_B1aContext;
  class Fld_70E_B1aContext;
  class Fld_16S_B1aContext;
  class Fld_22H_B1Context;
  class Fld_90a_B1Context;
  class Fld_94B_B1Context;
  class Fld_98a_B1Context;
  class Fld_93B_B1Context;
  class Fld_16R_B1bContext;
  class Fld_93a_B1bContext;
  class Fld_22a_B1bContext;
  class Fld_94a_B1bContext;
  class Fld_90a_B1bContext;
  class Fld_98a_B1bContext;
  class Fld_99A_B1bContext;
  class Fld_19A_B1bContext;
  class Fld_92B_B1bContext;
  class Fld_70C_B1bContext;
  class Fld_28E_A_EContext;
  class Fld_13a_A_AContext;
  class Fld_13a_A_JContext;
  class Fld_20C_A_CContext;
  class Fld_23G_A_GContext;
  class Fld_98a_A_AContext;
  class Fld_98a_A_CContext;
  class Fld_98a_A_EContext;
  class Fld_22F_A_FContext;
  class Fld_13a_A1_AContext;
  class Fld_13a_A1_BContext;
  class Fld_20C_A1_CContext;
  class Fld_95a_A_LContext;
  class Fld_95a_A_PContext;
  class Fld_95a_A_RContext;
  class Fld_97a_A_AContext;
  class Fld_97a_A_BContext;
  class Fld_17B_A_BContext;
  class Fld_95a_B_LContext;
  class Fld_95a_B_PContext;
  class Fld_95a_B_RContext;
  class Fld_97a_B_AContext;
  class Fld_97a_B_BContext;
  class Fld_94a_B_BContext;
  class Fld_94a_B_CContext;
  class Fld_94a_B_FContext;
  class Fld_94a_B_LContext;
  class Fld_17B_B_BContext;
  class Fld_35B_B1_BContext;
  class Fld_94a_B1a_BContext;
  class Fld_94a_B1a_DContext;
  class Fld_22F_B1a_FContext;
  class Fld_12a_B1a_AContext;
  class Fld_12a_B1a_BContext;
  class Fld_12a_B1a_CContext;
  class Fld_11A_B1a_AContext;
  class Fld_98A_B1a_AContext;
  class Fld_92A_B1a_AContext;
  class Fld_13a_B1a_AContext;
  class Fld_13a_B1a_BContext;
  class Fld_13a_B1a_KContext;
  class Fld_17B_B1a_BContext;
  class Fld_90a_B1a_AContext;
  class Fld_90a_B1a_BContext;
  class Fld_36B_B1a_BContext;
  class Fld_35B_B1a_BContext;
  class Fld_70E_B1a_EContext;
  class Fld_22H_B1_HContext;
  class Fld_90a_B1_AContext;
  class Fld_90a_B1_BContext;
  class Fld_90a_B1_EContext;
  class Fld_94B_B1_BContext;
  class Fld_98a_B1_AContext;
  class Fld_98a_B1_CContext;
  class Fld_93B_B1_BContext;
  class Fld_93a_B1b_BContext;
  class Fld_93a_B1b_CContext;
  class Fld_22a_B1b_FContext;
  class Fld_22a_B1b_HContext;
  class Fld_94a_B1b_BContext;
  class Fld_94a_B1b_CContext;
  class Fld_94a_B1b_FContext;
  class Fld_94a_B1b_LContext;
  class Fld_90a_B1b_AContext;
  class Fld_90a_B1b_BContext;
  class Fld_90a_B1b_EContext;
  class Fld_98a_B1b_AContext;
  class Fld_98a_B1b_CContext;
  class Fld_99A_B1b_AContext;
  class Fld_19A_B1b_AContext;
  class Fld_92B_B1b_BContext;
  class Fld_70C_B1b_CContext; 

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
    SwiftMtParser_MT535Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_28E_AContext *fld_28E_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_13a_AContext *fld_13a_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98a_AContext *fld_98a_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_22F_AContext *fld_22F_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_95a_AContext *fld_95a_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_97a_AContext *fld_97a_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_17B_AContext *fld_17B_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_28E_AContext *fld_28E_A();
    Fld_20C_AContext *fld_20C_A();
    Fld_23G_AContext *fld_23G_A();
    Fld_97a_AContext *fld_97a_A();
    Fld_16S_AContext *fld_16S_A();
    Fld_13a_AContext *fld_13a_A();
    std::vector<Fld_98a_AContext *> fld_98a_A();
    Fld_98a_AContext* fld_98a_A(size_t i);
    std::vector<Fld_22F_AContext *> fld_22F_A();
    Fld_22F_AContext* fld_22F_A(size_t i);
    std::vector<Seq_A1Context *> seq_A1();
    Seq_A1Context* seq_A1(size_t i);
    std::vector<Fld_95a_AContext *> fld_95a_A();
    Fld_95a_AContext* fld_95a_A(size_t i);
    std::vector<Fld_17B_AContext *> fld_17B_A();
    Fld_17B_AContext* fld_17B_A(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_AContext* seq_A();

  class  Seq_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT535Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_13a_A1Context *fld_13a_A1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_20C_A1Context *fld_20C_A1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
    Seq_A1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_A1Context *fld_16R_A1();
    Fld_20C_A1Context *fld_20C_A1();
    Fld_16S_A1Context *fld_16S_A1();
    Fld_13a_A1Context *fld_13a_A1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_A1Context* seq_A1();

  class  Seq_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT535Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_95a_BContext *fld_95a_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_97a_BContext *fld_97a_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_BContext *fld_94a_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_17B_BContext *fld_17B_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Seq_B1Context *seq_B1Context = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    std::vector<Fld_95a_BContext *> fld_95a_B();
    Fld_95a_BContext* fld_95a_B(size_t i);
    Fld_97a_BContext *fld_97a_B();
    std::vector<Fld_94a_BContext *> fld_94a_B();
    Fld_94a_BContext* fld_94a_B(size_t i);
    Fld_17B_BContext *fld_17B_B();
    std::vector<Seq_B1Context *> seq_B1();
    Seq_B1Context* seq_B1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT535Parser::Fld_16R_B1Context *fld_16R_B1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_35B_B1Context *fld_35B_B1Context = nullptr;;
    SwiftMtParser_MT535Parser::Seq_B1aContext *seq_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_22H_B1Context *fld_22H_B1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1Context *fld_90a_B1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94B_B1Context *fld_94B_B1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98a_B1Context *fld_98a_B1Context = nullptr;;
    SwiftMtParser_MT535Parser::Fld_93B_B1Context *fld_93B_B1Context = nullptr;;
    SwiftMtParser_MT535Parser::Seq_B1bContext *seq_B1bContext = nullptr;;
    Seq_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1Context *fld_16R_B1();
    Fld_35B_B1Context *fld_35B_B1();
    Seq_B1aContext *seq_B1a();
    Fld_22H_B1Context *fld_22H_B1();
    Fld_90a_B1Context *fld_90a_B1();
    Fld_94B_B1Context *fld_94B_B1();
    Fld_98a_B1Context *fld_98a_B1();
    std::vector<Fld_93B_B1Context *> fld_93B_B1();
    Fld_93B_B1Context* fld_93B_B1(size_t i);
    std::vector<Seq_B1bContext *> seq_B1b();
    Seq_B1bContext* seq_B1b(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1Context* seq_B1();

  class  Seq_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT535Parser::Fld_16R_B1aContext *fld_16R_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B1aContext *fld_94a_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_22F_B1aContext *fld_22F_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_12a_B1aContext *fld_12a_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_11A_B1aContext *fld_11A_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98A_B1aContext *fld_98A_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_92A_B1aContext *fld_92A_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_13a_B1aContext *fld_13a_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_17B_B1aContext *fld_17B_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1aContext *fld_90a_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_36B_B1aContext *fld_36B_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_35B_B1aContext *fld_35B_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_70E_B1aContext *fld_70E_B1aContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_16S_B1aContext *fld_16S_B1aContext = nullptr;;
    Seq_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1aContext *fld_16R_B1a();
    Fld_16S_B1aContext *fld_16S_B1a();
    std::vector<Fld_94a_B1aContext *> fld_94a_B1a();
    Fld_94a_B1aContext* fld_94a_B1a(size_t i);
    std::vector<Fld_22F_B1aContext *> fld_22F_B1a();
    Fld_22F_B1aContext* fld_22F_B1a(size_t i);
    std::vector<Fld_12a_B1aContext *> fld_12a_B1a();
    Fld_12a_B1aContext* fld_12a_B1a(size_t i);
    Fld_11A_B1aContext *fld_11A_B1a();
    std::vector<Fld_98A_B1aContext *> fld_98A_B1a();
    Fld_98A_B1aContext* fld_98A_B1a(size_t i);
    std::vector<Fld_92A_B1aContext *> fld_92A_B1a();
    Fld_92A_B1aContext* fld_92A_B1a(size_t i);
    std::vector<Fld_13a_B1aContext *> fld_13a_B1a();
    Fld_13a_B1aContext* fld_13a_B1a(size_t i);
    std::vector<Fld_17B_B1aContext *> fld_17B_B1a();
    Fld_17B_B1aContext* fld_17B_B1a(size_t i);
    std::vector<Fld_90a_B1aContext *> fld_90a_B1a();
    Fld_90a_B1aContext* fld_90a_B1a(size_t i);
    std::vector<Fld_36B_B1aContext *> fld_36B_B1a();
    Fld_36B_B1aContext* fld_36B_B1a(size_t i);
    std::vector<Fld_35B_B1aContext *> fld_35B_B1a();
    Fld_35B_B1aContext* fld_35B_B1a(size_t i);
    Fld_70E_B1aContext *fld_70E_B1a();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1aContext* seq_B1a();

  class  Seq_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT535Parser::Fld_16R_B1bContext *fld_16R_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_93a_B1bContext *fld_93a_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_22a_B1bContext *fld_22a_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B1bContext *fld_94a_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1bContext *fld_90a_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98a_B1bContext *fld_98a_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_99A_B1bContext *fld_99A_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_19A_B1bContext *fld_19A_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_92B_B1bContext *fld_92B_B1bContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_70C_B1bContext *fld_70C_B1bContext = nullptr;;
    Seq_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1bContext *fld_16R_B1b();
    std::vector<Fld_93a_B1bContext *> fld_93a_B1b();
    Fld_93a_B1bContext* fld_93a_B1b(size_t i);
    Fld_22a_B1bContext *fld_22a_B1b();
    std::vector<Fld_94a_B1bContext *> fld_94a_B1b();
    Fld_94a_B1bContext* fld_94a_B1b(size_t i);
    Fld_90a_B1bContext *fld_90a_B1b();
    Fld_98a_B1bContext *fld_98a_B1b();
    Fld_99A_B1bContext *fld_99A_B1b();
    std::vector<Fld_19A_B1bContext *> fld_19A_B1b();
    Fld_19A_B1bContext* fld_19A_B1b(size_t i);
    Fld_92B_B1bContext *fld_92B_B1b();
    Fld_70C_B1bContext *fld_70C_B1b();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1bContext* seq_B1b();

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
    SwiftMtParser_MT535Parser::Fld_28E_A_EContext *fld_28E_A_EContext = nullptr;;
    Fld_28E_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_28E_A_EContext *fld_28E_A_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_28E_AContext* fld_28E_A();

  class  Fld_13a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_13a_A_AContext *fld_13a_A_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_13a_A_JContext *fld_13a_A_JContext = nullptr;;
    Fld_13a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13a_A_AContext *fld_13a_A_A();
    Fld_13a_A_JContext *fld_13a_A_J();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_AContext* fld_13a_A();

  class  Fld_20C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
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
    SwiftMtParser_MT535Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
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
    SwiftMtParser_MT535Parser::Fld_98a_A_AContext *fld_98a_A_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98a_A_CContext *fld_98a_A_CContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98a_A_EContext *fld_98a_A_EContext = nullptr;;
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
    SwiftMtParser_MT535Parser::Fld_22F_A_FContext *fld_22F_A_FContext = nullptr;;
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

  class  Fld_13a_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_13a_A1_AContext *fld_13a_A1_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_13a_A1_BContext *fld_13a_A1_BContext = nullptr;;
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
    SwiftMtParser_MT535Parser::Fld_20C_A1_CContext *fld_20C_A1_CContext = nullptr;;
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
    SwiftMtParser_MT535Parser::Fld_95a_A_LContext *fld_95a_A_LContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_95a_A_PContext *fld_95a_A_PContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_95a_A_RContext *fld_95a_A_RContext = nullptr;;
    Fld_95a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_A_LContext *fld_95a_A_L();
    Fld_95a_A_PContext *fld_95a_A_P();
    Fld_95a_A_RContext *fld_95a_A_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_AContext* fld_95a_A();

  class  Fld_97a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_97a_A_AContext *fld_97a_A_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_97a_A_BContext *fld_97a_A_BContext = nullptr;;
    Fld_97a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_A_AContext *fld_97a_A_A();
    Fld_97a_A_BContext *fld_97a_A_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_AContext* fld_97a_A();

  class  Fld_17B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_17B_A_BContext *fld_17B_A_BContext = nullptr;;
    Fld_17B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_A_BContext *fld_17B_A_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_AContext* fld_17B_A();

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

  class  Fld_95a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_95a_B_LContext *fld_95a_B_LContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_95a_B_PContext *fld_95a_B_PContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_95a_B_RContext *fld_95a_B_RContext = nullptr;;
    Fld_95a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_B_LContext *fld_95a_B_L();
    Fld_95a_B_PContext *fld_95a_B_P();
    Fld_95a_B_RContext *fld_95a_B_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_BContext* fld_95a_B();

  class  Fld_97a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_97a_B_AContext *fld_97a_B_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_97a_B_BContext *fld_97a_B_BContext = nullptr;;
    Fld_97a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_B_AContext *fld_97a_B_A();
    Fld_97a_B_BContext *fld_97a_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_BContext* fld_97a_B();

  class  Fld_94a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_94a_B_BContext *fld_94a_B_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B_CContext *fld_94a_B_CContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B_FContext *fld_94a_B_FContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B_LContext *fld_94a_B_LContext = nullptr;;
    Fld_94a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94a_B_BContext *fld_94a_B_B();
    Fld_94a_B_CContext *fld_94a_B_C();
    Fld_94a_B_FContext *fld_94a_B_F();
    Fld_94a_B_LContext *fld_94a_B_L();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_BContext* fld_94a_B();

  class  Fld_17B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_17B_B_BContext *fld_17B_B_BContext = nullptr;;
    Fld_17B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_B_BContext *fld_17B_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_BContext* fld_17B_B();

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
    SwiftMtParser_MT535Parser::Fld_35B_B1_BContext *fld_35B_B1_BContext = nullptr;;
    Fld_35B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_B1_BContext *fld_35B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B1Context* fld_35B_B1();

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

  class  Fld_94a_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_94a_B1a_BContext *fld_94a_B1a_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B1a_DContext *fld_94a_B1a_DContext = nullptr;;
    Fld_94a_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94a_B1a_BContext *fld_94a_B1a_B();
    Fld_94a_B1a_DContext *fld_94a_B1a_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1aContext* fld_94a_B1a();

  class  Fld_22F_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_22F_B1a_FContext *fld_22F_B1a_FContext = nullptr;;
    Fld_22F_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_B1a_FContext *fld_22F_B1a_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B1aContext* fld_22F_B1a();

  class  Fld_12a_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_12a_B1a_AContext *fld_12a_B1a_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_12a_B1a_BContext *fld_12a_B1a_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_12a_B1a_CContext *fld_12a_B1a_CContext = nullptr;;
    Fld_12a_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_12a_B1a_AContext *fld_12a_B1a_A();
    Fld_12a_B1a_BContext *fld_12a_B1a_B();
    Fld_12a_B1a_CContext *fld_12a_B1a_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1aContext* fld_12a_B1a();

  class  Fld_11A_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_11A_B1a_AContext *fld_11A_B1a_AContext = nullptr;;
    Fld_11A_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_11A_B1a_AContext *fld_11A_B1a_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_B1aContext* fld_11A_B1a();

  class  Fld_98A_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_98A_B1a_AContext *fld_98A_B1a_AContext = nullptr;;
    Fld_98A_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_B1a_AContext *fld_98A_B1a_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_B1aContext* fld_98A_B1a();

  class  Fld_92A_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_92A_B1a_AContext *fld_92A_B1a_AContext = nullptr;;
    Fld_92A_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_B1a_AContext *fld_92A_B1a_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_B1aContext* fld_92A_B1a();

  class  Fld_13a_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_13a_B1a_AContext *fld_13a_B1a_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_13a_B1a_BContext *fld_13a_B1a_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_13a_B1a_KContext *fld_13a_B1a_KContext = nullptr;;
    Fld_13a_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13a_B1a_AContext *fld_13a_B1a_A();
    Fld_13a_B1a_BContext *fld_13a_B1a_B();
    Fld_13a_B1a_KContext *fld_13a_B1a_K();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B1aContext* fld_13a_B1a();

  class  Fld_17B_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_17B_B1a_BContext *fld_17B_B1a_BContext = nullptr;;
    Fld_17B_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_B1a_BContext *fld_17B_B1a_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B1aContext* fld_17B_B1a();

  class  Fld_90a_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_90a_B1a_AContext *fld_90a_B1a_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1a_BContext *fld_90a_B1a_BContext = nullptr;;
    Fld_90a_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_90a_B1a_AContext *fld_90a_B1a_A();
    Fld_90a_B1a_BContext *fld_90a_B1a_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1aContext* fld_90a_B1a();

  class  Fld_36B_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_36B_B1a_BContext *fld_36B_B1a_BContext = nullptr;;
    Fld_36B_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_B1a_BContext *fld_36B_B1a_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B1aContext* fld_36B_B1a();

  class  Fld_35B_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_35B_B1a_BContext *fld_35B_B1a_BContext = nullptr;;
    Fld_35B_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_B1a_BContext *fld_35B_B1a_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B1aContext* fld_35B_B1a();

  class  Fld_70E_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_70E_B1a_EContext *fld_70E_B1a_EContext = nullptr;;
    Fld_70E_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70E_B1a_EContext *fld_70E_B1a_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B1aContext* fld_70E_B1a();

  class  Fld_16S_B1aContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_B1aContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_B1aContext* fld_16S_B1a();

  class  Fld_22H_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_22H_B1_HContext *fld_22H_B1_HContext = nullptr;;
    Fld_22H_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_B1_HContext *fld_22H_B1_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_B1Context* fld_22H_B1();

  class  Fld_90a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_90a_B1_AContext *fld_90a_B1_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1_BContext *fld_90a_B1_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1_EContext *fld_90a_B1_EContext = nullptr;;
    Fld_90a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_90a_B1_AContext *fld_90a_B1_A();
    Fld_90a_B1_BContext *fld_90a_B1_B();
    Fld_90a_B1_EContext *fld_90a_B1_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1Context* fld_90a_B1();

  class  Fld_94B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_94B_B1_BContext *fld_94B_B1_BContext = nullptr;;
    Fld_94B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94B_B1_BContext *fld_94B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94B_B1Context* fld_94B_B1();

  class  Fld_98a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_98a_B1_AContext *fld_98a_B1_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98a_B1_CContext *fld_98a_B1_CContext = nullptr;;
    Fld_98a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B1_AContext *fld_98a_B1_A();
    Fld_98a_B1_CContext *fld_98a_B1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B1Context* fld_98a_B1();

  class  Fld_93B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_93B_B1_BContext *fld_93B_B1_BContext = nullptr;;
    Fld_93B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_93B_B1_BContext *fld_93B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_93B_B1Context* fld_93B_B1();

  class  Fld_16R_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_B1bContext* fld_16R_B1b();

  class  Fld_93a_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_93a_B1b_BContext *fld_93a_B1b_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_93a_B1b_CContext *fld_93a_B1b_CContext = nullptr;;
    Fld_93a_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_93a_B1b_BContext *fld_93a_B1b_B();
    Fld_93a_B1b_CContext *fld_93a_B1b_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_93a_B1bContext* fld_93a_B1b();

  class  Fld_22a_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_22a_B1b_FContext *fld_22a_B1b_FContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_22a_B1b_HContext *fld_22a_B1b_HContext = nullptr;;
    Fld_22a_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_B1b_FContext *fld_22a_B1b_F();
    Fld_22a_B1b_HContext *fld_22a_B1b_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B1bContext* fld_22a_B1b();

  class  Fld_94a_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_94a_B1b_BContext *fld_94a_B1b_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B1b_CContext *fld_94a_B1b_CContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B1b_FContext *fld_94a_B1b_FContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_94a_B1b_LContext *fld_94a_B1b_LContext = nullptr;;
    Fld_94a_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94a_B1b_BContext *fld_94a_B1b_B();
    Fld_94a_B1b_CContext *fld_94a_B1b_C();
    Fld_94a_B1b_FContext *fld_94a_B1b_F();
    Fld_94a_B1b_LContext *fld_94a_B1b_L();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1bContext* fld_94a_B1b();

  class  Fld_90a_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_90a_B1b_AContext *fld_90a_B1b_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1b_BContext *fld_90a_B1b_BContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_90a_B1b_EContext *fld_90a_B1b_EContext = nullptr;;
    Fld_90a_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_90a_B1b_AContext *fld_90a_B1b_A();
    Fld_90a_B1b_BContext *fld_90a_B1b_B();
    Fld_90a_B1b_EContext *fld_90a_B1b_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1bContext* fld_90a_B1b();

  class  Fld_98a_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_98a_B1b_AContext *fld_98a_B1b_AContext = nullptr;;
    SwiftMtParser_MT535Parser::Fld_98a_B1b_CContext *fld_98a_B1b_CContext = nullptr;;
    Fld_98a_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B1b_AContext *fld_98a_B1b_A();
    Fld_98a_B1b_CContext *fld_98a_B1b_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B1bContext* fld_98a_B1b();

  class  Fld_99A_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_99A_B1b_AContext *fld_99A_B1b_AContext = nullptr;;
    Fld_99A_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_99A_B1b_AContext *fld_99A_B1b_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_B1bContext* fld_99A_B1b();

  class  Fld_19A_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_19A_B1b_AContext *fld_19A_B1b_AContext = nullptr;;
    Fld_19A_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_B1b_AContext *fld_19A_B1b_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_B1bContext* fld_19A_B1b();

  class  Fld_92B_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_92B_B1b_BContext *fld_92B_B1b_BContext = nullptr;;
    Fld_92B_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92B_B1b_BContext *fld_92B_B1b_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92B_B1bContext* fld_92B_B1b();

  class  Fld_70C_B1bContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT535Parser::Fld_70C_B1b_CContext *fld_70C_B1b_CContext = nullptr;;
    Fld_70C_B1bContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_B1b_CContext *fld_70C_B1b_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_B1bContext* fld_70C_B1b();

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

  class  Fld_13a_A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A_AContext* fld_13a_A_A();

  class  Fld_13a_A_JContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_A_JContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_A_JContext* fld_13a_A_J();

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

  class  Fld_95a_A_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_A_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_A_LContext* fld_95a_A_L();

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

  class  Fld_97a_A_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_A_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_A_AContext* fld_97a_A_A();

  class  Fld_97a_A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_A_BContext* fld_97a_A_B();

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

  class  Fld_95a_B_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B_LContext* fld_95a_B_L();

  class  Fld_95a_B_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B_PContext* fld_95a_B_P();

  class  Fld_95a_B_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B_RContext* fld_95a_B_R();

  class  Fld_97a_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_B_AContext* fld_97a_B_A();

  class  Fld_97a_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_B_BContext* fld_97a_B_B();

  class  Fld_94a_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B_BContext* fld_94a_B_B();

  class  Fld_94a_B_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B_CContext* fld_94a_B_C();

  class  Fld_94a_B_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B_FContext* fld_94a_B_F();

  class  Fld_94a_B_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B_LContext* fld_94a_B_L();

  class  Fld_17B_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B_BContext* fld_17B_B_B();

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

  class  Fld_94a_B1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1a_BContext* fld_94a_B1a_B();

  class  Fld_94a_B1a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B1a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1a_DContext* fld_94a_B1a_D();

  class  Fld_22F_B1a_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_B1a_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B1a_FContext* fld_22F_B1a_F();

  class  Fld_12a_B1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1a_AContext* fld_12a_B1a_A();

  class  Fld_12a_B1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1a_BContext* fld_12a_B1a_B();

  class  Fld_12a_B1a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B1a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B1a_CContext* fld_12a_B1a_C();

  class  Fld_11A_B1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_11A_B1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_B1a_AContext* fld_11A_B1a_A();

  class  Fld_98A_B1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_B1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_B1a_AContext* fld_98A_B1a_A();

  class  Fld_92A_B1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_B1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_B1a_AContext* fld_92A_B1a_A();

  class  Fld_13a_B1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_B1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B1a_AContext* fld_13a_B1a_A();

  class  Fld_13a_B1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_B1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B1a_BContext* fld_13a_B1a_B();

  class  Fld_13a_B1a_KContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_B1a_KContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B1a_KContext* fld_13a_B1a_K();

  class  Fld_17B_B1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_B1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B1a_BContext* fld_17B_B1a_B();

  class  Fld_90a_B1a_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1a_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1a_AContext* fld_90a_B1a_A();

  class  Fld_90a_B1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1a_BContext* fld_90a_B1a_B();

  class  Fld_36B_B1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_36B_B1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B1a_BContext* fld_36B_B1a_B();

  class  Fld_35B_B1a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_B1a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B1a_BContext* fld_35B_B1a_B();

  class  Fld_70E_B1a_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70E_B1a_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B1a_EContext* fld_70E_B1a_E();

  class  Fld_22H_B1_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22H_B1_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_B1_HContext* fld_22H_B1_H();

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

  class  Fld_90a_B1_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1_EContext* fld_90a_B1_E();

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

  class  Fld_98a_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B1_AContext* fld_98a_B1_A();

  class  Fld_98a_B1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B1_CContext* fld_98a_B1_C();

  class  Fld_93B_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_93B_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_93B_B1_BContext* fld_93B_B1_B();

  class  Fld_93a_B1b_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_93a_B1b_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_93a_B1b_BContext* fld_93a_B1b_B();

  class  Fld_93a_B1b_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_93a_B1b_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_93a_B1b_CContext* fld_93a_B1b_C();

  class  Fld_22a_B1b_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_B1b_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B1b_FContext* fld_22a_B1b_F();

  class  Fld_22a_B1b_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22a_B1b_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_B1b_HContext* fld_22a_B1b_H();

  class  Fld_94a_B1b_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B1b_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1b_BContext* fld_94a_B1b_B();

  class  Fld_94a_B1b_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B1b_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1b_CContext* fld_94a_B1b_C();

  class  Fld_94a_B1b_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B1b_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1b_FContext* fld_94a_B1b_F();

  class  Fld_94a_B1b_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94a_B1b_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94a_B1b_LContext* fld_94a_B1b_L();

  class  Fld_90a_B1b_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1b_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1b_AContext* fld_90a_B1b_A();

  class  Fld_90a_B1b_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1b_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1b_BContext* fld_90a_B1b_B();

  class  Fld_90a_B1b_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B1b_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B1b_EContext* fld_90a_B1b_E();

  class  Fld_98a_B1b_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B1b_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B1b_AContext* fld_98a_B1b_A();

  class  Fld_98a_B1b_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B1b_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B1b_CContext* fld_98a_B1b_C();

  class  Fld_99A_B1b_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_99A_B1b_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_B1b_AContext* fld_99A_B1b_A();

  class  Fld_19A_B1b_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_B1b_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_B1b_AContext* fld_19A_B1b_A();

  class  Fld_92B_B1b_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92B_B1b_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92B_B1b_BContext* fld_92B_B1b_B();

  class  Fld_70C_B1b_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70C_B1b_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_B1b_CContext* fld_70C_B1b_C();


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
