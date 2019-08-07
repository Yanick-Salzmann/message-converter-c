
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT530Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT530.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT530Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT530Parser.
 */
class  SwiftMtParser_MT530Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT530Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT530Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT530Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT530Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT530Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT530Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT530Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT530Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT530Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT530Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT530Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT530Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT530Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT530Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT530Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT530Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT530Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT530Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT530Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT530Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT530Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT530Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT530Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT530Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT530Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT530Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT530Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT530Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT530Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT530Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT530Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT530Parser::Seq_CContext *ctx) = 0;

  virtual void enterSeq_C1(SwiftMtParser_MT530Parser::Seq_C1Context *ctx) = 0;
  virtual void exitSeq_C1(SwiftMtParser_MT530Parser::Seq_C1Context *ctx) = 0;

  virtual void enterSeq_C1a(SwiftMtParser_MT530Parser::Seq_C1aContext *ctx) = 0;
  virtual void exitSeq_C1a(SwiftMtParser_MT530Parser::Seq_C1aContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT530Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT530Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT530Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT530Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT530Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT530Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT530Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT530Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT530Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT530Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_97a_A(SwiftMtParser_MT530Parser::Fld_97a_AContext *ctx) = 0;
  virtual void exitFld_97a_A(SwiftMtParser_MT530Parser::Fld_97a_AContext *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT530Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT530Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT530Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT530Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_20C_B(SwiftMtParser_MT530Parser::Fld_20C_BContext *ctx) = 0;
  virtual void exitFld_20C_B(SwiftMtParser_MT530Parser::Fld_20C_BContext *ctx) = 0;

  virtual void enterFld_22F_B(SwiftMtParser_MT530Parser::Fld_22F_BContext *ctx) = 0;
  virtual void exitFld_22F_B(SwiftMtParser_MT530Parser::Fld_22F_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT530Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT530Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_22F_B1(SwiftMtParser_MT530Parser::Fld_22F_B1Context *ctx) = 0;
  virtual void exitFld_22F_B1(SwiftMtParser_MT530Parser::Fld_22F_B1Context *ctx) = 0;

  virtual void enterFld_13a_B1(SwiftMtParser_MT530Parser::Fld_13a_B1Context *ctx) = 0;
  virtual void exitFld_13a_B1(SwiftMtParser_MT530Parser::Fld_13a_B1Context *ctx) = 0;

  virtual void enterFld_20C_B1(SwiftMtParser_MT530Parser::Fld_20C_B1Context *ctx) = 0;
  virtual void exitFld_20C_B1(SwiftMtParser_MT530Parser::Fld_20C_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT530Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT530Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT530Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT530Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT530Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT530Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_20C_C(SwiftMtParser_MT530Parser::Fld_20C_CContext *ctx) = 0;
  virtual void exitFld_20C_C(SwiftMtParser_MT530Parser::Fld_20C_CContext *ctx) = 0;

  virtual void enterFld_12A_C(SwiftMtParser_MT530Parser::Fld_12A_CContext *ctx) = 0;
  virtual void exitFld_12A_C(SwiftMtParser_MT530Parser::Fld_12A_CContext *ctx) = 0;

  virtual void enterFld_97a_C(SwiftMtParser_MT530Parser::Fld_97a_CContext *ctx) = 0;
  virtual void exitFld_97a_C(SwiftMtParser_MT530Parser::Fld_97a_CContext *ctx) = 0;

  virtual void enterFld_35B_C(SwiftMtParser_MT530Parser::Fld_35B_CContext *ctx) = 0;
  virtual void exitFld_35B_C(SwiftMtParser_MT530Parser::Fld_35B_CContext *ctx) = 0;

  virtual void enterFld_36B_C(SwiftMtParser_MT530Parser::Fld_36B_CContext *ctx) = 0;
  virtual void exitFld_36B_C(SwiftMtParser_MT530Parser::Fld_36B_CContext *ctx) = 0;

  virtual void enterFld_98a_C(SwiftMtParser_MT530Parser::Fld_98a_CContext *ctx) = 0;
  virtual void exitFld_98a_C(SwiftMtParser_MT530Parser::Fld_98a_CContext *ctx) = 0;

  virtual void enterFld_95a_C(SwiftMtParser_MT530Parser::Fld_95a_CContext *ctx) = 0;
  virtual void exitFld_95a_C(SwiftMtParser_MT530Parser::Fld_95a_CContext *ctx) = 0;

  virtual void enterFld_16R_C1(SwiftMtParser_MT530Parser::Fld_16R_C1Context *ctx) = 0;
  virtual void exitFld_16R_C1(SwiftMtParser_MT530Parser::Fld_16R_C1Context *ctx) = 0;

  virtual void enterFld_25D_C1(SwiftMtParser_MT530Parser::Fld_25D_C1Context *ctx) = 0;
  virtual void exitFld_25D_C1(SwiftMtParser_MT530Parser::Fld_25D_C1Context *ctx) = 0;

  virtual void enterFld_16R_C1a(SwiftMtParser_MT530Parser::Fld_16R_C1aContext *ctx) = 0;
  virtual void exitFld_16R_C1a(SwiftMtParser_MT530Parser::Fld_16R_C1aContext *ctx) = 0;

  virtual void enterFld_24B_C1a(SwiftMtParser_MT530Parser::Fld_24B_C1aContext *ctx) = 0;
  virtual void exitFld_24B_C1a(SwiftMtParser_MT530Parser::Fld_24B_C1aContext *ctx) = 0;

  virtual void enterFld_70D_C1a(SwiftMtParser_MT530Parser::Fld_70D_C1aContext *ctx) = 0;
  virtual void exitFld_70D_C1a(SwiftMtParser_MT530Parser::Fld_70D_C1aContext *ctx) = 0;

  virtual void enterFld_16S_C1a(SwiftMtParser_MT530Parser::Fld_16S_C1aContext *ctx) = 0;
  virtual void exitFld_16S_C1a(SwiftMtParser_MT530Parser::Fld_16S_C1aContext *ctx) = 0;

  virtual void enterFld_16S_C1(SwiftMtParser_MT530Parser::Fld_16S_C1Context *ctx) = 0;
  virtual void exitFld_16S_C1(SwiftMtParser_MT530Parser::Fld_16S_C1Context *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT530Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT530Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT530Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT530Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT530Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT530Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT530Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT530Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT530Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT530Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT530Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT530Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_95a_A_L(SwiftMtParser_MT530Parser::Fld_95a_A_LContext *ctx) = 0;
  virtual void exitFld_95a_A_L(SwiftMtParser_MT530Parser::Fld_95a_A_LContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT530Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT530Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT530Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT530Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_97a_A_A(SwiftMtParser_MT530Parser::Fld_97a_A_AContext *ctx) = 0;
  virtual void exitFld_97a_A_A(SwiftMtParser_MT530Parser::Fld_97a_A_AContext *ctx) = 0;

  virtual void enterFld_97a_A_B(SwiftMtParser_MT530Parser::Fld_97a_A_BContext *ctx) = 0;
  virtual void exitFld_97a_A_B(SwiftMtParser_MT530Parser::Fld_97a_A_BContext *ctx) = 0;

  virtual void enterFld_20C_B_C(SwiftMtParser_MT530Parser::Fld_20C_B_CContext *ctx) = 0;
  virtual void exitFld_20C_B_C(SwiftMtParser_MT530Parser::Fld_20C_B_CContext *ctx) = 0;

  virtual void enterFld_22F_B_F(SwiftMtParser_MT530Parser::Fld_22F_B_FContext *ctx) = 0;
  virtual void exitFld_22F_B_F(SwiftMtParser_MT530Parser::Fld_22F_B_FContext *ctx) = 0;

  virtual void enterFld_22F_B1_F(SwiftMtParser_MT530Parser::Fld_22F_B1_FContext *ctx) = 0;
  virtual void exitFld_22F_B1_F(SwiftMtParser_MT530Parser::Fld_22F_B1_FContext *ctx) = 0;

  virtual void enterFld_13a_B1_A(SwiftMtParser_MT530Parser::Fld_13a_B1_AContext *ctx) = 0;
  virtual void exitFld_13a_B1_A(SwiftMtParser_MT530Parser::Fld_13a_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_B(SwiftMtParser_MT530Parser::Fld_13a_B1_BContext *ctx) = 0;
  virtual void exitFld_13a_B1_B(SwiftMtParser_MT530Parser::Fld_13a_B1_BContext *ctx) = 0;

  virtual void enterFld_20C_B1_C(SwiftMtParser_MT530Parser::Fld_20C_B1_CContext *ctx) = 0;
  virtual void exitFld_20C_B1_C(SwiftMtParser_MT530Parser::Fld_20C_B1_CContext *ctx) = 0;

  virtual void enterFld_20C_C_C(SwiftMtParser_MT530Parser::Fld_20C_C_CContext *ctx) = 0;
  virtual void exitFld_20C_C_C(SwiftMtParser_MT530Parser::Fld_20C_C_CContext *ctx) = 0;

  virtual void enterFld_12A_C_A(SwiftMtParser_MT530Parser::Fld_12A_C_AContext *ctx) = 0;
  virtual void exitFld_12A_C_A(SwiftMtParser_MT530Parser::Fld_12A_C_AContext *ctx) = 0;

  virtual void enterFld_97a_C_A(SwiftMtParser_MT530Parser::Fld_97a_C_AContext *ctx) = 0;
  virtual void exitFld_97a_C_A(SwiftMtParser_MT530Parser::Fld_97a_C_AContext *ctx) = 0;

  virtual void enterFld_97a_C_B(SwiftMtParser_MT530Parser::Fld_97a_C_BContext *ctx) = 0;
  virtual void exitFld_97a_C_B(SwiftMtParser_MT530Parser::Fld_97a_C_BContext *ctx) = 0;

  virtual void enterFld_35B_C_B(SwiftMtParser_MT530Parser::Fld_35B_C_BContext *ctx) = 0;
  virtual void exitFld_35B_C_B(SwiftMtParser_MT530Parser::Fld_35B_C_BContext *ctx) = 0;

  virtual void enterFld_36B_C_B(SwiftMtParser_MT530Parser::Fld_36B_C_BContext *ctx) = 0;
  virtual void exitFld_36B_C_B(SwiftMtParser_MT530Parser::Fld_36B_C_BContext *ctx) = 0;

  virtual void enterFld_98a_C_A(SwiftMtParser_MT530Parser::Fld_98a_C_AContext *ctx) = 0;
  virtual void exitFld_98a_C_A(SwiftMtParser_MT530Parser::Fld_98a_C_AContext *ctx) = 0;

  virtual void enterFld_98a_C_C(SwiftMtParser_MT530Parser::Fld_98a_C_CContext *ctx) = 0;
  virtual void exitFld_98a_C_C(SwiftMtParser_MT530Parser::Fld_98a_C_CContext *ctx) = 0;

  virtual void enterFld_95a_C_P(SwiftMtParser_MT530Parser::Fld_95a_C_PContext *ctx) = 0;
  virtual void exitFld_95a_C_P(SwiftMtParser_MT530Parser::Fld_95a_C_PContext *ctx) = 0;

  virtual void enterFld_95a_C_Q(SwiftMtParser_MT530Parser::Fld_95a_C_QContext *ctx) = 0;
  virtual void exitFld_95a_C_Q(SwiftMtParser_MT530Parser::Fld_95a_C_QContext *ctx) = 0;

  virtual void enterFld_95a_C_R(SwiftMtParser_MT530Parser::Fld_95a_C_RContext *ctx) = 0;
  virtual void exitFld_95a_C_R(SwiftMtParser_MT530Parser::Fld_95a_C_RContext *ctx) = 0;

  virtual void enterFld_25D_C1_D(SwiftMtParser_MT530Parser::Fld_25D_C1_DContext *ctx) = 0;
  virtual void exitFld_25D_C1_D(SwiftMtParser_MT530Parser::Fld_25D_C1_DContext *ctx) = 0;

  virtual void enterFld_24B_C1a_B(SwiftMtParser_MT530Parser::Fld_24B_C1a_BContext *ctx) = 0;
  virtual void exitFld_24B_C1a_B(SwiftMtParser_MT530Parser::Fld_24B_C1a_BContext *ctx) = 0;

  virtual void enterFld_70D_C1a_D(SwiftMtParser_MT530Parser::Fld_70D_C1a_DContext *ctx) = 0;
  virtual void exitFld_70D_C1a_D(SwiftMtParser_MT530Parser::Fld_70D_C1a_DContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
