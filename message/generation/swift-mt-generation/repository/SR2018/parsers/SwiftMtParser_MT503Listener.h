
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT503Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT503.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT503Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT503Parser.
 */
class  SwiftMtParser_MT503Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT503Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT503Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT503Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT503Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT503Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT503Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT503Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT503Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT503Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT503Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT503Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT503Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT503Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT503Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT503Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT503Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT503Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT503Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT503Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT503Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT503Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT503Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT503Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT503Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT503Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT503Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT503Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT503Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_A2(SwiftMtParser_MT503Parser::Seq_A2Context *ctx) = 0;
  virtual void exitSeq_A2(SwiftMtParser_MT503Parser::Seq_A2Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT503Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT503Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT503Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT503Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT503Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT503Parser::Seq_CContext *ctx) = 0;

  virtual void enterSeq_C1(SwiftMtParser_MT503Parser::Seq_C1Context *ctx) = 0;
  virtual void exitSeq_C1(SwiftMtParser_MT503Parser::Seq_C1Context *ctx) = 0;

  virtual void enterSeq_C2(SwiftMtParser_MT503Parser::Seq_C2Context *ctx) = 0;
  virtual void exitSeq_C2(SwiftMtParser_MT503Parser::Seq_C2Context *ctx) = 0;

  virtual void enterSeq_C3(SwiftMtParser_MT503Parser::Seq_C3Context *ctx) = 0;
  virtual void exitSeq_C3(SwiftMtParser_MT503Parser::Seq_C3Context *ctx) = 0;

  virtual void enterSeq_D(SwiftMtParser_MT503Parser::Seq_DContext *ctx) = 0;
  virtual void exitSeq_D(SwiftMtParser_MT503Parser::Seq_DContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT503Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT503Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT503Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT503Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT503Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT503Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT503Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT503Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_22F_A1(SwiftMtParser_MT503Parser::Fld_22F_A1Context *ctx) = 0;
  virtual void exitFld_22F_A1(SwiftMtParser_MT503Parser::Fld_22F_A1Context *ctx) = 0;

  virtual void enterFld_98A_A1(SwiftMtParser_MT503Parser::Fld_98A_A1Context *ctx) = 0;
  virtual void exitFld_98A_A1(SwiftMtParser_MT503Parser::Fld_98A_A1Context *ctx) = 0;

  virtual void enterFld_13B_A1(SwiftMtParser_MT503Parser::Fld_13B_A1Context *ctx) = 0;
  virtual void exitFld_13B_A1(SwiftMtParser_MT503Parser::Fld_13B_A1Context *ctx) = 0;

  virtual void enterFld_70C_A1(SwiftMtParser_MT503Parser::Fld_70C_A1Context *ctx) = 0;
  virtual void exitFld_70C_A1(SwiftMtParser_MT503Parser::Fld_70C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT503Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT503Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT503Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT503Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_22a_A(SwiftMtParser_MT503Parser::Fld_22a_AContext *ctx) = 0;
  virtual void exitFld_22a_A(SwiftMtParser_MT503Parser::Fld_22a_AContext *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT503Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT503Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_70C_A(SwiftMtParser_MT503Parser::Fld_70C_AContext *ctx) = 0;
  virtual void exitFld_70C_A(SwiftMtParser_MT503Parser::Fld_70C_AContext *ctx) = 0;

  virtual void enterFld_16R_A2(SwiftMtParser_MT503Parser::Fld_16R_A2Context *ctx) = 0;
  virtual void exitFld_16R_A2(SwiftMtParser_MT503Parser::Fld_16R_A2Context *ctx) = 0;

  virtual void enterFld_13a_A2(SwiftMtParser_MT503Parser::Fld_13a_A2Context *ctx) = 0;
  virtual void exitFld_13a_A2(SwiftMtParser_MT503Parser::Fld_13a_A2Context *ctx) = 0;

  virtual void enterFld_20C_A2(SwiftMtParser_MT503Parser::Fld_20C_A2Context *ctx) = 0;
  virtual void exitFld_20C_A2(SwiftMtParser_MT503Parser::Fld_20C_A2Context *ctx) = 0;

  virtual void enterFld_16S_A2(SwiftMtParser_MT503Parser::Fld_16S_A2Context *ctx) = 0;
  virtual void exitFld_16S_A2(SwiftMtParser_MT503Parser::Fld_16S_A2Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT503Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT503Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT503Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT503Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_95a_B(SwiftMtParser_MT503Parser::Fld_95a_BContext *ctx) = 0;
  virtual void exitFld_95a_B(SwiftMtParser_MT503Parser::Fld_95a_BContext *ctx) = 0;

  virtual void enterFld_19B_B(SwiftMtParser_MT503Parser::Fld_19B_BContext *ctx) = 0;
  virtual void exitFld_19B_B(SwiftMtParser_MT503Parser::Fld_19B_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT503Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT503Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_19B_B1(SwiftMtParser_MT503Parser::Fld_19B_B1Context *ctx) = 0;
  virtual void exitFld_19B_B1(SwiftMtParser_MT503Parser::Fld_19B_B1Context *ctx) = 0;

  virtual void enterFld_98a_B1(SwiftMtParser_MT503Parser::Fld_98a_B1Context *ctx) = 0;
  virtual void exitFld_98a_B1(SwiftMtParser_MT503Parser::Fld_98a_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT503Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT503Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT503Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT503Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT503Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT503Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_20C_C(SwiftMtParser_MT503Parser::Fld_20C_CContext *ctx) = 0;
  virtual void exitFld_20C_C(SwiftMtParser_MT503Parser::Fld_20C_CContext *ctx) = 0;

  virtual void enterFld_22a_C(SwiftMtParser_MT503Parser::Fld_22a_CContext *ctx) = 0;
  virtual void exitFld_22a_C(SwiftMtParser_MT503Parser::Fld_22a_CContext *ctx) = 0;

  virtual void enterFld_98A_C(SwiftMtParser_MT503Parser::Fld_98A_CContext *ctx) = 0;
  virtual void exitFld_98A_C(SwiftMtParser_MT503Parser::Fld_98A_CContext *ctx) = 0;

  virtual void enterFld_16R_C1(SwiftMtParser_MT503Parser::Fld_16R_C1Context *ctx) = 0;
  virtual void exitFld_16R_C1(SwiftMtParser_MT503Parser::Fld_16R_C1Context *ctx) = 0;

  virtual void enterFld_35B_C1(SwiftMtParser_MT503Parser::Fld_35B_C1Context *ctx) = 0;
  virtual void exitFld_35B_C1(SwiftMtParser_MT503Parser::Fld_35B_C1Context *ctx) = 0;

  virtual void enterFld_36B_C1(SwiftMtParser_MT503Parser::Fld_36B_C1Context *ctx) = 0;
  virtual void exitFld_36B_C1(SwiftMtParser_MT503Parser::Fld_36B_C1Context *ctx) = 0;

  virtual void enterFld_17B_C1(SwiftMtParser_MT503Parser::Fld_17B_C1Context *ctx) = 0;
  virtual void exitFld_17B_C1(SwiftMtParser_MT503Parser::Fld_17B_C1Context *ctx) = 0;

  virtual void enterFld_16S_C1(SwiftMtParser_MT503Parser::Fld_16S_C1Context *ctx) = 0;
  virtual void exitFld_16S_C1(SwiftMtParser_MT503Parser::Fld_16S_C1Context *ctx) = 0;

  virtual void enterFld_16R_C2(SwiftMtParser_MT503Parser::Fld_16R_C2Context *ctx) = 0;
  virtual void exitFld_16R_C2(SwiftMtParser_MT503Parser::Fld_16R_C2Context *ctx) = 0;

  virtual void enterFld_19B_C2(SwiftMtParser_MT503Parser::Fld_19B_C2Context *ctx) = 0;
  virtual void exitFld_19B_C2(SwiftMtParser_MT503Parser::Fld_19B_C2Context *ctx) = 0;

  virtual void enterFld_22H_C2(SwiftMtParser_MT503Parser::Fld_22H_C2Context *ctx) = 0;
  virtual void exitFld_22H_C2(SwiftMtParser_MT503Parser::Fld_22H_C2Context *ctx) = 0;

  virtual void enterFld_98A_C2(SwiftMtParser_MT503Parser::Fld_98A_C2Context *ctx) = 0;
  virtual void exitFld_98A_C2(SwiftMtParser_MT503Parser::Fld_98A_C2Context *ctx) = 0;

  virtual void enterFld_16S_C2(SwiftMtParser_MT503Parser::Fld_16S_C2Context *ctx) = 0;
  virtual void exitFld_16S_C2(SwiftMtParser_MT503Parser::Fld_16S_C2Context *ctx) = 0;

  virtual void enterFld_16R_C3(SwiftMtParser_MT503Parser::Fld_16R_C3Context *ctx) = 0;
  virtual void exitFld_16R_C3(SwiftMtParser_MT503Parser::Fld_16R_C3Context *ctx) = 0;

  virtual void enterFld_22H_C3(SwiftMtParser_MT503Parser::Fld_22H_C3Context *ctx) = 0;
  virtual void exitFld_22H_C3(SwiftMtParser_MT503Parser::Fld_22H_C3Context *ctx) = 0;

  virtual void enterFld_98a_C3(SwiftMtParser_MT503Parser::Fld_98a_C3Context *ctx) = 0;
  virtual void exitFld_98a_C3(SwiftMtParser_MT503Parser::Fld_98a_C3Context *ctx) = 0;

  virtual void enterFld_95a_C3(SwiftMtParser_MT503Parser::Fld_95a_C3Context *ctx) = 0;
  virtual void exitFld_95a_C3(SwiftMtParser_MT503Parser::Fld_95a_C3Context *ctx) = 0;

  virtual void enterFld_19B_C3(SwiftMtParser_MT503Parser::Fld_19B_C3Context *ctx) = 0;
  virtual void exitFld_19B_C3(SwiftMtParser_MT503Parser::Fld_19B_C3Context *ctx) = 0;

  virtual void enterFld_16S_C3(SwiftMtParser_MT503Parser::Fld_16S_C3Context *ctx) = 0;
  virtual void exitFld_16S_C3(SwiftMtParser_MT503Parser::Fld_16S_C3Context *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT503Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT503Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_16R_D(SwiftMtParser_MT503Parser::Fld_16R_DContext *ctx) = 0;
  virtual void exitFld_16R_D(SwiftMtParser_MT503Parser::Fld_16R_DContext *ctx) = 0;

  virtual void enterFld_95a_D(SwiftMtParser_MT503Parser::Fld_95a_DContext *ctx) = 0;
  virtual void exitFld_95a_D(SwiftMtParser_MT503Parser::Fld_95a_DContext *ctx) = 0;

  virtual void enterFld_16S_D(SwiftMtParser_MT503Parser::Fld_16S_DContext *ctx) = 0;
  virtual void exitFld_16S_D(SwiftMtParser_MT503Parser::Fld_16S_DContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT503Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT503Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT503Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT503Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_22F_A1_F(SwiftMtParser_MT503Parser::Fld_22F_A1_FContext *ctx) = 0;
  virtual void exitFld_22F_A1_F(SwiftMtParser_MT503Parser::Fld_22F_A1_FContext *ctx) = 0;

  virtual void enterFld_98A_A1_A(SwiftMtParser_MT503Parser::Fld_98A_A1_AContext *ctx) = 0;
  virtual void exitFld_98A_A1_A(SwiftMtParser_MT503Parser::Fld_98A_A1_AContext *ctx) = 0;

  virtual void enterFld_13B_A1_B(SwiftMtParser_MT503Parser::Fld_13B_A1_BContext *ctx) = 0;
  virtual void exitFld_13B_A1_B(SwiftMtParser_MT503Parser::Fld_13B_A1_BContext *ctx) = 0;

  virtual void enterFld_70C_A1_C(SwiftMtParser_MT503Parser::Fld_70C_A1_CContext *ctx) = 0;
  virtual void exitFld_70C_A1_C(SwiftMtParser_MT503Parser::Fld_70C_A1_CContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT503Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT503Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT503Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT503Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT503Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT503Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_22a_A_F(SwiftMtParser_MT503Parser::Fld_22a_A_FContext *ctx) = 0;
  virtual void exitFld_22a_A_F(SwiftMtParser_MT503Parser::Fld_22a_A_FContext *ctx) = 0;

  virtual void enterFld_22a_A_H(SwiftMtParser_MT503Parser::Fld_22a_A_HContext *ctx) = 0;
  virtual void exitFld_22a_A_H(SwiftMtParser_MT503Parser::Fld_22a_A_HContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT503Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT503Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_Q(SwiftMtParser_MT503Parser::Fld_95a_A_QContext *ctx) = 0;
  virtual void exitFld_95a_A_Q(SwiftMtParser_MT503Parser::Fld_95a_A_QContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT503Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT503Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_70C_A_C(SwiftMtParser_MT503Parser::Fld_70C_A_CContext *ctx) = 0;
  virtual void exitFld_70C_A_C(SwiftMtParser_MT503Parser::Fld_70C_A_CContext *ctx) = 0;

  virtual void enterFld_13a_A2_A(SwiftMtParser_MT503Parser::Fld_13a_A2_AContext *ctx) = 0;
  virtual void exitFld_13a_A2_A(SwiftMtParser_MT503Parser::Fld_13a_A2_AContext *ctx) = 0;

  virtual void enterFld_13a_A2_B(SwiftMtParser_MT503Parser::Fld_13a_A2_BContext *ctx) = 0;
  virtual void exitFld_13a_A2_B(SwiftMtParser_MT503Parser::Fld_13a_A2_BContext *ctx) = 0;

  virtual void enterFld_20C_A2_C(SwiftMtParser_MT503Parser::Fld_20C_A2_CContext *ctx) = 0;
  virtual void exitFld_20C_A2_C(SwiftMtParser_MT503Parser::Fld_20C_A2_CContext *ctx) = 0;

  virtual void enterFld_95a_B_P(SwiftMtParser_MT503Parser::Fld_95a_B_PContext *ctx) = 0;
  virtual void exitFld_95a_B_P(SwiftMtParser_MT503Parser::Fld_95a_B_PContext *ctx) = 0;

  virtual void enterFld_95a_B_Q(SwiftMtParser_MT503Parser::Fld_95a_B_QContext *ctx) = 0;
  virtual void exitFld_95a_B_Q(SwiftMtParser_MT503Parser::Fld_95a_B_QContext *ctx) = 0;

  virtual void enterFld_95a_B_R(SwiftMtParser_MT503Parser::Fld_95a_B_RContext *ctx) = 0;
  virtual void exitFld_95a_B_R(SwiftMtParser_MT503Parser::Fld_95a_B_RContext *ctx) = 0;

  virtual void enterFld_19B_B_B(SwiftMtParser_MT503Parser::Fld_19B_B_BContext *ctx) = 0;
  virtual void exitFld_19B_B_B(SwiftMtParser_MT503Parser::Fld_19B_B_BContext *ctx) = 0;

  virtual void enterFld_19B_B1_B(SwiftMtParser_MT503Parser::Fld_19B_B1_BContext *ctx) = 0;
  virtual void exitFld_19B_B1_B(SwiftMtParser_MT503Parser::Fld_19B_B1_BContext *ctx) = 0;

  virtual void enterFld_98a_B1_A(SwiftMtParser_MT503Parser::Fld_98a_B1_AContext *ctx) = 0;
  virtual void exitFld_98a_B1_A(SwiftMtParser_MT503Parser::Fld_98a_B1_AContext *ctx) = 0;

  virtual void enterFld_98a_B1_C(SwiftMtParser_MT503Parser::Fld_98a_B1_CContext *ctx) = 0;
  virtual void exitFld_98a_B1_C(SwiftMtParser_MT503Parser::Fld_98a_B1_CContext *ctx) = 0;

  virtual void enterFld_20C_C_C(SwiftMtParser_MT503Parser::Fld_20C_C_CContext *ctx) = 0;
  virtual void exitFld_20C_C_C(SwiftMtParser_MT503Parser::Fld_20C_C_CContext *ctx) = 0;

  virtual void enterFld_22a_C_F(SwiftMtParser_MT503Parser::Fld_22a_C_FContext *ctx) = 0;
  virtual void exitFld_22a_C_F(SwiftMtParser_MT503Parser::Fld_22a_C_FContext *ctx) = 0;

  virtual void enterFld_22a_C_H(SwiftMtParser_MT503Parser::Fld_22a_C_HContext *ctx) = 0;
  virtual void exitFld_22a_C_H(SwiftMtParser_MT503Parser::Fld_22a_C_HContext *ctx) = 0;

  virtual void enterFld_98A_C_A(SwiftMtParser_MT503Parser::Fld_98A_C_AContext *ctx) = 0;
  virtual void exitFld_98A_C_A(SwiftMtParser_MT503Parser::Fld_98A_C_AContext *ctx) = 0;

  virtual void enterFld_35B_C1_B(SwiftMtParser_MT503Parser::Fld_35B_C1_BContext *ctx) = 0;
  virtual void exitFld_35B_C1_B(SwiftMtParser_MT503Parser::Fld_35B_C1_BContext *ctx) = 0;

  virtual void enterFld_36B_C1_B(SwiftMtParser_MT503Parser::Fld_36B_C1_BContext *ctx) = 0;
  virtual void exitFld_36B_C1_B(SwiftMtParser_MT503Parser::Fld_36B_C1_BContext *ctx) = 0;

  virtual void enterFld_17B_C1_B(SwiftMtParser_MT503Parser::Fld_17B_C1_BContext *ctx) = 0;
  virtual void exitFld_17B_C1_B(SwiftMtParser_MT503Parser::Fld_17B_C1_BContext *ctx) = 0;

  virtual void enterFld_19B_C2_B(SwiftMtParser_MT503Parser::Fld_19B_C2_BContext *ctx) = 0;
  virtual void exitFld_19B_C2_B(SwiftMtParser_MT503Parser::Fld_19B_C2_BContext *ctx) = 0;

  virtual void enterFld_22H_C2_H(SwiftMtParser_MT503Parser::Fld_22H_C2_HContext *ctx) = 0;
  virtual void exitFld_22H_C2_H(SwiftMtParser_MT503Parser::Fld_22H_C2_HContext *ctx) = 0;

  virtual void enterFld_98A_C2_A(SwiftMtParser_MT503Parser::Fld_98A_C2_AContext *ctx) = 0;
  virtual void exitFld_98A_C2_A(SwiftMtParser_MT503Parser::Fld_98A_C2_AContext *ctx) = 0;

  virtual void enterFld_22H_C3_H(SwiftMtParser_MT503Parser::Fld_22H_C3_HContext *ctx) = 0;
  virtual void exitFld_22H_C3_H(SwiftMtParser_MT503Parser::Fld_22H_C3_HContext *ctx) = 0;

  virtual void enterFld_98a_C3_A(SwiftMtParser_MT503Parser::Fld_98a_C3_AContext *ctx) = 0;
  virtual void exitFld_98a_C3_A(SwiftMtParser_MT503Parser::Fld_98a_C3_AContext *ctx) = 0;

  virtual void enterFld_98a_C3_B(SwiftMtParser_MT503Parser::Fld_98a_C3_BContext *ctx) = 0;
  virtual void exitFld_98a_C3_B(SwiftMtParser_MT503Parser::Fld_98a_C3_BContext *ctx) = 0;

  virtual void enterFld_95a_C3_P(SwiftMtParser_MT503Parser::Fld_95a_C3_PContext *ctx) = 0;
  virtual void exitFld_95a_C3_P(SwiftMtParser_MT503Parser::Fld_95a_C3_PContext *ctx) = 0;

  virtual void enterFld_95a_C3_Q(SwiftMtParser_MT503Parser::Fld_95a_C3_QContext *ctx) = 0;
  virtual void exitFld_95a_C3_Q(SwiftMtParser_MT503Parser::Fld_95a_C3_QContext *ctx) = 0;

  virtual void enterFld_95a_C3_R(SwiftMtParser_MT503Parser::Fld_95a_C3_RContext *ctx) = 0;
  virtual void exitFld_95a_C3_R(SwiftMtParser_MT503Parser::Fld_95a_C3_RContext *ctx) = 0;

  virtual void enterFld_19B_C3_B(SwiftMtParser_MT503Parser::Fld_19B_C3_BContext *ctx) = 0;
  virtual void exitFld_19B_C3_B(SwiftMtParser_MT503Parser::Fld_19B_C3_BContext *ctx) = 0;

  virtual void enterFld_95a_D_P(SwiftMtParser_MT503Parser::Fld_95a_D_PContext *ctx) = 0;
  virtual void exitFld_95a_D_P(SwiftMtParser_MT503Parser::Fld_95a_D_PContext *ctx) = 0;

  virtual void enterFld_95a_D_Q(SwiftMtParser_MT503Parser::Fld_95a_D_QContext *ctx) = 0;
  virtual void exitFld_95a_D_Q(SwiftMtParser_MT503Parser::Fld_95a_D_QContext *ctx) = 0;

  virtual void enterFld_95a_D_R(SwiftMtParser_MT503Parser::Fld_95a_D_RContext *ctx) = 0;
  virtual void exitFld_95a_D_R(SwiftMtParser_MT503Parser::Fld_95a_D_RContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
