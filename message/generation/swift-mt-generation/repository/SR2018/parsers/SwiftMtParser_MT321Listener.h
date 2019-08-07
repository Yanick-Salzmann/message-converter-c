
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT321.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT321Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT321Parser.
 */
class  SwiftMtParser_MT321Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT321Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT321Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT321Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT321Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT321Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT321Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT321Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT321Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT321Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT321Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT321Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT321Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT321Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT321Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT321Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT321Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT321Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT321Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT321Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT321Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT321Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT321Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT321Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT321Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT321Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT321Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT321Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT321Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT321Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT321Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT321Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT321Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B2(SwiftMtParser_MT321Parser::Seq_B2Context *ctx) = 0;
  virtual void exitSeq_B2(SwiftMtParser_MT321Parser::Seq_B2Context *ctx) = 0;

  virtual void enterSeq_B3(SwiftMtParser_MT321Parser::Seq_B3Context *ctx) = 0;
  virtual void exitSeq_B3(SwiftMtParser_MT321Parser::Seq_B3Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT321Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT321Parser::Seq_CContext *ctx) = 0;

  virtual void enterSeq_C1(SwiftMtParser_MT321Parser::Seq_C1Context *ctx) = 0;
  virtual void exitSeq_C1(SwiftMtParser_MT321Parser::Seq_C1Context *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT321Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT321Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT321Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT321Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT321Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT321Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_22H_A(SwiftMtParser_MT321Parser::Fld_22H_AContext *ctx) = 0;
  virtual void exitFld_22H_A(SwiftMtParser_MT321Parser::Fld_22H_AContext *ctx) = 0;

  virtual void enterFld_99B_A(SwiftMtParser_MT321Parser::Fld_99B_AContext *ctx) = 0;
  virtual void exitFld_99B_A(SwiftMtParser_MT321Parser::Fld_99B_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT321Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT321Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT321Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT321Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT321Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT321Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT321Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT321Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT321Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT321Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT321Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT321Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_20C_B(SwiftMtParser_MT321Parser::Fld_20C_BContext *ctx) = 0;
  virtual void exitFld_20C_B(SwiftMtParser_MT321Parser::Fld_20C_BContext *ctx) = 0;

  virtual void enterFld_22H_B(SwiftMtParser_MT321Parser::Fld_22H_BContext *ctx) = 0;
  virtual void exitFld_22H_B(SwiftMtParser_MT321Parser::Fld_22H_BContext *ctx) = 0;

  virtual void enterFld_98A_B(SwiftMtParser_MT321Parser::Fld_98A_BContext *ctx) = 0;
  virtual void exitFld_98A_B(SwiftMtParser_MT321Parser::Fld_98A_BContext *ctx) = 0;

  virtual void enterFld_19A_B(SwiftMtParser_MT321Parser::Fld_19A_BContext *ctx) = 0;
  virtual void exitFld_19A_B(SwiftMtParser_MT321Parser::Fld_19A_BContext *ctx) = 0;

  virtual void enterFld_92A_B(SwiftMtParser_MT321Parser::Fld_92A_BContext *ctx) = 0;
  virtual void exitFld_92A_B(SwiftMtParser_MT321Parser::Fld_92A_BContext *ctx) = 0;

  virtual void enterFld_99B_B(SwiftMtParser_MT321Parser::Fld_99B_BContext *ctx) = 0;
  virtual void exitFld_99B_B(SwiftMtParser_MT321Parser::Fld_99B_BContext *ctx) = 0;

  virtual void enterFld_94C_B(SwiftMtParser_MT321Parser::Fld_94C_BContext *ctx) = 0;
  virtual void exitFld_94C_B(SwiftMtParser_MT321Parser::Fld_94C_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT321Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT321Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_95a_B1(SwiftMtParser_MT321Parser::Fld_95a_B1Context *ctx) = 0;
  virtual void exitFld_95a_B1(SwiftMtParser_MT321Parser::Fld_95a_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT321Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT321Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_16R_B2(SwiftMtParser_MT321Parser::Fld_16R_B2Context *ctx) = 0;
  virtual void exitFld_16R_B2(SwiftMtParser_MT321Parser::Fld_16R_B2Context *ctx) = 0;

  virtual void enterFld_95a_B2(SwiftMtParser_MT321Parser::Fld_95a_B2Context *ctx) = 0;
  virtual void exitFld_95a_B2(SwiftMtParser_MT321Parser::Fld_95a_B2Context *ctx) = 0;

  virtual void enterFld_97A_B2(SwiftMtParser_MT321Parser::Fld_97A_B2Context *ctx) = 0;
  virtual void exitFld_97A_B2(SwiftMtParser_MT321Parser::Fld_97A_B2Context *ctx) = 0;

  virtual void enterFld_16S_B2(SwiftMtParser_MT321Parser::Fld_16S_B2Context *ctx) = 0;
  virtual void exitFld_16S_B2(SwiftMtParser_MT321Parser::Fld_16S_B2Context *ctx) = 0;

  virtual void enterFld_16R_B3(SwiftMtParser_MT321Parser::Fld_16R_B3Context *ctx) = 0;
  virtual void exitFld_16R_B3(SwiftMtParser_MT321Parser::Fld_16R_B3Context *ctx) = 0;

  virtual void enterFld_95a_B3(SwiftMtParser_MT321Parser::Fld_95a_B3Context *ctx) = 0;
  virtual void exitFld_95a_B3(SwiftMtParser_MT321Parser::Fld_95a_B3Context *ctx) = 0;

  virtual void enterFld_16S_B3(SwiftMtParser_MT321Parser::Fld_16S_B3Context *ctx) = 0;
  virtual void exitFld_16S_B3(SwiftMtParser_MT321Parser::Fld_16S_B3Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT321Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT321Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT321Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT321Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_22H_C(SwiftMtParser_MT321Parser::Fld_22H_CContext *ctx) = 0;
  virtual void exitFld_22H_C(SwiftMtParser_MT321Parser::Fld_22H_CContext *ctx) = 0;

  virtual void enterFld_16R_C1(SwiftMtParser_MT321Parser::Fld_16R_C1Context *ctx) = 0;
  virtual void exitFld_16R_C1(SwiftMtParser_MT321Parser::Fld_16R_C1Context *ctx) = 0;

  virtual void enterFld_95a_C1(SwiftMtParser_MT321Parser::Fld_95a_C1Context *ctx) = 0;
  virtual void exitFld_95a_C1(SwiftMtParser_MT321Parser::Fld_95a_C1Context *ctx) = 0;

  virtual void enterFld_97A_C1(SwiftMtParser_MT321Parser::Fld_97A_C1Context *ctx) = 0;
  virtual void exitFld_97A_C1(SwiftMtParser_MT321Parser::Fld_97A_C1Context *ctx) = 0;

  virtual void enterFld_70C_C1(SwiftMtParser_MT321Parser::Fld_70C_C1Context *ctx) = 0;
  virtual void exitFld_70C_C1(SwiftMtParser_MT321Parser::Fld_70C_C1Context *ctx) = 0;

  virtual void enterFld_16S_C1(SwiftMtParser_MT321Parser::Fld_16S_C1Context *ctx) = 0;
  virtual void exitFld_16S_C1(SwiftMtParser_MT321Parser::Fld_16S_C1Context *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT321Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT321Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT321Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT321Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT321Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT321Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_22H_A_H(SwiftMtParser_MT321Parser::Fld_22H_A_HContext *ctx) = 0;
  virtual void exitFld_22H_A_H(SwiftMtParser_MT321Parser::Fld_22H_A_HContext *ctx) = 0;

  virtual void enterFld_99B_A_B(SwiftMtParser_MT321Parser::Fld_99B_A_BContext *ctx) = 0;
  virtual void exitFld_99B_A_B(SwiftMtParser_MT321Parser::Fld_99B_A_BContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT321Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT321Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT321Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT321Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT321Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT321Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_20C_B_C(SwiftMtParser_MT321Parser::Fld_20C_B_CContext *ctx) = 0;
  virtual void exitFld_20C_B_C(SwiftMtParser_MT321Parser::Fld_20C_B_CContext *ctx) = 0;

  virtual void enterFld_22H_B_H(SwiftMtParser_MT321Parser::Fld_22H_B_HContext *ctx) = 0;
  virtual void exitFld_22H_B_H(SwiftMtParser_MT321Parser::Fld_22H_B_HContext *ctx) = 0;

  virtual void enterFld_98A_B_A(SwiftMtParser_MT321Parser::Fld_98A_B_AContext *ctx) = 0;
  virtual void exitFld_98A_B_A(SwiftMtParser_MT321Parser::Fld_98A_B_AContext *ctx) = 0;

  virtual void enterFld_19A_B_A(SwiftMtParser_MT321Parser::Fld_19A_B_AContext *ctx) = 0;
  virtual void exitFld_19A_B_A(SwiftMtParser_MT321Parser::Fld_19A_B_AContext *ctx) = 0;

  virtual void enterFld_92A_B_A(SwiftMtParser_MT321Parser::Fld_92A_B_AContext *ctx) = 0;
  virtual void exitFld_92A_B_A(SwiftMtParser_MT321Parser::Fld_92A_B_AContext *ctx) = 0;

  virtual void enterFld_99B_B_B(SwiftMtParser_MT321Parser::Fld_99B_B_BContext *ctx) = 0;
  virtual void exitFld_99B_B_B(SwiftMtParser_MT321Parser::Fld_99B_B_BContext *ctx) = 0;

  virtual void enterFld_94C_B_C(SwiftMtParser_MT321Parser::Fld_94C_B_CContext *ctx) = 0;
  virtual void exitFld_94C_B_C(SwiftMtParser_MT321Parser::Fld_94C_B_CContext *ctx) = 0;

  virtual void enterFld_95a_B1_P(SwiftMtParser_MT321Parser::Fld_95a_B1_PContext *ctx) = 0;
  virtual void exitFld_95a_B1_P(SwiftMtParser_MT321Parser::Fld_95a_B1_PContext *ctx) = 0;

  virtual void enterFld_95a_B1_Q(SwiftMtParser_MT321Parser::Fld_95a_B1_QContext *ctx) = 0;
  virtual void exitFld_95a_B1_Q(SwiftMtParser_MT321Parser::Fld_95a_B1_QContext *ctx) = 0;

  virtual void enterFld_95a_B1_R(SwiftMtParser_MT321Parser::Fld_95a_B1_RContext *ctx) = 0;
  virtual void exitFld_95a_B1_R(SwiftMtParser_MT321Parser::Fld_95a_B1_RContext *ctx) = 0;

  virtual void enterFld_95a_B2_P(SwiftMtParser_MT321Parser::Fld_95a_B2_PContext *ctx) = 0;
  virtual void exitFld_95a_B2_P(SwiftMtParser_MT321Parser::Fld_95a_B2_PContext *ctx) = 0;

  virtual void enterFld_95a_B2_Q(SwiftMtParser_MT321Parser::Fld_95a_B2_QContext *ctx) = 0;
  virtual void exitFld_95a_B2_Q(SwiftMtParser_MT321Parser::Fld_95a_B2_QContext *ctx) = 0;

  virtual void enterFld_95a_B2_R(SwiftMtParser_MT321Parser::Fld_95a_B2_RContext *ctx) = 0;
  virtual void exitFld_95a_B2_R(SwiftMtParser_MT321Parser::Fld_95a_B2_RContext *ctx) = 0;

  virtual void enterFld_97A_B2_A(SwiftMtParser_MT321Parser::Fld_97A_B2_AContext *ctx) = 0;
  virtual void exitFld_97A_B2_A(SwiftMtParser_MT321Parser::Fld_97A_B2_AContext *ctx) = 0;

  virtual void enterFld_95a_B3_P(SwiftMtParser_MT321Parser::Fld_95a_B3_PContext *ctx) = 0;
  virtual void exitFld_95a_B3_P(SwiftMtParser_MT321Parser::Fld_95a_B3_PContext *ctx) = 0;

  virtual void enterFld_95a_B3_Q(SwiftMtParser_MT321Parser::Fld_95a_B3_QContext *ctx) = 0;
  virtual void exitFld_95a_B3_Q(SwiftMtParser_MT321Parser::Fld_95a_B3_QContext *ctx) = 0;

  virtual void enterFld_95a_B3_R(SwiftMtParser_MT321Parser::Fld_95a_B3_RContext *ctx) = 0;
  virtual void exitFld_95a_B3_R(SwiftMtParser_MT321Parser::Fld_95a_B3_RContext *ctx) = 0;

  virtual void enterFld_22H_C_H(SwiftMtParser_MT321Parser::Fld_22H_C_HContext *ctx) = 0;
  virtual void exitFld_22H_C_H(SwiftMtParser_MT321Parser::Fld_22H_C_HContext *ctx) = 0;

  virtual void enterFld_95a_C1_P(SwiftMtParser_MT321Parser::Fld_95a_C1_PContext *ctx) = 0;
  virtual void exitFld_95a_C1_P(SwiftMtParser_MT321Parser::Fld_95a_C1_PContext *ctx) = 0;

  virtual void enterFld_95a_C1_Q(SwiftMtParser_MT321Parser::Fld_95a_C1_QContext *ctx) = 0;
  virtual void exitFld_95a_C1_Q(SwiftMtParser_MT321Parser::Fld_95a_C1_QContext *ctx) = 0;

  virtual void enterFld_95a_C1_R(SwiftMtParser_MT321Parser::Fld_95a_C1_RContext *ctx) = 0;
  virtual void exitFld_95a_C1_R(SwiftMtParser_MT321Parser::Fld_95a_C1_RContext *ctx) = 0;

  virtual void enterFld_97A_C1_A(SwiftMtParser_MT321Parser::Fld_97A_C1_AContext *ctx) = 0;
  virtual void exitFld_97A_C1_A(SwiftMtParser_MT321Parser::Fld_97A_C1_AContext *ctx) = 0;

  virtual void enterFld_70C_C1_C(SwiftMtParser_MT321Parser::Fld_70C_C1_CContext *ctx) = 0;
  virtual void exitFld_70C_C1_C(SwiftMtParser_MT321Parser::Fld_70C_C1_CContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
