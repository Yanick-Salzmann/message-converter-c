
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars\SwiftMtParser_MT500.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT500Parser.h"


namespace message::definition::swift::mt::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT500Parser.
 */
class  SwiftMtParser_MT500Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT500Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT500Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT500Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT500Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT500Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT500Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT500Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT500Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT500Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT500Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT500Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT500Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT500Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT500Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT500Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT500Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT500Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT500Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT500Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT500Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT500Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT500Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT500Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT500Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT500Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT500Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT500Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT500Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT500Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT500Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT500Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT500Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B2(SwiftMtParser_MT500Parser::Seq_B2Context *ctx) = 0;
  virtual void exitSeq_B2(SwiftMtParser_MT500Parser::Seq_B2Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT500Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT500Parser::Seq_CContext *ctx) = 0;

  virtual void enterSeq_C1(SwiftMtParser_MT500Parser::Seq_C1Context *ctx) = 0;
  virtual void exitSeq_C1(SwiftMtParser_MT500Parser::Seq_C1Context *ctx) = 0;

  virtual void enterSeq_C2(SwiftMtParser_MT500Parser::Seq_C2Context *ctx) = 0;
  virtual void exitSeq_C2(SwiftMtParser_MT500Parser::Seq_C2Context *ctx) = 0;

  virtual void enterSeq_D(SwiftMtParser_MT500Parser::Seq_DContext *ctx) = 0;
  virtual void exitSeq_D(SwiftMtParser_MT500Parser::Seq_DContext *ctx) = 0;

  virtual void enterSeq_E(SwiftMtParser_MT500Parser::Seq_EContext *ctx) = 0;
  virtual void exitSeq_E(SwiftMtParser_MT500Parser::Seq_EContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT500Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT500Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT500Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT500Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT500Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT500Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT500Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT500Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_22F_A(SwiftMtParser_MT500Parser::Fld_22F_AContext *ctx) = 0;
  virtual void exitFld_22F_A(SwiftMtParser_MT500Parser::Fld_22F_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT500Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT500Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_22F_A1(SwiftMtParser_MT500Parser::Fld_22F_A1Context *ctx) = 0;
  virtual void exitFld_22F_A1(SwiftMtParser_MT500Parser::Fld_22F_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT500Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT500Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT500Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT500Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT500Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT500Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT500Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT500Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT500Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT500Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_20D_B(SwiftMtParser_MT500Parser::Fld_20D_BContext *ctx) = 0;
  virtual void exitFld_20D_B(SwiftMtParser_MT500Parser::Fld_20D_BContext *ctx) = 0;

  virtual void enterFld_22F_B(SwiftMtParser_MT500Parser::Fld_22F_BContext *ctx) = 0;
  virtual void exitFld_22F_B(SwiftMtParser_MT500Parser::Fld_22F_BContext *ctx) = 0;

  virtual void enterFld_98a_B(SwiftMtParser_MT500Parser::Fld_98a_BContext *ctx) = 0;
  virtual void exitFld_98a_B(SwiftMtParser_MT500Parser::Fld_98a_BContext *ctx) = 0;

  virtual void enterFld_35B_B(SwiftMtParser_MT500Parser::Fld_35B_BContext *ctx) = 0;
  virtual void exitFld_35B_B(SwiftMtParser_MT500Parser::Fld_35B_BContext *ctx) = 0;

  virtual void enterFld_70C_B(SwiftMtParser_MT500Parser::Fld_70C_BContext *ctx) = 0;
  virtual void exitFld_70C_B(SwiftMtParser_MT500Parser::Fld_70C_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT500Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT500Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_94B_B1(SwiftMtParser_MT500Parser::Fld_94B_B1Context *ctx) = 0;
  virtual void exitFld_94B_B1(SwiftMtParser_MT500Parser::Fld_94B_B1Context *ctx) = 0;

  virtual void enterFld_22F_B1(SwiftMtParser_MT500Parser::Fld_22F_B1Context *ctx) = 0;
  virtual void exitFld_22F_B1(SwiftMtParser_MT500Parser::Fld_22F_B1Context *ctx) = 0;

  virtual void enterFld_12a_B1(SwiftMtParser_MT500Parser::Fld_12a_B1Context *ctx) = 0;
  virtual void exitFld_12a_B1(SwiftMtParser_MT500Parser::Fld_12a_B1Context *ctx) = 0;

  virtual void enterFld_11A_B1(SwiftMtParser_MT500Parser::Fld_11A_B1Context *ctx) = 0;
  virtual void exitFld_11A_B1(SwiftMtParser_MT500Parser::Fld_11A_B1Context *ctx) = 0;

  virtual void enterFld_98A_B1(SwiftMtParser_MT500Parser::Fld_98A_B1Context *ctx) = 0;
  virtual void exitFld_98A_B1(SwiftMtParser_MT500Parser::Fld_98A_B1Context *ctx) = 0;

  virtual void enterFld_92A_B1(SwiftMtParser_MT500Parser::Fld_92A_B1Context *ctx) = 0;
  virtual void exitFld_92A_B1(SwiftMtParser_MT500Parser::Fld_92A_B1Context *ctx) = 0;

  virtual void enterFld_13a_B1(SwiftMtParser_MT500Parser::Fld_13a_B1Context *ctx) = 0;
  virtual void exitFld_13a_B1(SwiftMtParser_MT500Parser::Fld_13a_B1Context *ctx) = 0;

  virtual void enterFld_17B_B1(SwiftMtParser_MT500Parser::Fld_17B_B1Context *ctx) = 0;
  virtual void exitFld_17B_B1(SwiftMtParser_MT500Parser::Fld_17B_B1Context *ctx) = 0;

  virtual void enterFld_90a_B1(SwiftMtParser_MT500Parser::Fld_90a_B1Context *ctx) = 0;
  virtual void exitFld_90a_B1(SwiftMtParser_MT500Parser::Fld_90a_B1Context *ctx) = 0;

  virtual void enterFld_36B_B1(SwiftMtParser_MT500Parser::Fld_36B_B1Context *ctx) = 0;
  virtual void exitFld_36B_B1(SwiftMtParser_MT500Parser::Fld_36B_B1Context *ctx) = 0;

  virtual void enterFld_70E_B1(SwiftMtParser_MT500Parser::Fld_70E_B1Context *ctx) = 0;
  virtual void exitFld_70E_B1(SwiftMtParser_MT500Parser::Fld_70E_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT500Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT500Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_16R_B2(SwiftMtParser_MT500Parser::Fld_16R_B2Context *ctx) = 0;
  virtual void exitFld_16R_B2(SwiftMtParser_MT500Parser::Fld_16R_B2Context *ctx) = 0;

  virtual void enterFld_36B_B2(SwiftMtParser_MT500Parser::Fld_36B_B2Context *ctx) = 0;
  virtual void exitFld_36B_B2(SwiftMtParser_MT500Parser::Fld_36B_B2Context *ctx) = 0;

  virtual void enterFld_95a_B2(SwiftMtParser_MT500Parser::Fld_95a_B2Context *ctx) = 0;
  virtual void exitFld_95a_B2(SwiftMtParser_MT500Parser::Fld_95a_B2Context *ctx) = 0;

  virtual void enterFld_97A_B2(SwiftMtParser_MT500Parser::Fld_97A_B2Context *ctx) = 0;
  virtual void exitFld_97A_B2(SwiftMtParser_MT500Parser::Fld_97A_B2Context *ctx) = 0;

  virtual void enterFld_16S_B2(SwiftMtParser_MT500Parser::Fld_16S_B2Context *ctx) = 0;
  virtual void exitFld_16S_B2(SwiftMtParser_MT500Parser::Fld_16S_B2Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT500Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT500Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT500Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT500Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_16R_C1(SwiftMtParser_MT500Parser::Fld_16R_C1Context *ctx) = 0;
  virtual void exitFld_16R_C1(SwiftMtParser_MT500Parser::Fld_16R_C1Context *ctx) = 0;

  virtual void enterFld_17B_C1(SwiftMtParser_MT500Parser::Fld_17B_C1Context *ctx) = 0;
  virtual void exitFld_17B_C1(SwiftMtParser_MT500Parser::Fld_17B_C1Context *ctx) = 0;

  virtual void enterFld_22F_C1(SwiftMtParser_MT500Parser::Fld_22F_C1Context *ctx) = 0;
  virtual void exitFld_22F_C1(SwiftMtParser_MT500Parser::Fld_22F_C1Context *ctx) = 0;

  virtual void enterFld_95a_C1(SwiftMtParser_MT500Parser::Fld_95a_C1Context *ctx) = 0;
  virtual void exitFld_95a_C1(SwiftMtParser_MT500Parser::Fld_95a_C1Context *ctx) = 0;

  virtual void enterFld_94a_C1(SwiftMtParser_MT500Parser::Fld_94a_C1Context *ctx) = 0;
  virtual void exitFld_94a_C1(SwiftMtParser_MT500Parser::Fld_94a_C1Context *ctx) = 0;

  virtual void enterFld_13B_C1(SwiftMtParser_MT500Parser::Fld_13B_C1Context *ctx) = 0;
  virtual void exitFld_13B_C1(SwiftMtParser_MT500Parser::Fld_13B_C1Context *ctx) = 0;

  virtual void enterFld_70C_C1(SwiftMtParser_MT500Parser::Fld_70C_C1Context *ctx) = 0;
  virtual void exitFld_70C_C1(SwiftMtParser_MT500Parser::Fld_70C_C1Context *ctx) = 0;

  virtual void enterFld_16S_C1(SwiftMtParser_MT500Parser::Fld_16S_C1Context *ctx) = 0;
  virtual void exitFld_16S_C1(SwiftMtParser_MT500Parser::Fld_16S_C1Context *ctx) = 0;

  virtual void enterFld_16R_C2(SwiftMtParser_MT500Parser::Fld_16R_C2Context *ctx) = 0;
  virtual void exitFld_16R_C2(SwiftMtParser_MT500Parser::Fld_16R_C2Context *ctx) = 0;

  virtual void enterFld_22F_C2(SwiftMtParser_MT500Parser::Fld_22F_C2Context *ctx) = 0;
  virtual void exitFld_22F_C2(SwiftMtParser_MT500Parser::Fld_22F_C2Context *ctx) = 0;

  virtual void enterFld_95U_C2(SwiftMtParser_MT500Parser::Fld_95U_C2Context *ctx) = 0;
  virtual void exitFld_95U_C2(SwiftMtParser_MT500Parser::Fld_95U_C2Context *ctx) = 0;

  virtual void enterFld_98a_C2(SwiftMtParser_MT500Parser::Fld_98a_C2Context *ctx) = 0;
  virtual void exitFld_98a_C2(SwiftMtParser_MT500Parser::Fld_98a_C2Context *ctx) = 0;

  virtual void enterFld_94C_C2(SwiftMtParser_MT500Parser::Fld_94C_C2Context *ctx) = 0;
  virtual void exitFld_94C_C2(SwiftMtParser_MT500Parser::Fld_94C_C2Context *ctx) = 0;

  virtual void enterFld_70C_C2(SwiftMtParser_MT500Parser::Fld_70C_C2Context *ctx) = 0;
  virtual void exitFld_70C_C2(SwiftMtParser_MT500Parser::Fld_70C_C2Context *ctx) = 0;

  virtual void enterFld_16S_C2(SwiftMtParser_MT500Parser::Fld_16S_C2Context *ctx) = 0;
  virtual void exitFld_16S_C2(SwiftMtParser_MT500Parser::Fld_16S_C2Context *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT500Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT500Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_16R_D(SwiftMtParser_MT500Parser::Fld_16R_DContext *ctx) = 0;
  virtual void exitFld_16R_D(SwiftMtParser_MT500Parser::Fld_16R_DContext *ctx) = 0;

  virtual void enterFld_98a_D(SwiftMtParser_MT500Parser::Fld_98a_DContext *ctx) = 0;
  virtual void exitFld_98a_D(SwiftMtParser_MT500Parser::Fld_98a_DContext *ctx) = 0;

  virtual void enterFld_35B_D(SwiftMtParser_MT500Parser::Fld_35B_DContext *ctx) = 0;
  virtual void exitFld_35B_D(SwiftMtParser_MT500Parser::Fld_35B_DContext *ctx) = 0;

  virtual void enterFld_16S_D(SwiftMtParser_MT500Parser::Fld_16S_DContext *ctx) = 0;
  virtual void exitFld_16S_D(SwiftMtParser_MT500Parser::Fld_16S_DContext *ctx) = 0;

  virtual void enterFld_16R_E(SwiftMtParser_MT500Parser::Fld_16R_EContext *ctx) = 0;
  virtual void exitFld_16R_E(SwiftMtParser_MT500Parser::Fld_16R_EContext *ctx) = 0;

  virtual void enterFld_95a_E(SwiftMtParser_MT500Parser::Fld_95a_EContext *ctx) = 0;
  virtual void exitFld_95a_E(SwiftMtParser_MT500Parser::Fld_95a_EContext *ctx) = 0;

  virtual void enterFld_16S_E(SwiftMtParser_MT500Parser::Fld_16S_EContext *ctx) = 0;
  virtual void exitFld_16S_E(SwiftMtParser_MT500Parser::Fld_16S_EContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT500Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT500Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT500Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT500Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT500Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT500Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT500Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT500Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT500Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT500Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_22F_A_F(SwiftMtParser_MT500Parser::Fld_22F_A_FContext *ctx) = 0;
  virtual void exitFld_22F_A_F(SwiftMtParser_MT500Parser::Fld_22F_A_FContext *ctx) = 0;

  virtual void enterFld_22F_A1_F(SwiftMtParser_MT500Parser::Fld_22F_A1_FContext *ctx) = 0;
  virtual void exitFld_22F_A1_F(SwiftMtParser_MT500Parser::Fld_22F_A1_FContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT500Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT500Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT500Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT500Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT500Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT500Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_20D_B_D(SwiftMtParser_MT500Parser::Fld_20D_B_DContext *ctx) = 0;
  virtual void exitFld_20D_B_D(SwiftMtParser_MT500Parser::Fld_20D_B_DContext *ctx) = 0;

  virtual void enterFld_22F_B_F(SwiftMtParser_MT500Parser::Fld_22F_B_FContext *ctx) = 0;
  virtual void exitFld_22F_B_F(SwiftMtParser_MT500Parser::Fld_22F_B_FContext *ctx) = 0;

  virtual void enterFld_98a_B_A(SwiftMtParser_MT500Parser::Fld_98a_B_AContext *ctx) = 0;
  virtual void exitFld_98a_B_A(SwiftMtParser_MT500Parser::Fld_98a_B_AContext *ctx) = 0;

  virtual void enterFld_98a_B_C(SwiftMtParser_MT500Parser::Fld_98a_B_CContext *ctx) = 0;
  virtual void exitFld_98a_B_C(SwiftMtParser_MT500Parser::Fld_98a_B_CContext *ctx) = 0;

  virtual void enterFld_35B_B_B(SwiftMtParser_MT500Parser::Fld_35B_B_BContext *ctx) = 0;
  virtual void exitFld_35B_B_B(SwiftMtParser_MT500Parser::Fld_35B_B_BContext *ctx) = 0;

  virtual void enterFld_70C_B_C(SwiftMtParser_MT500Parser::Fld_70C_B_CContext *ctx) = 0;
  virtual void exitFld_70C_B_C(SwiftMtParser_MT500Parser::Fld_70C_B_CContext *ctx) = 0;

  virtual void enterFld_94B_B1_B(SwiftMtParser_MT500Parser::Fld_94B_B1_BContext *ctx) = 0;
  virtual void exitFld_94B_B1_B(SwiftMtParser_MT500Parser::Fld_94B_B1_BContext *ctx) = 0;

  virtual void enterFld_22F_B1_F(SwiftMtParser_MT500Parser::Fld_22F_B1_FContext *ctx) = 0;
  virtual void exitFld_22F_B1_F(SwiftMtParser_MT500Parser::Fld_22F_B1_FContext *ctx) = 0;

  virtual void enterFld_12a_B1_A(SwiftMtParser_MT500Parser::Fld_12a_B1_AContext *ctx) = 0;
  virtual void exitFld_12a_B1_A(SwiftMtParser_MT500Parser::Fld_12a_B1_AContext *ctx) = 0;

  virtual void enterFld_12a_B1_B(SwiftMtParser_MT500Parser::Fld_12a_B1_BContext *ctx) = 0;
  virtual void exitFld_12a_B1_B(SwiftMtParser_MT500Parser::Fld_12a_B1_BContext *ctx) = 0;

  virtual void enterFld_12a_B1_C(SwiftMtParser_MT500Parser::Fld_12a_B1_CContext *ctx) = 0;
  virtual void exitFld_12a_B1_C(SwiftMtParser_MT500Parser::Fld_12a_B1_CContext *ctx) = 0;

  virtual void enterFld_11A_B1_A(SwiftMtParser_MT500Parser::Fld_11A_B1_AContext *ctx) = 0;
  virtual void exitFld_11A_B1_A(SwiftMtParser_MT500Parser::Fld_11A_B1_AContext *ctx) = 0;

  virtual void enterFld_98A_B1_A(SwiftMtParser_MT500Parser::Fld_98A_B1_AContext *ctx) = 0;
  virtual void exitFld_98A_B1_A(SwiftMtParser_MT500Parser::Fld_98A_B1_AContext *ctx) = 0;

  virtual void enterFld_92A_B1_A(SwiftMtParser_MT500Parser::Fld_92A_B1_AContext *ctx) = 0;
  virtual void exitFld_92A_B1_A(SwiftMtParser_MT500Parser::Fld_92A_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_A(SwiftMtParser_MT500Parser::Fld_13a_B1_AContext *ctx) = 0;
  virtual void exitFld_13a_B1_A(SwiftMtParser_MT500Parser::Fld_13a_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_B(SwiftMtParser_MT500Parser::Fld_13a_B1_BContext *ctx) = 0;
  virtual void exitFld_13a_B1_B(SwiftMtParser_MT500Parser::Fld_13a_B1_BContext *ctx) = 0;

  virtual void enterFld_17B_B1_B(SwiftMtParser_MT500Parser::Fld_17B_B1_BContext *ctx) = 0;
  virtual void exitFld_17B_B1_B(SwiftMtParser_MT500Parser::Fld_17B_B1_BContext *ctx) = 0;

  virtual void enterFld_90a_B1_A(SwiftMtParser_MT500Parser::Fld_90a_B1_AContext *ctx) = 0;
  virtual void exitFld_90a_B1_A(SwiftMtParser_MT500Parser::Fld_90a_B1_AContext *ctx) = 0;

  virtual void enterFld_90a_B1_B(SwiftMtParser_MT500Parser::Fld_90a_B1_BContext *ctx) = 0;
  virtual void exitFld_90a_B1_B(SwiftMtParser_MT500Parser::Fld_90a_B1_BContext *ctx) = 0;

  virtual void enterFld_36B_B1_B(SwiftMtParser_MT500Parser::Fld_36B_B1_BContext *ctx) = 0;
  virtual void exitFld_36B_B1_B(SwiftMtParser_MT500Parser::Fld_36B_B1_BContext *ctx) = 0;

  virtual void enterFld_70E_B1_E(SwiftMtParser_MT500Parser::Fld_70E_B1_EContext *ctx) = 0;
  virtual void exitFld_70E_B1_E(SwiftMtParser_MT500Parser::Fld_70E_B1_EContext *ctx) = 0;

  virtual void enterFld_36B_B2_B(SwiftMtParser_MT500Parser::Fld_36B_B2_BContext *ctx) = 0;
  virtual void exitFld_36B_B2_B(SwiftMtParser_MT500Parser::Fld_36B_B2_BContext *ctx) = 0;

  virtual void enterFld_95a_B2_P(SwiftMtParser_MT500Parser::Fld_95a_B2_PContext *ctx) = 0;
  virtual void exitFld_95a_B2_P(SwiftMtParser_MT500Parser::Fld_95a_B2_PContext *ctx) = 0;

  virtual void enterFld_95a_B2_R(SwiftMtParser_MT500Parser::Fld_95a_B2_RContext *ctx) = 0;
  virtual void exitFld_95a_B2_R(SwiftMtParser_MT500Parser::Fld_95a_B2_RContext *ctx) = 0;

  virtual void enterFld_97A_B2_A(SwiftMtParser_MT500Parser::Fld_97A_B2_AContext *ctx) = 0;
  virtual void exitFld_97A_B2_A(SwiftMtParser_MT500Parser::Fld_97A_B2_AContext *ctx) = 0;

  virtual void enterFld_17B_C1_B(SwiftMtParser_MT500Parser::Fld_17B_C1_BContext *ctx) = 0;
  virtual void exitFld_17B_C1_B(SwiftMtParser_MT500Parser::Fld_17B_C1_BContext *ctx) = 0;

  virtual void enterFld_22F_C1_F(SwiftMtParser_MT500Parser::Fld_22F_C1_FContext *ctx) = 0;
  virtual void exitFld_22F_C1_F(SwiftMtParser_MT500Parser::Fld_22F_C1_FContext *ctx) = 0;

  virtual void enterFld_95a_C1_P(SwiftMtParser_MT500Parser::Fld_95a_C1_PContext *ctx) = 0;
  virtual void exitFld_95a_C1_P(SwiftMtParser_MT500Parser::Fld_95a_C1_PContext *ctx) = 0;

  virtual void enterFld_95a_C1_R(SwiftMtParser_MT500Parser::Fld_95a_C1_RContext *ctx) = 0;
  virtual void exitFld_95a_C1_R(SwiftMtParser_MT500Parser::Fld_95a_C1_RContext *ctx) = 0;

  virtual void enterFld_95a_C1_S(SwiftMtParser_MT500Parser::Fld_95a_C1_SContext *ctx) = 0;
  virtual void exitFld_95a_C1_S(SwiftMtParser_MT500Parser::Fld_95a_C1_SContext *ctx) = 0;

  virtual void enterFld_95a_C1_U(SwiftMtParser_MT500Parser::Fld_95a_C1_UContext *ctx) = 0;
  virtual void exitFld_95a_C1_U(SwiftMtParser_MT500Parser::Fld_95a_C1_UContext *ctx) = 0;

  virtual void enterFld_94a_C1_C(SwiftMtParser_MT500Parser::Fld_94a_C1_CContext *ctx) = 0;
  virtual void exitFld_94a_C1_C(SwiftMtParser_MT500Parser::Fld_94a_C1_CContext *ctx) = 0;

  virtual void enterFld_94a_C1_D(SwiftMtParser_MT500Parser::Fld_94a_C1_DContext *ctx) = 0;
  virtual void exitFld_94a_C1_D(SwiftMtParser_MT500Parser::Fld_94a_C1_DContext *ctx) = 0;

  virtual void enterFld_94a_C1_G(SwiftMtParser_MT500Parser::Fld_94a_C1_GContext *ctx) = 0;
  virtual void exitFld_94a_C1_G(SwiftMtParser_MT500Parser::Fld_94a_C1_GContext *ctx) = 0;

  virtual void enterFld_13B_C1_B(SwiftMtParser_MT500Parser::Fld_13B_C1_BContext *ctx) = 0;
  virtual void exitFld_13B_C1_B(SwiftMtParser_MT500Parser::Fld_13B_C1_BContext *ctx) = 0;

  virtual void enterFld_70C_C1_C(SwiftMtParser_MT500Parser::Fld_70C_C1_CContext *ctx) = 0;
  virtual void exitFld_70C_C1_C(SwiftMtParser_MT500Parser::Fld_70C_C1_CContext *ctx) = 0;

  virtual void enterFld_22F_C2_F(SwiftMtParser_MT500Parser::Fld_22F_C2_FContext *ctx) = 0;
  virtual void exitFld_22F_C2_F(SwiftMtParser_MT500Parser::Fld_22F_C2_FContext *ctx) = 0;

  virtual void enterFld_95U_C2_U(SwiftMtParser_MT500Parser::Fld_95U_C2_UContext *ctx) = 0;
  virtual void exitFld_95U_C2_U(SwiftMtParser_MT500Parser::Fld_95U_C2_UContext *ctx) = 0;

  virtual void enterFld_98a_C2_A(SwiftMtParser_MT500Parser::Fld_98a_C2_AContext *ctx) = 0;
  virtual void exitFld_98a_C2_A(SwiftMtParser_MT500Parser::Fld_98a_C2_AContext *ctx) = 0;

  virtual void enterFld_98a_C2_C(SwiftMtParser_MT500Parser::Fld_98a_C2_CContext *ctx) = 0;
  virtual void exitFld_98a_C2_C(SwiftMtParser_MT500Parser::Fld_98a_C2_CContext *ctx) = 0;

  virtual void enterFld_94C_C2_C(SwiftMtParser_MT500Parser::Fld_94C_C2_CContext *ctx) = 0;
  virtual void exitFld_94C_C2_C(SwiftMtParser_MT500Parser::Fld_94C_C2_CContext *ctx) = 0;

  virtual void enterFld_70C_C2_C(SwiftMtParser_MT500Parser::Fld_70C_C2_CContext *ctx) = 0;
  virtual void exitFld_70C_C2_C(SwiftMtParser_MT500Parser::Fld_70C_C2_CContext *ctx) = 0;

  virtual void enterFld_98a_D_A(SwiftMtParser_MT500Parser::Fld_98a_D_AContext *ctx) = 0;
  virtual void exitFld_98a_D_A(SwiftMtParser_MT500Parser::Fld_98a_D_AContext *ctx) = 0;

  virtual void enterFld_98a_D_C(SwiftMtParser_MT500Parser::Fld_98a_D_CContext *ctx) = 0;
  virtual void exitFld_98a_D_C(SwiftMtParser_MT500Parser::Fld_98a_D_CContext *ctx) = 0;

  virtual void enterFld_35B_D_B(SwiftMtParser_MT500Parser::Fld_35B_D_BContext *ctx) = 0;
  virtual void exitFld_35B_D_B(SwiftMtParser_MT500Parser::Fld_35B_D_BContext *ctx) = 0;

  virtual void enterFld_95a_E_P(SwiftMtParser_MT500Parser::Fld_95a_E_PContext *ctx) = 0;
  virtual void exitFld_95a_E_P(SwiftMtParser_MT500Parser::Fld_95a_E_PContext *ctx) = 0;

  virtual void enterFld_95a_E_Q(SwiftMtParser_MT500Parser::Fld_95a_E_QContext *ctx) = 0;
  virtual void exitFld_95a_E_Q(SwiftMtParser_MT500Parser::Fld_95a_E_QContext *ctx) = 0;

  virtual void enterFld_95a_E_R(SwiftMtParser_MT500Parser::Fld_95a_E_RContext *ctx) = 0;
  virtual void exitFld_95a_E_R(SwiftMtParser_MT500Parser::Fld_95a_E_RContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::sr2018