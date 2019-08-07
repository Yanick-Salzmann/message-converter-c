
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT576Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT576.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT576Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT576Parser.
 */
class  SwiftMtParser_MT576Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT576Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT576Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT576Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT576Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT576Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT576Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT576Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT576Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT576Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT576Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT576Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT576Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT576Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT576Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT576Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT576Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT576Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT576Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT576Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT576Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT576Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT576Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT576Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT576Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT576Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT576Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT576Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT576Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT576Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT576Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT576Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT576Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B2(SwiftMtParser_MT576Parser::Seq_B2Context *ctx) = 0;
  virtual void exitSeq_B2(SwiftMtParser_MT576Parser::Seq_B2Context *ctx) = 0;

  virtual void enterSeq_B2a(SwiftMtParser_MT576Parser::Seq_B2aContext *ctx) = 0;
  virtual void exitSeq_B2a(SwiftMtParser_MT576Parser::Seq_B2aContext *ctx) = 0;

  virtual void enterSeq_B2b(SwiftMtParser_MT576Parser::Seq_B2bContext *ctx) = 0;
  virtual void exitSeq_B2b(SwiftMtParser_MT576Parser::Seq_B2bContext *ctx) = 0;

  virtual void enterSeq_B2c(SwiftMtParser_MT576Parser::Seq_B2cContext *ctx) = 0;
  virtual void exitSeq_B2c(SwiftMtParser_MT576Parser::Seq_B2cContext *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT576Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT576Parser::Seq_CContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT576Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT576Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_28E_A(SwiftMtParser_MT576Parser::Fld_28E_AContext *ctx) = 0;
  virtual void exitFld_28E_A(SwiftMtParser_MT576Parser::Fld_28E_AContext *ctx) = 0;

  virtual void enterFld_13A_A(SwiftMtParser_MT576Parser::Fld_13A_AContext *ctx) = 0;
  virtual void exitFld_13A_A(SwiftMtParser_MT576Parser::Fld_13A_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT576Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT576Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT576Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT576Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT576Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT576Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT576Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT576Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT576Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT576Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT576Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT576Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT576Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT576Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT576Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT576Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_97a_A(SwiftMtParser_MT576Parser::Fld_97a_AContext *ctx) = 0;
  virtual void exitFld_97a_A(SwiftMtParser_MT576Parser::Fld_97a_AContext *ctx) = 0;

  virtual void enterFld_17B_A(SwiftMtParser_MT576Parser::Fld_17B_AContext *ctx) = 0;
  virtual void exitFld_17B_A(SwiftMtParser_MT576Parser::Fld_17B_AContext *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT576Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT576Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT576Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT576Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_35B_B(SwiftMtParser_MT576Parser::Fld_35B_BContext *ctx) = 0;
  virtual void exitFld_35B_B(SwiftMtParser_MT576Parser::Fld_35B_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT576Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT576Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_94B_B1(SwiftMtParser_MT576Parser::Fld_94B_B1Context *ctx) = 0;
  virtual void exitFld_94B_B1(SwiftMtParser_MT576Parser::Fld_94B_B1Context *ctx) = 0;

  virtual void enterFld_22F_B1(SwiftMtParser_MT576Parser::Fld_22F_B1Context *ctx) = 0;
  virtual void exitFld_22F_B1(SwiftMtParser_MT576Parser::Fld_22F_B1Context *ctx) = 0;

  virtual void enterFld_12a_B1(SwiftMtParser_MT576Parser::Fld_12a_B1Context *ctx) = 0;
  virtual void exitFld_12a_B1(SwiftMtParser_MT576Parser::Fld_12a_B1Context *ctx) = 0;

  virtual void enterFld_11A_B1(SwiftMtParser_MT576Parser::Fld_11A_B1Context *ctx) = 0;
  virtual void exitFld_11A_B1(SwiftMtParser_MT576Parser::Fld_11A_B1Context *ctx) = 0;

  virtual void enterFld_98A_B1(SwiftMtParser_MT576Parser::Fld_98A_B1Context *ctx) = 0;
  virtual void exitFld_98A_B1(SwiftMtParser_MT576Parser::Fld_98A_B1Context *ctx) = 0;

  virtual void enterFld_92A_B1(SwiftMtParser_MT576Parser::Fld_92A_B1Context *ctx) = 0;
  virtual void exitFld_92A_B1(SwiftMtParser_MT576Parser::Fld_92A_B1Context *ctx) = 0;

  virtual void enterFld_13a_B1(SwiftMtParser_MT576Parser::Fld_13a_B1Context *ctx) = 0;
  virtual void exitFld_13a_B1(SwiftMtParser_MT576Parser::Fld_13a_B1Context *ctx) = 0;

  virtual void enterFld_17B_B1(SwiftMtParser_MT576Parser::Fld_17B_B1Context *ctx) = 0;
  virtual void exitFld_17B_B1(SwiftMtParser_MT576Parser::Fld_17B_B1Context *ctx) = 0;

  virtual void enterFld_90a_B1(SwiftMtParser_MT576Parser::Fld_90a_B1Context *ctx) = 0;
  virtual void exitFld_90a_B1(SwiftMtParser_MT576Parser::Fld_90a_B1Context *ctx) = 0;

  virtual void enterFld_36B_B1(SwiftMtParser_MT576Parser::Fld_36B_B1Context *ctx) = 0;
  virtual void exitFld_36B_B1(SwiftMtParser_MT576Parser::Fld_36B_B1Context *ctx) = 0;

  virtual void enterFld_70E_B1(SwiftMtParser_MT576Parser::Fld_70E_B1Context *ctx) = 0;
  virtual void exitFld_70E_B1(SwiftMtParser_MT576Parser::Fld_70E_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT576Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT576Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_16R_B2(SwiftMtParser_MT576Parser::Fld_16R_B2Context *ctx) = 0;
  virtual void exitFld_16R_B2(SwiftMtParser_MT576Parser::Fld_16R_B2Context *ctx) = 0;

  virtual void enterFld_98a_B2(SwiftMtParser_MT576Parser::Fld_98a_B2Context *ctx) = 0;
  virtual void exitFld_98a_B2(SwiftMtParser_MT576Parser::Fld_98a_B2Context *ctx) = 0;

  virtual void enterFld_36B_B2(SwiftMtParser_MT576Parser::Fld_36B_B2Context *ctx) = 0;
  virtual void exitFld_36B_B2(SwiftMtParser_MT576Parser::Fld_36B_B2Context *ctx) = 0;

  virtual void enterFld_19A_B2(SwiftMtParser_MT576Parser::Fld_19A_B2Context *ctx) = 0;
  virtual void exitFld_19A_B2(SwiftMtParser_MT576Parser::Fld_19A_B2Context *ctx) = 0;

  virtual void enterFld_11A_B2(SwiftMtParser_MT576Parser::Fld_11A_B2Context *ctx) = 0;
  virtual void exitFld_11A_B2(SwiftMtParser_MT576Parser::Fld_11A_B2Context *ctx) = 0;

  virtual void enterFld_16R_B2a(SwiftMtParser_MT576Parser::Fld_16R_B2aContext *ctx) = 0;
  virtual void exitFld_16R_B2a(SwiftMtParser_MT576Parser::Fld_16R_B2aContext *ctx) = 0;

  virtual void enterFld_13a_B2a(SwiftMtParser_MT576Parser::Fld_13a_B2aContext *ctx) = 0;
  virtual void exitFld_13a_B2a(SwiftMtParser_MT576Parser::Fld_13a_B2aContext *ctx) = 0;

  virtual void enterFld_20C_B2a(SwiftMtParser_MT576Parser::Fld_20C_B2aContext *ctx) = 0;
  virtual void exitFld_20C_B2a(SwiftMtParser_MT576Parser::Fld_20C_B2aContext *ctx) = 0;

  virtual void enterFld_16S_B2a(SwiftMtParser_MT576Parser::Fld_16S_B2aContext *ctx) = 0;
  virtual void exitFld_16S_B2a(SwiftMtParser_MT576Parser::Fld_16S_B2aContext *ctx) = 0;

  virtual void enterFld_16R_B2b(SwiftMtParser_MT576Parser::Fld_16R_B2bContext *ctx) = 0;
  virtual void exitFld_16R_B2b(SwiftMtParser_MT576Parser::Fld_16R_B2bContext *ctx) = 0;

  virtual void enterFld_90a_B2b(SwiftMtParser_MT576Parser::Fld_90a_B2bContext *ctx) = 0;
  virtual void exitFld_90a_B2b(SwiftMtParser_MT576Parser::Fld_90a_B2bContext *ctx) = 0;

  virtual void enterFld_22F_B2b(SwiftMtParser_MT576Parser::Fld_22F_B2bContext *ctx) = 0;
  virtual void exitFld_22F_B2b(SwiftMtParser_MT576Parser::Fld_22F_B2bContext *ctx) = 0;

  virtual void enterFld_16S_B2b(SwiftMtParser_MT576Parser::Fld_16S_B2bContext *ctx) = 0;
  virtual void exitFld_16S_B2b(SwiftMtParser_MT576Parser::Fld_16S_B2bContext *ctx) = 0;

  virtual void enterFld_22a_B2(SwiftMtParser_MT576Parser::Fld_22a_B2Context *ctx) = 0;
  virtual void exitFld_22a_B2(SwiftMtParser_MT576Parser::Fld_22a_B2Context *ctx) = 0;

  virtual void enterFld_16R_B2c(SwiftMtParser_MT576Parser::Fld_16R_B2cContext *ctx) = 0;
  virtual void exitFld_16R_B2c(SwiftMtParser_MT576Parser::Fld_16R_B2cContext *ctx) = 0;

  virtual void enterFld_95a_B2c(SwiftMtParser_MT576Parser::Fld_95a_B2cContext *ctx) = 0;
  virtual void exitFld_95a_B2c(SwiftMtParser_MT576Parser::Fld_95a_B2cContext *ctx) = 0;

  virtual void enterFld_97a_B2c(SwiftMtParser_MT576Parser::Fld_97a_B2cContext *ctx) = 0;
  virtual void exitFld_97a_B2c(SwiftMtParser_MT576Parser::Fld_97a_B2cContext *ctx) = 0;

  virtual void enterFld_98a_B2c(SwiftMtParser_MT576Parser::Fld_98a_B2cContext *ctx) = 0;
  virtual void exitFld_98a_B2c(SwiftMtParser_MT576Parser::Fld_98a_B2cContext *ctx) = 0;

  virtual void enterFld_20C_B2c(SwiftMtParser_MT576Parser::Fld_20C_B2cContext *ctx) = 0;
  virtual void exitFld_20C_B2c(SwiftMtParser_MT576Parser::Fld_20C_B2cContext *ctx) = 0;

  virtual void enterFld_70a_B2c(SwiftMtParser_MT576Parser::Fld_70a_B2cContext *ctx) = 0;
  virtual void exitFld_70a_B2c(SwiftMtParser_MT576Parser::Fld_70a_B2cContext *ctx) = 0;

  virtual void enterFld_22F_B2c(SwiftMtParser_MT576Parser::Fld_22F_B2cContext *ctx) = 0;
  virtual void exitFld_22F_B2c(SwiftMtParser_MT576Parser::Fld_22F_B2cContext *ctx) = 0;

  virtual void enterFld_16S_B2c(SwiftMtParser_MT576Parser::Fld_16S_B2cContext *ctx) = 0;
  virtual void exitFld_16S_B2c(SwiftMtParser_MT576Parser::Fld_16S_B2cContext *ctx) = 0;

  virtual void enterFld_16S_B2(SwiftMtParser_MT576Parser::Fld_16S_B2Context *ctx) = 0;
  virtual void exitFld_16S_B2(SwiftMtParser_MT576Parser::Fld_16S_B2Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT576Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT576Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT576Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT576Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_95a_C(SwiftMtParser_MT576Parser::Fld_95a_CContext *ctx) = 0;
  virtual void exitFld_95a_C(SwiftMtParser_MT576Parser::Fld_95a_CContext *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT576Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT576Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_28E_A_E(SwiftMtParser_MT576Parser::Fld_28E_A_EContext *ctx) = 0;
  virtual void exitFld_28E_A_E(SwiftMtParser_MT576Parser::Fld_28E_A_EContext *ctx) = 0;

  virtual void enterFld_13A_A_A(SwiftMtParser_MT576Parser::Fld_13A_A_AContext *ctx) = 0;
  virtual void exitFld_13A_A_A(SwiftMtParser_MT576Parser::Fld_13A_A_AContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT576Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT576Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT576Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT576Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT576Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT576Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT576Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT576Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT576Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT576Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT576Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT576Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT576Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT576Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT576Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT576Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_95a_A_L(SwiftMtParser_MT576Parser::Fld_95a_A_LContext *ctx) = 0;
  virtual void exitFld_95a_A_L(SwiftMtParser_MT576Parser::Fld_95a_A_LContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT576Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT576Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT576Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT576Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_97a_A_A(SwiftMtParser_MT576Parser::Fld_97a_A_AContext *ctx) = 0;
  virtual void exitFld_97a_A_A(SwiftMtParser_MT576Parser::Fld_97a_A_AContext *ctx) = 0;

  virtual void enterFld_97a_A_B(SwiftMtParser_MT576Parser::Fld_97a_A_BContext *ctx) = 0;
  virtual void exitFld_97a_A_B(SwiftMtParser_MT576Parser::Fld_97a_A_BContext *ctx) = 0;

  virtual void enterFld_17B_A_B(SwiftMtParser_MT576Parser::Fld_17B_A_BContext *ctx) = 0;
  virtual void exitFld_17B_A_B(SwiftMtParser_MT576Parser::Fld_17B_A_BContext *ctx) = 0;

  virtual void enterFld_35B_B_B(SwiftMtParser_MT576Parser::Fld_35B_B_BContext *ctx) = 0;
  virtual void exitFld_35B_B_B(SwiftMtParser_MT576Parser::Fld_35B_B_BContext *ctx) = 0;

  virtual void enterFld_94B_B1_B(SwiftMtParser_MT576Parser::Fld_94B_B1_BContext *ctx) = 0;
  virtual void exitFld_94B_B1_B(SwiftMtParser_MT576Parser::Fld_94B_B1_BContext *ctx) = 0;

  virtual void enterFld_22F_B1_F(SwiftMtParser_MT576Parser::Fld_22F_B1_FContext *ctx) = 0;
  virtual void exitFld_22F_B1_F(SwiftMtParser_MT576Parser::Fld_22F_B1_FContext *ctx) = 0;

  virtual void enterFld_12a_B1_A(SwiftMtParser_MT576Parser::Fld_12a_B1_AContext *ctx) = 0;
  virtual void exitFld_12a_B1_A(SwiftMtParser_MT576Parser::Fld_12a_B1_AContext *ctx) = 0;

  virtual void enterFld_12a_B1_B(SwiftMtParser_MT576Parser::Fld_12a_B1_BContext *ctx) = 0;
  virtual void exitFld_12a_B1_B(SwiftMtParser_MT576Parser::Fld_12a_B1_BContext *ctx) = 0;

  virtual void enterFld_12a_B1_C(SwiftMtParser_MT576Parser::Fld_12a_B1_CContext *ctx) = 0;
  virtual void exitFld_12a_B1_C(SwiftMtParser_MT576Parser::Fld_12a_B1_CContext *ctx) = 0;

  virtual void enterFld_11A_B1_A(SwiftMtParser_MT576Parser::Fld_11A_B1_AContext *ctx) = 0;
  virtual void exitFld_11A_B1_A(SwiftMtParser_MT576Parser::Fld_11A_B1_AContext *ctx) = 0;

  virtual void enterFld_98A_B1_A(SwiftMtParser_MT576Parser::Fld_98A_B1_AContext *ctx) = 0;
  virtual void exitFld_98A_B1_A(SwiftMtParser_MT576Parser::Fld_98A_B1_AContext *ctx) = 0;

  virtual void enterFld_92A_B1_A(SwiftMtParser_MT576Parser::Fld_92A_B1_AContext *ctx) = 0;
  virtual void exitFld_92A_B1_A(SwiftMtParser_MT576Parser::Fld_92A_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_A(SwiftMtParser_MT576Parser::Fld_13a_B1_AContext *ctx) = 0;
  virtual void exitFld_13a_B1_A(SwiftMtParser_MT576Parser::Fld_13a_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_B(SwiftMtParser_MT576Parser::Fld_13a_B1_BContext *ctx) = 0;
  virtual void exitFld_13a_B1_B(SwiftMtParser_MT576Parser::Fld_13a_B1_BContext *ctx) = 0;

  virtual void enterFld_17B_B1_B(SwiftMtParser_MT576Parser::Fld_17B_B1_BContext *ctx) = 0;
  virtual void exitFld_17B_B1_B(SwiftMtParser_MT576Parser::Fld_17B_B1_BContext *ctx) = 0;

  virtual void enterFld_90a_B1_A(SwiftMtParser_MT576Parser::Fld_90a_B1_AContext *ctx) = 0;
  virtual void exitFld_90a_B1_A(SwiftMtParser_MT576Parser::Fld_90a_B1_AContext *ctx) = 0;

  virtual void enterFld_90a_B1_B(SwiftMtParser_MT576Parser::Fld_90a_B1_BContext *ctx) = 0;
  virtual void exitFld_90a_B1_B(SwiftMtParser_MT576Parser::Fld_90a_B1_BContext *ctx) = 0;

  virtual void enterFld_36B_B1_B(SwiftMtParser_MT576Parser::Fld_36B_B1_BContext *ctx) = 0;
  virtual void exitFld_36B_B1_B(SwiftMtParser_MT576Parser::Fld_36B_B1_BContext *ctx) = 0;

  virtual void enterFld_70E_B1_E(SwiftMtParser_MT576Parser::Fld_70E_B1_EContext *ctx) = 0;
  virtual void exitFld_70E_B1_E(SwiftMtParser_MT576Parser::Fld_70E_B1_EContext *ctx) = 0;

  virtual void enterFld_98a_B2_A(SwiftMtParser_MT576Parser::Fld_98a_B2_AContext *ctx) = 0;
  virtual void exitFld_98a_B2_A(SwiftMtParser_MT576Parser::Fld_98a_B2_AContext *ctx) = 0;

  virtual void enterFld_98a_B2_C(SwiftMtParser_MT576Parser::Fld_98a_B2_CContext *ctx) = 0;
  virtual void exitFld_98a_B2_C(SwiftMtParser_MT576Parser::Fld_98a_B2_CContext *ctx) = 0;

  virtual void enterFld_36B_B2_B(SwiftMtParser_MT576Parser::Fld_36B_B2_BContext *ctx) = 0;
  virtual void exitFld_36B_B2_B(SwiftMtParser_MT576Parser::Fld_36B_B2_BContext *ctx) = 0;

  virtual void enterFld_19A_B2_A(SwiftMtParser_MT576Parser::Fld_19A_B2_AContext *ctx) = 0;
  virtual void exitFld_19A_B2_A(SwiftMtParser_MT576Parser::Fld_19A_B2_AContext *ctx) = 0;

  virtual void enterFld_11A_B2_A(SwiftMtParser_MT576Parser::Fld_11A_B2_AContext *ctx) = 0;
  virtual void exitFld_11A_B2_A(SwiftMtParser_MT576Parser::Fld_11A_B2_AContext *ctx) = 0;

  virtual void enterFld_13a_B2a_A(SwiftMtParser_MT576Parser::Fld_13a_B2a_AContext *ctx) = 0;
  virtual void exitFld_13a_B2a_A(SwiftMtParser_MT576Parser::Fld_13a_B2a_AContext *ctx) = 0;

  virtual void enterFld_13a_B2a_B(SwiftMtParser_MT576Parser::Fld_13a_B2a_BContext *ctx) = 0;
  virtual void exitFld_13a_B2a_B(SwiftMtParser_MT576Parser::Fld_13a_B2a_BContext *ctx) = 0;

  virtual void enterFld_20C_B2a_C(SwiftMtParser_MT576Parser::Fld_20C_B2a_CContext *ctx) = 0;
  virtual void exitFld_20C_B2a_C(SwiftMtParser_MT576Parser::Fld_20C_B2a_CContext *ctx) = 0;

  virtual void enterFld_90a_B2b_A(SwiftMtParser_MT576Parser::Fld_90a_B2b_AContext *ctx) = 0;
  virtual void exitFld_90a_B2b_A(SwiftMtParser_MT576Parser::Fld_90a_B2b_AContext *ctx) = 0;

  virtual void enterFld_90a_B2b_B(SwiftMtParser_MT576Parser::Fld_90a_B2b_BContext *ctx) = 0;
  virtual void exitFld_90a_B2b_B(SwiftMtParser_MT576Parser::Fld_90a_B2b_BContext *ctx) = 0;

  virtual void enterFld_22F_B2b_F(SwiftMtParser_MT576Parser::Fld_22F_B2b_FContext *ctx) = 0;
  virtual void exitFld_22F_B2b_F(SwiftMtParser_MT576Parser::Fld_22F_B2b_FContext *ctx) = 0;

  virtual void enterFld_22a_B2_F(SwiftMtParser_MT576Parser::Fld_22a_B2_FContext *ctx) = 0;
  virtual void exitFld_22a_B2_F(SwiftMtParser_MT576Parser::Fld_22a_B2_FContext *ctx) = 0;

  virtual void enterFld_22a_B2_H(SwiftMtParser_MT576Parser::Fld_22a_B2_HContext *ctx) = 0;
  virtual void exitFld_22a_B2_H(SwiftMtParser_MT576Parser::Fld_22a_B2_HContext *ctx) = 0;

  virtual void enterFld_95a_B2c_L(SwiftMtParser_MT576Parser::Fld_95a_B2c_LContext *ctx) = 0;
  virtual void exitFld_95a_B2c_L(SwiftMtParser_MT576Parser::Fld_95a_B2c_LContext *ctx) = 0;

  virtual void enterFld_95a_B2c_P(SwiftMtParser_MT576Parser::Fld_95a_B2c_PContext *ctx) = 0;
  virtual void exitFld_95a_B2c_P(SwiftMtParser_MT576Parser::Fld_95a_B2c_PContext *ctx) = 0;

  virtual void enterFld_95a_B2c_Q(SwiftMtParser_MT576Parser::Fld_95a_B2c_QContext *ctx) = 0;
  virtual void exitFld_95a_B2c_Q(SwiftMtParser_MT576Parser::Fld_95a_B2c_QContext *ctx) = 0;

  virtual void enterFld_95a_B2c_R(SwiftMtParser_MT576Parser::Fld_95a_B2c_RContext *ctx) = 0;
  virtual void exitFld_95a_B2c_R(SwiftMtParser_MT576Parser::Fld_95a_B2c_RContext *ctx) = 0;

  virtual void enterFld_95a_B2c_S(SwiftMtParser_MT576Parser::Fld_95a_B2c_SContext *ctx) = 0;
  virtual void exitFld_95a_B2c_S(SwiftMtParser_MT576Parser::Fld_95a_B2c_SContext *ctx) = 0;

  virtual void enterFld_97a_B2c_A(SwiftMtParser_MT576Parser::Fld_97a_B2c_AContext *ctx) = 0;
  virtual void exitFld_97a_B2c_A(SwiftMtParser_MT576Parser::Fld_97a_B2c_AContext *ctx) = 0;

  virtual void enterFld_97a_B2c_B(SwiftMtParser_MT576Parser::Fld_97a_B2c_BContext *ctx) = 0;
  virtual void exitFld_97a_B2c_B(SwiftMtParser_MT576Parser::Fld_97a_B2c_BContext *ctx) = 0;

  virtual void enterFld_98a_B2c_A(SwiftMtParser_MT576Parser::Fld_98a_B2c_AContext *ctx) = 0;
  virtual void exitFld_98a_B2c_A(SwiftMtParser_MT576Parser::Fld_98a_B2c_AContext *ctx) = 0;

  virtual void enterFld_98a_B2c_C(SwiftMtParser_MT576Parser::Fld_98a_B2c_CContext *ctx) = 0;
  virtual void exitFld_98a_B2c_C(SwiftMtParser_MT576Parser::Fld_98a_B2c_CContext *ctx) = 0;

  virtual void enterFld_20C_B2c_C(SwiftMtParser_MT576Parser::Fld_20C_B2c_CContext *ctx) = 0;
  virtual void exitFld_20C_B2c_C(SwiftMtParser_MT576Parser::Fld_20C_B2c_CContext *ctx) = 0;

  virtual void enterFld_70a_B2c_C(SwiftMtParser_MT576Parser::Fld_70a_B2c_CContext *ctx) = 0;
  virtual void exitFld_70a_B2c_C(SwiftMtParser_MT576Parser::Fld_70a_B2c_CContext *ctx) = 0;

  virtual void enterFld_70a_B2c_E(SwiftMtParser_MT576Parser::Fld_70a_B2c_EContext *ctx) = 0;
  virtual void exitFld_70a_B2c_E(SwiftMtParser_MT576Parser::Fld_70a_B2c_EContext *ctx) = 0;

  virtual void enterFld_22F_B2c_F(SwiftMtParser_MT576Parser::Fld_22F_B2c_FContext *ctx) = 0;
  virtual void exitFld_22F_B2c_F(SwiftMtParser_MT576Parser::Fld_22F_B2c_FContext *ctx) = 0;

  virtual void enterFld_95a_C_P(SwiftMtParser_MT576Parser::Fld_95a_C_PContext *ctx) = 0;
  virtual void exitFld_95a_C_P(SwiftMtParser_MT576Parser::Fld_95a_C_PContext *ctx) = 0;

  virtual void enterFld_95a_C_Q(SwiftMtParser_MT576Parser::Fld_95a_C_QContext *ctx) = 0;
  virtual void exitFld_95a_C_Q(SwiftMtParser_MT576Parser::Fld_95a_C_QContext *ctx) = 0;

  virtual void enterFld_95a_C_R(SwiftMtParser_MT576Parser::Fld_95a_C_RContext *ctx) = 0;
  virtual void exitFld_95a_C_R(SwiftMtParser_MT576Parser::Fld_95a_C_RContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
