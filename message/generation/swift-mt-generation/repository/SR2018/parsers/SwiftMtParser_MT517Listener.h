
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT517Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT517.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT517Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT517Parser.
 */
class  SwiftMtParser_MT517Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT517Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT517Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT517Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT517Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT517Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT517Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT517Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT517Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT517Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT517Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT517Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT517Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT517Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT517Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT517Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT517Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT517Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT517Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT517Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT517Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT517Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT517Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT517Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT517Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT517Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT517Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT517Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT517Parser::Seq_A1Context *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT517Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT517Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT517Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT517Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT517Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT517Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT517Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT517Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT517Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT517Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_25D_A(SwiftMtParser_MT517Parser::Fld_25D_AContext *ctx) = 0;
  virtual void exitFld_25D_A(SwiftMtParser_MT517Parser::Fld_25D_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT517Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT517Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT517Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT517Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT517Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT517Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT517Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT517Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT517Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT517Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT517Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT517Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT517Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT517Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT517Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT517Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT517Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT517Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT517Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT517Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_95a_A_L(SwiftMtParser_MT517Parser::Fld_95a_A_LContext *ctx) = 0;
  virtual void exitFld_95a_A_L(SwiftMtParser_MT517Parser::Fld_95a_A_LContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT517Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT517Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_Q(SwiftMtParser_MT517Parser::Fld_95a_A_QContext *ctx) = 0;
  virtual void exitFld_95a_A_Q(SwiftMtParser_MT517Parser::Fld_95a_A_QContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT517Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT517Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_25D_A_D(SwiftMtParser_MT517Parser::Fld_25D_A_DContext *ctx) = 0;
  virtual void exitFld_25D_A_D(SwiftMtParser_MT517Parser::Fld_25D_A_DContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT517Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT517Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT517Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT517Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT517Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT517Parser::Fld_20C_A1_CContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
