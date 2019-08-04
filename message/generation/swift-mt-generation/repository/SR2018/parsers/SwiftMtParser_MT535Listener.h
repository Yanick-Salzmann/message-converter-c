
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars\SwiftMtParser_MT535.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT535Parser.h"


namespace message::definition::swift::mt::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT535Parser.
 */
class  SwiftMtParser_MT535Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT535Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT535Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT535Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT535Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT535Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT535Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT535Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT535Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT535Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT535Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT535Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT535Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT535Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT535Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT535Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT535Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT535Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT535Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT535Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT535Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT535Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT535Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT535Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT535Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT535Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT535Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT535Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT535Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT535Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT535Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT535Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT535Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B1a(SwiftMtParser_MT535Parser::Seq_B1aContext *ctx) = 0;
  virtual void exitSeq_B1a(SwiftMtParser_MT535Parser::Seq_B1aContext *ctx) = 0;

  virtual void enterSeq_B1b(SwiftMtParser_MT535Parser::Seq_B1bContext *ctx) = 0;
  virtual void exitSeq_B1b(SwiftMtParser_MT535Parser::Seq_B1bContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT535Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT535Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_28E_A(SwiftMtParser_MT535Parser::Fld_28E_AContext *ctx) = 0;
  virtual void exitFld_28E_A(SwiftMtParser_MT535Parser::Fld_28E_AContext *ctx) = 0;

  virtual void enterFld_13a_A(SwiftMtParser_MT535Parser::Fld_13a_AContext *ctx) = 0;
  virtual void exitFld_13a_A(SwiftMtParser_MT535Parser::Fld_13a_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT535Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT535Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT535Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT535Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT535Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT535Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_22F_A(SwiftMtParser_MT535Parser::Fld_22F_AContext *ctx) = 0;
  virtual void exitFld_22F_A(SwiftMtParser_MT535Parser::Fld_22F_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT535Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT535Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT535Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT535Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT535Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT535Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT535Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT535Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT535Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT535Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_97a_A(SwiftMtParser_MT535Parser::Fld_97a_AContext *ctx) = 0;
  virtual void exitFld_97a_A(SwiftMtParser_MT535Parser::Fld_97a_AContext *ctx) = 0;

  virtual void enterFld_17B_A(SwiftMtParser_MT535Parser::Fld_17B_AContext *ctx) = 0;
  virtual void exitFld_17B_A(SwiftMtParser_MT535Parser::Fld_17B_AContext *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT535Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT535Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT535Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT535Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_95a_B(SwiftMtParser_MT535Parser::Fld_95a_BContext *ctx) = 0;
  virtual void exitFld_95a_B(SwiftMtParser_MT535Parser::Fld_95a_BContext *ctx) = 0;

  virtual void enterFld_97a_B(SwiftMtParser_MT535Parser::Fld_97a_BContext *ctx) = 0;
  virtual void exitFld_97a_B(SwiftMtParser_MT535Parser::Fld_97a_BContext *ctx) = 0;

  virtual void enterFld_94a_B(SwiftMtParser_MT535Parser::Fld_94a_BContext *ctx) = 0;
  virtual void exitFld_94a_B(SwiftMtParser_MT535Parser::Fld_94a_BContext *ctx) = 0;

  virtual void enterFld_17B_B(SwiftMtParser_MT535Parser::Fld_17B_BContext *ctx) = 0;
  virtual void exitFld_17B_B(SwiftMtParser_MT535Parser::Fld_17B_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT535Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT535Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_35B_B1(SwiftMtParser_MT535Parser::Fld_35B_B1Context *ctx) = 0;
  virtual void exitFld_35B_B1(SwiftMtParser_MT535Parser::Fld_35B_B1Context *ctx) = 0;

  virtual void enterFld_16R_B1a(SwiftMtParser_MT535Parser::Fld_16R_B1aContext *ctx) = 0;
  virtual void exitFld_16R_B1a(SwiftMtParser_MT535Parser::Fld_16R_B1aContext *ctx) = 0;

  virtual void enterFld_94a_B1a(SwiftMtParser_MT535Parser::Fld_94a_B1aContext *ctx) = 0;
  virtual void exitFld_94a_B1a(SwiftMtParser_MT535Parser::Fld_94a_B1aContext *ctx) = 0;

  virtual void enterFld_22F_B1a(SwiftMtParser_MT535Parser::Fld_22F_B1aContext *ctx) = 0;
  virtual void exitFld_22F_B1a(SwiftMtParser_MT535Parser::Fld_22F_B1aContext *ctx) = 0;

  virtual void enterFld_12a_B1a(SwiftMtParser_MT535Parser::Fld_12a_B1aContext *ctx) = 0;
  virtual void exitFld_12a_B1a(SwiftMtParser_MT535Parser::Fld_12a_B1aContext *ctx) = 0;

  virtual void enterFld_11A_B1a(SwiftMtParser_MT535Parser::Fld_11A_B1aContext *ctx) = 0;
  virtual void exitFld_11A_B1a(SwiftMtParser_MT535Parser::Fld_11A_B1aContext *ctx) = 0;

  virtual void enterFld_98A_B1a(SwiftMtParser_MT535Parser::Fld_98A_B1aContext *ctx) = 0;
  virtual void exitFld_98A_B1a(SwiftMtParser_MT535Parser::Fld_98A_B1aContext *ctx) = 0;

  virtual void enterFld_92A_B1a(SwiftMtParser_MT535Parser::Fld_92A_B1aContext *ctx) = 0;
  virtual void exitFld_92A_B1a(SwiftMtParser_MT535Parser::Fld_92A_B1aContext *ctx) = 0;

  virtual void enterFld_13a_B1a(SwiftMtParser_MT535Parser::Fld_13a_B1aContext *ctx) = 0;
  virtual void exitFld_13a_B1a(SwiftMtParser_MT535Parser::Fld_13a_B1aContext *ctx) = 0;

  virtual void enterFld_17B_B1a(SwiftMtParser_MT535Parser::Fld_17B_B1aContext *ctx) = 0;
  virtual void exitFld_17B_B1a(SwiftMtParser_MT535Parser::Fld_17B_B1aContext *ctx) = 0;

  virtual void enterFld_90a_B1a(SwiftMtParser_MT535Parser::Fld_90a_B1aContext *ctx) = 0;
  virtual void exitFld_90a_B1a(SwiftMtParser_MT535Parser::Fld_90a_B1aContext *ctx) = 0;

  virtual void enterFld_36B_B1a(SwiftMtParser_MT535Parser::Fld_36B_B1aContext *ctx) = 0;
  virtual void exitFld_36B_B1a(SwiftMtParser_MT535Parser::Fld_36B_B1aContext *ctx) = 0;

  virtual void enterFld_35B_B1a(SwiftMtParser_MT535Parser::Fld_35B_B1aContext *ctx) = 0;
  virtual void exitFld_35B_B1a(SwiftMtParser_MT535Parser::Fld_35B_B1aContext *ctx) = 0;

  virtual void enterFld_70E_B1a(SwiftMtParser_MT535Parser::Fld_70E_B1aContext *ctx) = 0;
  virtual void exitFld_70E_B1a(SwiftMtParser_MT535Parser::Fld_70E_B1aContext *ctx) = 0;

  virtual void enterFld_16S_B1a(SwiftMtParser_MT535Parser::Fld_16S_B1aContext *ctx) = 0;
  virtual void exitFld_16S_B1a(SwiftMtParser_MT535Parser::Fld_16S_B1aContext *ctx) = 0;

  virtual void enterFld_22H_B1(SwiftMtParser_MT535Parser::Fld_22H_B1Context *ctx) = 0;
  virtual void exitFld_22H_B1(SwiftMtParser_MT535Parser::Fld_22H_B1Context *ctx) = 0;

  virtual void enterFld_90a_B1(SwiftMtParser_MT535Parser::Fld_90a_B1Context *ctx) = 0;
  virtual void exitFld_90a_B1(SwiftMtParser_MT535Parser::Fld_90a_B1Context *ctx) = 0;

  virtual void enterFld_94B_B1(SwiftMtParser_MT535Parser::Fld_94B_B1Context *ctx) = 0;
  virtual void exitFld_94B_B1(SwiftMtParser_MT535Parser::Fld_94B_B1Context *ctx) = 0;

  virtual void enterFld_98a_B1(SwiftMtParser_MT535Parser::Fld_98a_B1Context *ctx) = 0;
  virtual void exitFld_98a_B1(SwiftMtParser_MT535Parser::Fld_98a_B1Context *ctx) = 0;

  virtual void enterFld_93B_B1(SwiftMtParser_MT535Parser::Fld_93B_B1Context *ctx) = 0;
  virtual void exitFld_93B_B1(SwiftMtParser_MT535Parser::Fld_93B_B1Context *ctx) = 0;

  virtual void enterFld_16R_B1b(SwiftMtParser_MT535Parser::Fld_16R_B1bContext *ctx) = 0;
  virtual void exitFld_16R_B1b(SwiftMtParser_MT535Parser::Fld_16R_B1bContext *ctx) = 0;

  virtual void enterFld_93a_B1b(SwiftMtParser_MT535Parser::Fld_93a_B1bContext *ctx) = 0;
  virtual void exitFld_93a_B1b(SwiftMtParser_MT535Parser::Fld_93a_B1bContext *ctx) = 0;

  virtual void enterFld_22a_B1b(SwiftMtParser_MT535Parser::Fld_22a_B1bContext *ctx) = 0;
  virtual void exitFld_22a_B1b(SwiftMtParser_MT535Parser::Fld_22a_B1bContext *ctx) = 0;

  virtual void enterFld_94a_B1b(SwiftMtParser_MT535Parser::Fld_94a_B1bContext *ctx) = 0;
  virtual void exitFld_94a_B1b(SwiftMtParser_MT535Parser::Fld_94a_B1bContext *ctx) = 0;

  virtual void enterFld_90a_B1b(SwiftMtParser_MT535Parser::Fld_90a_B1bContext *ctx) = 0;
  virtual void exitFld_90a_B1b(SwiftMtParser_MT535Parser::Fld_90a_B1bContext *ctx) = 0;

  virtual void enterFld_98a_B1b(SwiftMtParser_MT535Parser::Fld_98a_B1bContext *ctx) = 0;
  virtual void exitFld_98a_B1b(SwiftMtParser_MT535Parser::Fld_98a_B1bContext *ctx) = 0;

  virtual void enterFld_99A_B1b(SwiftMtParser_MT535Parser::Fld_99A_B1bContext *ctx) = 0;
  virtual void exitFld_99A_B1b(SwiftMtParser_MT535Parser::Fld_99A_B1bContext *ctx) = 0;

  virtual void enterFld_19A_B1b(SwiftMtParser_MT535Parser::Fld_19A_B1bContext *ctx) = 0;
  virtual void exitFld_19A_B1b(SwiftMtParser_MT535Parser::Fld_19A_B1bContext *ctx) = 0;

  virtual void enterFld_92B_B1b(SwiftMtParser_MT535Parser::Fld_92B_B1bContext *ctx) = 0;
  virtual void exitFld_92B_B1b(SwiftMtParser_MT535Parser::Fld_92B_B1bContext *ctx) = 0;

  virtual void enterFld_70C_B1b(SwiftMtParser_MT535Parser::Fld_70C_B1bContext *ctx) = 0;
  virtual void exitFld_70C_B1b(SwiftMtParser_MT535Parser::Fld_70C_B1bContext *ctx) = 0;

  virtual void enterFld_28E_A_E(SwiftMtParser_MT535Parser::Fld_28E_A_EContext *ctx) = 0;
  virtual void exitFld_28E_A_E(SwiftMtParser_MT535Parser::Fld_28E_A_EContext *ctx) = 0;

  virtual void enterFld_13a_A_A(SwiftMtParser_MT535Parser::Fld_13a_A_AContext *ctx) = 0;
  virtual void exitFld_13a_A_A(SwiftMtParser_MT535Parser::Fld_13a_A_AContext *ctx) = 0;

  virtual void enterFld_13a_A_J(SwiftMtParser_MT535Parser::Fld_13a_A_JContext *ctx) = 0;
  virtual void exitFld_13a_A_J(SwiftMtParser_MT535Parser::Fld_13a_A_JContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT535Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT535Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT535Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT535Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT535Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT535Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT535Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT535Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT535Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT535Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_22F_A_F(SwiftMtParser_MT535Parser::Fld_22F_A_FContext *ctx) = 0;
  virtual void exitFld_22F_A_F(SwiftMtParser_MT535Parser::Fld_22F_A_FContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT535Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT535Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT535Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT535Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT535Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT535Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_95a_A_L(SwiftMtParser_MT535Parser::Fld_95a_A_LContext *ctx) = 0;
  virtual void exitFld_95a_A_L(SwiftMtParser_MT535Parser::Fld_95a_A_LContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT535Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT535Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT535Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT535Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_97a_A_A(SwiftMtParser_MT535Parser::Fld_97a_A_AContext *ctx) = 0;
  virtual void exitFld_97a_A_A(SwiftMtParser_MT535Parser::Fld_97a_A_AContext *ctx) = 0;

  virtual void enterFld_97a_A_B(SwiftMtParser_MT535Parser::Fld_97a_A_BContext *ctx) = 0;
  virtual void exitFld_97a_A_B(SwiftMtParser_MT535Parser::Fld_97a_A_BContext *ctx) = 0;

  virtual void enterFld_17B_A_B(SwiftMtParser_MT535Parser::Fld_17B_A_BContext *ctx) = 0;
  virtual void exitFld_17B_A_B(SwiftMtParser_MT535Parser::Fld_17B_A_BContext *ctx) = 0;

  virtual void enterFld_95a_B_L(SwiftMtParser_MT535Parser::Fld_95a_B_LContext *ctx) = 0;
  virtual void exitFld_95a_B_L(SwiftMtParser_MT535Parser::Fld_95a_B_LContext *ctx) = 0;

  virtual void enterFld_95a_B_P(SwiftMtParser_MT535Parser::Fld_95a_B_PContext *ctx) = 0;
  virtual void exitFld_95a_B_P(SwiftMtParser_MT535Parser::Fld_95a_B_PContext *ctx) = 0;

  virtual void enterFld_95a_B_R(SwiftMtParser_MT535Parser::Fld_95a_B_RContext *ctx) = 0;
  virtual void exitFld_95a_B_R(SwiftMtParser_MT535Parser::Fld_95a_B_RContext *ctx) = 0;

  virtual void enterFld_97a_B_A(SwiftMtParser_MT535Parser::Fld_97a_B_AContext *ctx) = 0;
  virtual void exitFld_97a_B_A(SwiftMtParser_MT535Parser::Fld_97a_B_AContext *ctx) = 0;

  virtual void enterFld_97a_B_B(SwiftMtParser_MT535Parser::Fld_97a_B_BContext *ctx) = 0;
  virtual void exitFld_97a_B_B(SwiftMtParser_MT535Parser::Fld_97a_B_BContext *ctx) = 0;

  virtual void enterFld_94a_B_B(SwiftMtParser_MT535Parser::Fld_94a_B_BContext *ctx) = 0;
  virtual void exitFld_94a_B_B(SwiftMtParser_MT535Parser::Fld_94a_B_BContext *ctx) = 0;

  virtual void enterFld_94a_B_C(SwiftMtParser_MT535Parser::Fld_94a_B_CContext *ctx) = 0;
  virtual void exitFld_94a_B_C(SwiftMtParser_MT535Parser::Fld_94a_B_CContext *ctx) = 0;

  virtual void enterFld_94a_B_F(SwiftMtParser_MT535Parser::Fld_94a_B_FContext *ctx) = 0;
  virtual void exitFld_94a_B_F(SwiftMtParser_MT535Parser::Fld_94a_B_FContext *ctx) = 0;

  virtual void enterFld_94a_B_L(SwiftMtParser_MT535Parser::Fld_94a_B_LContext *ctx) = 0;
  virtual void exitFld_94a_B_L(SwiftMtParser_MT535Parser::Fld_94a_B_LContext *ctx) = 0;

  virtual void enterFld_17B_B_B(SwiftMtParser_MT535Parser::Fld_17B_B_BContext *ctx) = 0;
  virtual void exitFld_17B_B_B(SwiftMtParser_MT535Parser::Fld_17B_B_BContext *ctx) = 0;

  virtual void enterFld_35B_B1_B(SwiftMtParser_MT535Parser::Fld_35B_B1_BContext *ctx) = 0;
  virtual void exitFld_35B_B1_B(SwiftMtParser_MT535Parser::Fld_35B_B1_BContext *ctx) = 0;

  virtual void enterFld_94a_B1a_B(SwiftMtParser_MT535Parser::Fld_94a_B1a_BContext *ctx) = 0;
  virtual void exitFld_94a_B1a_B(SwiftMtParser_MT535Parser::Fld_94a_B1a_BContext *ctx) = 0;

  virtual void enterFld_94a_B1a_D(SwiftMtParser_MT535Parser::Fld_94a_B1a_DContext *ctx) = 0;
  virtual void exitFld_94a_B1a_D(SwiftMtParser_MT535Parser::Fld_94a_B1a_DContext *ctx) = 0;

  virtual void enterFld_22F_B1a_F(SwiftMtParser_MT535Parser::Fld_22F_B1a_FContext *ctx) = 0;
  virtual void exitFld_22F_B1a_F(SwiftMtParser_MT535Parser::Fld_22F_B1a_FContext *ctx) = 0;

  virtual void enterFld_12a_B1a_A(SwiftMtParser_MT535Parser::Fld_12a_B1a_AContext *ctx) = 0;
  virtual void exitFld_12a_B1a_A(SwiftMtParser_MT535Parser::Fld_12a_B1a_AContext *ctx) = 0;

  virtual void enterFld_12a_B1a_B(SwiftMtParser_MT535Parser::Fld_12a_B1a_BContext *ctx) = 0;
  virtual void exitFld_12a_B1a_B(SwiftMtParser_MT535Parser::Fld_12a_B1a_BContext *ctx) = 0;

  virtual void enterFld_12a_B1a_C(SwiftMtParser_MT535Parser::Fld_12a_B1a_CContext *ctx) = 0;
  virtual void exitFld_12a_B1a_C(SwiftMtParser_MT535Parser::Fld_12a_B1a_CContext *ctx) = 0;

  virtual void enterFld_11A_B1a_A(SwiftMtParser_MT535Parser::Fld_11A_B1a_AContext *ctx) = 0;
  virtual void exitFld_11A_B1a_A(SwiftMtParser_MT535Parser::Fld_11A_B1a_AContext *ctx) = 0;

  virtual void enterFld_98A_B1a_A(SwiftMtParser_MT535Parser::Fld_98A_B1a_AContext *ctx) = 0;
  virtual void exitFld_98A_B1a_A(SwiftMtParser_MT535Parser::Fld_98A_B1a_AContext *ctx) = 0;

  virtual void enterFld_92A_B1a_A(SwiftMtParser_MT535Parser::Fld_92A_B1a_AContext *ctx) = 0;
  virtual void exitFld_92A_B1a_A(SwiftMtParser_MT535Parser::Fld_92A_B1a_AContext *ctx) = 0;

  virtual void enterFld_13a_B1a_A(SwiftMtParser_MT535Parser::Fld_13a_B1a_AContext *ctx) = 0;
  virtual void exitFld_13a_B1a_A(SwiftMtParser_MT535Parser::Fld_13a_B1a_AContext *ctx) = 0;

  virtual void enterFld_13a_B1a_B(SwiftMtParser_MT535Parser::Fld_13a_B1a_BContext *ctx) = 0;
  virtual void exitFld_13a_B1a_B(SwiftMtParser_MT535Parser::Fld_13a_B1a_BContext *ctx) = 0;

  virtual void enterFld_13a_B1a_K(SwiftMtParser_MT535Parser::Fld_13a_B1a_KContext *ctx) = 0;
  virtual void exitFld_13a_B1a_K(SwiftMtParser_MT535Parser::Fld_13a_B1a_KContext *ctx) = 0;

  virtual void enterFld_17B_B1a_B(SwiftMtParser_MT535Parser::Fld_17B_B1a_BContext *ctx) = 0;
  virtual void exitFld_17B_B1a_B(SwiftMtParser_MT535Parser::Fld_17B_B1a_BContext *ctx) = 0;

  virtual void enterFld_90a_B1a_A(SwiftMtParser_MT535Parser::Fld_90a_B1a_AContext *ctx) = 0;
  virtual void exitFld_90a_B1a_A(SwiftMtParser_MT535Parser::Fld_90a_B1a_AContext *ctx) = 0;

  virtual void enterFld_90a_B1a_B(SwiftMtParser_MT535Parser::Fld_90a_B1a_BContext *ctx) = 0;
  virtual void exitFld_90a_B1a_B(SwiftMtParser_MT535Parser::Fld_90a_B1a_BContext *ctx) = 0;

  virtual void enterFld_36B_B1a_B(SwiftMtParser_MT535Parser::Fld_36B_B1a_BContext *ctx) = 0;
  virtual void exitFld_36B_B1a_B(SwiftMtParser_MT535Parser::Fld_36B_B1a_BContext *ctx) = 0;

  virtual void enterFld_35B_B1a_B(SwiftMtParser_MT535Parser::Fld_35B_B1a_BContext *ctx) = 0;
  virtual void exitFld_35B_B1a_B(SwiftMtParser_MT535Parser::Fld_35B_B1a_BContext *ctx) = 0;

  virtual void enterFld_70E_B1a_E(SwiftMtParser_MT535Parser::Fld_70E_B1a_EContext *ctx) = 0;
  virtual void exitFld_70E_B1a_E(SwiftMtParser_MT535Parser::Fld_70E_B1a_EContext *ctx) = 0;

  virtual void enterFld_22H_B1_H(SwiftMtParser_MT535Parser::Fld_22H_B1_HContext *ctx) = 0;
  virtual void exitFld_22H_B1_H(SwiftMtParser_MT535Parser::Fld_22H_B1_HContext *ctx) = 0;

  virtual void enterFld_90a_B1_A(SwiftMtParser_MT535Parser::Fld_90a_B1_AContext *ctx) = 0;
  virtual void exitFld_90a_B1_A(SwiftMtParser_MT535Parser::Fld_90a_B1_AContext *ctx) = 0;

  virtual void enterFld_90a_B1_B(SwiftMtParser_MT535Parser::Fld_90a_B1_BContext *ctx) = 0;
  virtual void exitFld_90a_B1_B(SwiftMtParser_MT535Parser::Fld_90a_B1_BContext *ctx) = 0;

  virtual void enterFld_90a_B1_E(SwiftMtParser_MT535Parser::Fld_90a_B1_EContext *ctx) = 0;
  virtual void exitFld_90a_B1_E(SwiftMtParser_MT535Parser::Fld_90a_B1_EContext *ctx) = 0;

  virtual void enterFld_94B_B1_B(SwiftMtParser_MT535Parser::Fld_94B_B1_BContext *ctx) = 0;
  virtual void exitFld_94B_B1_B(SwiftMtParser_MT535Parser::Fld_94B_B1_BContext *ctx) = 0;

  virtual void enterFld_98a_B1_A(SwiftMtParser_MT535Parser::Fld_98a_B1_AContext *ctx) = 0;
  virtual void exitFld_98a_B1_A(SwiftMtParser_MT535Parser::Fld_98a_B1_AContext *ctx) = 0;

  virtual void enterFld_98a_B1_C(SwiftMtParser_MT535Parser::Fld_98a_B1_CContext *ctx) = 0;
  virtual void exitFld_98a_B1_C(SwiftMtParser_MT535Parser::Fld_98a_B1_CContext *ctx) = 0;

  virtual void enterFld_93B_B1_B(SwiftMtParser_MT535Parser::Fld_93B_B1_BContext *ctx) = 0;
  virtual void exitFld_93B_B1_B(SwiftMtParser_MT535Parser::Fld_93B_B1_BContext *ctx) = 0;

  virtual void enterFld_93a_B1b_B(SwiftMtParser_MT535Parser::Fld_93a_B1b_BContext *ctx) = 0;
  virtual void exitFld_93a_B1b_B(SwiftMtParser_MT535Parser::Fld_93a_B1b_BContext *ctx) = 0;

  virtual void enterFld_93a_B1b_C(SwiftMtParser_MT535Parser::Fld_93a_B1b_CContext *ctx) = 0;
  virtual void exitFld_93a_B1b_C(SwiftMtParser_MT535Parser::Fld_93a_B1b_CContext *ctx) = 0;

  virtual void enterFld_22a_B1b_F(SwiftMtParser_MT535Parser::Fld_22a_B1b_FContext *ctx) = 0;
  virtual void exitFld_22a_B1b_F(SwiftMtParser_MT535Parser::Fld_22a_B1b_FContext *ctx) = 0;

  virtual void enterFld_22a_B1b_H(SwiftMtParser_MT535Parser::Fld_22a_B1b_HContext *ctx) = 0;
  virtual void exitFld_22a_B1b_H(SwiftMtParser_MT535Parser::Fld_22a_B1b_HContext *ctx) = 0;

  virtual void enterFld_94a_B1b_B(SwiftMtParser_MT535Parser::Fld_94a_B1b_BContext *ctx) = 0;
  virtual void exitFld_94a_B1b_B(SwiftMtParser_MT535Parser::Fld_94a_B1b_BContext *ctx) = 0;

  virtual void enterFld_94a_B1b_C(SwiftMtParser_MT535Parser::Fld_94a_B1b_CContext *ctx) = 0;
  virtual void exitFld_94a_B1b_C(SwiftMtParser_MT535Parser::Fld_94a_B1b_CContext *ctx) = 0;

  virtual void enterFld_94a_B1b_F(SwiftMtParser_MT535Parser::Fld_94a_B1b_FContext *ctx) = 0;
  virtual void exitFld_94a_B1b_F(SwiftMtParser_MT535Parser::Fld_94a_B1b_FContext *ctx) = 0;

  virtual void enterFld_94a_B1b_L(SwiftMtParser_MT535Parser::Fld_94a_B1b_LContext *ctx) = 0;
  virtual void exitFld_94a_B1b_L(SwiftMtParser_MT535Parser::Fld_94a_B1b_LContext *ctx) = 0;

  virtual void enterFld_90a_B1b_A(SwiftMtParser_MT535Parser::Fld_90a_B1b_AContext *ctx) = 0;
  virtual void exitFld_90a_B1b_A(SwiftMtParser_MT535Parser::Fld_90a_B1b_AContext *ctx) = 0;

  virtual void enterFld_90a_B1b_B(SwiftMtParser_MT535Parser::Fld_90a_B1b_BContext *ctx) = 0;
  virtual void exitFld_90a_B1b_B(SwiftMtParser_MT535Parser::Fld_90a_B1b_BContext *ctx) = 0;

  virtual void enterFld_90a_B1b_E(SwiftMtParser_MT535Parser::Fld_90a_B1b_EContext *ctx) = 0;
  virtual void exitFld_90a_B1b_E(SwiftMtParser_MT535Parser::Fld_90a_B1b_EContext *ctx) = 0;

  virtual void enterFld_98a_B1b_A(SwiftMtParser_MT535Parser::Fld_98a_B1b_AContext *ctx) = 0;
  virtual void exitFld_98a_B1b_A(SwiftMtParser_MT535Parser::Fld_98a_B1b_AContext *ctx) = 0;

  virtual void enterFld_98a_B1b_C(SwiftMtParser_MT535Parser::Fld_98a_B1b_CContext *ctx) = 0;
  virtual void exitFld_98a_B1b_C(SwiftMtParser_MT535Parser::Fld_98a_B1b_CContext *ctx) = 0;

  virtual void enterFld_99A_B1b_A(SwiftMtParser_MT535Parser::Fld_99A_B1b_AContext *ctx) = 0;
  virtual void exitFld_99A_B1b_A(SwiftMtParser_MT535Parser::Fld_99A_B1b_AContext *ctx) = 0;

  virtual void enterFld_19A_B1b_A(SwiftMtParser_MT535Parser::Fld_19A_B1b_AContext *ctx) = 0;
  virtual void exitFld_19A_B1b_A(SwiftMtParser_MT535Parser::Fld_19A_B1b_AContext *ctx) = 0;

  virtual void enterFld_92B_B1b_B(SwiftMtParser_MT535Parser::Fld_92B_B1b_BContext *ctx) = 0;
  virtual void exitFld_92B_B1b_B(SwiftMtParser_MT535Parser::Fld_92B_B1b_BContext *ctx) = 0;

  virtual void enterFld_70C_B1b_C(SwiftMtParser_MT535Parser::Fld_70C_B1b_CContext *ctx) = 0;
  virtual void exitFld_70C_B1b_C(SwiftMtParser_MT535Parser::Fld_70C_B1b_CContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::sr2018
