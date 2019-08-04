
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars\SwiftMtParser_MT381.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT381Parser.h"


namespace message::definition::swift::mt::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT381Parser.
 */
class  SwiftMtParser_MT381Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT381Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT381Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT381Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT381Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT381Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT381Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT381Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT381Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT381Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT381Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT381Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT381Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT381Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT381Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT381Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT381Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT381Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT381Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT381Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT381Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT381Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT381Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT381Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT381Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT381Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT381Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT381Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT381Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT381Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT381Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT381Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT381Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B2(SwiftMtParser_MT381Parser::Seq_B2Context *ctx) = 0;
  virtual void exitSeq_B2(SwiftMtParser_MT381Parser::Seq_B2Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT381Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT381Parser::Seq_CContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT381Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT381Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT381Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT381Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT381Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT381Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_22H_A(SwiftMtParser_MT381Parser::Fld_22H_AContext *ctx) = 0;
  virtual void exitFld_22H_A(SwiftMtParser_MT381Parser::Fld_22H_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT381Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT381Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT381Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT381Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT381Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT381Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT381Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT381Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT381Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT381Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT381Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT381Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_98a_B(SwiftMtParser_MT381Parser::Fld_98a_BContext *ctx) = 0;
  virtual void exitFld_98a_B(SwiftMtParser_MT381Parser::Fld_98a_BContext *ctx) = 0;

  virtual void enterFld_19B_B(SwiftMtParser_MT381Parser::Fld_19B_BContext *ctx) = 0;
  virtual void exitFld_19B_B(SwiftMtParser_MT381Parser::Fld_19B_BContext *ctx) = 0;

  virtual void enterFld_92B_B(SwiftMtParser_MT381Parser::Fld_92B_BContext *ctx) = 0;
  virtual void exitFld_92B_B(SwiftMtParser_MT381Parser::Fld_92B_BContext *ctx) = 0;

  virtual void enterFld_94C_B(SwiftMtParser_MT381Parser::Fld_94C_BContext *ctx) = 0;
  virtual void exitFld_94C_B(SwiftMtParser_MT381Parser::Fld_94C_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT381Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT381Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_95a_B1(SwiftMtParser_MT381Parser::Fld_95a_B1Context *ctx) = 0;
  virtual void exitFld_95a_B1(SwiftMtParser_MT381Parser::Fld_95a_B1Context *ctx) = 0;

  virtual void enterFld_97A_B1(SwiftMtParser_MT381Parser::Fld_97A_B1Context *ctx) = 0;
  virtual void exitFld_97A_B1(SwiftMtParser_MT381Parser::Fld_97A_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT381Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT381Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_16R_B2(SwiftMtParser_MT381Parser::Fld_16R_B2Context *ctx) = 0;
  virtual void exitFld_16R_B2(SwiftMtParser_MT381Parser::Fld_16R_B2Context *ctx) = 0;

  virtual void enterFld_24B_B2(SwiftMtParser_MT381Parser::Fld_24B_B2Context *ctx) = 0;
  virtual void exitFld_24B_B2(SwiftMtParser_MT381Parser::Fld_24B_B2Context *ctx) = 0;

  virtual void enterFld_70D_B2(SwiftMtParser_MT381Parser::Fld_70D_B2Context *ctx) = 0;
  virtual void exitFld_70D_B2(SwiftMtParser_MT381Parser::Fld_70D_B2Context *ctx) = 0;

  virtual void enterFld_16S_B2(SwiftMtParser_MT381Parser::Fld_16S_B2Context *ctx) = 0;
  virtual void exitFld_16S_B2(SwiftMtParser_MT381Parser::Fld_16S_B2Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT381Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT381Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT381Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT381Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_35B_C(SwiftMtParser_MT381Parser::Fld_35B_CContext *ctx) = 0;
  virtual void exitFld_35B_C(SwiftMtParser_MT381Parser::Fld_35B_CContext *ctx) = 0;

  virtual void enterFld_36B_C(SwiftMtParser_MT381Parser::Fld_36B_CContext *ctx) = 0;
  virtual void exitFld_36B_C(SwiftMtParser_MT381Parser::Fld_36B_CContext *ctx) = 0;

  virtual void enterFld_22F_C(SwiftMtParser_MT381Parser::Fld_22F_CContext *ctx) = 0;
  virtual void exitFld_22F_C(SwiftMtParser_MT381Parser::Fld_22F_CContext *ctx) = 0;

  virtual void enterFld_70E_C(SwiftMtParser_MT381Parser::Fld_70E_CContext *ctx) = 0;
  virtual void exitFld_70E_C(SwiftMtParser_MT381Parser::Fld_70E_CContext *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT381Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT381Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT381Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT381Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT381Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT381Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_22H_A_H(SwiftMtParser_MT381Parser::Fld_22H_A_HContext *ctx) = 0;
  virtual void exitFld_22H_A_H(SwiftMtParser_MT381Parser::Fld_22H_A_HContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT381Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT381Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT381Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT381Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT381Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT381Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_98a_B_A(SwiftMtParser_MT381Parser::Fld_98a_B_AContext *ctx) = 0;
  virtual void exitFld_98a_B_A(SwiftMtParser_MT381Parser::Fld_98a_B_AContext *ctx) = 0;

  virtual void enterFld_98a_B_C(SwiftMtParser_MT381Parser::Fld_98a_B_CContext *ctx) = 0;
  virtual void exitFld_98a_B_C(SwiftMtParser_MT381Parser::Fld_98a_B_CContext *ctx) = 0;

  virtual void enterFld_19B_B_B(SwiftMtParser_MT381Parser::Fld_19B_B_BContext *ctx) = 0;
  virtual void exitFld_19B_B_B(SwiftMtParser_MT381Parser::Fld_19B_B_BContext *ctx) = 0;

  virtual void enterFld_92B_B_B(SwiftMtParser_MT381Parser::Fld_92B_B_BContext *ctx) = 0;
  virtual void exitFld_92B_B_B(SwiftMtParser_MT381Parser::Fld_92B_B_BContext *ctx) = 0;

  virtual void enterFld_94C_B_C(SwiftMtParser_MT381Parser::Fld_94C_B_CContext *ctx) = 0;
  virtual void exitFld_94C_B_C(SwiftMtParser_MT381Parser::Fld_94C_B_CContext *ctx) = 0;

  virtual void enterFld_95a_B1_P(SwiftMtParser_MT381Parser::Fld_95a_B1_PContext *ctx) = 0;
  virtual void exitFld_95a_B1_P(SwiftMtParser_MT381Parser::Fld_95a_B1_PContext *ctx) = 0;

  virtual void enterFld_95a_B1_Q(SwiftMtParser_MT381Parser::Fld_95a_B1_QContext *ctx) = 0;
  virtual void exitFld_95a_B1_Q(SwiftMtParser_MT381Parser::Fld_95a_B1_QContext *ctx) = 0;

  virtual void enterFld_95a_B1_R(SwiftMtParser_MT381Parser::Fld_95a_B1_RContext *ctx) = 0;
  virtual void exitFld_95a_B1_R(SwiftMtParser_MT381Parser::Fld_95a_B1_RContext *ctx) = 0;

  virtual void enterFld_97A_B1_A(SwiftMtParser_MT381Parser::Fld_97A_B1_AContext *ctx) = 0;
  virtual void exitFld_97A_B1_A(SwiftMtParser_MT381Parser::Fld_97A_B1_AContext *ctx) = 0;

  virtual void enterFld_24B_B2_B(SwiftMtParser_MT381Parser::Fld_24B_B2_BContext *ctx) = 0;
  virtual void exitFld_24B_B2_B(SwiftMtParser_MT381Parser::Fld_24B_B2_BContext *ctx) = 0;

  virtual void enterFld_70D_B2_D(SwiftMtParser_MT381Parser::Fld_70D_B2_DContext *ctx) = 0;
  virtual void exitFld_70D_B2_D(SwiftMtParser_MT381Parser::Fld_70D_B2_DContext *ctx) = 0;

  virtual void enterFld_35B_C_B(SwiftMtParser_MT381Parser::Fld_35B_C_BContext *ctx) = 0;
  virtual void exitFld_35B_C_B(SwiftMtParser_MT381Parser::Fld_35B_C_BContext *ctx) = 0;

  virtual void enterFld_36B_C_B(SwiftMtParser_MT381Parser::Fld_36B_C_BContext *ctx) = 0;
  virtual void exitFld_36B_C_B(SwiftMtParser_MT381Parser::Fld_36B_C_BContext *ctx) = 0;

  virtual void enterFld_22F_C_F(SwiftMtParser_MT381Parser::Fld_22F_C_FContext *ctx) = 0;
  virtual void exitFld_22F_C_F(SwiftMtParser_MT381Parser::Fld_22F_C_FContext *ctx) = 0;

  virtual void enterFld_70E_C_E(SwiftMtParser_MT381Parser::Fld_70E_C_EContext *ctx) = 0;
  virtual void exitFld_70E_C_E(SwiftMtParser_MT381Parser::Fld_70E_C_EContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::sr2018
