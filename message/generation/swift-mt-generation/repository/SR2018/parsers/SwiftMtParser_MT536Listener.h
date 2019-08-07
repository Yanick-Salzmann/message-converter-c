
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT536.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT536Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT536Parser.
 */
class  SwiftMtParser_MT536Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT536Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT536Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT536Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT536Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT536Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT536Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT536Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT536Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT536Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT536Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT536Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT536Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT536Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT536Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT536Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT536Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT536Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT536Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT536Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT536Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT536Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT536Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT536Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT536Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT536Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT536Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT536Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT536Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT536Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT536Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT536Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT536Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B1a(SwiftMtParser_MT536Parser::Seq_B1aContext *ctx) = 0;
  virtual void exitSeq_B1a(SwiftMtParser_MT536Parser::Seq_B1aContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT536Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT536Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_28E_A(SwiftMtParser_MT536Parser::Fld_28E_AContext *ctx) = 0;
  virtual void exitFld_28E_A(SwiftMtParser_MT536Parser::Fld_28E_AContext *ctx) = 0;

  virtual void enterFld_13a_A(SwiftMtParser_MT536Parser::Fld_13a_AContext *ctx) = 0;
  virtual void exitFld_13a_A(SwiftMtParser_MT536Parser::Fld_13a_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT536Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT536Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT536Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT536Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT536Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT536Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_69a_A(SwiftMtParser_MT536Parser::Fld_69a_AContext *ctx) = 0;
  virtual void exitFld_69a_A(SwiftMtParser_MT536Parser::Fld_69a_AContext *ctx) = 0;

  virtual void enterFld_22F_A(SwiftMtParser_MT536Parser::Fld_22F_AContext *ctx) = 0;
  virtual void exitFld_22F_A(SwiftMtParser_MT536Parser::Fld_22F_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT536Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT536Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT536Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT536Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT536Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT536Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT536Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT536Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT536Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT536Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_97a_A(SwiftMtParser_MT536Parser::Fld_97a_AContext *ctx) = 0;
  virtual void exitFld_97a_A(SwiftMtParser_MT536Parser::Fld_97a_AContext *ctx) = 0;

  virtual void enterFld_17B_A(SwiftMtParser_MT536Parser::Fld_17B_AContext *ctx) = 0;
  virtual void exitFld_17B_A(SwiftMtParser_MT536Parser::Fld_17B_AContext *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT536Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT536Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT536Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT536Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_95a_B(SwiftMtParser_MT536Parser::Fld_95a_BContext *ctx) = 0;
  virtual void exitFld_95a_B(SwiftMtParser_MT536Parser::Fld_95a_BContext *ctx) = 0;

  virtual void enterFld_97a_B(SwiftMtParser_MT536Parser::Fld_97a_BContext *ctx) = 0;
  virtual void exitFld_97a_B(SwiftMtParser_MT536Parser::Fld_97a_BContext *ctx) = 0;

  virtual void enterFld_94a_B(SwiftMtParser_MT536Parser::Fld_94a_BContext *ctx) = 0;
  virtual void exitFld_94a_B(SwiftMtParser_MT536Parser::Fld_94a_BContext *ctx) = 0;

  virtual void enterFld_17B_B(SwiftMtParser_MT536Parser::Fld_17B_BContext *ctx) = 0;
  virtual void exitFld_17B_B(SwiftMtParser_MT536Parser::Fld_17B_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT536Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT536Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_35B_B1(SwiftMtParser_MT536Parser::Fld_35B_B1Context *ctx) = 0;
  virtual void exitFld_35B_B1(SwiftMtParser_MT536Parser::Fld_35B_B1Context *ctx) = 0;

  virtual void enterFld_90a_B1(SwiftMtParser_MT536Parser::Fld_90a_B1Context *ctx) = 0;
  virtual void exitFld_90a_B1(SwiftMtParser_MT536Parser::Fld_90a_B1Context *ctx) = 0;

  virtual void enterFld_94B_B1(SwiftMtParser_MT536Parser::Fld_94B_B1Context *ctx) = 0;
  virtual void exitFld_94B_B1(SwiftMtParser_MT536Parser::Fld_94B_B1Context *ctx) = 0;

  virtual void enterFld_98a_B1(SwiftMtParser_MT536Parser::Fld_98a_B1Context *ctx) = 0;
  virtual void exitFld_98a_B1(SwiftMtParser_MT536Parser::Fld_98a_B1Context *ctx) = 0;

  virtual void enterFld_93B_B1(SwiftMtParser_MT536Parser::Fld_93B_B1Context *ctx) = 0;
  virtual void exitFld_93B_B1(SwiftMtParser_MT536Parser::Fld_93B_B1Context *ctx) = 0;

  virtual void enterFld_16R_B1a(SwiftMtParser_MT536Parser::Fld_16R_B1aContext *ctx) = 0;
  virtual void exitFld_16R_B1a(SwiftMtParser_MT536Parser::Fld_16R_B1aContext *ctx) = 0;

  virtual void enterFld_28E_A_E(SwiftMtParser_MT536Parser::Fld_28E_A_EContext *ctx) = 0;
  virtual void exitFld_28E_A_E(SwiftMtParser_MT536Parser::Fld_28E_A_EContext *ctx) = 0;

  virtual void enterFld_13a_A_A(SwiftMtParser_MT536Parser::Fld_13a_A_AContext *ctx) = 0;
  virtual void exitFld_13a_A_A(SwiftMtParser_MT536Parser::Fld_13a_A_AContext *ctx) = 0;

  virtual void enterFld_13a_A_J(SwiftMtParser_MT536Parser::Fld_13a_A_JContext *ctx) = 0;
  virtual void exitFld_13a_A_J(SwiftMtParser_MT536Parser::Fld_13a_A_JContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT536Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT536Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT536Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT536Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT536Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT536Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT536Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT536Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT536Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT536Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_69a_A_A(SwiftMtParser_MT536Parser::Fld_69a_A_AContext *ctx) = 0;
  virtual void exitFld_69a_A_A(SwiftMtParser_MT536Parser::Fld_69a_A_AContext *ctx) = 0;

  virtual void enterFld_69a_A_B(SwiftMtParser_MT536Parser::Fld_69a_A_BContext *ctx) = 0;
  virtual void exitFld_69a_A_B(SwiftMtParser_MT536Parser::Fld_69a_A_BContext *ctx) = 0;

  virtual void enterFld_22F_A_F(SwiftMtParser_MT536Parser::Fld_22F_A_FContext *ctx) = 0;
  virtual void exitFld_22F_A_F(SwiftMtParser_MT536Parser::Fld_22F_A_FContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT536Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT536Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT536Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT536Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT536Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT536Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_95a_A_L(SwiftMtParser_MT536Parser::Fld_95a_A_LContext *ctx) = 0;
  virtual void exitFld_95a_A_L(SwiftMtParser_MT536Parser::Fld_95a_A_LContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT536Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT536Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT536Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT536Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_97a_A_A(SwiftMtParser_MT536Parser::Fld_97a_A_AContext *ctx) = 0;
  virtual void exitFld_97a_A_A(SwiftMtParser_MT536Parser::Fld_97a_A_AContext *ctx) = 0;

  virtual void enterFld_97a_A_B(SwiftMtParser_MT536Parser::Fld_97a_A_BContext *ctx) = 0;
  virtual void exitFld_97a_A_B(SwiftMtParser_MT536Parser::Fld_97a_A_BContext *ctx) = 0;

  virtual void enterFld_17B_A_B(SwiftMtParser_MT536Parser::Fld_17B_A_BContext *ctx) = 0;
  virtual void exitFld_17B_A_B(SwiftMtParser_MT536Parser::Fld_17B_A_BContext *ctx) = 0;

  virtual void enterFld_95a_B_L(SwiftMtParser_MT536Parser::Fld_95a_B_LContext *ctx) = 0;
  virtual void exitFld_95a_B_L(SwiftMtParser_MT536Parser::Fld_95a_B_LContext *ctx) = 0;

  virtual void enterFld_95a_B_P(SwiftMtParser_MT536Parser::Fld_95a_B_PContext *ctx) = 0;
  virtual void exitFld_95a_B_P(SwiftMtParser_MT536Parser::Fld_95a_B_PContext *ctx) = 0;

  virtual void enterFld_95a_B_R(SwiftMtParser_MT536Parser::Fld_95a_B_RContext *ctx) = 0;
  virtual void exitFld_95a_B_R(SwiftMtParser_MT536Parser::Fld_95a_B_RContext *ctx) = 0;

  virtual void enterFld_97a_B_A(SwiftMtParser_MT536Parser::Fld_97a_B_AContext *ctx) = 0;
  virtual void exitFld_97a_B_A(SwiftMtParser_MT536Parser::Fld_97a_B_AContext *ctx) = 0;

  virtual void enterFld_97a_B_B(SwiftMtParser_MT536Parser::Fld_97a_B_BContext *ctx) = 0;
  virtual void exitFld_97a_B_B(SwiftMtParser_MT536Parser::Fld_97a_B_BContext *ctx) = 0;

  virtual void enterFld_94a_B_B(SwiftMtParser_MT536Parser::Fld_94a_B_BContext *ctx) = 0;
  virtual void exitFld_94a_B_B(SwiftMtParser_MT536Parser::Fld_94a_B_BContext *ctx) = 0;

  virtual void enterFld_94a_B_C(SwiftMtParser_MT536Parser::Fld_94a_B_CContext *ctx) = 0;
  virtual void exitFld_94a_B_C(SwiftMtParser_MT536Parser::Fld_94a_B_CContext *ctx) = 0;

  virtual void enterFld_94a_B_F(SwiftMtParser_MT536Parser::Fld_94a_B_FContext *ctx) = 0;
  virtual void exitFld_94a_B_F(SwiftMtParser_MT536Parser::Fld_94a_B_FContext *ctx) = 0;

  virtual void enterFld_94a_B_L(SwiftMtParser_MT536Parser::Fld_94a_B_LContext *ctx) = 0;
  virtual void exitFld_94a_B_L(SwiftMtParser_MT536Parser::Fld_94a_B_LContext *ctx) = 0;

  virtual void enterFld_17B_B_B(SwiftMtParser_MT536Parser::Fld_17B_B_BContext *ctx) = 0;
  virtual void exitFld_17B_B_B(SwiftMtParser_MT536Parser::Fld_17B_B_BContext *ctx) = 0;

  virtual void enterFld_35B_B1_B(SwiftMtParser_MT536Parser::Fld_35B_B1_BContext *ctx) = 0;
  virtual void exitFld_35B_B1_B(SwiftMtParser_MT536Parser::Fld_35B_B1_BContext *ctx) = 0;

  virtual void enterFld_90a_B1_A(SwiftMtParser_MT536Parser::Fld_90a_B1_AContext *ctx) = 0;
  virtual void exitFld_90a_B1_A(SwiftMtParser_MT536Parser::Fld_90a_B1_AContext *ctx) = 0;

  virtual void enterFld_90a_B1_B(SwiftMtParser_MT536Parser::Fld_90a_B1_BContext *ctx) = 0;
  virtual void exitFld_90a_B1_B(SwiftMtParser_MT536Parser::Fld_90a_B1_BContext *ctx) = 0;

  virtual void enterFld_94B_B1_B(SwiftMtParser_MT536Parser::Fld_94B_B1_BContext *ctx) = 0;
  virtual void exitFld_94B_B1_B(SwiftMtParser_MT536Parser::Fld_94B_B1_BContext *ctx) = 0;

  virtual void enterFld_98a_B1_A(SwiftMtParser_MT536Parser::Fld_98a_B1_AContext *ctx) = 0;
  virtual void exitFld_98a_B1_A(SwiftMtParser_MT536Parser::Fld_98a_B1_AContext *ctx) = 0;

  virtual void enterFld_98a_B1_C(SwiftMtParser_MT536Parser::Fld_98a_B1_CContext *ctx) = 0;
  virtual void exitFld_98a_B1_C(SwiftMtParser_MT536Parser::Fld_98a_B1_CContext *ctx) = 0;

  virtual void enterFld_93B_B1_B(SwiftMtParser_MT536Parser::Fld_93B_B1_BContext *ctx) = 0;
  virtual void exitFld_93B_B1_B(SwiftMtParser_MT536Parser::Fld_93B_B1_BContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
