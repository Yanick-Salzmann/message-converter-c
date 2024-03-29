
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT514Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT514.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt::parsers::sr2018 {


class  SwiftMtParser_MT514Parser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, T__28 = 29, T__29 = 30, T__30 = 31, T__31 = 32, 
    T__32 = 33, T__33 = 34, T__34 = 35, T__35 = 36, T__36 = 37, T__37 = 38, 
    T__38 = 39, T__39 = 40, T__40 = 41, T__41 = 42, T__42 = 43, TAG_BH = 44, 
    TAG_AH = 45, TAG_UH = 46, TAG_MT = 47, TAG_TR = 48, MT_END = 49, LBRACE = 50, 
    RBRACE = 51, COLON = 52, START_OF_FIELD = 53, ANY = 54
  };

  enum {
    RuleMessage = 0, RuleBh = 1, RuleBh_content = 2, RuleAh = 3, RuleAh_content = 4, 
    RuleUh = 5, RuleTr = 6, RuleSys_block = 7, RuleSys_element = 8, RuleSys_element_key = 9, 
    RuleSys_element_content = 10, RuleMt = 11, RuleSeq_A = 12, RuleSeq_A1 = 13, 
    RuleSeq_B = 14, RuleSeq_B1 = 15, RuleSeq_B2 = 16, RuleSeq_C = 17, RuleSeq_C1 = 18, 
    RuleSeq_C2 = 19, RuleSeq_C3 = 20, RuleSeq_D = 21, RuleSeq_E = 22, RuleFld_16R_A = 23, 
    RuleFld_20C_A = 24, RuleFld_23G_A = 25, RuleFld_98a_A = 26, RuleFld_22F_A = 27, 
    RuleFld_99B_A = 28, RuleFld_16R_A1 = 29, RuleFld_22F_A1 = 30, RuleFld_13a_A1 = 31, 
    RuleFld_20C_A1 = 32, RuleFld_16S_A1 = 33, RuleFld_16S_A = 34, RuleFld_16R_B = 35, 
    RuleFld_98a_B = 36, RuleFld_90a_B = 37, RuleFld_92A_B = 38, RuleFld_99A_B = 39, 
    RuleFld_94a_B = 40, RuleFld_19A_B = 41, RuleFld_22a_B = 42, RuleFld_11A_B = 43, 
    RuleFld_16R_B1 = 44, RuleFld_95a_B1 = 45, RuleFld_97a_B1 = 46, RuleFld_98a_B1 = 47, 
    RuleFld_20C_B1 = 48, RuleFld_70a_B1 = 49, RuleFld_22F_B1 = 50, RuleFld_16S_B1 = 51, 
    RuleFld_36B_B = 52, RuleFld_35B_B = 53, RuleFld_16R_B2 = 54, RuleFld_94B_B2 = 55, 
    RuleFld_22F_B2 = 56, RuleFld_12a_B2 = 57, RuleFld_11A_B2 = 58, RuleFld_98A_B2 = 59, 
    RuleFld_92A_B2 = 60, RuleFld_13a_B2 = 61, RuleFld_17B_B2 = 62, RuleFld_90a_B2 = 63, 
    RuleFld_36B_B2 = 64, RuleFld_35B_B2 = 65, RuleFld_70E_B2 = 66, RuleFld_16S_B2 = 67, 
    RuleFld_13B_B = 68, RuleFld_70E_B = 69, RuleFld_16S_B = 70, RuleFld_16R_C = 71, 
    RuleFld_22F_C = 72, RuleFld_11A_C = 73, RuleFld_16R_C1 = 74, RuleFld_95a_C1 = 75, 
    RuleFld_97a_C1 = 76, RuleFld_98a_C1 = 77, RuleFld_20C_C1 = 78, RuleFld_70a_C1 = 79, 
    RuleFld_16S_C1 = 80, RuleFld_16R_C2 = 81, RuleFld_95a_C2 = 82, RuleFld_97a_C2 = 83, 
    RuleFld_98a_C2 = 84, RuleFld_20C_C2 = 85, RuleFld_70C_C2 = 86, RuleFld_16S_C2 = 87, 
    RuleFld_16R_C3 = 88, RuleFld_17B_C3 = 89, RuleFld_19A_C3 = 90, RuleFld_98a_C3 = 91, 
    RuleFld_92B_C3 = 92, RuleFld_16S_C3 = 93, RuleFld_16S_C = 94, RuleFld_16R_D = 95, 
    RuleFld_95a_D = 96, RuleFld_97a_D = 97, RuleFld_70C_D = 98, RuleFld_20C_D = 99, 
    RuleFld_16S_D = 100, RuleFld_16R_E = 101, RuleFld_98a_E = 102, RuleFld_22F_E = 103, 
    RuleFld_20C_E = 104, RuleFld_92a_E = 105, RuleFld_99B_E = 106, RuleFld_19A_E = 107, 
    RuleFld_70C_E = 108, RuleFld_16S_E = 109, RuleFld_20C_A_C = 110, RuleFld_23G_A_G = 111, 
    RuleFld_98a_A_A = 112, RuleFld_98a_A_C = 113, RuleFld_98a_A_E = 114, 
    RuleFld_22F_A_F = 115, RuleFld_99B_A_B = 116, RuleFld_22F_A1_F = 117, 
    RuleFld_13a_A1_A = 118, RuleFld_13a_A1_B = 119, RuleFld_20C_A1_C = 120, 
    RuleFld_98a_B_A = 121, RuleFld_98a_B_B = 122, RuleFld_98a_B_C = 123, 
    RuleFld_98a_B_E = 124, RuleFld_90a_B_A = 125, RuleFld_90a_B_B = 126, 
    RuleFld_92A_B_A = 127, RuleFld_99A_B_A = 128, RuleFld_94a_B_B = 129, 
    RuleFld_94a_B_C = 130, RuleFld_94a_B_F = 131, RuleFld_94a_B_L = 132, 
    RuleFld_19A_B_A = 133, RuleFld_22a_B_F = 134, RuleFld_22a_B_H = 135, 
    RuleFld_11A_B_A = 136, RuleFld_95a_B1_L = 137, RuleFld_95a_B1_P = 138, 
    RuleFld_95a_B1_Q = 139, RuleFld_95a_B1_R = 140, RuleFld_95a_B1_S = 141, 
    RuleFld_97a_B1_A = 142, RuleFld_97a_B1_B = 143, RuleFld_97a_B1_E = 144, 
    RuleFld_98a_B1_A = 145, RuleFld_98a_B1_C = 146, RuleFld_20C_B1_C = 147, 
    RuleFld_70a_B1_C = 148, RuleFld_70a_B1_E = 149, RuleFld_22F_B1_F = 150, 
    RuleFld_36B_B_B = 151, RuleFld_35B_B_B = 152, RuleFld_94B_B2_B = 153, 
    RuleFld_22F_B2_F = 154, RuleFld_12a_B2_A = 155, RuleFld_12a_B2_B = 156, 
    RuleFld_12a_B2_C = 157, RuleFld_11A_B2_A = 158, RuleFld_98A_B2_A = 159, 
    RuleFld_92A_B2_A = 160, RuleFld_13a_B2_A = 161, RuleFld_13a_B2_B = 162, 
    RuleFld_17B_B2_B = 163, RuleFld_90a_B2_A = 164, RuleFld_90a_B2_B = 165, 
    RuleFld_36B_B2_B = 166, RuleFld_35B_B2_B = 167, RuleFld_70E_B2_E = 168, 
    RuleFld_13B_B_B = 169, RuleFld_70E_B_E = 170, RuleFld_22F_C_F = 171, 
    RuleFld_11A_C_A = 172, RuleFld_95a_C1_C = 173, RuleFld_95a_C1_L = 174, 
    RuleFld_95a_C1_P = 175, RuleFld_95a_C1_Q = 176, RuleFld_95a_C1_R = 177, 
    RuleFld_95a_C1_S = 178, RuleFld_97a_C1_A = 179, RuleFld_97a_C1_B = 180, 
    RuleFld_98a_C1_A = 181, RuleFld_98a_C1_C = 182, RuleFld_20C_C1_C = 183, 
    RuleFld_70a_C1_C = 184, RuleFld_70a_C1_D = 185, RuleFld_95a_C2_L = 186, 
    RuleFld_95a_C2_P = 187, RuleFld_95a_C2_Q = 188, RuleFld_95a_C2_R = 189, 
    RuleFld_95a_C2_S = 190, RuleFld_97a_C2_A = 191, RuleFld_97a_C2_E = 192, 
    RuleFld_98a_C2_A = 193, RuleFld_98a_C2_C = 194, RuleFld_20C_C2_C = 195, 
    RuleFld_70C_C2_C = 196, RuleFld_17B_C3_B = 197, RuleFld_19A_C3_A = 198, 
    RuleFld_98a_C3_A = 199, RuleFld_98a_C3_C = 200, RuleFld_92B_C3_B = 201, 
    RuleFld_95a_D_L = 202, RuleFld_95a_D_P = 203, RuleFld_95a_D_Q = 204, 
    RuleFld_95a_D_R = 205, RuleFld_95a_D_S = 206, RuleFld_97a_D_A = 207, 
    RuleFld_97a_D_B = 208, RuleFld_97a_D_E = 209, RuleFld_70C_D_C = 210, 
    RuleFld_20C_D_C = 211, RuleFld_98a_E_A = 212, RuleFld_98a_E_B = 213, 
    RuleFld_98a_E_C = 214, RuleFld_22F_E_F = 215, RuleFld_20C_E_C = 216, 
    RuleFld_92a_E_A = 217, RuleFld_92a_E_C = 218, RuleFld_99B_E_B = 219, 
    RuleFld_19A_E_A = 220, RuleFld_70C_E_C = 221
  };

  SwiftMtParser_MT514Parser(antlr4::TokenStream *input);
  ~SwiftMtParser_MT514Parser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  public:
      typedef SwiftMtParser_MT514Lexer tLexer;
      typedef SwiftMtParser_MT514Parser tParser;

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
  class Seq_C3Context;
  class Seq_DContext;
  class Seq_EContext;
  class Fld_16R_AContext;
  class Fld_20C_AContext;
  class Fld_23G_AContext;
  class Fld_98a_AContext;
  class Fld_22F_AContext;
  class Fld_99B_AContext;
  class Fld_16R_A1Context;
  class Fld_22F_A1Context;
  class Fld_13a_A1Context;
  class Fld_20C_A1Context;
  class Fld_16S_A1Context;
  class Fld_16S_AContext;
  class Fld_16R_BContext;
  class Fld_98a_BContext;
  class Fld_90a_BContext;
  class Fld_92A_BContext;
  class Fld_99A_BContext;
  class Fld_94a_BContext;
  class Fld_19A_BContext;
  class Fld_22a_BContext;
  class Fld_11A_BContext;
  class Fld_16R_B1Context;
  class Fld_95a_B1Context;
  class Fld_97a_B1Context;
  class Fld_98a_B1Context;
  class Fld_20C_B1Context;
  class Fld_70a_B1Context;
  class Fld_22F_B1Context;
  class Fld_16S_B1Context;
  class Fld_36B_BContext;
  class Fld_35B_BContext;
  class Fld_16R_B2Context;
  class Fld_94B_B2Context;
  class Fld_22F_B2Context;
  class Fld_12a_B2Context;
  class Fld_11A_B2Context;
  class Fld_98A_B2Context;
  class Fld_92A_B2Context;
  class Fld_13a_B2Context;
  class Fld_17B_B2Context;
  class Fld_90a_B2Context;
  class Fld_36B_B2Context;
  class Fld_35B_B2Context;
  class Fld_70E_B2Context;
  class Fld_16S_B2Context;
  class Fld_13B_BContext;
  class Fld_70E_BContext;
  class Fld_16S_BContext;
  class Fld_16R_CContext;
  class Fld_22F_CContext;
  class Fld_11A_CContext;
  class Fld_16R_C1Context;
  class Fld_95a_C1Context;
  class Fld_97a_C1Context;
  class Fld_98a_C1Context;
  class Fld_20C_C1Context;
  class Fld_70a_C1Context;
  class Fld_16S_C1Context;
  class Fld_16R_C2Context;
  class Fld_95a_C2Context;
  class Fld_97a_C2Context;
  class Fld_98a_C2Context;
  class Fld_20C_C2Context;
  class Fld_70C_C2Context;
  class Fld_16S_C2Context;
  class Fld_16R_C3Context;
  class Fld_17B_C3Context;
  class Fld_19A_C3Context;
  class Fld_98a_C3Context;
  class Fld_92B_C3Context;
  class Fld_16S_C3Context;
  class Fld_16S_CContext;
  class Fld_16R_DContext;
  class Fld_95a_DContext;
  class Fld_97a_DContext;
  class Fld_70C_DContext;
  class Fld_20C_DContext;
  class Fld_16S_DContext;
  class Fld_16R_EContext;
  class Fld_98a_EContext;
  class Fld_22F_EContext;
  class Fld_20C_EContext;
  class Fld_92a_EContext;
  class Fld_99B_EContext;
  class Fld_19A_EContext;
  class Fld_70C_EContext;
  class Fld_16S_EContext;
  class Fld_20C_A_CContext;
  class Fld_23G_A_GContext;
  class Fld_98a_A_AContext;
  class Fld_98a_A_CContext;
  class Fld_98a_A_EContext;
  class Fld_22F_A_FContext;
  class Fld_99B_A_BContext;
  class Fld_22F_A1_FContext;
  class Fld_13a_A1_AContext;
  class Fld_13a_A1_BContext;
  class Fld_20C_A1_CContext;
  class Fld_98a_B_AContext;
  class Fld_98a_B_BContext;
  class Fld_98a_B_CContext;
  class Fld_98a_B_EContext;
  class Fld_90a_B_AContext;
  class Fld_90a_B_BContext;
  class Fld_92A_B_AContext;
  class Fld_99A_B_AContext;
  class Fld_94a_B_BContext;
  class Fld_94a_B_CContext;
  class Fld_94a_B_FContext;
  class Fld_94a_B_LContext;
  class Fld_19A_B_AContext;
  class Fld_22a_B_FContext;
  class Fld_22a_B_HContext;
  class Fld_11A_B_AContext;
  class Fld_95a_B1_LContext;
  class Fld_95a_B1_PContext;
  class Fld_95a_B1_QContext;
  class Fld_95a_B1_RContext;
  class Fld_95a_B1_SContext;
  class Fld_97a_B1_AContext;
  class Fld_97a_B1_BContext;
  class Fld_97a_B1_EContext;
  class Fld_98a_B1_AContext;
  class Fld_98a_B1_CContext;
  class Fld_20C_B1_CContext;
  class Fld_70a_B1_CContext;
  class Fld_70a_B1_EContext;
  class Fld_22F_B1_FContext;
  class Fld_36B_B_BContext;
  class Fld_35B_B_BContext;
  class Fld_94B_B2_BContext;
  class Fld_22F_B2_FContext;
  class Fld_12a_B2_AContext;
  class Fld_12a_B2_BContext;
  class Fld_12a_B2_CContext;
  class Fld_11A_B2_AContext;
  class Fld_98A_B2_AContext;
  class Fld_92A_B2_AContext;
  class Fld_13a_B2_AContext;
  class Fld_13a_B2_BContext;
  class Fld_17B_B2_BContext;
  class Fld_90a_B2_AContext;
  class Fld_90a_B2_BContext;
  class Fld_36B_B2_BContext;
  class Fld_35B_B2_BContext;
  class Fld_70E_B2_EContext;
  class Fld_13B_B_BContext;
  class Fld_70E_B_EContext;
  class Fld_22F_C_FContext;
  class Fld_11A_C_AContext;
  class Fld_95a_C1_CContext;
  class Fld_95a_C1_LContext;
  class Fld_95a_C1_PContext;
  class Fld_95a_C1_QContext;
  class Fld_95a_C1_RContext;
  class Fld_95a_C1_SContext;
  class Fld_97a_C1_AContext;
  class Fld_97a_C1_BContext;
  class Fld_98a_C1_AContext;
  class Fld_98a_C1_CContext;
  class Fld_20C_C1_CContext;
  class Fld_70a_C1_CContext;
  class Fld_70a_C1_DContext;
  class Fld_95a_C2_LContext;
  class Fld_95a_C2_PContext;
  class Fld_95a_C2_QContext;
  class Fld_95a_C2_RContext;
  class Fld_95a_C2_SContext;
  class Fld_97a_C2_AContext;
  class Fld_97a_C2_EContext;
  class Fld_98a_C2_AContext;
  class Fld_98a_C2_CContext;
  class Fld_20C_C2_CContext;
  class Fld_70C_C2_CContext;
  class Fld_17B_C3_BContext;
  class Fld_19A_C3_AContext;
  class Fld_98a_C3_AContext;
  class Fld_98a_C3_CContext;
  class Fld_92B_C3_BContext;
  class Fld_95a_D_LContext;
  class Fld_95a_D_PContext;
  class Fld_95a_D_QContext;
  class Fld_95a_D_RContext;
  class Fld_95a_D_SContext;
  class Fld_97a_D_AContext;
  class Fld_97a_D_BContext;
  class Fld_97a_D_EContext;
  class Fld_70C_D_CContext;
  class Fld_20C_D_CContext;
  class Fld_98a_E_AContext;
  class Fld_98a_E_BContext;
  class Fld_98a_E_CContext;
  class Fld_22F_E_FContext;
  class Fld_20C_E_CContext;
  class Fld_92a_E_AContext;
  class Fld_92a_E_CContext;
  class Fld_99B_E_BContext;
  class Fld_19A_E_AContext;
  class Fld_70C_E_CContext; 

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
    Seq_CContext *seq_C();
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
    SwiftMtParser_MT514Parser::Fld_16R_AContext *fld_16R_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_20C_AContext *fld_20C_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_23G_AContext *fld_23G_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_AContext *fld_98a_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22F_AContext *fld_22F_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_99B_AContext *fld_99B_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Seq_A1Context *seq_A1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_AContext *fld_16S_AContext = nullptr;;
    Seq_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_AContext *fld_16R_A();
    Fld_20C_AContext *fld_20C_A();
    Fld_23G_AContext *fld_23G_A();
    Fld_22F_AContext *fld_22F_A();
    Fld_16S_AContext *fld_16S_A();
    Fld_98a_AContext *fld_98a_A();
    std::vector<Fld_99B_AContext *> fld_99B_A();
    Fld_99B_AContext* fld_99B_A(size_t i);
    std::vector<Seq_A1Context *> seq_A1();
    Seq_A1Context* seq_A1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_AContext* seq_A();

  class  Seq_A1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_A1Context *fld_16R_A1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22F_A1Context *fld_22F_A1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_13a_A1Context *fld_13a_A1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_20C_A1Context *fld_20C_A1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_A1Context *fld_16S_A1Context = nullptr;;
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
    SwiftMtParser_MT514Parser::Fld_16R_BContext *fld_16R_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_BContext *fld_98a_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_90a_BContext *fld_90a_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_92A_BContext *fld_92A_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_99A_BContext *fld_99A_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_94a_BContext *fld_94a_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_19A_BContext *fld_19A_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22a_BContext *fld_22a_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_11A_BContext *fld_11A_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Seq_B1Context *seq_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_36B_BContext *fld_36B_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_35B_BContext *fld_35B_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Seq_B2Context *seq_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_13B_BContext *fld_13B_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70E_BContext *fld_70E_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_BContext *fld_16S_BContext = nullptr;;
    Seq_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_BContext *fld_16R_B();
    Fld_35B_BContext *fld_35B_B();
    Fld_16S_BContext *fld_16S_B();
    std::vector<Fld_98a_BContext *> fld_98a_B();
    Fld_98a_BContext* fld_98a_B(size_t i);
    std::vector<Fld_90a_BContext *> fld_90a_B();
    Fld_90a_BContext* fld_90a_B(size_t i);
    std::vector<Fld_92A_BContext *> fld_92A_B();
    Fld_92A_BContext* fld_92A_B(size_t i);
    std::vector<Fld_99A_BContext *> fld_99A_B();
    Fld_99A_BContext* fld_99A_B(size_t i);
    std::vector<Fld_94a_BContext *> fld_94a_B();
    Fld_94a_BContext* fld_94a_B(size_t i);
    std::vector<Fld_19A_BContext *> fld_19A_B();
    Fld_19A_BContext* fld_19A_B(size_t i);
    std::vector<Fld_22a_BContext *> fld_22a_B();
    Fld_22a_BContext* fld_22a_B(size_t i);
    Fld_11A_BContext *fld_11A_B();
    std::vector<Seq_B1Context *> seq_B1();
    Seq_B1Context* seq_B1(size_t i);
    std::vector<Fld_36B_BContext *> fld_36B_B();
    Fld_36B_BContext* fld_36B_B(size_t i);
    Seq_B2Context *seq_B2();
    std::vector<Fld_13B_BContext *> fld_13B_B();
    Fld_13B_BContext* fld_13B_B(size_t i);
    Fld_70E_BContext *fld_70E_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_BContext* seq_B();

  class  Seq_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_B1Context *fld_16R_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_B1Context *fld_95a_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_B1Context *fld_97a_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_B1Context *fld_98a_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_20C_B1Context *fld_20C_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70a_B1Context *fld_70a_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22F_B1Context *fld_22F_B1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_B1Context *fld_16S_B1Context = nullptr;;
    Seq_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B1Context *fld_16R_B1();
    Fld_16S_B1Context *fld_16S_B1();
    std::vector<Fld_95a_B1Context *> fld_95a_B1();
    Fld_95a_B1Context* fld_95a_B1(size_t i);
    std::vector<Fld_97a_B1Context *> fld_97a_B1();
    Fld_97a_B1Context* fld_97a_B1(size_t i);
    Fld_98a_B1Context *fld_98a_B1();
    Fld_20C_B1Context *fld_20C_B1();
    std::vector<Fld_70a_B1Context *> fld_70a_B1();
    Fld_70a_B1Context* fld_70a_B1(size_t i);
    Fld_22F_B1Context *fld_22F_B1();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B1Context* seq_B1();

  class  Seq_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_B2Context *fld_16R_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_94B_B2Context *fld_94B_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22F_B2Context *fld_22F_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_12a_B2Context *fld_12a_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_11A_B2Context *fld_11A_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98A_B2Context *fld_98A_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_92A_B2Context *fld_92A_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_13a_B2Context *fld_13a_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_17B_B2Context *fld_17B_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_90a_B2Context *fld_90a_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_36B_B2Context *fld_36B_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_35B_B2Context *fld_35B_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70E_B2Context *fld_70E_B2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_B2Context *fld_16S_B2Context = nullptr;;
    Seq_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_B2Context *fld_16R_B2();
    Fld_16S_B2Context *fld_16S_B2();
    Fld_94B_B2Context *fld_94B_B2();
    std::vector<Fld_22F_B2Context *> fld_22F_B2();
    Fld_22F_B2Context* fld_22F_B2(size_t i);
    std::vector<Fld_12a_B2Context *> fld_12a_B2();
    Fld_12a_B2Context* fld_12a_B2(size_t i);
    Fld_11A_B2Context *fld_11A_B2();
    std::vector<Fld_98A_B2Context *> fld_98A_B2();
    Fld_98A_B2Context* fld_98A_B2(size_t i);
    std::vector<Fld_92A_B2Context *> fld_92A_B2();
    Fld_92A_B2Context* fld_92A_B2(size_t i);
    std::vector<Fld_13a_B2Context *> fld_13a_B2();
    Fld_13a_B2Context* fld_13a_B2(size_t i);
    std::vector<Fld_17B_B2Context *> fld_17B_B2();
    Fld_17B_B2Context* fld_17B_B2(size_t i);
    std::vector<Fld_90a_B2Context *> fld_90a_B2();
    Fld_90a_B2Context* fld_90a_B2(size_t i);
    std::vector<Fld_36B_B2Context *> fld_36B_B2();
    Fld_36B_B2Context* fld_36B_B2(size_t i);
    std::vector<Fld_35B_B2Context *> fld_35B_B2();
    Fld_35B_B2Context* fld_35B_B2(size_t i);
    Fld_70E_B2Context *fld_70E_B2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_B2Context* seq_B2();

  class  Seq_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_CContext *fld_16R_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22F_CContext *fld_22F_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_11A_CContext *fld_11A_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Seq_C1Context *seq_C1Context = nullptr;;
    SwiftMtParser_MT514Parser::Seq_C2Context *seq_C2Context = nullptr;;
    SwiftMtParser_MT514Parser::Seq_C3Context *seq_C3Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_CContext *fld_16S_CContext = nullptr;;
    Seq_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_CContext *fld_16R_C();
    Fld_16S_CContext *fld_16S_C();
    std::vector<Fld_22F_CContext *> fld_22F_C();
    Fld_22F_CContext* fld_22F_C(size_t i);
    Fld_11A_CContext *fld_11A_C();
    std::vector<Seq_C1Context *> seq_C1();
    Seq_C1Context* seq_C1(size_t i);
    std::vector<Seq_C2Context *> seq_C2();
    Seq_C2Context* seq_C2(size_t i);
    std::vector<Seq_C3Context *> seq_C3();
    Seq_C3Context* seq_C3(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_CContext* seq_C();

  class  Seq_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_C1Context *fld_16R_C1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C1Context *fld_95a_C1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_C1Context *fld_97a_C1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_C1Context *fld_98a_C1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_20C_C1Context *fld_20C_C1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70a_C1Context *fld_70a_C1Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_C1Context *fld_16S_C1Context = nullptr;;
    Seq_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C1Context *fld_16R_C1();
    Fld_16S_C1Context *fld_16S_C1();
    std::vector<Fld_95a_C1Context *> fld_95a_C1();
    Fld_95a_C1Context* fld_95a_C1(size_t i);
    Fld_97a_C1Context *fld_97a_C1();
    Fld_98a_C1Context *fld_98a_C1();
    Fld_20C_C1Context *fld_20C_C1();
    std::vector<Fld_70a_C1Context *> fld_70a_C1();
    Fld_70a_C1Context* fld_70a_C1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C1Context* seq_C1();

  class  Seq_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_C2Context *fld_16R_C2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C2Context *fld_95a_C2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_C2Context *fld_97a_C2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_C2Context *fld_98a_C2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_20C_C2Context *fld_20C_C2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70C_C2Context *fld_70C_C2Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_C2Context *fld_16S_C2Context = nullptr;;
    Seq_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C2Context *fld_16R_C2();
    Fld_16S_C2Context *fld_16S_C2();
    std::vector<Fld_95a_C2Context *> fld_95a_C2();
    Fld_95a_C2Context* fld_95a_C2(size_t i);
    std::vector<Fld_97a_C2Context *> fld_97a_C2();
    Fld_97a_C2Context* fld_97a_C2(size_t i);
    Fld_98a_C2Context *fld_98a_C2();
    Fld_20C_C2Context *fld_20C_C2();
    Fld_70C_C2Context *fld_70C_C2();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C2Context* seq_C2();

  class  Seq_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_C3Context *fld_16R_C3Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_17B_C3Context *fld_17B_C3Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_19A_C3Context *fld_19A_C3Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_C3Context *fld_98a_C3Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_92B_C3Context *fld_92B_C3Context = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_C3Context *fld_16S_C3Context = nullptr;;
    Seq_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_C3Context *fld_16R_C3();
    Fld_16S_C3Context *fld_16S_C3();
    std::vector<Fld_17B_C3Context *> fld_17B_C3();
    Fld_17B_C3Context* fld_17B_C3(size_t i);
    std::vector<Fld_19A_C3Context *> fld_19A_C3();
    Fld_19A_C3Context* fld_19A_C3(size_t i);
    Fld_98a_C3Context *fld_98a_C3();
    Fld_92B_C3Context *fld_92B_C3();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_C3Context* seq_C3();

  class  Seq_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_DContext *fld_16R_DContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_DContext *fld_95a_DContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_DContext *fld_97a_DContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70C_DContext *fld_70C_DContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_20C_DContext *fld_20C_DContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_DContext *fld_16S_DContext = nullptr;;
    Seq_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_DContext *fld_16R_D();
    Fld_16S_DContext *fld_16S_D();
    std::vector<Fld_95a_DContext *> fld_95a_D();
    Fld_95a_DContext* fld_95a_D(size_t i);
    std::vector<Fld_97a_DContext *> fld_97a_D();
    Fld_97a_DContext* fld_97a_D(size_t i);
    Fld_70C_DContext *fld_70C_D();
    Fld_20C_DContext *fld_20C_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Seq_DContext* seq_D();

  class  Seq_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Sequence elem;
    SwiftMtParser_MT514Parser::Fld_16R_EContext *fld_16R_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_EContext *fld_98a_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22F_EContext *fld_22F_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_20C_EContext *fld_20C_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_92a_EContext *fld_92a_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_99B_EContext *fld_99B_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_19A_EContext *fld_19A_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70C_EContext *fld_70C_EContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_16S_EContext *fld_16S_EContext = nullptr;;
    Seq_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_16R_EContext *fld_16R_E();
    Fld_16S_EContext *fld_16S_E();
    std::vector<Fld_98a_EContext *> fld_98a_E();
    Fld_98a_EContext* fld_98a_E(size_t i);
    std::vector<Fld_22F_EContext *> fld_22F_E();
    Fld_22F_EContext* fld_22F_E(size_t i);
    std::vector<Fld_20C_EContext *> fld_20C_E();
    Fld_20C_EContext* fld_20C_E(size_t i);
    std::vector<Fld_92a_EContext *> fld_92a_E();
    Fld_92a_EContext* fld_92a_E(size_t i);
    std::vector<Fld_99B_EContext *> fld_99B_E();
    Fld_99B_EContext* fld_99B_E(size_t i);
    std::vector<Fld_19A_EContext *> fld_19A_E();
    Fld_19A_EContext* fld_19A_E(size_t i);
    Fld_70C_EContext *fld_70C_E();

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
    SwiftMtParser_MT514Parser::Fld_20C_A_CContext *fld_20C_A_CContext = nullptr;;
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
    SwiftMtParser_MT514Parser::Fld_23G_A_GContext *fld_23G_A_GContext = nullptr;;
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
    SwiftMtParser_MT514Parser::Fld_98a_A_AContext *fld_98a_A_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_A_CContext *fld_98a_A_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_A_EContext *fld_98a_A_EContext = nullptr;;
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
    SwiftMtParser_MT514Parser::Fld_22F_A_FContext *fld_22F_A_FContext = nullptr;;
    Fld_22F_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_A_FContext *fld_22F_A_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_AContext* fld_22F_A();

  class  Fld_99B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_99B_A_BContext *fld_99B_A_BContext = nullptr;;
    Fld_99B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_99B_A_BContext *fld_99B_A_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99B_AContext* fld_99B_A();

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
    SwiftMtParser_MT514Parser::Fld_22F_A1_FContext *fld_22F_A1_FContext = nullptr;;
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
    SwiftMtParser_MT514Parser::Fld_13a_A1_AContext *fld_13a_A1_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_13a_A1_BContext *fld_13a_A1_BContext = nullptr;;
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
    SwiftMtParser_MT514Parser::Fld_20C_A1_CContext *fld_20C_A1_CContext = nullptr;;
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

  class  Fld_98a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_98a_B_AContext *fld_98a_B_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_B_BContext *fld_98a_B_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_B_CContext *fld_98a_B_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_B_EContext *fld_98a_B_EContext = nullptr;;
    Fld_98a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B_AContext *fld_98a_B_A();
    Fld_98a_B_BContext *fld_98a_B_B();
    Fld_98a_B_CContext *fld_98a_B_C();
    Fld_98a_B_EContext *fld_98a_B_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_BContext* fld_98a_B();

  class  Fld_90a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_90a_B_AContext *fld_90a_B_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_90a_B_BContext *fld_90a_B_BContext = nullptr;;
    Fld_90a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_90a_B_AContext *fld_90a_B_A();
    Fld_90a_B_BContext *fld_90a_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_BContext* fld_90a_B();

  class  Fld_92A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_92A_B_AContext *fld_92A_B_AContext = nullptr;;
    Fld_92A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_B_AContext *fld_92A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_BContext* fld_92A_B();

  class  Fld_99A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_99A_B_AContext *fld_99A_B_AContext = nullptr;;
    Fld_99A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_99A_B_AContext *fld_99A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_BContext* fld_99A_B();

  class  Fld_94a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_94a_B_BContext *fld_94a_B_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_94a_B_CContext *fld_94a_B_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_94a_B_FContext *fld_94a_B_FContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_94a_B_LContext *fld_94a_B_LContext = nullptr;;
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

  class  Fld_19A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_19A_B_AContext *fld_19A_B_AContext = nullptr;;
    Fld_19A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_B_AContext *fld_19A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_BContext* fld_19A_B();

  class  Fld_22a_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_22a_B_FContext *fld_22a_B_FContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_22a_B_HContext *fld_22a_B_HContext = nullptr;;
    Fld_22a_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22a_B_FContext *fld_22a_B_F();
    Fld_22a_B_HContext *fld_22a_B_H();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22a_BContext* fld_22a_B();

  class  Fld_11A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_11A_B_AContext *fld_11A_B_AContext = nullptr;;
    Fld_11A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_11A_B_AContext *fld_11A_B_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_BContext* fld_11A_B();

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
    SwiftMtParser_MT514Parser::Fld_95a_B1_LContext *fld_95a_B1_LContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_B1_PContext *fld_95a_B1_PContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_B1_QContext *fld_95a_B1_QContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_B1_RContext *fld_95a_B1_RContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_B1_SContext *fld_95a_B1_SContext = nullptr;;
    Fld_95a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_B1_LContext *fld_95a_B1_L();
    Fld_95a_B1_PContext *fld_95a_B1_P();
    Fld_95a_B1_QContext *fld_95a_B1_Q();
    Fld_95a_B1_RContext *fld_95a_B1_R();
    Fld_95a_B1_SContext *fld_95a_B1_S();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B1Context* fld_95a_B1();

  class  Fld_97a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_97a_B1_AContext *fld_97a_B1_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_B1_BContext *fld_97a_B1_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_B1_EContext *fld_97a_B1_EContext = nullptr;;
    Fld_97a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_B1_AContext *fld_97a_B1_A();
    Fld_97a_B1_BContext *fld_97a_B1_B();
    Fld_97a_B1_EContext *fld_97a_B1_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_B1Context* fld_97a_B1();

  class  Fld_98a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_98a_B1_AContext *fld_98a_B1_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_B1_CContext *fld_98a_B1_CContext = nullptr;;
    Fld_98a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_B1_AContext *fld_98a_B1_A();
    Fld_98a_B1_CContext *fld_98a_B1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B1Context* fld_98a_B1();

  class  Fld_20C_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_20C_B1_CContext *fld_20C_B1_CContext = nullptr;;
    Fld_20C_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_B1_CContext *fld_20C_B1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_B1Context* fld_20C_B1();

  class  Fld_70a_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_70a_B1_CContext *fld_70a_B1_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70a_B1_EContext *fld_70a_B1_EContext = nullptr;;
    Fld_70a_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70a_B1_CContext *fld_70a_B1_C();
    Fld_70a_B1_EContext *fld_70a_B1_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_B1Context* fld_70a_B1();

  class  Fld_22F_B1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_22F_B1_FContext *fld_22F_B1_FContext = nullptr;;
    Fld_22F_B1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_B1_FContext *fld_22F_B1_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B1Context* fld_22F_B1();

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

  class  Fld_36B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_36B_B_BContext *fld_36B_B_BContext = nullptr;;
    Fld_36B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_B_BContext *fld_36B_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_BContext* fld_36B_B();

  class  Fld_35B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_35B_B_BContext *fld_35B_B_BContext = nullptr;;
    Fld_35B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_B_BContext *fld_35B_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_BContext* fld_35B_B();

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

  class  Fld_94B_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_94B_B2_BContext *fld_94B_B2_BContext = nullptr;;
    Fld_94B_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_94B_B2_BContext *fld_94B_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94B_B2Context* fld_94B_B2();

  class  Fld_22F_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_22F_B2_FContext *fld_22F_B2_FContext = nullptr;;
    Fld_22F_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_B2_FContext *fld_22F_B2_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_B2Context* fld_22F_B2();

  class  Fld_12a_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_12a_B2_AContext *fld_12a_B2_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_12a_B2_BContext *fld_12a_B2_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_12a_B2_CContext *fld_12a_B2_CContext = nullptr;;
    Fld_12a_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_12a_B2_AContext *fld_12a_B2_A();
    Fld_12a_B2_BContext *fld_12a_B2_B();
    Fld_12a_B2_CContext *fld_12a_B2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B2Context* fld_12a_B2();

  class  Fld_11A_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_11A_B2_AContext *fld_11A_B2_AContext = nullptr;;
    Fld_11A_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_11A_B2_AContext *fld_11A_B2_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_B2Context* fld_11A_B2();

  class  Fld_98A_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_98A_B2_AContext *fld_98A_B2_AContext = nullptr;;
    Fld_98A_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98A_B2_AContext *fld_98A_B2_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_B2Context* fld_98A_B2();

  class  Fld_92A_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_92A_B2_AContext *fld_92A_B2_AContext = nullptr;;
    Fld_92A_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92A_B2_AContext *fld_92A_B2_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_B2Context* fld_92A_B2();

  class  Fld_13a_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_13a_B2_AContext *fld_13a_B2_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_13a_B2_BContext *fld_13a_B2_BContext = nullptr;;
    Fld_13a_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13a_B2_AContext *fld_13a_B2_A();
    Fld_13a_B2_BContext *fld_13a_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B2Context* fld_13a_B2();

  class  Fld_17B_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_17B_B2_BContext *fld_17B_B2_BContext = nullptr;;
    Fld_17B_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_B2_BContext *fld_17B_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B2Context* fld_17B_B2();

  class  Fld_90a_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_90a_B2_AContext *fld_90a_B2_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_90a_B2_BContext *fld_90a_B2_BContext = nullptr;;
    Fld_90a_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_90a_B2_AContext *fld_90a_B2_A();
    Fld_90a_B2_BContext *fld_90a_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B2Context* fld_90a_B2();

  class  Fld_36B_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_36B_B2_BContext *fld_36B_B2_BContext = nullptr;;
    Fld_36B_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_36B_B2_BContext *fld_36B_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B2Context* fld_36B_B2();

  class  Fld_35B_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_35B_B2_BContext *fld_35B_B2_BContext = nullptr;;
    Fld_35B_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_35B_B2_BContext *fld_35B_B2_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B2Context* fld_35B_B2();

  class  Fld_70E_B2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_70E_B2_EContext *fld_70E_B2_EContext = nullptr;;
    Fld_70E_B2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70E_B2_EContext *fld_70E_B2_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70E_B2Context* fld_70E_B2();

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

  class  Fld_13B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_13B_B_BContext *fld_13B_B_BContext = nullptr;;
    Fld_13B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_13B_B_BContext *fld_13B_B_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_BContext* fld_13B_B();

  class  Fld_70E_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_70E_B_EContext *fld_70E_B_EContext = nullptr;;
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

  class  Fld_22F_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_22F_C_FContext *fld_22F_C_FContext = nullptr;;
    Fld_22F_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_C_FContext *fld_22F_C_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_CContext* fld_22F_C();

  class  Fld_11A_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_11A_C_AContext *fld_11A_C_AContext = nullptr;;
    Fld_11A_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_11A_C_AContext *fld_11A_C_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_CContext* fld_11A_C();

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

  class  Fld_95a_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_95a_C1_CContext *fld_95a_C1_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C1_LContext *fld_95a_C1_LContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C1_PContext *fld_95a_C1_PContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C1_QContext *fld_95a_C1_QContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C1_RContext *fld_95a_C1_RContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C1_SContext *fld_95a_C1_SContext = nullptr;;
    Fld_95a_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_C1_CContext *fld_95a_C1_C();
    Fld_95a_C1_LContext *fld_95a_C1_L();
    Fld_95a_C1_PContext *fld_95a_C1_P();
    Fld_95a_C1_QContext *fld_95a_C1_Q();
    Fld_95a_C1_RContext *fld_95a_C1_R();
    Fld_95a_C1_SContext *fld_95a_C1_S();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1Context* fld_95a_C1();

  class  Fld_97a_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_97a_C1_AContext *fld_97a_C1_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_C1_BContext *fld_97a_C1_BContext = nullptr;;
    Fld_97a_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_C1_AContext *fld_97a_C1_A();
    Fld_97a_C1_BContext *fld_97a_C1_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C1Context* fld_97a_C1();

  class  Fld_98a_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_98a_C1_AContext *fld_98a_C1_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_C1_CContext *fld_98a_C1_CContext = nullptr;;
    Fld_98a_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_C1_AContext *fld_98a_C1_A();
    Fld_98a_C1_CContext *fld_98a_C1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C1Context* fld_98a_C1();

  class  Fld_20C_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_20C_C1_CContext *fld_20C_C1_CContext = nullptr;;
    Fld_20C_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_C1_CContext *fld_20C_C1_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_C1Context* fld_20C_C1();

  class  Fld_70a_C1Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_70a_C1_CContext *fld_70a_C1_CContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_70a_C1_DContext *fld_70a_C1_DContext = nullptr;;
    Fld_70a_C1Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70a_C1_CContext *fld_70a_C1_C();
    Fld_70a_C1_DContext *fld_70a_C1_D();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_C1Context* fld_70a_C1();

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

  class  Fld_95a_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_95a_C2_LContext *fld_95a_C2_LContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C2_PContext *fld_95a_C2_PContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C2_QContext *fld_95a_C2_QContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C2_RContext *fld_95a_C2_RContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_C2_SContext *fld_95a_C2_SContext = nullptr;;
    Fld_95a_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_C2_LContext *fld_95a_C2_L();
    Fld_95a_C2_PContext *fld_95a_C2_P();
    Fld_95a_C2_QContext *fld_95a_C2_Q();
    Fld_95a_C2_RContext *fld_95a_C2_R();
    Fld_95a_C2_SContext *fld_95a_C2_S();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C2Context* fld_95a_C2();

  class  Fld_97a_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_97a_C2_AContext *fld_97a_C2_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_C2_EContext *fld_97a_C2_EContext = nullptr;;
    Fld_97a_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_C2_AContext *fld_97a_C2_A();
    Fld_97a_C2_EContext *fld_97a_C2_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C2Context* fld_97a_C2();

  class  Fld_98a_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_98a_C2_AContext *fld_98a_C2_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_C2_CContext *fld_98a_C2_CContext = nullptr;;
    Fld_98a_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_C2_AContext *fld_98a_C2_A();
    Fld_98a_C2_CContext *fld_98a_C2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C2Context* fld_98a_C2();

  class  Fld_20C_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_20C_C2_CContext *fld_20C_C2_CContext = nullptr;;
    Fld_20C_C2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_C2_CContext *fld_20C_C2_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_C2Context* fld_20C_C2();

  class  Fld_70C_C2Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_70C_C2_CContext *fld_70C_C2_CContext = nullptr;;
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

  class  Fld_17B_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_17B_C3_BContext *fld_17B_C3_BContext = nullptr;;
    Fld_17B_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_17B_C3_BContext *fld_17B_C3_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_C3Context* fld_17B_C3();

  class  Fld_19A_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_19A_C3_AContext *fld_19A_C3_AContext = nullptr;;
    Fld_19A_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_C3_AContext *fld_19A_C3_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_C3Context* fld_19A_C3();

  class  Fld_98a_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_98a_C3_AContext *fld_98a_C3_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_C3_CContext *fld_98a_C3_CContext = nullptr;;
    Fld_98a_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_C3_AContext *fld_98a_C3_A();
    Fld_98a_C3_CContext *fld_98a_C3_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C3Context* fld_98a_C3();

  class  Fld_92B_C3Context : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_92B_C3_BContext *fld_92B_C3_BContext = nullptr;;
    Fld_92B_C3Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92B_C3_BContext *fld_92B_C3_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92B_C3Context* fld_92B_C3();

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

  class  Fld_95a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_95a_D_LContext *fld_95a_D_LContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_D_PContext *fld_95a_D_PContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_D_QContext *fld_95a_D_QContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_D_RContext *fld_95a_D_RContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_95a_D_SContext *fld_95a_D_SContext = nullptr;;
    Fld_95a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_95a_D_LContext *fld_95a_D_L();
    Fld_95a_D_PContext *fld_95a_D_P();
    Fld_95a_D_QContext *fld_95a_D_Q();
    Fld_95a_D_RContext *fld_95a_D_R();
    Fld_95a_D_SContext *fld_95a_D_S();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_DContext* fld_95a_D();

  class  Fld_97a_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_97a_D_AContext *fld_97a_D_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_D_BContext *fld_97a_D_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_97a_D_EContext *fld_97a_D_EContext = nullptr;;
    Fld_97a_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_97a_D_AContext *fld_97a_D_A();
    Fld_97a_D_BContext *fld_97a_D_B();
    Fld_97a_D_EContext *fld_97a_D_E();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_DContext* fld_97a_D();

  class  Fld_70C_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_70C_D_CContext *fld_70C_D_CContext = nullptr;;
    Fld_70C_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_D_CContext *fld_70C_D_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_DContext* fld_70C_D();

  class  Fld_20C_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_20C_D_CContext *fld_20C_D_CContext = nullptr;;
    Fld_20C_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_D_CContext *fld_20C_D_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_DContext* fld_20C_D();

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

  class  Fld_98a_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_98a_E_AContext *fld_98a_E_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_E_BContext *fld_98a_E_BContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_98a_E_CContext *fld_98a_E_CContext = nullptr;;
    Fld_98a_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_98a_E_AContext *fld_98a_E_A();
    Fld_98a_E_BContext *fld_98a_E_B();
    Fld_98a_E_CContext *fld_98a_E_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_EContext* fld_98a_E();

  class  Fld_22F_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_22F_E_FContext *fld_22F_E_FContext = nullptr;;
    Fld_22F_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_22F_E_FContext *fld_22F_E_F();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_EContext* fld_22F_E();

  class  Fld_20C_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_20C_E_CContext *fld_20C_E_CContext = nullptr;;
    Fld_20C_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_20C_E_CContext *fld_20C_E_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_EContext* fld_20C_E();

  class  Fld_92a_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_92a_E_AContext *fld_92a_E_AContext = nullptr;;
    SwiftMtParser_MT514Parser::Fld_92a_E_CContext *fld_92a_E_CContext = nullptr;;
    Fld_92a_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_92a_E_AContext *fld_92a_E_A();
    Fld_92a_E_CContext *fld_92a_E_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_EContext* fld_92a_E();

  class  Fld_99B_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_99B_E_BContext *fld_99B_E_BContext = nullptr;;
    Fld_99B_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_99B_E_BContext *fld_99B_E_B();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99B_EContext* fld_99B_E();

  class  Fld_19A_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_19A_E_AContext *fld_19A_E_AContext = nullptr;;
    Fld_19A_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_19A_E_AContext *fld_19A_E_A();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_EContext* fld_19A_E();

  class  Fld_70C_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    SwiftMtParser_MT514Parser::Fld_70C_E_CContext *fld_70C_E_CContext = nullptr;;
    Fld_70C_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fld_70C_E_CContext *fld_70C_E_C();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_EContext* fld_70C_E();

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

  class  Fld_99B_A_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_99B_A_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99B_A_BContext* fld_99B_A_B();

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

  class  Fld_98a_B_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_B_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_B_EContext* fld_98a_B_E();

  class  Fld_90a_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B_AContext* fld_90a_B_A();

  class  Fld_90a_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B_BContext* fld_90a_B_B();

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

  class  Fld_99A_B_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_99A_B_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99A_B_AContext* fld_99A_B_A();

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

  class  Fld_95a_B1_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_B1_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_B1_LContext* fld_95a_B1_L();

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

  class  Fld_97a_B1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_B1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_B1_AContext* fld_97a_B1_A();

  class  Fld_97a_B1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_B1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_B1_BContext* fld_97a_B1_B();

  class  Fld_97a_B1_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_B1_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_B1_EContext* fld_97a_B1_E();

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

  class  Fld_20C_B1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_B1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_B1_CContext* fld_20C_B1_C();

  class  Fld_70a_B1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70a_B1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_B1_CContext* fld_70a_B1_C();

  class  Fld_70a_B1_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70a_B1_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_B1_EContext* fld_70a_B1_E();

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

  class  Fld_36B_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_36B_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_36B_B_BContext* fld_36B_B_B();

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

  class  Fld_94B_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_94B_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_94B_B2_BContext* fld_94B_B2_B();

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

  class  Fld_12a_B2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B2_AContext* fld_12a_B2_A();

  class  Fld_12a_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B2_BContext* fld_12a_B2_B();

  class  Fld_12a_B2_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_12a_B2_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_12a_B2_CContext* fld_12a_B2_C();

  class  Fld_11A_B2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_11A_B2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_B2_AContext* fld_11A_B2_A();

  class  Fld_98A_B2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98A_B2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98A_B2_AContext* fld_98A_B2_A();

  class  Fld_92A_B2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92A_B2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92A_B2_AContext* fld_92A_B2_A();

  class  Fld_13a_B2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_B2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B2_AContext* fld_13a_B2_A();

  class  Fld_13a_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13a_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13a_B2_BContext* fld_13a_B2_B();

  class  Fld_17B_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_B2_BContext* fld_17B_B2_B();

  class  Fld_90a_B2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B2_AContext* fld_90a_B2_A();

  class  Fld_90a_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_90a_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_90a_B2_BContext* fld_90a_B2_B();

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

  class  Fld_35B_B2_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_35B_B2_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_35B_B2_BContext* fld_35B_B2_B();

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

  class  Fld_13B_B_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_13B_B_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_13B_B_BContext* fld_13B_B_B();

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

  class  Fld_11A_C_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_11A_C_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_11A_C_AContext* fld_11A_C_A();

  class  Fld_95a_C1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C1_CContext* fld_95a_C1_C();

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

  class  Fld_97a_C1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_C1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C1_AContext* fld_97a_C1_A();

  class  Fld_97a_C1_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_C1_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C1_BContext* fld_97a_C1_B();

  class  Fld_98a_C1_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C1_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C1_AContext* fld_98a_C1_A();

  class  Fld_98a_C1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C1_CContext* fld_98a_C1_C();

  class  Fld_20C_C1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_C1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_C1_CContext* fld_20C_C1_C();

  class  Fld_70a_C1_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70a_C1_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_C1_CContext* fld_70a_C1_C();

  class  Fld_70a_C1_DContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70a_C1_DContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70a_C1_DContext* fld_70a_C1_D();

  class  Fld_95a_C2_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C2_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C2_LContext* fld_95a_C2_L();

  class  Fld_95a_C2_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C2_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C2_PContext* fld_95a_C2_P();

  class  Fld_95a_C2_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C2_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C2_QContext* fld_95a_C2_Q();

  class  Fld_95a_C2_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C2_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C2_RContext* fld_95a_C2_R();

  class  Fld_95a_C2_SContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_C2_SContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_C2_SContext* fld_95a_C2_S();

  class  Fld_97a_C2_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_C2_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C2_AContext* fld_97a_C2_A();

  class  Fld_97a_C2_EContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_C2_EContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_C2_EContext* fld_97a_C2_E();

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

  class  Fld_20C_C2_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_C2_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_C2_CContext* fld_20C_C2_C();

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

  class  Fld_17B_C3_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_17B_C3_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_17B_C3_BContext* fld_17B_C3_B();

  class  Fld_19A_C3_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_19A_C3_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_19A_C3_AContext* fld_19A_C3_A();

  class  Fld_98a_C3_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C3_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C3_AContext* fld_98a_C3_A();

  class  Fld_98a_C3_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_C3_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_C3_CContext* fld_98a_C3_C();

  class  Fld_92B_C3_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92B_C3_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92B_C3_BContext* fld_92B_C3_B();

  class  Fld_95a_D_LContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D_LContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D_LContext* fld_95a_D_L();

  class  Fld_95a_D_PContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D_PContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D_PContext* fld_95a_D_P();

  class  Fld_95a_D_QContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D_QContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D_QContext* fld_95a_D_Q();

  class  Fld_95a_D_RContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D_RContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D_RContext* fld_95a_D_R();

  class  Fld_95a_D_SContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_95a_D_SContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_95a_D_SContext* fld_95a_D_S();

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

  class  Fld_97a_D_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_97a_D_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_97a_D_BContext* fld_97a_D_B();

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

  class  Fld_70C_D_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70C_D_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_D_CContext* fld_70C_D_C();

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

  class  Fld_98a_E_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_E_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_E_AContext* fld_98a_E_A();

  class  Fld_98a_E_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_E_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_E_BContext* fld_98a_E_B();

  class  Fld_98a_E_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_98a_E_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_98a_E_CContext* fld_98a_E_C();

  class  Fld_22F_E_FContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_22F_E_FContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_22F_E_FContext* fld_22F_E_F();

  class  Fld_20C_E_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_20C_E_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_20C_E_CContext* fld_20C_E_C();

  class  Fld_92a_E_AContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_E_AContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_E_AContext* fld_92a_E_A();

  class  Fld_92a_E_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_92a_E_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_92a_E_CContext* fld_92a_E_C();

  class  Fld_99B_E_BContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_99B_E_BContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_99B_E_BContext* fld_99B_E_B();

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

  class  Fld_70C_E_CContext : public antlr4::ParserRuleContext {
  public:
    message::definition::swift::mt::Field fld;
    Fld_70C_E_CContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> START_OF_FIELD();
    antlr4::tree::TerminalNode* START_OF_FIELD(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fld_70C_E_CContext* fld_70C_E_C();


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
