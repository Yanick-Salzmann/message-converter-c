
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT546Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT546.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT546Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT546Parser.
 */
class  SwiftMtParser_MT546Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT546Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT546Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT546Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT546Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT546Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT546Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT546Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT546Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT546Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT546Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT546Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT546Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT546Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT546Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT546Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT546Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT546Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT546Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT546Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT546Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT546Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT546Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT546Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT546Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT546Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT546Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT546Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT546Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT546Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT546Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT546Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT546Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT546Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT546Parser::Seq_CContext *ctx) = 0;

  virtual void enterSeq_C1(SwiftMtParser_MT546Parser::Seq_C1Context *ctx) = 0;
  virtual void exitSeq_C1(SwiftMtParser_MT546Parser::Seq_C1Context *ctx) = 0;

  virtual void enterSeq_D(SwiftMtParser_MT546Parser::Seq_DContext *ctx) = 0;
  virtual void exitSeq_D(SwiftMtParser_MT546Parser::Seq_DContext *ctx) = 0;

  virtual void enterSeq_E(SwiftMtParser_MT546Parser::Seq_EContext *ctx) = 0;
  virtual void exitSeq_E(SwiftMtParser_MT546Parser::Seq_EContext *ctx) = 0;

  virtual void enterSeq_E1(SwiftMtParser_MT546Parser::Seq_E1Context *ctx) = 0;
  virtual void exitSeq_E1(SwiftMtParser_MT546Parser::Seq_E1Context *ctx) = 0;

  virtual void enterSeq_E2(SwiftMtParser_MT546Parser::Seq_E2Context *ctx) = 0;
  virtual void exitSeq_E2(SwiftMtParser_MT546Parser::Seq_E2Context *ctx) = 0;

  virtual void enterSeq_E3(SwiftMtParser_MT546Parser::Seq_E3Context *ctx) = 0;
  virtual void exitSeq_E3(SwiftMtParser_MT546Parser::Seq_E3Context *ctx) = 0;

  virtual void enterSeq_F(SwiftMtParser_MT546Parser::Seq_FContext *ctx) = 0;
  virtual void exitSeq_F(SwiftMtParser_MT546Parser::Seq_FContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT546Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT546Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT546Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT546Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT546Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT546Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT546Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT546Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_22a_A(SwiftMtParser_MT546Parser::Fld_22a_AContext *ctx) = 0;
  virtual void exitFld_22a_A(SwiftMtParser_MT546Parser::Fld_22a_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT546Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT546Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_22F_A1(SwiftMtParser_MT546Parser::Fld_22F_A1Context *ctx) = 0;
  virtual void exitFld_22F_A1(SwiftMtParser_MT546Parser::Fld_22F_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT546Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT546Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT546Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT546Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT546Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT546Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT546Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT546Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT546Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT546Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_94a_B(SwiftMtParser_MT546Parser::Fld_94a_BContext *ctx) = 0;
  virtual void exitFld_94a_B(SwiftMtParser_MT546Parser::Fld_94a_BContext *ctx) = 0;

  virtual void enterFld_98a_B(SwiftMtParser_MT546Parser::Fld_98a_BContext *ctx) = 0;
  virtual void exitFld_98a_B(SwiftMtParser_MT546Parser::Fld_98a_BContext *ctx) = 0;

  virtual void enterFld_90a_B(SwiftMtParser_MT546Parser::Fld_90a_BContext *ctx) = 0;
  virtual void exitFld_90a_B(SwiftMtParser_MT546Parser::Fld_90a_BContext *ctx) = 0;

  virtual void enterFld_99A_B(SwiftMtParser_MT546Parser::Fld_99A_BContext *ctx) = 0;
  virtual void exitFld_99A_B(SwiftMtParser_MT546Parser::Fld_99A_BContext *ctx) = 0;

  virtual void enterFld_35B_B(SwiftMtParser_MT546Parser::Fld_35B_BContext *ctx) = 0;
  virtual void exitFld_35B_B(SwiftMtParser_MT546Parser::Fld_35B_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT546Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT546Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_94B_B1(SwiftMtParser_MT546Parser::Fld_94B_B1Context *ctx) = 0;
  virtual void exitFld_94B_B1(SwiftMtParser_MT546Parser::Fld_94B_B1Context *ctx) = 0;

  virtual void enterFld_22F_B1(SwiftMtParser_MT546Parser::Fld_22F_B1Context *ctx) = 0;
  virtual void exitFld_22F_B1(SwiftMtParser_MT546Parser::Fld_22F_B1Context *ctx) = 0;

  virtual void enterFld_12a_B1(SwiftMtParser_MT546Parser::Fld_12a_B1Context *ctx) = 0;
  virtual void exitFld_12a_B1(SwiftMtParser_MT546Parser::Fld_12a_B1Context *ctx) = 0;

  virtual void enterFld_11A_B1(SwiftMtParser_MT546Parser::Fld_11A_B1Context *ctx) = 0;
  virtual void exitFld_11A_B1(SwiftMtParser_MT546Parser::Fld_11A_B1Context *ctx) = 0;

  virtual void enterFld_98A_B1(SwiftMtParser_MT546Parser::Fld_98A_B1Context *ctx) = 0;
  virtual void exitFld_98A_B1(SwiftMtParser_MT546Parser::Fld_98A_B1Context *ctx) = 0;

  virtual void enterFld_92A_B1(SwiftMtParser_MT546Parser::Fld_92A_B1Context *ctx) = 0;
  virtual void exitFld_92A_B1(SwiftMtParser_MT546Parser::Fld_92A_B1Context *ctx) = 0;

  virtual void enterFld_13a_B1(SwiftMtParser_MT546Parser::Fld_13a_B1Context *ctx) = 0;
  virtual void exitFld_13a_B1(SwiftMtParser_MT546Parser::Fld_13a_B1Context *ctx) = 0;

  virtual void enterFld_17B_B1(SwiftMtParser_MT546Parser::Fld_17B_B1Context *ctx) = 0;
  virtual void exitFld_17B_B1(SwiftMtParser_MT546Parser::Fld_17B_B1Context *ctx) = 0;

  virtual void enterFld_90a_B1(SwiftMtParser_MT546Parser::Fld_90a_B1Context *ctx) = 0;
  virtual void exitFld_90a_B1(SwiftMtParser_MT546Parser::Fld_90a_B1Context *ctx) = 0;

  virtual void enterFld_36B_B1(SwiftMtParser_MT546Parser::Fld_36B_B1Context *ctx) = 0;
  virtual void exitFld_36B_B1(SwiftMtParser_MT546Parser::Fld_36B_B1Context *ctx) = 0;

  virtual void enterFld_35B_B1(SwiftMtParser_MT546Parser::Fld_35B_B1Context *ctx) = 0;
  virtual void exitFld_35B_B1(SwiftMtParser_MT546Parser::Fld_35B_B1Context *ctx) = 0;

  virtual void enterFld_70E_B1(SwiftMtParser_MT546Parser::Fld_70E_B1Context *ctx) = 0;
  virtual void exitFld_70E_B1(SwiftMtParser_MT546Parser::Fld_70E_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT546Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT546Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_22F_B(SwiftMtParser_MT546Parser::Fld_22F_BContext *ctx) = 0;
  virtual void exitFld_22F_B(SwiftMtParser_MT546Parser::Fld_22F_BContext *ctx) = 0;

  virtual void enterFld_70E_B(SwiftMtParser_MT546Parser::Fld_70E_BContext *ctx) = 0;
  virtual void exitFld_70E_B(SwiftMtParser_MT546Parser::Fld_70E_BContext *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT546Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT546Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT546Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT546Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_36B_C(SwiftMtParser_MT546Parser::Fld_36B_CContext *ctx) = 0;
  virtual void exitFld_36B_C(SwiftMtParser_MT546Parser::Fld_36B_CContext *ctx) = 0;

  virtual void enterFld_19A_C(SwiftMtParser_MT546Parser::Fld_19A_CContext *ctx) = 0;
  virtual void exitFld_19A_C(SwiftMtParser_MT546Parser::Fld_19A_CContext *ctx) = 0;

  virtual void enterFld_70D_C(SwiftMtParser_MT546Parser::Fld_70D_CContext *ctx) = 0;
  virtual void exitFld_70D_C(SwiftMtParser_MT546Parser::Fld_70D_CContext *ctx) = 0;

  virtual void enterFld_13B_C(SwiftMtParser_MT546Parser::Fld_13B_CContext *ctx) = 0;
  virtual void exitFld_13B_C(SwiftMtParser_MT546Parser::Fld_13B_CContext *ctx) = 0;

  virtual void enterFld_95a_C(SwiftMtParser_MT546Parser::Fld_95a_CContext *ctx) = 0;
  virtual void exitFld_95a_C(SwiftMtParser_MT546Parser::Fld_95a_CContext *ctx) = 0;

  virtual void enterFld_97a_C(SwiftMtParser_MT546Parser::Fld_97a_CContext *ctx) = 0;
  virtual void exitFld_97a_C(SwiftMtParser_MT546Parser::Fld_97a_CContext *ctx) = 0;

  virtual void enterFld_94a_C(SwiftMtParser_MT546Parser::Fld_94a_CContext *ctx) = 0;
  virtual void exitFld_94a_C(SwiftMtParser_MT546Parser::Fld_94a_CContext *ctx) = 0;

  virtual void enterFld_16R_C1(SwiftMtParser_MT546Parser::Fld_16R_C1Context *ctx) = 0;
  virtual void exitFld_16R_C1(SwiftMtParser_MT546Parser::Fld_16R_C1Context *ctx) = 0;

  virtual void enterFld_13B_C1(SwiftMtParser_MT546Parser::Fld_13B_C1Context *ctx) = 0;
  virtual void exitFld_13B_C1(SwiftMtParser_MT546Parser::Fld_13B_C1Context *ctx) = 0;

  virtual void enterFld_36B_C1(SwiftMtParser_MT546Parser::Fld_36B_C1Context *ctx) = 0;
  virtual void exitFld_36B_C1(SwiftMtParser_MT546Parser::Fld_36B_C1Context *ctx) = 0;

  virtual void enterFld_98a_C1(SwiftMtParser_MT546Parser::Fld_98a_C1Context *ctx) = 0;
  virtual void exitFld_98a_C1(SwiftMtParser_MT546Parser::Fld_98a_C1Context *ctx) = 0;

  virtual void enterFld_90a_C1(SwiftMtParser_MT546Parser::Fld_90a_C1Context *ctx) = 0;
  virtual void exitFld_90a_C1(SwiftMtParser_MT546Parser::Fld_90a_C1Context *ctx) = 0;

  virtual void enterFld_22F_C1(SwiftMtParser_MT546Parser::Fld_22F_C1Context *ctx) = 0;
  virtual void exitFld_22F_C1(SwiftMtParser_MT546Parser::Fld_22F_C1Context *ctx) = 0;

  virtual void enterFld_16S_C1(SwiftMtParser_MT546Parser::Fld_16S_C1Context *ctx) = 0;
  virtual void exitFld_16S_C1(SwiftMtParser_MT546Parser::Fld_16S_C1Context *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT546Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT546Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_16R_D(SwiftMtParser_MT546Parser::Fld_16R_DContext *ctx) = 0;
  virtual void exitFld_16R_D(SwiftMtParser_MT546Parser::Fld_16R_DContext *ctx) = 0;

  virtual void enterFld_98a_D(SwiftMtParser_MT546Parser::Fld_98a_DContext *ctx) = 0;
  virtual void exitFld_98a_D(SwiftMtParser_MT546Parser::Fld_98a_DContext *ctx) = 0;

  virtual void enterFld_22F_D(SwiftMtParser_MT546Parser::Fld_22F_DContext *ctx) = 0;
  virtual void exitFld_22F_D(SwiftMtParser_MT546Parser::Fld_22F_DContext *ctx) = 0;

  virtual void enterFld_20C_D(SwiftMtParser_MT546Parser::Fld_20C_DContext *ctx) = 0;
  virtual void exitFld_20C_D(SwiftMtParser_MT546Parser::Fld_20C_DContext *ctx) = 0;

  virtual void enterFld_92a_D(SwiftMtParser_MT546Parser::Fld_92a_DContext *ctx) = 0;
  virtual void exitFld_92a_D(SwiftMtParser_MT546Parser::Fld_92a_DContext *ctx) = 0;

  virtual void enterFld_99B_D(SwiftMtParser_MT546Parser::Fld_99B_DContext *ctx) = 0;
  virtual void exitFld_99B_D(SwiftMtParser_MT546Parser::Fld_99B_DContext *ctx) = 0;

  virtual void enterFld_19A_D(SwiftMtParser_MT546Parser::Fld_19A_DContext *ctx) = 0;
  virtual void exitFld_19A_D(SwiftMtParser_MT546Parser::Fld_19A_DContext *ctx) = 0;

  virtual void enterFld_70C_D(SwiftMtParser_MT546Parser::Fld_70C_DContext *ctx) = 0;
  virtual void exitFld_70C_D(SwiftMtParser_MT546Parser::Fld_70C_DContext *ctx) = 0;

  virtual void enterFld_16S_D(SwiftMtParser_MT546Parser::Fld_16S_DContext *ctx) = 0;
  virtual void exitFld_16S_D(SwiftMtParser_MT546Parser::Fld_16S_DContext *ctx) = 0;

  virtual void enterFld_16R_E(SwiftMtParser_MT546Parser::Fld_16R_EContext *ctx) = 0;
  virtual void exitFld_16R_E(SwiftMtParser_MT546Parser::Fld_16R_EContext *ctx) = 0;

  virtual void enterFld_22F_E(SwiftMtParser_MT546Parser::Fld_22F_EContext *ctx) = 0;
  virtual void exitFld_22F_E(SwiftMtParser_MT546Parser::Fld_22F_EContext *ctx) = 0;

  virtual void enterFld_16R_E1(SwiftMtParser_MT546Parser::Fld_16R_E1Context *ctx) = 0;
  virtual void exitFld_16R_E1(SwiftMtParser_MT546Parser::Fld_16R_E1Context *ctx) = 0;

  virtual void enterFld_95a_E1(SwiftMtParser_MT546Parser::Fld_95a_E1Context *ctx) = 0;
  virtual void exitFld_95a_E1(SwiftMtParser_MT546Parser::Fld_95a_E1Context *ctx) = 0;

  virtual void enterFld_97a_E1(SwiftMtParser_MT546Parser::Fld_97a_E1Context *ctx) = 0;
  virtual void exitFld_97a_E1(SwiftMtParser_MT546Parser::Fld_97a_E1Context *ctx) = 0;

  virtual void enterFld_98a_E1(SwiftMtParser_MT546Parser::Fld_98a_E1Context *ctx) = 0;
  virtual void exitFld_98a_E1(SwiftMtParser_MT546Parser::Fld_98a_E1Context *ctx) = 0;

  virtual void enterFld_20C_E1(SwiftMtParser_MT546Parser::Fld_20C_E1Context *ctx) = 0;
  virtual void exitFld_20C_E1(SwiftMtParser_MT546Parser::Fld_20C_E1Context *ctx) = 0;

  virtual void enterFld_70a_E1(SwiftMtParser_MT546Parser::Fld_70a_E1Context *ctx) = 0;
  virtual void exitFld_70a_E1(SwiftMtParser_MT546Parser::Fld_70a_E1Context *ctx) = 0;

  virtual void enterFld_16S_E1(SwiftMtParser_MT546Parser::Fld_16S_E1Context *ctx) = 0;
  virtual void exitFld_16S_E1(SwiftMtParser_MT546Parser::Fld_16S_E1Context *ctx) = 0;

  virtual void enterFld_16R_E2(SwiftMtParser_MT546Parser::Fld_16R_E2Context *ctx) = 0;
  virtual void exitFld_16R_E2(SwiftMtParser_MT546Parser::Fld_16R_E2Context *ctx) = 0;

  virtual void enterFld_95a_E2(SwiftMtParser_MT546Parser::Fld_95a_E2Context *ctx) = 0;
  virtual void exitFld_95a_E2(SwiftMtParser_MT546Parser::Fld_95a_E2Context *ctx) = 0;

  virtual void enterFld_97a_E2(SwiftMtParser_MT546Parser::Fld_97a_E2Context *ctx) = 0;
  virtual void exitFld_97a_E2(SwiftMtParser_MT546Parser::Fld_97a_E2Context *ctx) = 0;

  virtual void enterFld_20C_E2(SwiftMtParser_MT546Parser::Fld_20C_E2Context *ctx) = 0;
  virtual void exitFld_20C_E2(SwiftMtParser_MT546Parser::Fld_20C_E2Context *ctx) = 0;

  virtual void enterFld_70a_E2(SwiftMtParser_MT546Parser::Fld_70a_E2Context *ctx) = 0;
  virtual void exitFld_70a_E2(SwiftMtParser_MT546Parser::Fld_70a_E2Context *ctx) = 0;

  virtual void enterFld_16S_E2(SwiftMtParser_MT546Parser::Fld_16S_E2Context *ctx) = 0;
  virtual void exitFld_16S_E2(SwiftMtParser_MT546Parser::Fld_16S_E2Context *ctx) = 0;

  virtual void enterFld_16R_E3(SwiftMtParser_MT546Parser::Fld_16R_E3Context *ctx) = 0;
  virtual void exitFld_16R_E3(SwiftMtParser_MT546Parser::Fld_16R_E3Context *ctx) = 0;

  virtual void enterFld_17B_E3(SwiftMtParser_MT546Parser::Fld_17B_E3Context *ctx) = 0;
  virtual void exitFld_17B_E3(SwiftMtParser_MT546Parser::Fld_17B_E3Context *ctx) = 0;

  virtual void enterFld_19A_E3(SwiftMtParser_MT546Parser::Fld_19A_E3Context *ctx) = 0;
  virtual void exitFld_19A_E3(SwiftMtParser_MT546Parser::Fld_19A_E3Context *ctx) = 0;

  virtual void enterFld_98a_E3(SwiftMtParser_MT546Parser::Fld_98a_E3Context *ctx) = 0;
  virtual void exitFld_98a_E3(SwiftMtParser_MT546Parser::Fld_98a_E3Context *ctx) = 0;

  virtual void enterFld_92B_E3(SwiftMtParser_MT546Parser::Fld_92B_E3Context *ctx) = 0;
  virtual void exitFld_92B_E3(SwiftMtParser_MT546Parser::Fld_92B_E3Context *ctx) = 0;

  virtual void enterFld_16S_E3(SwiftMtParser_MT546Parser::Fld_16S_E3Context *ctx) = 0;
  virtual void exitFld_16S_E3(SwiftMtParser_MT546Parser::Fld_16S_E3Context *ctx) = 0;

  virtual void enterFld_16S_E(SwiftMtParser_MT546Parser::Fld_16S_EContext *ctx) = 0;
  virtual void exitFld_16S_E(SwiftMtParser_MT546Parser::Fld_16S_EContext *ctx) = 0;

  virtual void enterFld_16R_F(SwiftMtParser_MT546Parser::Fld_16R_FContext *ctx) = 0;
  virtual void exitFld_16R_F(SwiftMtParser_MT546Parser::Fld_16R_FContext *ctx) = 0;

  virtual void enterFld_95a_F(SwiftMtParser_MT546Parser::Fld_95a_FContext *ctx) = 0;
  virtual void exitFld_95a_F(SwiftMtParser_MT546Parser::Fld_95a_FContext *ctx) = 0;

  virtual void enterFld_97A_F(SwiftMtParser_MT546Parser::Fld_97A_FContext *ctx) = 0;
  virtual void exitFld_97A_F(SwiftMtParser_MT546Parser::Fld_97A_FContext *ctx) = 0;

  virtual void enterFld_70a_F(SwiftMtParser_MT546Parser::Fld_70a_FContext *ctx) = 0;
  virtual void exitFld_70a_F(SwiftMtParser_MT546Parser::Fld_70a_FContext *ctx) = 0;

  virtual void enterFld_20C_F(SwiftMtParser_MT546Parser::Fld_20C_FContext *ctx) = 0;
  virtual void exitFld_20C_F(SwiftMtParser_MT546Parser::Fld_20C_FContext *ctx) = 0;

  virtual void enterFld_16S_F(SwiftMtParser_MT546Parser::Fld_16S_FContext *ctx) = 0;
  virtual void exitFld_16S_F(SwiftMtParser_MT546Parser::Fld_16S_FContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT546Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT546Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT546Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT546Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT546Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT546Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT546Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT546Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT546Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT546Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_22a_A_F(SwiftMtParser_MT546Parser::Fld_22a_A_FContext *ctx) = 0;
  virtual void exitFld_22a_A_F(SwiftMtParser_MT546Parser::Fld_22a_A_FContext *ctx) = 0;

  virtual void enterFld_22a_A_H(SwiftMtParser_MT546Parser::Fld_22a_A_HContext *ctx) = 0;
  virtual void exitFld_22a_A_H(SwiftMtParser_MT546Parser::Fld_22a_A_HContext *ctx) = 0;

  virtual void enterFld_22F_A1_F(SwiftMtParser_MT546Parser::Fld_22F_A1_FContext *ctx) = 0;
  virtual void exitFld_22F_A1_F(SwiftMtParser_MT546Parser::Fld_22F_A1_FContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT546Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT546Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT546Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT546Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT546Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT546Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_94a_B_B(SwiftMtParser_MT546Parser::Fld_94a_B_BContext *ctx) = 0;
  virtual void exitFld_94a_B_B(SwiftMtParser_MT546Parser::Fld_94a_B_BContext *ctx) = 0;

  virtual void enterFld_94a_B_H(SwiftMtParser_MT546Parser::Fld_94a_B_HContext *ctx) = 0;
  virtual void exitFld_94a_B_H(SwiftMtParser_MT546Parser::Fld_94a_B_HContext *ctx) = 0;

  virtual void enterFld_94a_B_L(SwiftMtParser_MT546Parser::Fld_94a_B_LContext *ctx) = 0;
  virtual void exitFld_94a_B_L(SwiftMtParser_MT546Parser::Fld_94a_B_LContext *ctx) = 0;

  virtual void enterFld_98a_B_A(SwiftMtParser_MT546Parser::Fld_98a_B_AContext *ctx) = 0;
  virtual void exitFld_98a_B_A(SwiftMtParser_MT546Parser::Fld_98a_B_AContext *ctx) = 0;

  virtual void enterFld_98a_B_B(SwiftMtParser_MT546Parser::Fld_98a_B_BContext *ctx) = 0;
  virtual void exitFld_98a_B_B(SwiftMtParser_MT546Parser::Fld_98a_B_BContext *ctx) = 0;

  virtual void enterFld_98a_B_C(SwiftMtParser_MT546Parser::Fld_98a_B_CContext *ctx) = 0;
  virtual void exitFld_98a_B_C(SwiftMtParser_MT546Parser::Fld_98a_B_CContext *ctx) = 0;

  virtual void enterFld_98a_B_E(SwiftMtParser_MT546Parser::Fld_98a_B_EContext *ctx) = 0;
  virtual void exitFld_98a_B_E(SwiftMtParser_MT546Parser::Fld_98a_B_EContext *ctx) = 0;

  virtual void enterFld_90a_B_A(SwiftMtParser_MT546Parser::Fld_90a_B_AContext *ctx) = 0;
  virtual void exitFld_90a_B_A(SwiftMtParser_MT546Parser::Fld_90a_B_AContext *ctx) = 0;

  virtual void enterFld_90a_B_B(SwiftMtParser_MT546Parser::Fld_90a_B_BContext *ctx) = 0;
  virtual void exitFld_90a_B_B(SwiftMtParser_MT546Parser::Fld_90a_B_BContext *ctx) = 0;

  virtual void enterFld_99A_B_A(SwiftMtParser_MT546Parser::Fld_99A_B_AContext *ctx) = 0;
  virtual void exitFld_99A_B_A(SwiftMtParser_MT546Parser::Fld_99A_B_AContext *ctx) = 0;

  virtual void enterFld_35B_B_B(SwiftMtParser_MT546Parser::Fld_35B_B_BContext *ctx) = 0;
  virtual void exitFld_35B_B_B(SwiftMtParser_MT546Parser::Fld_35B_B_BContext *ctx) = 0;

  virtual void enterFld_94B_B1_B(SwiftMtParser_MT546Parser::Fld_94B_B1_BContext *ctx) = 0;
  virtual void exitFld_94B_B1_B(SwiftMtParser_MT546Parser::Fld_94B_B1_BContext *ctx) = 0;

  virtual void enterFld_22F_B1_F(SwiftMtParser_MT546Parser::Fld_22F_B1_FContext *ctx) = 0;
  virtual void exitFld_22F_B1_F(SwiftMtParser_MT546Parser::Fld_22F_B1_FContext *ctx) = 0;

  virtual void enterFld_12a_B1_A(SwiftMtParser_MT546Parser::Fld_12a_B1_AContext *ctx) = 0;
  virtual void exitFld_12a_B1_A(SwiftMtParser_MT546Parser::Fld_12a_B1_AContext *ctx) = 0;

  virtual void enterFld_12a_B1_B(SwiftMtParser_MT546Parser::Fld_12a_B1_BContext *ctx) = 0;
  virtual void exitFld_12a_B1_B(SwiftMtParser_MT546Parser::Fld_12a_B1_BContext *ctx) = 0;

  virtual void enterFld_12a_B1_C(SwiftMtParser_MT546Parser::Fld_12a_B1_CContext *ctx) = 0;
  virtual void exitFld_12a_B1_C(SwiftMtParser_MT546Parser::Fld_12a_B1_CContext *ctx) = 0;

  virtual void enterFld_11A_B1_A(SwiftMtParser_MT546Parser::Fld_11A_B1_AContext *ctx) = 0;
  virtual void exitFld_11A_B1_A(SwiftMtParser_MT546Parser::Fld_11A_B1_AContext *ctx) = 0;

  virtual void enterFld_98A_B1_A(SwiftMtParser_MT546Parser::Fld_98A_B1_AContext *ctx) = 0;
  virtual void exitFld_98A_B1_A(SwiftMtParser_MT546Parser::Fld_98A_B1_AContext *ctx) = 0;

  virtual void enterFld_92A_B1_A(SwiftMtParser_MT546Parser::Fld_92A_B1_AContext *ctx) = 0;
  virtual void exitFld_92A_B1_A(SwiftMtParser_MT546Parser::Fld_92A_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_A(SwiftMtParser_MT546Parser::Fld_13a_B1_AContext *ctx) = 0;
  virtual void exitFld_13a_B1_A(SwiftMtParser_MT546Parser::Fld_13a_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_B(SwiftMtParser_MT546Parser::Fld_13a_B1_BContext *ctx) = 0;
  virtual void exitFld_13a_B1_B(SwiftMtParser_MT546Parser::Fld_13a_B1_BContext *ctx) = 0;

  virtual void enterFld_17B_B1_B(SwiftMtParser_MT546Parser::Fld_17B_B1_BContext *ctx) = 0;
  virtual void exitFld_17B_B1_B(SwiftMtParser_MT546Parser::Fld_17B_B1_BContext *ctx) = 0;

  virtual void enterFld_90a_B1_A(SwiftMtParser_MT546Parser::Fld_90a_B1_AContext *ctx) = 0;
  virtual void exitFld_90a_B1_A(SwiftMtParser_MT546Parser::Fld_90a_B1_AContext *ctx) = 0;

  virtual void enterFld_90a_B1_B(SwiftMtParser_MT546Parser::Fld_90a_B1_BContext *ctx) = 0;
  virtual void exitFld_90a_B1_B(SwiftMtParser_MT546Parser::Fld_90a_B1_BContext *ctx) = 0;

  virtual void enterFld_36B_B1_B(SwiftMtParser_MT546Parser::Fld_36B_B1_BContext *ctx) = 0;
  virtual void exitFld_36B_B1_B(SwiftMtParser_MT546Parser::Fld_36B_B1_BContext *ctx) = 0;

  virtual void enterFld_35B_B1_B(SwiftMtParser_MT546Parser::Fld_35B_B1_BContext *ctx) = 0;
  virtual void exitFld_35B_B1_B(SwiftMtParser_MT546Parser::Fld_35B_B1_BContext *ctx) = 0;

  virtual void enterFld_70E_B1_E(SwiftMtParser_MT546Parser::Fld_70E_B1_EContext *ctx) = 0;
  virtual void exitFld_70E_B1_E(SwiftMtParser_MT546Parser::Fld_70E_B1_EContext *ctx) = 0;

  virtual void enterFld_22F_B_F(SwiftMtParser_MT546Parser::Fld_22F_B_FContext *ctx) = 0;
  virtual void exitFld_22F_B_F(SwiftMtParser_MT546Parser::Fld_22F_B_FContext *ctx) = 0;

  virtual void enterFld_70E_B_E(SwiftMtParser_MT546Parser::Fld_70E_B_EContext *ctx) = 0;
  virtual void exitFld_70E_B_E(SwiftMtParser_MT546Parser::Fld_70E_B_EContext *ctx) = 0;

  virtual void enterFld_36B_C_B(SwiftMtParser_MT546Parser::Fld_36B_C_BContext *ctx) = 0;
  virtual void exitFld_36B_C_B(SwiftMtParser_MT546Parser::Fld_36B_C_BContext *ctx) = 0;

  virtual void enterFld_19A_C_A(SwiftMtParser_MT546Parser::Fld_19A_C_AContext *ctx) = 0;
  virtual void exitFld_19A_C_A(SwiftMtParser_MT546Parser::Fld_19A_C_AContext *ctx) = 0;

  virtual void enterFld_70D_C_D(SwiftMtParser_MT546Parser::Fld_70D_C_DContext *ctx) = 0;
  virtual void exitFld_70D_C_D(SwiftMtParser_MT546Parser::Fld_70D_C_DContext *ctx) = 0;

  virtual void enterFld_13B_C_B(SwiftMtParser_MT546Parser::Fld_13B_C_BContext *ctx) = 0;
  virtual void exitFld_13B_C_B(SwiftMtParser_MT546Parser::Fld_13B_C_BContext *ctx) = 0;

  virtual void enterFld_95a_C_L(SwiftMtParser_MT546Parser::Fld_95a_C_LContext *ctx) = 0;
  virtual void exitFld_95a_C_L(SwiftMtParser_MT546Parser::Fld_95a_C_LContext *ctx) = 0;

  virtual void enterFld_95a_C_P(SwiftMtParser_MT546Parser::Fld_95a_C_PContext *ctx) = 0;
  virtual void exitFld_95a_C_P(SwiftMtParser_MT546Parser::Fld_95a_C_PContext *ctx) = 0;

  virtual void enterFld_95a_C_R(SwiftMtParser_MT546Parser::Fld_95a_C_RContext *ctx) = 0;
  virtual void exitFld_95a_C_R(SwiftMtParser_MT546Parser::Fld_95a_C_RContext *ctx) = 0;

  virtual void enterFld_97a_C_A(SwiftMtParser_MT546Parser::Fld_97a_C_AContext *ctx) = 0;
  virtual void exitFld_97a_C_A(SwiftMtParser_MT546Parser::Fld_97a_C_AContext *ctx) = 0;

  virtual void enterFld_97a_C_B(SwiftMtParser_MT546Parser::Fld_97a_C_BContext *ctx) = 0;
  virtual void exitFld_97a_C_B(SwiftMtParser_MT546Parser::Fld_97a_C_BContext *ctx) = 0;

  virtual void enterFld_97a_C_E(SwiftMtParser_MT546Parser::Fld_97a_C_EContext *ctx) = 0;
  virtual void exitFld_97a_C_E(SwiftMtParser_MT546Parser::Fld_97a_C_EContext *ctx) = 0;

  virtual void enterFld_94a_C_B(SwiftMtParser_MT546Parser::Fld_94a_C_BContext *ctx) = 0;
  virtual void exitFld_94a_C_B(SwiftMtParser_MT546Parser::Fld_94a_C_BContext *ctx) = 0;

  virtual void enterFld_94a_C_C(SwiftMtParser_MT546Parser::Fld_94a_C_CContext *ctx) = 0;
  virtual void exitFld_94a_C_C(SwiftMtParser_MT546Parser::Fld_94a_C_CContext *ctx) = 0;

  virtual void enterFld_94a_C_F(SwiftMtParser_MT546Parser::Fld_94a_C_FContext *ctx) = 0;
  virtual void exitFld_94a_C_F(SwiftMtParser_MT546Parser::Fld_94a_C_FContext *ctx) = 0;

  virtual void enterFld_94a_C_L(SwiftMtParser_MT546Parser::Fld_94a_C_LContext *ctx) = 0;
  virtual void exitFld_94a_C_L(SwiftMtParser_MT546Parser::Fld_94a_C_LContext *ctx) = 0;

  virtual void enterFld_13B_C1_B(SwiftMtParser_MT546Parser::Fld_13B_C1_BContext *ctx) = 0;
  virtual void exitFld_13B_C1_B(SwiftMtParser_MT546Parser::Fld_13B_C1_BContext *ctx) = 0;

  virtual void enterFld_36B_C1_B(SwiftMtParser_MT546Parser::Fld_36B_C1_BContext *ctx) = 0;
  virtual void exitFld_36B_C1_B(SwiftMtParser_MT546Parser::Fld_36B_C1_BContext *ctx) = 0;

  virtual void enterFld_98a_C1_A(SwiftMtParser_MT546Parser::Fld_98a_C1_AContext *ctx) = 0;
  virtual void exitFld_98a_C1_A(SwiftMtParser_MT546Parser::Fld_98a_C1_AContext *ctx) = 0;

  virtual void enterFld_98a_C1_C(SwiftMtParser_MT546Parser::Fld_98a_C1_CContext *ctx) = 0;
  virtual void exitFld_98a_C1_C(SwiftMtParser_MT546Parser::Fld_98a_C1_CContext *ctx) = 0;

  virtual void enterFld_98a_C1_E(SwiftMtParser_MT546Parser::Fld_98a_C1_EContext *ctx) = 0;
  virtual void exitFld_98a_C1_E(SwiftMtParser_MT546Parser::Fld_98a_C1_EContext *ctx) = 0;

  virtual void enterFld_90a_C1_A(SwiftMtParser_MT546Parser::Fld_90a_C1_AContext *ctx) = 0;
  virtual void exitFld_90a_C1_A(SwiftMtParser_MT546Parser::Fld_90a_C1_AContext *ctx) = 0;

  virtual void enterFld_90a_C1_B(SwiftMtParser_MT546Parser::Fld_90a_C1_BContext *ctx) = 0;
  virtual void exitFld_90a_C1_B(SwiftMtParser_MT546Parser::Fld_90a_C1_BContext *ctx) = 0;

  virtual void enterFld_22F_C1_F(SwiftMtParser_MT546Parser::Fld_22F_C1_FContext *ctx) = 0;
  virtual void exitFld_22F_C1_F(SwiftMtParser_MT546Parser::Fld_22F_C1_FContext *ctx) = 0;

  virtual void enterFld_98a_D_A(SwiftMtParser_MT546Parser::Fld_98a_D_AContext *ctx) = 0;
  virtual void exitFld_98a_D_A(SwiftMtParser_MT546Parser::Fld_98a_D_AContext *ctx) = 0;

  virtual void enterFld_98a_D_B(SwiftMtParser_MT546Parser::Fld_98a_D_BContext *ctx) = 0;
  virtual void exitFld_98a_D_B(SwiftMtParser_MT546Parser::Fld_98a_D_BContext *ctx) = 0;

  virtual void enterFld_98a_D_C(SwiftMtParser_MT546Parser::Fld_98a_D_CContext *ctx) = 0;
  virtual void exitFld_98a_D_C(SwiftMtParser_MT546Parser::Fld_98a_D_CContext *ctx) = 0;

  virtual void enterFld_22F_D_F(SwiftMtParser_MT546Parser::Fld_22F_D_FContext *ctx) = 0;
  virtual void exitFld_22F_D_F(SwiftMtParser_MT546Parser::Fld_22F_D_FContext *ctx) = 0;

  virtual void enterFld_20C_D_C(SwiftMtParser_MT546Parser::Fld_20C_D_CContext *ctx) = 0;
  virtual void exitFld_20C_D_C(SwiftMtParser_MT546Parser::Fld_20C_D_CContext *ctx) = 0;

  virtual void enterFld_92a_D_A(SwiftMtParser_MT546Parser::Fld_92a_D_AContext *ctx) = 0;
  virtual void exitFld_92a_D_A(SwiftMtParser_MT546Parser::Fld_92a_D_AContext *ctx) = 0;

  virtual void enterFld_92a_D_C(SwiftMtParser_MT546Parser::Fld_92a_D_CContext *ctx) = 0;
  virtual void exitFld_92a_D_C(SwiftMtParser_MT546Parser::Fld_92a_D_CContext *ctx) = 0;

  virtual void enterFld_99B_D_B(SwiftMtParser_MT546Parser::Fld_99B_D_BContext *ctx) = 0;
  virtual void exitFld_99B_D_B(SwiftMtParser_MT546Parser::Fld_99B_D_BContext *ctx) = 0;

  virtual void enterFld_19A_D_A(SwiftMtParser_MT546Parser::Fld_19A_D_AContext *ctx) = 0;
  virtual void exitFld_19A_D_A(SwiftMtParser_MT546Parser::Fld_19A_D_AContext *ctx) = 0;

  virtual void enterFld_70C_D_C(SwiftMtParser_MT546Parser::Fld_70C_D_CContext *ctx) = 0;
  virtual void exitFld_70C_D_C(SwiftMtParser_MT546Parser::Fld_70C_D_CContext *ctx) = 0;

  virtual void enterFld_22F_E_F(SwiftMtParser_MT546Parser::Fld_22F_E_FContext *ctx) = 0;
  virtual void exitFld_22F_E_F(SwiftMtParser_MT546Parser::Fld_22F_E_FContext *ctx) = 0;

  virtual void enterFld_95a_E1_C(SwiftMtParser_MT546Parser::Fld_95a_E1_CContext *ctx) = 0;
  virtual void exitFld_95a_E1_C(SwiftMtParser_MT546Parser::Fld_95a_E1_CContext *ctx) = 0;

  virtual void enterFld_95a_E1_L(SwiftMtParser_MT546Parser::Fld_95a_E1_LContext *ctx) = 0;
  virtual void exitFld_95a_E1_L(SwiftMtParser_MT546Parser::Fld_95a_E1_LContext *ctx) = 0;

  virtual void enterFld_95a_E1_P(SwiftMtParser_MT546Parser::Fld_95a_E1_PContext *ctx) = 0;
  virtual void exitFld_95a_E1_P(SwiftMtParser_MT546Parser::Fld_95a_E1_PContext *ctx) = 0;

  virtual void enterFld_95a_E1_Q(SwiftMtParser_MT546Parser::Fld_95a_E1_QContext *ctx) = 0;
  virtual void exitFld_95a_E1_Q(SwiftMtParser_MT546Parser::Fld_95a_E1_QContext *ctx) = 0;

  virtual void enterFld_95a_E1_R(SwiftMtParser_MT546Parser::Fld_95a_E1_RContext *ctx) = 0;
  virtual void exitFld_95a_E1_R(SwiftMtParser_MT546Parser::Fld_95a_E1_RContext *ctx) = 0;

  virtual void enterFld_95a_E1_S(SwiftMtParser_MT546Parser::Fld_95a_E1_SContext *ctx) = 0;
  virtual void exitFld_95a_E1_S(SwiftMtParser_MT546Parser::Fld_95a_E1_SContext *ctx) = 0;

  virtual void enterFld_97a_E1_A(SwiftMtParser_MT546Parser::Fld_97a_E1_AContext *ctx) = 0;
  virtual void exitFld_97a_E1_A(SwiftMtParser_MT546Parser::Fld_97a_E1_AContext *ctx) = 0;

  virtual void enterFld_97a_E1_B(SwiftMtParser_MT546Parser::Fld_97a_E1_BContext *ctx) = 0;
  virtual void exitFld_97a_E1_B(SwiftMtParser_MT546Parser::Fld_97a_E1_BContext *ctx) = 0;

  virtual void enterFld_98a_E1_A(SwiftMtParser_MT546Parser::Fld_98a_E1_AContext *ctx) = 0;
  virtual void exitFld_98a_E1_A(SwiftMtParser_MT546Parser::Fld_98a_E1_AContext *ctx) = 0;

  virtual void enterFld_98a_E1_C(SwiftMtParser_MT546Parser::Fld_98a_E1_CContext *ctx) = 0;
  virtual void exitFld_98a_E1_C(SwiftMtParser_MT546Parser::Fld_98a_E1_CContext *ctx) = 0;

  virtual void enterFld_20C_E1_C(SwiftMtParser_MT546Parser::Fld_20C_E1_CContext *ctx) = 0;
  virtual void exitFld_20C_E1_C(SwiftMtParser_MT546Parser::Fld_20C_E1_CContext *ctx) = 0;

  virtual void enterFld_70a_E1_C(SwiftMtParser_MT546Parser::Fld_70a_E1_CContext *ctx) = 0;
  virtual void exitFld_70a_E1_C(SwiftMtParser_MT546Parser::Fld_70a_E1_CContext *ctx) = 0;

  virtual void enterFld_70a_E1_D(SwiftMtParser_MT546Parser::Fld_70a_E1_DContext *ctx) = 0;
  virtual void exitFld_70a_E1_D(SwiftMtParser_MT546Parser::Fld_70a_E1_DContext *ctx) = 0;

  virtual void enterFld_70a_E1_E(SwiftMtParser_MT546Parser::Fld_70a_E1_EContext *ctx) = 0;
  virtual void exitFld_70a_E1_E(SwiftMtParser_MT546Parser::Fld_70a_E1_EContext *ctx) = 0;

  virtual void enterFld_95a_E2_L(SwiftMtParser_MT546Parser::Fld_95a_E2_LContext *ctx) = 0;
  virtual void exitFld_95a_E2_L(SwiftMtParser_MT546Parser::Fld_95a_E2_LContext *ctx) = 0;

  virtual void enterFld_95a_E2_P(SwiftMtParser_MT546Parser::Fld_95a_E2_PContext *ctx) = 0;
  virtual void exitFld_95a_E2_P(SwiftMtParser_MT546Parser::Fld_95a_E2_PContext *ctx) = 0;

  virtual void enterFld_95a_E2_Q(SwiftMtParser_MT546Parser::Fld_95a_E2_QContext *ctx) = 0;
  virtual void exitFld_95a_E2_Q(SwiftMtParser_MT546Parser::Fld_95a_E2_QContext *ctx) = 0;

  virtual void enterFld_95a_E2_R(SwiftMtParser_MT546Parser::Fld_95a_E2_RContext *ctx) = 0;
  virtual void exitFld_95a_E2_R(SwiftMtParser_MT546Parser::Fld_95a_E2_RContext *ctx) = 0;

  virtual void enterFld_95a_E2_S(SwiftMtParser_MT546Parser::Fld_95a_E2_SContext *ctx) = 0;
  virtual void exitFld_95a_E2_S(SwiftMtParser_MT546Parser::Fld_95a_E2_SContext *ctx) = 0;

  virtual void enterFld_97a_E2_A(SwiftMtParser_MT546Parser::Fld_97a_E2_AContext *ctx) = 0;
  virtual void exitFld_97a_E2_A(SwiftMtParser_MT546Parser::Fld_97a_E2_AContext *ctx) = 0;

  virtual void enterFld_97a_E2_E(SwiftMtParser_MT546Parser::Fld_97a_E2_EContext *ctx) = 0;
  virtual void exitFld_97a_E2_E(SwiftMtParser_MT546Parser::Fld_97a_E2_EContext *ctx) = 0;

  virtual void enterFld_20C_E2_C(SwiftMtParser_MT546Parser::Fld_20C_E2_CContext *ctx) = 0;
  virtual void exitFld_20C_E2_C(SwiftMtParser_MT546Parser::Fld_20C_E2_CContext *ctx) = 0;

  virtual void enterFld_70a_E2_C(SwiftMtParser_MT546Parser::Fld_70a_E2_CContext *ctx) = 0;
  virtual void exitFld_70a_E2_C(SwiftMtParser_MT546Parser::Fld_70a_E2_CContext *ctx) = 0;

  virtual void enterFld_70a_E2_E(SwiftMtParser_MT546Parser::Fld_70a_E2_EContext *ctx) = 0;
  virtual void exitFld_70a_E2_E(SwiftMtParser_MT546Parser::Fld_70a_E2_EContext *ctx) = 0;

  virtual void enterFld_17B_E3_B(SwiftMtParser_MT546Parser::Fld_17B_E3_BContext *ctx) = 0;
  virtual void exitFld_17B_E3_B(SwiftMtParser_MT546Parser::Fld_17B_E3_BContext *ctx) = 0;

  virtual void enterFld_19A_E3_A(SwiftMtParser_MT546Parser::Fld_19A_E3_AContext *ctx) = 0;
  virtual void exitFld_19A_E3_A(SwiftMtParser_MT546Parser::Fld_19A_E3_AContext *ctx) = 0;

  virtual void enterFld_98a_E3_A(SwiftMtParser_MT546Parser::Fld_98a_E3_AContext *ctx) = 0;
  virtual void exitFld_98a_E3_A(SwiftMtParser_MT546Parser::Fld_98a_E3_AContext *ctx) = 0;

  virtual void enterFld_98a_E3_C(SwiftMtParser_MT546Parser::Fld_98a_E3_CContext *ctx) = 0;
  virtual void exitFld_98a_E3_C(SwiftMtParser_MT546Parser::Fld_98a_E3_CContext *ctx) = 0;

  virtual void enterFld_92B_E3_B(SwiftMtParser_MT546Parser::Fld_92B_E3_BContext *ctx) = 0;
  virtual void exitFld_92B_E3_B(SwiftMtParser_MT546Parser::Fld_92B_E3_BContext *ctx) = 0;

  virtual void enterFld_95a_F_C(SwiftMtParser_MT546Parser::Fld_95a_F_CContext *ctx) = 0;
  virtual void exitFld_95a_F_C(SwiftMtParser_MT546Parser::Fld_95a_F_CContext *ctx) = 0;

  virtual void enterFld_95a_F_L(SwiftMtParser_MT546Parser::Fld_95a_F_LContext *ctx) = 0;
  virtual void exitFld_95a_F_L(SwiftMtParser_MT546Parser::Fld_95a_F_LContext *ctx) = 0;

  virtual void enterFld_95a_F_P(SwiftMtParser_MT546Parser::Fld_95a_F_PContext *ctx) = 0;
  virtual void exitFld_95a_F_P(SwiftMtParser_MT546Parser::Fld_95a_F_PContext *ctx) = 0;

  virtual void enterFld_95a_F_Q(SwiftMtParser_MT546Parser::Fld_95a_F_QContext *ctx) = 0;
  virtual void exitFld_95a_F_Q(SwiftMtParser_MT546Parser::Fld_95a_F_QContext *ctx) = 0;

  virtual void enterFld_95a_F_R(SwiftMtParser_MT546Parser::Fld_95a_F_RContext *ctx) = 0;
  virtual void exitFld_95a_F_R(SwiftMtParser_MT546Parser::Fld_95a_F_RContext *ctx) = 0;

  virtual void enterFld_95a_F_S(SwiftMtParser_MT546Parser::Fld_95a_F_SContext *ctx) = 0;
  virtual void exitFld_95a_F_S(SwiftMtParser_MT546Parser::Fld_95a_F_SContext *ctx) = 0;

  virtual void enterFld_97A_F_A(SwiftMtParser_MT546Parser::Fld_97A_F_AContext *ctx) = 0;
  virtual void exitFld_97A_F_A(SwiftMtParser_MT546Parser::Fld_97A_F_AContext *ctx) = 0;

  virtual void enterFld_70a_F_C(SwiftMtParser_MT546Parser::Fld_70a_F_CContext *ctx) = 0;
  virtual void exitFld_70a_F_C(SwiftMtParser_MT546Parser::Fld_70a_F_CContext *ctx) = 0;

  virtual void enterFld_70a_F_D(SwiftMtParser_MT546Parser::Fld_70a_F_DContext *ctx) = 0;
  virtual void exitFld_70a_F_D(SwiftMtParser_MT546Parser::Fld_70a_F_DContext *ctx) = 0;

  virtual void enterFld_70a_F_E(SwiftMtParser_MT546Parser::Fld_70a_F_EContext *ctx) = 0;
  virtual void exitFld_70a_F_E(SwiftMtParser_MT546Parser::Fld_70a_F_EContext *ctx) = 0;

  virtual void enterFld_20C_F_C(SwiftMtParser_MT546Parser::Fld_20C_F_CContext *ctx) = 0;
  virtual void exitFld_20C_F_C(SwiftMtParser_MT546Parser::Fld_20C_F_CContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
