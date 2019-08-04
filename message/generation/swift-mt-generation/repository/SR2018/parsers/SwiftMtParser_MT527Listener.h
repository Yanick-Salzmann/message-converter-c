
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars\SwiftMtParser_MT527.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT527Parser.h"


namespace message::definition::swift::mt::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT527Parser.
 */
class  SwiftMtParser_MT527Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT527Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT527Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT527Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT527Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT527Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT527Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT527Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT527Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT527Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT527Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT527Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT527Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT527Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT527Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT527Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT527Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT527Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT527Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT527Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT527Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT527Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT527Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT527Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT527Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT527Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT527Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT527Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT527Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_A2(SwiftMtParser_MT527Parser::Seq_A2Context *ctx) = 0;
  virtual void exitSeq_A2(SwiftMtParser_MT527Parser::Seq_A2Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT527Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT527Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT527Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT527Parser::Seq_CContext *ctx) = 0;

  virtual void enterSeq_D(SwiftMtParser_MT527Parser::Seq_DContext *ctx) = 0;
  virtual void exitSeq_D(SwiftMtParser_MT527Parser::Seq_DContext *ctx) = 0;

  virtual void enterSeq_E(SwiftMtParser_MT527Parser::Seq_EContext *ctx) = 0;
  virtual void exitSeq_E(SwiftMtParser_MT527Parser::Seq_EContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT527Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT527Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_28E_A(SwiftMtParser_MT527Parser::Fld_28E_AContext *ctx) = 0;
  virtual void exitFld_28E_A(SwiftMtParser_MT527Parser::Fld_28E_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT527Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT527Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT527Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT527Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT527Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT527Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_22a_A(SwiftMtParser_MT527Parser::Fld_22a_AContext *ctx) = 0;
  virtual void exitFld_22a_A(SwiftMtParser_MT527Parser::Fld_22a_AContext *ctx) = 0;

  virtual void enterFld_13B_A(SwiftMtParser_MT527Parser::Fld_13B_AContext *ctx) = 0;
  virtual void exitFld_13B_A(SwiftMtParser_MT527Parser::Fld_13B_AContext *ctx) = 0;

  virtual void enterFld_25D_A(SwiftMtParser_MT527Parser::Fld_25D_AContext *ctx) = 0;
  virtual void exitFld_25D_A(SwiftMtParser_MT527Parser::Fld_25D_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT527Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT527Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_95a_A1(SwiftMtParser_MT527Parser::Fld_95a_A1Context *ctx) = 0;
  virtual void exitFld_95a_A1(SwiftMtParser_MT527Parser::Fld_95a_A1Context *ctx) = 0;

  virtual void enterFld_97a_A1(SwiftMtParser_MT527Parser::Fld_97a_A1Context *ctx) = 0;
  virtual void exitFld_97a_A1(SwiftMtParser_MT527Parser::Fld_97a_A1Context *ctx) = 0;

  virtual void enterFld_22F_A1(SwiftMtParser_MT527Parser::Fld_22F_A1Context *ctx) = 0;
  virtual void exitFld_22F_A1(SwiftMtParser_MT527Parser::Fld_22F_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT527Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT527Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_70E_A(SwiftMtParser_MT527Parser::Fld_70E_AContext *ctx) = 0;
  virtual void exitFld_70E_A(SwiftMtParser_MT527Parser::Fld_70E_AContext *ctx) = 0;

  virtual void enterFld_16R_A2(SwiftMtParser_MT527Parser::Fld_16R_A2Context *ctx) = 0;
  virtual void exitFld_16R_A2(SwiftMtParser_MT527Parser::Fld_16R_A2Context *ctx) = 0;

  virtual void enterFld_13a_A2(SwiftMtParser_MT527Parser::Fld_13a_A2Context *ctx) = 0;
  virtual void exitFld_13a_A2(SwiftMtParser_MT527Parser::Fld_13a_A2Context *ctx) = 0;

  virtual void enterFld_20C_A2(SwiftMtParser_MT527Parser::Fld_20C_A2Context *ctx) = 0;
  virtual void exitFld_20C_A2(SwiftMtParser_MT527Parser::Fld_20C_A2Context *ctx) = 0;

  virtual void enterFld_16S_A2(SwiftMtParser_MT527Parser::Fld_16S_A2Context *ctx) = 0;
  virtual void exitFld_16S_A2(SwiftMtParser_MT527Parser::Fld_16S_A2Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT527Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT527Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT527Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT527Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_94B_B(SwiftMtParser_MT527Parser::Fld_94B_BContext *ctx) = 0;
  virtual void exitFld_94B_B(SwiftMtParser_MT527Parser::Fld_94B_BContext *ctx) = 0;

  virtual void enterFld_17B_B(SwiftMtParser_MT527Parser::Fld_17B_BContext *ctx) = 0;
  virtual void exitFld_17B_B(SwiftMtParser_MT527Parser::Fld_17B_BContext *ctx) = 0;

  virtual void enterFld_99B_B(SwiftMtParser_MT527Parser::Fld_99B_BContext *ctx) = 0;
  virtual void exitFld_99B_B(SwiftMtParser_MT527Parser::Fld_99B_BContext *ctx) = 0;

  virtual void enterFld_98a_B(SwiftMtParser_MT527Parser::Fld_98a_BContext *ctx) = 0;
  virtual void exitFld_98a_B(SwiftMtParser_MT527Parser::Fld_98a_BContext *ctx) = 0;

  virtual void enterFld_19A_B(SwiftMtParser_MT527Parser::Fld_19A_BContext *ctx) = 0;
  virtual void exitFld_19A_B(SwiftMtParser_MT527Parser::Fld_19A_BContext *ctx) = 0;

  virtual void enterFld_92a_B(SwiftMtParser_MT527Parser::Fld_92a_BContext *ctx) = 0;
  virtual void exitFld_92a_B(SwiftMtParser_MT527Parser::Fld_92a_BContext *ctx) = 0;

  virtual void enterFld_22a_B(SwiftMtParser_MT527Parser::Fld_22a_BContext *ctx) = 0;
  virtual void exitFld_22a_B(SwiftMtParser_MT527Parser::Fld_22a_BContext *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT527Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT527Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT527Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT527Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_22H_C(SwiftMtParser_MT527Parser::Fld_22H_CContext *ctx) = 0;
  virtual void exitFld_22H_C(SwiftMtParser_MT527Parser::Fld_22H_CContext *ctx) = 0;

  virtual void enterFld_35B_C(SwiftMtParser_MT527Parser::Fld_35B_CContext *ctx) = 0;
  virtual void exitFld_35B_C(SwiftMtParser_MT527Parser::Fld_35B_CContext *ctx) = 0;

  virtual void enterFld_36B_C(SwiftMtParser_MT527Parser::Fld_36B_CContext *ctx) = 0;
  virtual void exitFld_36B_C(SwiftMtParser_MT527Parser::Fld_36B_CContext *ctx) = 0;

  virtual void enterFld_17B_C(SwiftMtParser_MT527Parser::Fld_17B_CContext *ctx) = 0;
  virtual void exitFld_17B_C(SwiftMtParser_MT527Parser::Fld_17B_CContext *ctx) = 0;

  virtual void enterFld_97a_C(SwiftMtParser_MT527Parser::Fld_97a_CContext *ctx) = 0;
  virtual void exitFld_97a_C(SwiftMtParser_MT527Parser::Fld_97a_CContext *ctx) = 0;

  virtual void enterFld_20C_C(SwiftMtParser_MT527Parser::Fld_20C_CContext *ctx) = 0;
  virtual void exitFld_20C_C(SwiftMtParser_MT527Parser::Fld_20C_CContext *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT527Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT527Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_16R_D(SwiftMtParser_MT527Parser::Fld_16R_DContext *ctx) = 0;
  virtual void exitFld_16R_D(SwiftMtParser_MT527Parser::Fld_16R_DContext *ctx) = 0;

  virtual void enterFld_22H_D(SwiftMtParser_MT527Parser::Fld_22H_DContext *ctx) = 0;
  virtual void exitFld_22H_D(SwiftMtParser_MT527Parser::Fld_22H_DContext *ctx) = 0;

  virtual void enterFld_19A_D(SwiftMtParser_MT527Parser::Fld_19A_DContext *ctx) = 0;
  virtual void exitFld_19A_D(SwiftMtParser_MT527Parser::Fld_19A_DContext *ctx) = 0;

  virtual void enterFld_17B_D(SwiftMtParser_MT527Parser::Fld_17B_DContext *ctx) = 0;
  virtual void exitFld_17B_D(SwiftMtParser_MT527Parser::Fld_17B_DContext *ctx) = 0;

  virtual void enterFld_97a_D(SwiftMtParser_MT527Parser::Fld_97a_DContext *ctx) = 0;
  virtual void exitFld_97a_D(SwiftMtParser_MT527Parser::Fld_97a_DContext *ctx) = 0;

  virtual void enterFld_20C_D(SwiftMtParser_MT527Parser::Fld_20C_DContext *ctx) = 0;
  virtual void exitFld_20C_D(SwiftMtParser_MT527Parser::Fld_20C_DContext *ctx) = 0;

  virtual void enterFld_16S_D(SwiftMtParser_MT527Parser::Fld_16S_DContext *ctx) = 0;
  virtual void exitFld_16S_D(SwiftMtParser_MT527Parser::Fld_16S_DContext *ctx) = 0;

  virtual void enterFld_16R_E(SwiftMtParser_MT527Parser::Fld_16R_EContext *ctx) = 0;
  virtual void exitFld_16R_E(SwiftMtParser_MT527Parser::Fld_16R_EContext *ctx) = 0;

  virtual void enterFld_95a_E(SwiftMtParser_MT527Parser::Fld_95a_EContext *ctx) = 0;
  virtual void exitFld_95a_E(SwiftMtParser_MT527Parser::Fld_95a_EContext *ctx) = 0;

  virtual void enterFld_16S_E(SwiftMtParser_MT527Parser::Fld_16S_EContext *ctx) = 0;
  virtual void exitFld_16S_E(SwiftMtParser_MT527Parser::Fld_16S_EContext *ctx) = 0;

  virtual void enterFld_28E_A_E(SwiftMtParser_MT527Parser::Fld_28E_A_EContext *ctx) = 0;
  virtual void exitFld_28E_A_E(SwiftMtParser_MT527Parser::Fld_28E_A_EContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT527Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT527Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT527Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT527Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT527Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT527Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT527Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT527Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT527Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT527Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_22a_A_F(SwiftMtParser_MT527Parser::Fld_22a_A_FContext *ctx) = 0;
  virtual void exitFld_22a_A_F(SwiftMtParser_MT527Parser::Fld_22a_A_FContext *ctx) = 0;

  virtual void enterFld_22a_A_H(SwiftMtParser_MT527Parser::Fld_22a_A_HContext *ctx) = 0;
  virtual void exitFld_22a_A_H(SwiftMtParser_MT527Parser::Fld_22a_A_HContext *ctx) = 0;

  virtual void enterFld_13B_A_B(SwiftMtParser_MT527Parser::Fld_13B_A_BContext *ctx) = 0;
  virtual void exitFld_13B_A_B(SwiftMtParser_MT527Parser::Fld_13B_A_BContext *ctx) = 0;

  virtual void enterFld_25D_A_D(SwiftMtParser_MT527Parser::Fld_25D_A_DContext *ctx) = 0;
  virtual void exitFld_25D_A_D(SwiftMtParser_MT527Parser::Fld_25D_A_DContext *ctx) = 0;

  virtual void enterFld_95a_A1_P(SwiftMtParser_MT527Parser::Fld_95a_A1_PContext *ctx) = 0;
  virtual void exitFld_95a_A1_P(SwiftMtParser_MT527Parser::Fld_95a_A1_PContext *ctx) = 0;

  virtual void enterFld_95a_A1_Q(SwiftMtParser_MT527Parser::Fld_95a_A1_QContext *ctx) = 0;
  virtual void exitFld_95a_A1_Q(SwiftMtParser_MT527Parser::Fld_95a_A1_QContext *ctx) = 0;

  virtual void enterFld_95a_A1_R(SwiftMtParser_MT527Parser::Fld_95a_A1_RContext *ctx) = 0;
  virtual void exitFld_95a_A1_R(SwiftMtParser_MT527Parser::Fld_95a_A1_RContext *ctx) = 0;

  virtual void enterFld_97a_A1_A(SwiftMtParser_MT527Parser::Fld_97a_A1_AContext *ctx) = 0;
  virtual void exitFld_97a_A1_A(SwiftMtParser_MT527Parser::Fld_97a_A1_AContext *ctx) = 0;

  virtual void enterFld_97a_A1_B(SwiftMtParser_MT527Parser::Fld_97a_A1_BContext *ctx) = 0;
  virtual void exitFld_97a_A1_B(SwiftMtParser_MT527Parser::Fld_97a_A1_BContext *ctx) = 0;

  virtual void enterFld_22F_A1_F(SwiftMtParser_MT527Parser::Fld_22F_A1_FContext *ctx) = 0;
  virtual void exitFld_22F_A1_F(SwiftMtParser_MT527Parser::Fld_22F_A1_FContext *ctx) = 0;

  virtual void enterFld_70E_A_E(SwiftMtParser_MT527Parser::Fld_70E_A_EContext *ctx) = 0;
  virtual void exitFld_70E_A_E(SwiftMtParser_MT527Parser::Fld_70E_A_EContext *ctx) = 0;

  virtual void enterFld_13a_A2_A(SwiftMtParser_MT527Parser::Fld_13a_A2_AContext *ctx) = 0;
  virtual void exitFld_13a_A2_A(SwiftMtParser_MT527Parser::Fld_13a_A2_AContext *ctx) = 0;

  virtual void enterFld_13a_A2_B(SwiftMtParser_MT527Parser::Fld_13a_A2_BContext *ctx) = 0;
  virtual void exitFld_13a_A2_B(SwiftMtParser_MT527Parser::Fld_13a_A2_BContext *ctx) = 0;

  virtual void enterFld_20C_A2_C(SwiftMtParser_MT527Parser::Fld_20C_A2_CContext *ctx) = 0;
  virtual void exitFld_20C_A2_C(SwiftMtParser_MT527Parser::Fld_20C_A2_CContext *ctx) = 0;

  virtual void enterFld_94B_B_B(SwiftMtParser_MT527Parser::Fld_94B_B_BContext *ctx) = 0;
  virtual void exitFld_94B_B_B(SwiftMtParser_MT527Parser::Fld_94B_B_BContext *ctx) = 0;

  virtual void enterFld_17B_B_B(SwiftMtParser_MT527Parser::Fld_17B_B_BContext *ctx) = 0;
  virtual void exitFld_17B_B_B(SwiftMtParser_MT527Parser::Fld_17B_B_BContext *ctx) = 0;

  virtual void enterFld_99B_B_B(SwiftMtParser_MT527Parser::Fld_99B_B_BContext *ctx) = 0;
  virtual void exitFld_99B_B_B(SwiftMtParser_MT527Parser::Fld_99B_B_BContext *ctx) = 0;

  virtual void enterFld_98a_B_A(SwiftMtParser_MT527Parser::Fld_98a_B_AContext *ctx) = 0;
  virtual void exitFld_98a_B_A(SwiftMtParser_MT527Parser::Fld_98a_B_AContext *ctx) = 0;

  virtual void enterFld_98a_B_B(SwiftMtParser_MT527Parser::Fld_98a_B_BContext *ctx) = 0;
  virtual void exitFld_98a_B_B(SwiftMtParser_MT527Parser::Fld_98a_B_BContext *ctx) = 0;

  virtual void enterFld_98a_B_C(SwiftMtParser_MT527Parser::Fld_98a_B_CContext *ctx) = 0;
  virtual void exitFld_98a_B_C(SwiftMtParser_MT527Parser::Fld_98a_B_CContext *ctx) = 0;

  virtual void enterFld_19A_B_A(SwiftMtParser_MT527Parser::Fld_19A_B_AContext *ctx) = 0;
  virtual void exitFld_19A_B_A(SwiftMtParser_MT527Parser::Fld_19A_B_AContext *ctx) = 0;

  virtual void enterFld_92a_B_A(SwiftMtParser_MT527Parser::Fld_92a_B_AContext *ctx) = 0;
  virtual void exitFld_92a_B_A(SwiftMtParser_MT527Parser::Fld_92a_B_AContext *ctx) = 0;

  virtual void enterFld_92a_B_C(SwiftMtParser_MT527Parser::Fld_92a_B_CContext *ctx) = 0;
  virtual void exitFld_92a_B_C(SwiftMtParser_MT527Parser::Fld_92a_B_CContext *ctx) = 0;

  virtual void enterFld_22a_B_F(SwiftMtParser_MT527Parser::Fld_22a_B_FContext *ctx) = 0;
  virtual void exitFld_22a_B_F(SwiftMtParser_MT527Parser::Fld_22a_B_FContext *ctx) = 0;

  virtual void enterFld_22a_B_H(SwiftMtParser_MT527Parser::Fld_22a_B_HContext *ctx) = 0;
  virtual void exitFld_22a_B_H(SwiftMtParser_MT527Parser::Fld_22a_B_HContext *ctx) = 0;

  virtual void enterFld_22H_C_H(SwiftMtParser_MT527Parser::Fld_22H_C_HContext *ctx) = 0;
  virtual void exitFld_22H_C_H(SwiftMtParser_MT527Parser::Fld_22H_C_HContext *ctx) = 0;

  virtual void enterFld_35B_C_B(SwiftMtParser_MT527Parser::Fld_35B_C_BContext *ctx) = 0;
  virtual void exitFld_35B_C_B(SwiftMtParser_MT527Parser::Fld_35B_C_BContext *ctx) = 0;

  virtual void enterFld_36B_C_B(SwiftMtParser_MT527Parser::Fld_36B_C_BContext *ctx) = 0;
  virtual void exitFld_36B_C_B(SwiftMtParser_MT527Parser::Fld_36B_C_BContext *ctx) = 0;

  virtual void enterFld_17B_C_B(SwiftMtParser_MT527Parser::Fld_17B_C_BContext *ctx) = 0;
  virtual void exitFld_17B_C_B(SwiftMtParser_MT527Parser::Fld_17B_C_BContext *ctx) = 0;

  virtual void enterFld_97a_C_A(SwiftMtParser_MT527Parser::Fld_97a_C_AContext *ctx) = 0;
  virtual void exitFld_97a_C_A(SwiftMtParser_MT527Parser::Fld_97a_C_AContext *ctx) = 0;

  virtual void enterFld_97a_C_B(SwiftMtParser_MT527Parser::Fld_97a_C_BContext *ctx) = 0;
  virtual void exitFld_97a_C_B(SwiftMtParser_MT527Parser::Fld_97a_C_BContext *ctx) = 0;

  virtual void enterFld_20C_C_C(SwiftMtParser_MT527Parser::Fld_20C_C_CContext *ctx) = 0;
  virtual void exitFld_20C_C_C(SwiftMtParser_MT527Parser::Fld_20C_C_CContext *ctx) = 0;

  virtual void enterFld_22H_D_H(SwiftMtParser_MT527Parser::Fld_22H_D_HContext *ctx) = 0;
  virtual void exitFld_22H_D_H(SwiftMtParser_MT527Parser::Fld_22H_D_HContext *ctx) = 0;

  virtual void enterFld_19A_D_A(SwiftMtParser_MT527Parser::Fld_19A_D_AContext *ctx) = 0;
  virtual void exitFld_19A_D_A(SwiftMtParser_MT527Parser::Fld_19A_D_AContext *ctx) = 0;

  virtual void enterFld_17B_D_B(SwiftMtParser_MT527Parser::Fld_17B_D_BContext *ctx) = 0;
  virtual void exitFld_17B_D_B(SwiftMtParser_MT527Parser::Fld_17B_D_BContext *ctx) = 0;

  virtual void enterFld_97a_D_A(SwiftMtParser_MT527Parser::Fld_97a_D_AContext *ctx) = 0;
  virtual void exitFld_97a_D_A(SwiftMtParser_MT527Parser::Fld_97a_D_AContext *ctx) = 0;

  virtual void enterFld_97a_D_E(SwiftMtParser_MT527Parser::Fld_97a_D_EContext *ctx) = 0;
  virtual void exitFld_97a_D_E(SwiftMtParser_MT527Parser::Fld_97a_D_EContext *ctx) = 0;

  virtual void enterFld_20C_D_C(SwiftMtParser_MT527Parser::Fld_20C_D_CContext *ctx) = 0;
  virtual void exitFld_20C_D_C(SwiftMtParser_MT527Parser::Fld_20C_D_CContext *ctx) = 0;

  virtual void enterFld_95a_E_C(SwiftMtParser_MT527Parser::Fld_95a_E_CContext *ctx) = 0;
  virtual void exitFld_95a_E_C(SwiftMtParser_MT527Parser::Fld_95a_E_CContext *ctx) = 0;

  virtual void enterFld_95a_E_P(SwiftMtParser_MT527Parser::Fld_95a_E_PContext *ctx) = 0;
  virtual void exitFld_95a_E_P(SwiftMtParser_MT527Parser::Fld_95a_E_PContext *ctx) = 0;

  virtual void enterFld_95a_E_Q(SwiftMtParser_MT527Parser::Fld_95a_E_QContext *ctx) = 0;
  virtual void exitFld_95a_E_Q(SwiftMtParser_MT527Parser::Fld_95a_E_QContext *ctx) = 0;

  virtual void enterFld_95a_E_R(SwiftMtParser_MT527Parser::Fld_95a_E_RContext *ctx) = 0;
  virtual void exitFld_95a_E_R(SwiftMtParser_MT527Parser::Fld_95a_E_RContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::sr2018
