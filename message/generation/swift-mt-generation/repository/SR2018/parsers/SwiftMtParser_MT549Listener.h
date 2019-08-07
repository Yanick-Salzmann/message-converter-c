
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT549Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT549.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT549Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT549Parser.
 */
class  SwiftMtParser_MT549Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT549Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT549Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT549Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT549Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT549Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT549Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT549Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT549Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT549Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT549Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT549Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT549Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT549Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT549Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT549Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT549Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT549Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT549Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT549Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT549Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT549Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT549Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT549Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT549Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT549Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT549Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT549Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT549Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT549Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT549Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT549Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT549Parser::Seq_CContext *ctx) = 0;

  virtual void enterSeq_D(SwiftMtParser_MT549Parser::Seq_DContext *ctx) = 0;
  virtual void exitSeq_D(SwiftMtParser_MT549Parser::Seq_DContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT549Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT549Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT549Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT549Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT549Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT549Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT549Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT549Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_69a_A(SwiftMtParser_MT549Parser::Fld_69a_AContext *ctx) = 0;
  virtual void exitFld_69a_A(SwiftMtParser_MT549Parser::Fld_69a_AContext *ctx) = 0;

  virtual void enterFld_13A_A(SwiftMtParser_MT549Parser::Fld_13A_AContext *ctx) = 0;
  virtual void exitFld_13A_A(SwiftMtParser_MT549Parser::Fld_13A_AContext *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT549Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT549Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_97a_A(SwiftMtParser_MT549Parser::Fld_97a_AContext *ctx) = 0;
  virtual void exitFld_97a_A(SwiftMtParser_MT549Parser::Fld_97a_AContext *ctx) = 0;

  virtual void enterFld_22F_A(SwiftMtParser_MT549Parser::Fld_22F_AContext *ctx) = 0;
  virtual void exitFld_22F_A(SwiftMtParser_MT549Parser::Fld_22F_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT549Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT549Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT549Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT549Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT549Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT549Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT549Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT549Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT549Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT549Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT549Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT549Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_25D_B(SwiftMtParser_MT549Parser::Fld_25D_BContext *ctx) = 0;
  virtual void exitFld_25D_B(SwiftMtParser_MT549Parser::Fld_25D_BContext *ctx) = 0;

  virtual void enterFld_24B_B(SwiftMtParser_MT549Parser::Fld_24B_BContext *ctx) = 0;
  virtual void exitFld_24B_B(SwiftMtParser_MT549Parser::Fld_24B_BContext *ctx) = 0;

  virtual void enterFld_35B_B(SwiftMtParser_MT549Parser::Fld_35B_BContext *ctx) = 0;
  virtual void exitFld_35B_B(SwiftMtParser_MT549Parser::Fld_35B_BContext *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT549Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT549Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT549Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT549Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_20C_C(SwiftMtParser_MT549Parser::Fld_20C_CContext *ctx) = 0;
  virtual void exitFld_20C_C(SwiftMtParser_MT549Parser::Fld_20C_CContext *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT549Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT549Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_16R_D(SwiftMtParser_MT549Parser::Fld_16R_DContext *ctx) = 0;
  virtual void exitFld_16R_D(SwiftMtParser_MT549Parser::Fld_16R_DContext *ctx) = 0;

  virtual void enterFld_95a_D(SwiftMtParser_MT549Parser::Fld_95a_DContext *ctx) = 0;
  virtual void exitFld_95a_D(SwiftMtParser_MT549Parser::Fld_95a_DContext *ctx) = 0;

  virtual void enterFld_16S_D(SwiftMtParser_MT549Parser::Fld_16S_DContext *ctx) = 0;
  virtual void exitFld_16S_D(SwiftMtParser_MT549Parser::Fld_16S_DContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT549Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT549Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT549Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT549Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT549Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT549Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT549Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT549Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_69a_A_A(SwiftMtParser_MT549Parser::Fld_69a_A_AContext *ctx) = 0;
  virtual void exitFld_69a_A_A(SwiftMtParser_MT549Parser::Fld_69a_A_AContext *ctx) = 0;

  virtual void enterFld_69a_A_B(SwiftMtParser_MT549Parser::Fld_69a_A_BContext *ctx) = 0;
  virtual void exitFld_69a_A_B(SwiftMtParser_MT549Parser::Fld_69a_A_BContext *ctx) = 0;

  virtual void enterFld_13A_A_A(SwiftMtParser_MT549Parser::Fld_13A_A_AContext *ctx) = 0;
  virtual void exitFld_13A_A_A(SwiftMtParser_MT549Parser::Fld_13A_A_AContext *ctx) = 0;

  virtual void enterFld_95a_A_L(SwiftMtParser_MT549Parser::Fld_95a_A_LContext *ctx) = 0;
  virtual void exitFld_95a_A_L(SwiftMtParser_MT549Parser::Fld_95a_A_LContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT549Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT549Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT549Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT549Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_97a_A_A(SwiftMtParser_MT549Parser::Fld_97a_A_AContext *ctx) = 0;
  virtual void exitFld_97a_A_A(SwiftMtParser_MT549Parser::Fld_97a_A_AContext *ctx) = 0;

  virtual void enterFld_97a_A_B(SwiftMtParser_MT549Parser::Fld_97a_A_BContext *ctx) = 0;
  virtual void exitFld_97a_A_B(SwiftMtParser_MT549Parser::Fld_97a_A_BContext *ctx) = 0;

  virtual void enterFld_22F_A_F(SwiftMtParser_MT549Parser::Fld_22F_A_FContext *ctx) = 0;
  virtual void exitFld_22F_A_F(SwiftMtParser_MT549Parser::Fld_22F_A_FContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT549Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT549Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT549Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT549Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT549Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT549Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_25D_B_D(SwiftMtParser_MT549Parser::Fld_25D_B_DContext *ctx) = 0;
  virtual void exitFld_25D_B_D(SwiftMtParser_MT549Parser::Fld_25D_B_DContext *ctx) = 0;

  virtual void enterFld_24B_B_B(SwiftMtParser_MT549Parser::Fld_24B_B_BContext *ctx) = 0;
  virtual void exitFld_24B_B_B(SwiftMtParser_MT549Parser::Fld_24B_B_BContext *ctx) = 0;

  virtual void enterFld_35B_B_B(SwiftMtParser_MT549Parser::Fld_35B_B_BContext *ctx) = 0;
  virtual void exitFld_35B_B_B(SwiftMtParser_MT549Parser::Fld_35B_B_BContext *ctx) = 0;

  virtual void enterFld_20C_C_C(SwiftMtParser_MT549Parser::Fld_20C_C_CContext *ctx) = 0;
  virtual void exitFld_20C_C_C(SwiftMtParser_MT549Parser::Fld_20C_C_CContext *ctx) = 0;

  virtual void enterFld_95a_D_P(SwiftMtParser_MT549Parser::Fld_95a_D_PContext *ctx) = 0;
  virtual void exitFld_95a_D_P(SwiftMtParser_MT549Parser::Fld_95a_D_PContext *ctx) = 0;

  virtual void enterFld_95a_D_Q(SwiftMtParser_MT549Parser::Fld_95a_D_QContext *ctx) = 0;
  virtual void exitFld_95a_D_Q(SwiftMtParser_MT549Parser::Fld_95a_D_QContext *ctx) = 0;

  virtual void enterFld_95a_D_R(SwiftMtParser_MT549Parser::Fld_95a_D_RContext *ctx) = 0;
  virtual void exitFld_95a_D_R(SwiftMtParser_MT549Parser::Fld_95a_D_RContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
