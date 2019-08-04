
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars\SwiftMtParser_MT670.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT670Parser.h"


namespace message::definition::swift::mt::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT670Parser.
 */
class  SwiftMtParser_MT670Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT670Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT670Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT670Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT670Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT670Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT670Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT670Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT670Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT670Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT670Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT670Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT670Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT670Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT670Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT670Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT670Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT670Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT670Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT670Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT670Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT670Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT670Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT670Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT670Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT670Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT670Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT670Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT670Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_A2(SwiftMtParser_MT670Parser::Seq_A2Context *ctx) = 0;
  virtual void exitSeq_A2(SwiftMtParser_MT670Parser::Seq_A2Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT670Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT670Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT670Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT670Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B2(SwiftMtParser_MT670Parser::Seq_B2Context *ctx) = 0;
  virtual void exitSeq_B2(SwiftMtParser_MT670Parser::Seq_B2Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT670Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT670Parser::Seq_CContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT670Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT670Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT670Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT670Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT670Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT670Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT670Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT670Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT670Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT670Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT670Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT670Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16R_A2(SwiftMtParser_MT670Parser::Fld_16R_A2Context *ctx) = 0;
  virtual void exitFld_16R_A2(SwiftMtParser_MT670Parser::Fld_16R_A2Context *ctx) = 0;

  virtual void enterFld_95P_A2(SwiftMtParser_MT670Parser::Fld_95P_A2Context *ctx) = 0;
  virtual void exitFld_95P_A2(SwiftMtParser_MT670Parser::Fld_95P_A2Context *ctx) = 0;

  virtual void enterFld_94C_A2(SwiftMtParser_MT670Parser::Fld_94C_A2Context *ctx) = 0;
  virtual void exitFld_94C_A2(SwiftMtParser_MT670Parser::Fld_94C_A2Context *ctx) = 0;

  virtual void enterFld_22H_A2(SwiftMtParser_MT670Parser::Fld_22H_A2Context *ctx) = 0;
  virtual void exitFld_22H_A2(SwiftMtParser_MT670Parser::Fld_22H_A2Context *ctx) = 0;

  virtual void enterFld_16S_A2(SwiftMtParser_MT670Parser::Fld_16S_A2Context *ctx) = 0;
  virtual void exitFld_16S_A2(SwiftMtParser_MT670Parser::Fld_16S_A2Context *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT670Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT670Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_22F_A(SwiftMtParser_MT670Parser::Fld_22F_AContext *ctx) = 0;
  virtual void exitFld_22F_A(SwiftMtParser_MT670Parser::Fld_22F_AContext *ctx) = 0;

  virtual void enterFld_97A_A(SwiftMtParser_MT670Parser::Fld_97A_AContext *ctx) = 0;
  virtual void exitFld_97A_A(SwiftMtParser_MT670Parser::Fld_97A_AContext *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT670Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT670Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT670Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT670Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_22H_B(SwiftMtParser_MT670Parser::Fld_22H_BContext *ctx) = 0;
  virtual void exitFld_22H_B(SwiftMtParser_MT670Parser::Fld_22H_BContext *ctx) = 0;

  virtual void enterFld_20C_B(SwiftMtParser_MT670Parser::Fld_20C_BContext *ctx) = 0;
  virtual void exitFld_20C_B(SwiftMtParser_MT670Parser::Fld_20C_BContext *ctx) = 0;

  virtual void enterFld_11A_B(SwiftMtParser_MT670Parser::Fld_11A_BContext *ctx) = 0;
  virtual void exitFld_11A_B(SwiftMtParser_MT670Parser::Fld_11A_BContext *ctx) = 0;

  virtual void enterFld_98A_B(SwiftMtParser_MT670Parser::Fld_98A_BContext *ctx) = 0;
  virtual void exitFld_98A_B(SwiftMtParser_MT670Parser::Fld_98A_BContext *ctx) = 0;

  virtual void enterFld_22F_B(SwiftMtParser_MT670Parser::Fld_22F_BContext *ctx) = 0;
  virtual void exitFld_22F_B(SwiftMtParser_MT670Parser::Fld_22F_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT670Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT670Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_95a_B1(SwiftMtParser_MT670Parser::Fld_95a_B1Context *ctx) = 0;
  virtual void exitFld_95a_B1(SwiftMtParser_MT670Parser::Fld_95a_B1Context *ctx) = 0;

  virtual void enterFld_97A_B1(SwiftMtParser_MT670Parser::Fld_97A_B1Context *ctx) = 0;
  virtual void exitFld_97A_B1(SwiftMtParser_MT670Parser::Fld_97A_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT670Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT670Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_16R_B2(SwiftMtParser_MT670Parser::Fld_16R_B2Context *ctx) = 0;
  virtual void exitFld_16R_B2(SwiftMtParser_MT670Parser::Fld_16R_B2Context *ctx) = 0;

  virtual void enterFld_70E_B2(SwiftMtParser_MT670Parser::Fld_70E_B2Context *ctx) = 0;
  virtual void exitFld_70E_B2(SwiftMtParser_MT670Parser::Fld_70E_B2Context *ctx) = 0;

  virtual void enterFld_22F_B2(SwiftMtParser_MT670Parser::Fld_22F_B2Context *ctx) = 0;
  virtual void exitFld_22F_B2(SwiftMtParser_MT670Parser::Fld_22F_B2Context *ctx) = 0;

  virtual void enterFld_22H_B2(SwiftMtParser_MT670Parser::Fld_22H_B2Context *ctx) = 0;
  virtual void exitFld_22H_B2(SwiftMtParser_MT670Parser::Fld_22H_B2Context *ctx) = 0;

  virtual void enterFld_16S_B2(SwiftMtParser_MT670Parser::Fld_16S_B2Context *ctx) = 0;
  virtual void exitFld_16S_B2(SwiftMtParser_MT670Parser::Fld_16S_B2Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT670Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT670Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT670Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT670Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_70E_C(SwiftMtParser_MT670Parser::Fld_70E_CContext *ctx) = 0;
  virtual void exitFld_70E_C(SwiftMtParser_MT670Parser::Fld_70E_CContext *ctx) = 0;

  virtual void enterFld_22F_C(SwiftMtParser_MT670Parser::Fld_22F_CContext *ctx) = 0;
  virtual void exitFld_22F_C(SwiftMtParser_MT670Parser::Fld_22F_CContext *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT670Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT670Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT670Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT670Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT670Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT670Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT670Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT670Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_95P_A2_P(SwiftMtParser_MT670Parser::Fld_95P_A2_PContext *ctx) = 0;
  virtual void exitFld_95P_A2_P(SwiftMtParser_MT670Parser::Fld_95P_A2_PContext *ctx) = 0;

  virtual void enterFld_94C_A2_C(SwiftMtParser_MT670Parser::Fld_94C_A2_CContext *ctx) = 0;
  virtual void exitFld_94C_A2_C(SwiftMtParser_MT670Parser::Fld_94C_A2_CContext *ctx) = 0;

  virtual void enterFld_22H_A2_H(SwiftMtParser_MT670Parser::Fld_22H_A2_HContext *ctx) = 0;
  virtual void exitFld_22H_A2_H(SwiftMtParser_MT670Parser::Fld_22H_A2_HContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT670Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT670Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_Q(SwiftMtParser_MT670Parser::Fld_95a_A_QContext *ctx) = 0;
  virtual void exitFld_95a_A_Q(SwiftMtParser_MT670Parser::Fld_95a_A_QContext *ctx) = 0;

  virtual void enterFld_22F_A_F(SwiftMtParser_MT670Parser::Fld_22F_A_FContext *ctx) = 0;
  virtual void exitFld_22F_A_F(SwiftMtParser_MT670Parser::Fld_22F_A_FContext *ctx) = 0;

  virtual void enterFld_97A_A_A(SwiftMtParser_MT670Parser::Fld_97A_A_AContext *ctx) = 0;
  virtual void exitFld_97A_A_A(SwiftMtParser_MT670Parser::Fld_97A_A_AContext *ctx) = 0;

  virtual void enterFld_22H_B_H(SwiftMtParser_MT670Parser::Fld_22H_B_HContext *ctx) = 0;
  virtual void exitFld_22H_B_H(SwiftMtParser_MT670Parser::Fld_22H_B_HContext *ctx) = 0;

  virtual void enterFld_20C_B_C(SwiftMtParser_MT670Parser::Fld_20C_B_CContext *ctx) = 0;
  virtual void exitFld_20C_B_C(SwiftMtParser_MT670Parser::Fld_20C_B_CContext *ctx) = 0;

  virtual void enterFld_11A_B_A(SwiftMtParser_MT670Parser::Fld_11A_B_AContext *ctx) = 0;
  virtual void exitFld_11A_B_A(SwiftMtParser_MT670Parser::Fld_11A_B_AContext *ctx) = 0;

  virtual void enterFld_98A_B_A(SwiftMtParser_MT670Parser::Fld_98A_B_AContext *ctx) = 0;
  virtual void exitFld_98A_B_A(SwiftMtParser_MT670Parser::Fld_98A_B_AContext *ctx) = 0;

  virtual void enterFld_22F_B_F(SwiftMtParser_MT670Parser::Fld_22F_B_FContext *ctx) = 0;
  virtual void exitFld_22F_B_F(SwiftMtParser_MT670Parser::Fld_22F_B_FContext *ctx) = 0;

  virtual void enterFld_95a_B1_P(SwiftMtParser_MT670Parser::Fld_95a_B1_PContext *ctx) = 0;
  virtual void exitFld_95a_B1_P(SwiftMtParser_MT670Parser::Fld_95a_B1_PContext *ctx) = 0;

  virtual void enterFld_95a_B1_Q(SwiftMtParser_MT670Parser::Fld_95a_B1_QContext *ctx) = 0;
  virtual void exitFld_95a_B1_Q(SwiftMtParser_MT670Parser::Fld_95a_B1_QContext *ctx) = 0;

  virtual void enterFld_95a_B1_R(SwiftMtParser_MT670Parser::Fld_95a_B1_RContext *ctx) = 0;
  virtual void exitFld_95a_B1_R(SwiftMtParser_MT670Parser::Fld_95a_B1_RContext *ctx) = 0;

  virtual void enterFld_95a_B1_S(SwiftMtParser_MT670Parser::Fld_95a_B1_SContext *ctx) = 0;
  virtual void exitFld_95a_B1_S(SwiftMtParser_MT670Parser::Fld_95a_B1_SContext *ctx) = 0;

  virtual void enterFld_97A_B1_A(SwiftMtParser_MT670Parser::Fld_97A_B1_AContext *ctx) = 0;
  virtual void exitFld_97A_B1_A(SwiftMtParser_MT670Parser::Fld_97A_B1_AContext *ctx) = 0;

  virtual void enterFld_70E_B2_E(SwiftMtParser_MT670Parser::Fld_70E_B2_EContext *ctx) = 0;
  virtual void exitFld_70E_B2_E(SwiftMtParser_MT670Parser::Fld_70E_B2_EContext *ctx) = 0;

  virtual void enterFld_22F_B2_F(SwiftMtParser_MT670Parser::Fld_22F_B2_FContext *ctx) = 0;
  virtual void exitFld_22F_B2_F(SwiftMtParser_MT670Parser::Fld_22F_B2_FContext *ctx) = 0;

  virtual void enterFld_22H_B2_H(SwiftMtParser_MT670Parser::Fld_22H_B2_HContext *ctx) = 0;
  virtual void exitFld_22H_B2_H(SwiftMtParser_MT670Parser::Fld_22H_B2_HContext *ctx) = 0;

  virtual void enterFld_70E_C_E(SwiftMtParser_MT670Parser::Fld_70E_C_EContext *ctx) = 0;
  virtual void exitFld_70E_C_E(SwiftMtParser_MT670Parser::Fld_70E_C_EContext *ctx) = 0;

  virtual void enterFld_22F_C_F(SwiftMtParser_MT670Parser::Fld_22F_C_FContext *ctx) = 0;
  virtual void exitFld_22F_C_F(SwiftMtParser_MT670Parser::Fld_22F_C_FContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::sr2018
