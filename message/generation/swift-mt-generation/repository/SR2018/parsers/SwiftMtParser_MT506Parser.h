
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT506Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT506.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT506Parser : public antlr4::Parser {
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
    RuleSeq_A2 = 14, RuleSeq_B = 15, RuleSeq_B1 = 16, RuleSeq_C = 17, RuleSeq_C1 = 18, 
    RuleSeq_C2 = 19, RuleSeq_C3 = 20, RuleSeq_D = 21, RuleSeq_D1 = 22, RuleSeq_D2 = 23, 
    RuleSeq_D3 = 24, RuleSeq_E = 25, RuleFld_16R_A = 26, RuleFld_28E_A = 27, 
    RuleFld_20C_A = 28, RuleFld_23G_A = 29, RuleFld_16R_A1 = 30, RuleFld_22F_A1 = 31, 
    RuleFld_98A_A1 = 32, RuleFld_13B_A1 = 33, RuleFld_70C_A1 = 34, RuleFld_16S_A1 = 35, 
    RuleFld_98a_A = 36, RuleFld_22a_A = 37, RuleFld_95a_A = 38, RuleFld_70C_A = 39, 
    RuleFld_16R_A2 = 40, RuleFld_13a_A2 = 41, RuleFld_20C_A2 = 42, RuleFld_16S_A2 = 43, 
    RuleFld_16S_A = 44, RuleFld_16R_B = 45, RuleFld_95a_B = 46, RuleFld_19B_B = 47, 
    RuleFld_98a_B = 48, RuleFld_16R_B1 = 49, RuleFld_19B_B1 = 50, RuleFld_16S_B1 = 51, 
    RuleFld_16S_B = 52, RuleFld_16R_C = 53, RuleFld_20C_C = 54, RuleFld_22a_C = 55, 
    RuleFld_98A_C = 56, RuleFld_95a_C = 57, RuleFld_19A_C = 58, RuleFld_99A_C = 59, 
    RuleFld_22F_C = 60, RuleFld_92a_C = 61, RuleFld_70D_C = 62, RuleFld_16R_C1 = 63, 
    RuleFld_19B_C1 = 64, RuleFld_35B_C1 = 65, RuleFld_36B_C1 = 66, RuleFld_92A_C1 = 67, 
    RuleFld_16S_C1 = 68, RuleFld_16R_C2 = 69, RuleFld_98A_C2 = 70, RuleFld_19B_C2 = 71, 
    RuleFld_70C_C2 = 72, RuleFld_12B_C2 = 73, RuleFld_90a_C2 = 74, RuleFld_16S_C2 = 75, 
    RuleFld_16R_C3 = 76, RuleFld_98A_C3 = 77, RuleFld_19B_C3 = 78, RuleFld_92A_C3 = 79, 
    RuleFld_16S_C3 = 80, RuleFld_16S_C = 81, RuleFld_16R_D = 82, RuleFld_20C_D = 83, 
    RuleFld_22H_D = 84, RuleFld_25D_D = 85, RuleFld_19B_D = 86, RuleFld_99A_D = 87, 
    RuleFld_22F_D = 88, RuleFld_92a_D = 89, RuleFld_16R_D1 = 90, RuleFld_19B_D1 = 91, 
    RuleFld_35B_D1 = 92, RuleFld_36B_D1 = 93, RuleFld_92A_D1 = 94, RuleFld_98A_D1 = 95, 
    RuleFld_94B_D1 = 96, RuleFld_70C_D1 = 97, RuleFld_16S_D1 = 98, RuleFld_16R_D2 = 99, 
    RuleFld_19B_D2 = 100, RuleFld_22H_D2 = 101, RuleFld_98A_D2 = 102, RuleFld_16S_D2 = 103, 
    RuleFld_16R_D3 = 104, RuleFld_22H_D3 = 105, RuleFld_98a_D3 = 106, RuleFld_95a_D3 = 107, 
    RuleFld_19B_D3 = 108, RuleFld_16S_D3 = 109, RuleFld_16S_D = 110, RuleFld_16R_E = 111, 
    RuleFld_95a_E = 112, RuleFld_19A_E = 113, RuleFld_16S_E = 114, RuleFld_28E_A_E = 115, 
    RuleFld_20C_A_C = 116, RuleFld_23G_A_G = 117, RuleFld_22F_A1_F = 118, 
    RuleFld_98A_A1_A = 119, RuleFld_13B_A1_B = 120, RuleFld_70C_A1_C = 121, 
    RuleFld_98a_A_A = 122, RuleFld_98a_A_C = 123, RuleFld_98a_A_E = 124, 
    RuleFld_22a_A_F = 125, RuleFld_22a_A_H = 126, RuleFld_95a_A_P = 127, 
    RuleFld_95a_A_Q = 128, RuleFld_95a_A_R = 129, RuleFld_70C_A_C = 130, 
    RuleFld_13a_A2_A = 131, RuleFld_13a_A2_B = 132, RuleFld_20C_A2_C = 133, 
    RuleFld_95a_B_P = 134, RuleFld_95a_B_Q = 135, RuleFld_95a_B_R = 136, 
    RuleFld_19B_B_B = 137, RuleFld_98a_B_A = 138, RuleFld_98a_B_C = 139, 
    RuleFld_19B_B1_B = 140, RuleFld_20C_C_C = 141, RuleFld_22a_C_F = 142, 
    RuleFld_22a_C_H = 143, RuleFld_98A_C_A = 144, RuleFld_95a_C_P = 145, 
    RuleFld_95a_C_Q = 146, RuleFld_95a_C_R = 147, RuleFld_19A_C_A = 148, 
    RuleFld_99A_C_A = 149, RuleFld_22F_C_F = 150, RuleFld_92a_C_A = 151, 
    RuleFld_92a_C_B = 152, RuleFld_70D_C_D = 153, RuleFld_19B_C1_B = 154, 
    RuleFld_35B_C1_B = 155, RuleFld_36B_C1_B = 156, RuleFld_92A_C1_A = 157, 
    RuleFld_98A_C2_A = 158, RuleFld_19B_C2_B = 159, RuleFld_70C_C2_C = 160, 
    RuleFld_12B_C2_B = 161, RuleFld_90a_C2_A = 162, RuleFld_90a_C2_B = 163, 
    RuleFld_98A_C3_A = 164, RuleFld_19B_C3_B = 165, RuleFld_92A_C3_A = 166, 
    RuleFld_20C_D_C = 167, RuleFld_22H_D_H = 168, RuleFld_25D_D_D = 169, 
    RuleFld_19B_D_B = 170, RuleFld_99A_D_A = 171, RuleFld_22F_D_F = 172, 
    RuleFld_92a_D_A = 173, RuleFld_92a_D_B = 174, RuleFld_19B_D1_B = 175, 
    RuleFld_35B_D1_B = 176, RuleFld_36B_D1_B = 177, RuleFld_92A_D1_A = 178, 
    RuleFld_98A_D1_A = 179, RuleFld_94B_D1_B = 180, RuleFld_70C_D1_C = 181, 
    RuleFld_19B_D2_B = 182, RuleFld_22H_D2_H = 183, RuleFld_98A_D2_A = 184, 
    RuleFld_22H_D3_H = 185, RuleFld_98a_D3_A = 186, RuleFld_98a_D3_B = 187, 
    RuleFld_95a_D3_P = 188, RuleFld_95a_D3_Q = 189, RuleFld_95a_D3_R = 190, 
    RuleFld_19B_D3_B = 191, RuleFld_95a_E_P = 192, RuleFld_95a_E_Q = 193, 
    RuleFld_95a_E_R = 194, RuleFld_19A_E_A = 195
  };

  SwiftMtParser_MT506Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT506Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  public:
      typedef SwiftMtParser_MT506Lexer tLexer;
      typedef SwiftMtParser_MT506Parser tParser;

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
  class Seq_CContext;
  class Seq_C1Context;
  class Seq_C2Context;
  class Seq_C3Context;
  class Seq_DContext;
  class Seq_D1Context;
  class Seq_D2Context;
  class Seq_D3Context;
  class Seq_EContext;
  class Fld_16R_AContext;
  class Fld_28E_AContext;
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
  class Fld_95a_BContext;
  class Fld_19B_BContext;
  class Fld_98a_BContext;
  class Fld_16R_B1Context;
  class Fld_19B_B1Context;
  class Fld_16S_B1Context;
  class Fld_16S_BContext;
  class Fld_16R_CContext;
  class Fld_20C_CContext;
  class Fld_22a_CContext;
  class Fld_98A_CContext;
  class Fld_95a_CContext;
  class Fld_19A_CContext;
  class Fld_99A_CContext;
  class Fld_22F_CContext;
  class Fld_92a_CContext;
  class Fld_70D_CContext;
  class Fld_16R_C1Context;
  class Fld_19B_C1Context;
  class Fld_35B_C1Context;
  class Fld_36B_C1Context;
  class Fld_92A_C1Context;
  class Fld_16S_C1Context;
  class Fld_16R_C2Context;
  class Fld_98A_C2Context;
  class Fld_19B_C2Context;
  class Fld_70C_C2Context;
  class Fld_12B_C2Context;
  class Fld_90a_C2Context;
  class Fld_16S_C2Context;
  class Fld_16R_C3Context;
  class Fld_98A_C3Context;
  class Fld_19B_C3Context;
  class Fld_92A_C3Context;
  class Fld_16S_C3Context;
  class Fld_16S_CContext;
  class Fld_16R_DContext;
  class Fld_20C_DContext;
  class Fld_22H_DContext;
  class Fld_25D_DContext;
  class Fld_19B_DContext;
  class Fld_99A_DContext;
  class Fld_22F_DContext;
  class Fld_92a_DContext;
  class Fld_16R_D1Context;
  class Fld_19B_D1Context;
  class Fld_35B_D1Context;
  class Fld_36B_D1Context;
  class Fld_92A_D1Context;
  class Fld_98A_D1Context;
  class Fld_94B_D1Context;
  class Fld_70C_D1Context;
  class Fld_16S_D1Context;
  class Fld_16R_D2Context;
  class Fld_19B_D2Context;
  class Fld_22H_D2Context;
  class Fld_98A_D2Context;
  class Fld_16S_D2Context;
  class Fld_16R_D3Context;
  class Fld_22H_D3Context;
  class Fld_98a_D3Context;
  class Fld_95a_D3Context;
  class Fld_19B_D3Context;
  class Fld_16S_D3Context;
  class Fld_16S_DContext;
  class Fld_16R_EContext;
  class Fld_95a_EContext;
  class Fld_19A_EContext;
  class Fld_16S_EContext;
  class Fld_28E_A_EContext;
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
  class Fld_95a_B_PContext;
  class Fld_95a_B_QContext;
  class Fld_95a_B_RContext;
  class Fld_19B_B_BContext;
  class Fld_98a_B_AContext;
  class Fld_98a_B_CContext;
  class Fld_19B_B1_BContext;
  class Fld_20C_C_CContext;
  class Fld_22a_C_FContext;
  class Fld_22a_C_HContext;
  class Fld_98A_C_AContext;
  class Fld_95a_C_PContext;
  class Fld_95a_C_QContext;
  class Fld_95a_C_RContext;
  class Fld_19A_C_AContext;
  class Fld_99A_C_AContext;
  class Fld_22F_C_FContext;
  class Fld_92a_C_AContext;
  class Fld_92a_C_BContext;
  class Fld_70D_C_DContext;
  class Fld_19B_C1_BContext;
  class Fld_35B_C1_BContext;
  class Fld_36B_C1_BContext;
  class Fld_92A_C1_AContext;
  class Fld_98A_C2_AContext;
  class Fld_19B_C2_BContext;
  class Fld_70C_C2_CContext;
  class Fld_12B_C2_BContext;
  class Fld_90a_C2_AContext;
  class Fld_90a_C2_BContext;
  class Fld_98A_C3_AContext;
  class Fld_19B_C3_BContext;
  class Fld_92A_C3_AContext;
  class Fld_20C_D_CContext;
  class Fld_22H_D_HContext;
  class Fld_25D_D_DContext;
  class Fld_19B_D_BContext;
  class Fld_99A_D_AContext;
  class Fld_22F_D_FContext;
  class Fld_92a_D_AContext;
  class Fld_92a_D_BContext;
  class Fld_19B_D1_BContext;
  class Fld_35B_D1_BContext;
  class Fld_36B_D1_BContext;
  class Fld_92A_D1_AContext;
  class Fld_98A_D1_AContext;
  class Fld_94B_D1_BContext;
  class Fld_70C_D1_CContext;
  class Fld_19B_D2_BContext;
  class Fld_22H_D2_HContext;
  class Fld_98A_D2_AContext;
  class Fld_22H_D3_HContext;
  class Fld_98a_D3_AContext;
  class Fld_98a_D3_BContext;
  class Fld_95a_D3_PContext;
  class Fld_95a_D3_QContext;
  class Fld_95a_D3_RContext;
  class Fld_19B_D3_BContext;
  class Fld_95a_E_PContext;
  class Fld_95a_E_QContext;
  class Fld_95a_E_RContext;
  class Fld_19A_E_AContext; 

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
    SwiftMtParser_MT506Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_28E_AContext *fld_28E_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98a_AContext *fld_98a_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22a_AContext *fld_22a_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_AContext *fld_95a_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_70C_AContext *fld_70C_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Seq_A2Context *seq_A2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_28E_AContext *fld_28E_A();
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
    SwiftMtParser_MT506Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22F_A1Context *fld_22F_A1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98A_A1Context *fld_98A_A1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_13B_A1Context *fld_13B_A1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_70C_A1Context *fld_70C_A1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_16R_A2Context *fld_16R_A2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_13a_A2Context *fld_13a_A2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_20C_A2Context *fld_20C_A2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_A2Context *fld_16S_A2Context = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_BContext *fld_95a_BContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_BContext *fld_19B_BContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98a_BContext *fld_98a_BContext = nullptr;;
    SwiftMtParser_MT506Parser::Seq_B1Context *seq_B1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_BContext *fld_16S_BContext = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    Fld_95a_BContext *fld_95a_B();
    Fld_16S_BContext *fld_16S_B();
    std::vector<Fld_19B_BContext *> fld_19B_B();
    Fld_19B_BContext* fld_19B_B(size_t i);
    std::vector<Fld_98a_BContext *> fld_98a_B();
    Fld_98a_BContext* fld_98a_B(size_t i);
    Seq_B1Context *seq_B1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_B1Context *fld_16R_B1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_B1Context *fld_19B_B1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_B1Context *fld_16S_B1Context = nullptr;;
    Seq_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1Context *fld_16R_B1();
    Fld_16S_B1Context *fld_16S_B1();
    std::vector<Fld_19B_B1Context *> fld_19B_B1();
    Fld_19B_B1Context* fld_19B_B1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1Context* seq_B1();

  class  Seq_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_CContext *fld_16R_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_20C_CContext *fld_20C_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22a_CContext *fld_22a_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98A_CContext *fld_98A_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_CContext *fld_95a_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19A_CContext *fld_19A_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_99A_CContext *fld_99A_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22F_CContext *fld_22F_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_92a_CContext *fld_92a_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_70D_CContext *fld_70D_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Seq_C1Context *seq_C1Context = nullptr;;
    SwiftMtParser_MT506Parser::Seq_C2Context *seq_C2Context = nullptr;;
    SwiftMtParser_MT506Parser::Seq_C3Context *seq_C3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_CContext *fld_16S_CContext = nullptr;;
    Seq_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_CContext *fld_16R_C();
    Fld_22a_CContext *fld_22a_C();
    Fld_16S_CContext *fld_16S_C();
    std::vector<Fld_20C_CContext *> fld_20C_C();
    Fld_20C_CContext* fld_20C_C(size_t i);
    Fld_98A_CContext *fld_98A_C();
    std::vector<Fld_95a_CContext *> fld_95a_C();
    Fld_95a_CContext* fld_95a_C(size_t i);
    std::vector<Fld_19A_CContext *> fld_19A_C();
    Fld_19A_CContext* fld_19A_C(size_t i);
    Fld_99A_CContext *fld_99A_C();
    Fld_22F_CContext *fld_22F_C();
    std::vector<Fld_92a_CContext *> fld_92a_C();
    Fld_92a_CContext* fld_92a_C(size_t i);
    Fld_70D_CContext *fld_70D_C();
    Seq_C1Context *seq_C1();
    Seq_C2Context *seq_C2();
    Seq_C3Context *seq_C3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_CContext* seq_C();

  class  Seq_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_C1Context *fld_16R_C1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_C1Context *fld_19B_C1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_35B_C1Context *fld_35B_C1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_36B_C1Context *fld_36B_C1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_92A_C1Context *fld_92A_C1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_C1Context *fld_16S_C1Context = nullptr;;
    Seq_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C1Context *fld_16R_C1();
    Fld_19B_C1Context *fld_19B_C1();
    Fld_35B_C1Context *fld_35B_C1();
    Fld_36B_C1Context *fld_36B_C1();
    Fld_92A_C1Context *fld_92A_C1();
    Fld_16S_C1Context *fld_16S_C1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C1Context* seq_C1();

  class  Seq_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_C2Context *fld_16R_C2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98A_C2Context *fld_98A_C2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_C2Context *fld_19B_C2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_70C_C2Context *fld_70C_C2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_12B_C2Context *fld_12B_C2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_90a_C2Context *fld_90a_C2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_C2Context *fld_16S_C2Context = nullptr;;
    Seq_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C2Context *fld_16R_C2();
    Fld_16S_C2Context *fld_16S_C2();
    std::vector<Fld_98A_C2Context *> fld_98A_C2();
    Fld_98A_C2Context* fld_98A_C2(size_t i);
    std::vector<Fld_19B_C2Context *> fld_19B_C2();
    Fld_19B_C2Context* fld_19B_C2(size_t i);
    Fld_70C_C2Context *fld_70C_C2();
    Fld_12B_C2Context *fld_12B_C2();
    Fld_90a_C2Context *fld_90a_C2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C2Context* seq_C2();

  class  Seq_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_C3Context *fld_16R_C3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98A_C3Context *fld_98A_C3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_C3Context *fld_19B_C3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_92A_C3Context *fld_92A_C3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_C3Context *fld_16S_C3Context = nullptr;;
    Seq_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C3Context *fld_16R_C3();
    Fld_92A_C3Context *fld_92A_C3();
    Fld_16S_C3Context *fld_16S_C3();
    std::vector<Fld_98A_C3Context *> fld_98A_C3();
    Fld_98A_C3Context* fld_98A_C3(size_t i);
    std::vector<Fld_19B_C3Context *> fld_19B_C3();
    Fld_19B_C3Context* fld_19B_C3(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C3Context* seq_C3();

  class  Seq_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_DContext *fld_16R_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_20C_DContext *fld_20C_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22H_DContext *fld_22H_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_25D_DContext *fld_25D_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_DContext *fld_19B_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_99A_DContext *fld_99A_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22F_DContext *fld_22F_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_92a_DContext *fld_92a_DContext = nullptr;;
    SwiftMtParser_MT506Parser::Seq_D1Context *seq_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Seq_D2Context *seq_D2Context = nullptr;;
    SwiftMtParser_MT506Parser::Seq_D3Context *seq_D3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_DContext *fld_16S_DContext = nullptr;;
    Seq_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_DContext *fld_16R_D();
    Fld_20C_DContext *fld_20C_D();
    Fld_22H_DContext *fld_22H_D();
    Fld_16S_DContext *fld_16S_D();
    Fld_25D_DContext *fld_25D_D();
    std::vector<Fld_19B_DContext *> fld_19B_D();
    Fld_19B_DContext* fld_19B_D(size_t i);
    Fld_99A_DContext *fld_99A_D();
    Fld_22F_DContext *fld_22F_D();
    std::vector<Fld_92a_DContext *> fld_92a_D();
    Fld_92a_DContext* fld_92a_D(size_t i);
    Seq_D1Context *seq_D1();
    Seq_D2Context *seq_D2();
    Seq_D3Context *seq_D3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_DContext* seq_D();

  class  Seq_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_D1Context *fld_16R_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_D1Context *fld_19B_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_35B_D1Context *fld_35B_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_36B_D1Context *fld_36B_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_92A_D1Context *fld_92A_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98A_D1Context *fld_98A_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_94B_D1Context *fld_94B_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_70C_D1Context *fld_70C_D1Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_D1Context *fld_16S_D1Context = nullptr;;
    Seq_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_D1Context *fld_16R_D1();
    Fld_19B_D1Context *fld_19B_D1();
    Fld_35B_D1Context *fld_35B_D1();
    Fld_36B_D1Context *fld_36B_D1();
    Fld_92A_D1Context *fld_92A_D1();
    Fld_16S_D1Context *fld_16S_D1();
    Fld_98A_D1Context *fld_98A_D1();
    std::vector<Fld_94B_D1Context *> fld_94B_D1();
    Fld_94B_D1Context* fld_94B_D1(size_t i);
    Fld_70C_D1Context *fld_70C_D1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_D1Context* seq_D1();

  class  Seq_D2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_D2Context *fld_16R_D2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_D2Context *fld_19B_D2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22H_D2Context *fld_22H_D2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98A_D2Context *fld_98A_D2Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_D2Context *fld_16S_D2Context = nullptr;;
    Seq_D2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_D2Context *fld_16R_D2();
    Fld_19B_D2Context *fld_19B_D2();
    Fld_22H_D2Context *fld_22H_D2();
    Fld_16S_D2Context *fld_16S_D2();
    Fld_98A_D2Context *fld_98A_D2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_D2Context* seq_D2();

  class  Seq_D3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_D3Context *fld_16R_D3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22H_D3Context *fld_22H_D3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98a_D3Context *fld_98a_D3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_D3Context *fld_95a_D3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19B_D3Context *fld_19B_D3Context = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_D3Context *fld_16S_D3Context = nullptr;;
    Seq_D3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_D3Context *fld_16R_D3();
    Fld_22H_D3Context *fld_22H_D3();
    Fld_95a_D3Context *fld_95a_D3();
    Fld_19B_D3Context *fld_19B_D3();
    Fld_16S_D3Context *fld_16S_D3();
    std::vector<Fld_98a_D3Context *> fld_98a_D3();
    Fld_98a_D3Context* fld_98a_D3(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_D3Context* seq_D3();

  class  Seq_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT506Parser::Fld_16R_EContext *fld_16R_EContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_EContext *fld_95a_EContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_19A_EContext *fld_19A_EContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_16S_EContext *fld_16S_EContext = nullptr;;
    Seq_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_EContext *fld_16R_E();
    Fld_16S_EContext *fld_16S_E();
    std::vector<Fld_95a_EContext *> fld_95a_E();
    Fld_95a_EContext* fld_95a_E(size_t i);
    std::vector<Fld_19A_EContext *> fld_19A_E();
    Fld_19A_EContext* fld_19A_E(size_t i);

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
    SwiftMtParser_MT506Parser::Fld_28E_A_EContext *fld_28E_A_EContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_22F_A1_FContext *fld_22F_A1_FContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_98A_A1_AContext *fld_98A_A1_AContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_13B_A1_BContext *fld_13B_A1_BContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_70C_A1_CContext *fld_70C_A1_CContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_98a_A_AContext *fld_98a_A_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98a_A_CContext *fld_98a_A_CContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98a_A_EContext *fld_98a_A_EContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_22a_A_FContext *fld_22a_A_FContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22a_A_HContext *fld_22a_A_HContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_95a_A_PContext *fld_95a_A_PContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_A_QContext *fld_95a_A_QContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_A_RContext *fld_95a_A_RContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_70C_A_CContext *fld_70C_A_CContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_13a_A2_AContext *fld_13a_A2_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_13a_A2_BContext *fld_13a_A2_BContext = nullptr;;
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
    SwiftMtParser_MT506Parser::Fld_20C_A2_CContext *fld_20C_A2_CContext = nullptr;;
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

  class  Fld_95a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_95a_B_PContext *fld_95a_B_PContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_B_QContext *fld_95a_B_QContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_B_RContext *fld_95a_B_RContext = nullptr;;
    Fld_95a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_B_PContext *fld_95a_B_P();
    Fld_95a_B_QContext *fld_95a_B_Q();
    Fld_95a_B_RContext *fld_95a_B_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_BContext* fld_95a_B();

  class  Fld_19B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_B_BContext *fld_19B_B_BContext = nullptr;;
    Fld_19B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_B_BContext *fld_19B_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_BContext* fld_19B_B();

  class  Fld_98a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_98a_B_AContext *fld_98a_B_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98a_B_CContext *fld_98a_B_CContext = nullptr;;
    Fld_98a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B_AContext *fld_98a_B_A();
    Fld_98a_B_CContext *fld_98a_B_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_BContext* fld_98a_B();

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

  class  Fld_19B_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_B1_BContext *fld_19B_B1_BContext = nullptr;;
    Fld_19B_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_B1_BContext *fld_19B_B1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_B1Context* fld_19B_B1();

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

  class  Fld_20C_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_20C_C_CContext *fld_20C_C_CContext = nullptr;;
    Fld_20C_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_C_CContext *fld_20C_C_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_CContext* fld_20C_C();

  class  Fld_22a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_22a_C_FContext *fld_22a_C_FContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_22a_C_HContext *fld_22a_C_HContext = nullptr;;
    Fld_22a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_C_FContext *fld_22a_C_F();
    Fld_22a_C_HContext *fld_22a_C_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_CContext* fld_22a_C();

  class  Fld_98A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_98A_C_AContext *fld_98A_C_AContext = nullptr;;
    Fld_98A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_C_AContext *fld_98A_C_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_CContext* fld_98A_C();

  class  Fld_95a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_95a_C_PContext *fld_95a_C_PContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_C_QContext *fld_95a_C_QContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_C_RContext *fld_95a_C_RContext = nullptr;;
    Fld_95a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_C_PContext *fld_95a_C_P();
    Fld_95a_C_QContext *fld_95a_C_Q();
    Fld_95a_C_RContext *fld_95a_C_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_CContext* fld_95a_C();

  class  Fld_19A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19A_C_AContext *fld_19A_C_AContext = nullptr;;
    Fld_19A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_C_AContext *fld_19A_C_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_CContext* fld_19A_C();

  class  Fld_99A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_99A_C_AContext *fld_99A_C_AContext = nullptr;;
    Fld_99A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_99A_C_AContext *fld_99A_C_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_CContext* fld_99A_C();

  class  Fld_22F_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_22F_C_FContext *fld_22F_C_FContext = nullptr;;
    Fld_22F_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_C_FContext *fld_22F_C_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_CContext* fld_22F_C();

  class  Fld_92a_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_92a_C_AContext *fld_92a_C_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_92a_C_BContext *fld_92a_C_BContext = nullptr;;
    Fld_92a_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92a_C_AContext *fld_92a_C_A();
    Fld_92a_C_BContext *fld_92a_C_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_CContext* fld_92a_C();

  class  Fld_70D_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_70D_C_DContext *fld_70D_C_DContext = nullptr;;
    Fld_70D_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70D_C_DContext *fld_70D_C_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70D_CContext* fld_70D_C();

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

  class  Fld_19B_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_C1_BContext *fld_19B_C1_BContext = nullptr;;
    Fld_19B_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_C1_BContext *fld_19B_C1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_C1Context* fld_19B_C1();

  class  Fld_35B_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_35B_C1_BContext *fld_35B_C1_BContext = nullptr;;
    Fld_35B_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_C1_BContext *fld_35B_C1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_C1Context* fld_35B_C1();

  class  Fld_36B_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_36B_C1_BContext *fld_36B_C1_BContext = nullptr;;
    Fld_36B_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_C1_BContext *fld_36B_C1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_C1Context* fld_36B_C1();

  class  Fld_92A_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_92A_C1_AContext *fld_92A_C1_AContext = nullptr;;
    Fld_92A_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_C1_AContext *fld_92A_C1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_C1Context* fld_92A_C1();

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

  class  Fld_98A_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_98A_C2_AContext *fld_98A_C2_AContext = nullptr;;
    Fld_98A_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_C2_AContext *fld_98A_C2_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_C2Context* fld_98A_C2();

  class  Fld_19B_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_C2_BContext *fld_19B_C2_BContext = nullptr;;
    Fld_19B_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_C2_BContext *fld_19B_C2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_C2Context* fld_19B_C2();

  class  Fld_70C_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_70C_C2_CContext *fld_70C_C2_CContext = nullptr;;
    Fld_70C_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_C2_CContext *fld_70C_C2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_C2Context* fld_70C_C2();

  class  Fld_12B_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_12B_C2_BContext *fld_12B_C2_BContext = nullptr;;
    Fld_12B_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_12B_C2_BContext *fld_12B_C2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12B_C2Context* fld_12B_C2();

  class  Fld_90a_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_90a_C2_AContext *fld_90a_C2_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_90a_C2_BContext *fld_90a_C2_BContext = nullptr;;
    Fld_90a_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_90a_C2_AContext *fld_90a_C2_A();
    Fld_90a_C2_BContext *fld_90a_C2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_C2Context* fld_90a_C2();

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

  class  Fld_16R_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_C3Context* fld_16R_C3();

  class  Fld_98A_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_98A_C3_AContext *fld_98A_C3_AContext = nullptr;;
    Fld_98A_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_C3_AContext *fld_98A_C3_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_C3Context* fld_98A_C3();

  class  Fld_19B_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_C3_BContext *fld_19B_C3_BContext = nullptr;;
    Fld_19B_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_C3_BContext *fld_19B_C3_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_C3Context* fld_19B_C3();

  class  Fld_92A_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_92A_C3_AContext *fld_92A_C3_AContext = nullptr;;
    Fld_92A_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_C3_AContext *fld_92A_C3_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_C3Context* fld_92A_C3();

  class  Fld_16S_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_C3Context* fld_16S_C3();

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

  class  Fld_20C_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_20C_D_CContext *fld_20C_D_CContext = nullptr;;
    Fld_20C_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_D_CContext *fld_20C_D_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_DContext* fld_20C_D();

  class  Fld_22H_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_22H_D_HContext *fld_22H_D_HContext = nullptr;;
    Fld_22H_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_D_HContext *fld_22H_D_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_DContext* fld_22H_D();

  class  Fld_25D_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_25D_D_DContext *fld_25D_D_DContext = nullptr;;
    Fld_25D_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_25D_D_DContext *fld_25D_D_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_25D_DContext* fld_25D_D();

  class  Fld_19B_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_D_BContext *fld_19B_D_BContext = nullptr;;
    Fld_19B_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_D_BContext *fld_19B_D_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_DContext* fld_19B_D();

  class  Fld_99A_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_99A_D_AContext *fld_99A_D_AContext = nullptr;;
    Fld_99A_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_99A_D_AContext *fld_99A_D_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_DContext* fld_99A_D();

  class  Fld_22F_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_22F_D_FContext *fld_22F_D_FContext = nullptr;;
    Fld_22F_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_D_FContext *fld_22F_D_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_DContext* fld_22F_D();

  class  Fld_92a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_92a_D_AContext *fld_92a_D_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_92a_D_BContext *fld_92a_D_BContext = nullptr;;
    Fld_92a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92a_D_AContext *fld_92a_D_A();
    Fld_92a_D_BContext *fld_92a_D_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_DContext* fld_92a_D();

  class  Fld_16R_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_D1Context* fld_16R_D1();

  class  Fld_19B_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_D1_BContext *fld_19B_D1_BContext = nullptr;;
    Fld_19B_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_D1_BContext *fld_19B_D1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_D1Context* fld_19B_D1();

  class  Fld_35B_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_35B_D1_BContext *fld_35B_D1_BContext = nullptr;;
    Fld_35B_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_D1_BContext *fld_35B_D1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_D1Context* fld_35B_D1();

  class  Fld_36B_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_36B_D1_BContext *fld_36B_D1_BContext = nullptr;;
    Fld_36B_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_D1_BContext *fld_36B_D1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_D1Context* fld_36B_D1();

  class  Fld_92A_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_92A_D1_AContext *fld_92A_D1_AContext = nullptr;;
    Fld_92A_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_D1_AContext *fld_92A_D1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_D1Context* fld_92A_D1();

  class  Fld_98A_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_98A_D1_AContext *fld_98A_D1_AContext = nullptr;;
    Fld_98A_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_D1_AContext *fld_98A_D1_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_D1Context* fld_98A_D1();

  class  Fld_94B_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_94B_D1_BContext *fld_94B_D1_BContext = nullptr;;
    Fld_94B_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94B_D1_BContext *fld_94B_D1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94B_D1Context* fld_94B_D1();

  class  Fld_70C_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_70C_D1_CContext *fld_70C_D1_CContext = nullptr;;
    Fld_70C_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_D1_CContext *fld_70C_D1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_D1Context* fld_70C_D1();

  class  Fld_16S_D1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_D1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_D1Context* fld_16S_D1();

  class  Fld_16R_D2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_D2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_D2Context* fld_16R_D2();

  class  Fld_19B_D2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_D2_BContext *fld_19B_D2_BContext = nullptr;;
    Fld_19B_D2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_D2_BContext *fld_19B_D2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_D2Context* fld_19B_D2();

  class  Fld_22H_D2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_22H_D2_HContext *fld_22H_D2_HContext = nullptr;;
    Fld_22H_D2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_D2_HContext *fld_22H_D2_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_D2Context* fld_22H_D2();

  class  Fld_98A_D2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_98A_D2_AContext *fld_98A_D2_AContext = nullptr;;
    Fld_98A_D2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_D2_AContext *fld_98A_D2_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_D2Context* fld_98A_D2();

  class  Fld_16S_D2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_D2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_D2Context* fld_16S_D2();

  class  Fld_16R_D3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16R_D3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16R_D3Context* fld_16R_D3();

  class  Fld_22H_D3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_22H_D3_HContext *fld_22H_D3_HContext = nullptr;;
    Fld_22H_D3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22H_D3_HContext *fld_22H_D3_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_D3Context* fld_22H_D3();

  class  Fld_98a_D3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_98a_D3_AContext *fld_98a_D3_AContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_98a_D3_BContext *fld_98a_D3_BContext = nullptr;;
    Fld_98a_D3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_D3_AContext *fld_98a_D3_A();
    Fld_98a_D3_BContext *fld_98a_D3_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_D3Context* fld_98a_D3();

  class  Fld_95a_D3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_95a_D3_PContext *fld_95a_D3_PContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_D3_QContext *fld_95a_D3_QContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_D3_RContext *fld_95a_D3_RContext = nullptr;;
    Fld_95a_D3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_D3_PContext *fld_95a_D3_P();
    Fld_95a_D3_QContext *fld_95a_D3_Q();
    Fld_95a_D3_RContext *fld_95a_D3_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D3Context* fld_95a_D3();

  class  Fld_19B_D3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19B_D3_BContext *fld_19B_D3_BContext = nullptr;;
    Fld_19B_D3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19B_D3_BContext *fld_19B_D3_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_D3Context* fld_19B_D3();

  class  Fld_16S_D3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_16S_D3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_16S_D3Context* fld_16S_D3();

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
    SwiftMtParser_MT506Parser::Fld_95a_E_PContext *fld_95a_E_PContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_E_QContext *fld_95a_E_QContext = nullptr;;
    SwiftMtParser_MT506Parser::Fld_95a_E_RContext *fld_95a_E_RContext = nullptr;;
    Fld_95a_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_E_PContext *fld_95a_E_P();
    Fld_95a_E_QContext *fld_95a_E_Q();
    Fld_95a_E_RContext *fld_95a_E_R();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_EContext* fld_95a_E();

  class  Fld_19A_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT506Parser::Fld_19A_E_AContext *fld_19A_E_AContext = nullptr;;
    Fld_19A_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_E_AContext *fld_19A_E_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_EContext* fld_19A_E();

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

  class  Fld_95a_B_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B_QContext* fld_95a_B_Q();

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

  class  Fld_19B_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_B_BContext* fld_19B_B_B();

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

  class  Fld_19B_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_B1_BContext* fld_19B_B1_B();

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

  class  Fld_98A_C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_C_AContext* fld_98A_C_A();

  class  Fld_95a_C_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C_PContext* fld_95a_C_P();

  class  Fld_95a_C_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C_QContext* fld_95a_C_Q();

  class  Fld_95a_C_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C_RContext* fld_95a_C_R();

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

  class  Fld_99A_C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_99A_C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_C_AContext* fld_99A_C_A();

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

  class  Fld_92a_C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_C_AContext* fld_92a_C_A();

  class  Fld_92a_C_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_C_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_C_BContext* fld_92a_C_B();

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

  class  Fld_19B_C1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_C1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_C1_BContext* fld_19B_C1_B();

  class  Fld_35B_C1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_C1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_C1_BContext* fld_35B_C1_B();

  class  Fld_36B_C1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_36B_C1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_C1_BContext* fld_36B_C1_B();

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

  class  Fld_98A_C2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_C2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_C2_AContext* fld_98A_C2_A();

  class  Fld_19B_C2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_C2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_C2_BContext* fld_19B_C2_B();

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

  class  Fld_12B_C2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12B_C2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12B_C2_BContext* fld_12B_C2_B();

  class  Fld_90a_C2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_C2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_C2_AContext* fld_90a_C2_A();

  class  Fld_90a_C2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_C2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_C2_BContext* fld_90a_C2_B();

  class  Fld_98A_C3_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_C3_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_C3_AContext* fld_98A_C3_A();

  class  Fld_19B_C3_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_C3_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_C3_BContext* fld_19B_C3_B();

  class  Fld_92A_C3_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_C3_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_C3_AContext* fld_92A_C3_A();

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

  class  Fld_19B_D_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_D_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_D_BContext* fld_19B_D_B();

  class  Fld_99A_D_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_99A_D_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_D_AContext* fld_99A_D_A();

  class  Fld_22F_D_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_D_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_D_FContext* fld_22F_D_F();

  class  Fld_92a_D_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_D_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_D_AContext* fld_92a_D_A();

  class  Fld_92a_D_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_D_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_D_BContext* fld_92a_D_B();

  class  Fld_19B_D1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_D1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_D1_BContext* fld_19B_D1_B();

  class  Fld_35B_D1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_D1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_D1_BContext* fld_35B_D1_B();

  class  Fld_36B_D1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_36B_D1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_D1_BContext* fld_36B_D1_B();

  class  Fld_92A_D1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_D1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_D1_AContext* fld_92A_D1_A();

  class  Fld_98A_D1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_D1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_D1_AContext* fld_98A_D1_A();

  class  Fld_94B_D1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94B_D1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94B_D1_BContext* fld_94B_D1_B();

  class  Fld_70C_D1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70C_D1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_D1_CContext* fld_70C_D1_C();

  class  Fld_19B_D2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_D2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_D2_BContext* fld_19B_D2_B();

  class  Fld_22H_D2_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22H_D2_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_D2_HContext* fld_22H_D2_H();

  class  Fld_98A_D2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_D2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_D2_AContext* fld_98A_D2_A();

  class  Fld_22H_D3_HContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22H_D3_HContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22H_D3_HContext* fld_22H_D3_H();

  class  Fld_98a_D3_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_D3_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_D3_AContext* fld_98a_D3_A();

  class  Fld_98a_D3_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_D3_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_D3_BContext* fld_98a_D3_B();

  class  Fld_95a_D3_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D3_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D3_PContext* fld_95a_D3_P();

  class  Fld_95a_D3_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D3_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D3_QContext* fld_95a_D3_Q();

  class  Fld_95a_D3_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D3_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D3_RContext* fld_95a_D3_R();

  class  Fld_19B_D3_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19B_D3_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19B_D3_BContext* fld_19B_D3_B();

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

  class  Fld_19A_E_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_E_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_E_AContext* fld_19A_E_A();


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
