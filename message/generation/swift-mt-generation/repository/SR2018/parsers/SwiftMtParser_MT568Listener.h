
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT568Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT568.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT568Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT568Parser.
 */
class  SwiftMtParser_MT568Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT568Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT568Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT568Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT568Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT568Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT568Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT568Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT568Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT568Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT568Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT568Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT568Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT568Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT568Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT568Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT568Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT568Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT568Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT568Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT568Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT568Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT568Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT568Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT568Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT568Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT568Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT568Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT568Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT568Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT568Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT568Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT568Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT568Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT568Parser::Seq_CContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT568Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT568Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_28E_A(SwiftMtParser_MT568Parser::Fld_28E_AContext *ctx) = 0;
  virtual void exitFld_28E_A(SwiftMtParser_MT568Parser::Fld_28E_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT568Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT568Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT568Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT568Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_22F_A(SwiftMtParser_MT568Parser::Fld_22F_AContext *ctx) = 0;
  virtual void exitFld_22F_A(SwiftMtParser_MT568Parser::Fld_22F_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT568Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT568Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT568Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT568Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_22F_A1(SwiftMtParser_MT568Parser::Fld_22F_A1Context *ctx) = 0;
  virtual void exitFld_22F_A1(SwiftMtParser_MT568Parser::Fld_22F_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT568Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT568Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT568Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT568Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT568Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT568Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT568Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT568Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT568Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT568Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_95a_B(SwiftMtParser_MT568Parser::Fld_95a_BContext *ctx) = 0;
  virtual void exitFld_95a_B(SwiftMtParser_MT568Parser::Fld_95a_BContext *ctx) = 0;

  virtual void enterFld_97a_B(SwiftMtParser_MT568Parser::Fld_97a_BContext *ctx) = 0;
  virtual void exitFld_97a_B(SwiftMtParser_MT568Parser::Fld_97a_BContext *ctx) = 0;

  virtual void enterFld_94a_B(SwiftMtParser_MT568Parser::Fld_94a_BContext *ctx) = 0;
  virtual void exitFld_94a_B(SwiftMtParser_MT568Parser::Fld_94a_BContext *ctx) = 0;

  virtual void enterFld_35B_B(SwiftMtParser_MT568Parser::Fld_35B_BContext *ctx) = 0;
  virtual void exitFld_35B_B(SwiftMtParser_MT568Parser::Fld_35B_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT568Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT568Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_94B_B1(SwiftMtParser_MT568Parser::Fld_94B_B1Context *ctx) = 0;
  virtual void exitFld_94B_B1(SwiftMtParser_MT568Parser::Fld_94B_B1Context *ctx) = 0;

  virtual void enterFld_22F_B1(SwiftMtParser_MT568Parser::Fld_22F_B1Context *ctx) = 0;
  virtual void exitFld_22F_B1(SwiftMtParser_MT568Parser::Fld_22F_B1Context *ctx) = 0;

  virtual void enterFld_12a_B1(SwiftMtParser_MT568Parser::Fld_12a_B1Context *ctx) = 0;
  virtual void exitFld_12a_B1(SwiftMtParser_MT568Parser::Fld_12a_B1Context *ctx) = 0;

  virtual void enterFld_11A_B1(SwiftMtParser_MT568Parser::Fld_11A_B1Context *ctx) = 0;
  virtual void exitFld_11A_B1(SwiftMtParser_MT568Parser::Fld_11A_B1Context *ctx) = 0;

  virtual void enterFld_98A_B1(SwiftMtParser_MT568Parser::Fld_98A_B1Context *ctx) = 0;
  virtual void exitFld_98A_B1(SwiftMtParser_MT568Parser::Fld_98A_B1Context *ctx) = 0;

  virtual void enterFld_92A_B1(SwiftMtParser_MT568Parser::Fld_92A_B1Context *ctx) = 0;
  virtual void exitFld_92A_B1(SwiftMtParser_MT568Parser::Fld_92A_B1Context *ctx) = 0;

  virtual void enterFld_36B_B1(SwiftMtParser_MT568Parser::Fld_36B_B1Context *ctx) = 0;
  virtual void exitFld_36B_B1(SwiftMtParser_MT568Parser::Fld_36B_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT568Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT568Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_93a_B(SwiftMtParser_MT568Parser::Fld_93a_BContext *ctx) = 0;
  virtual void exitFld_93a_B(SwiftMtParser_MT568Parser::Fld_93a_BContext *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT568Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT568Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT568Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT568Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_70a_C(SwiftMtParser_MT568Parser::Fld_70a_CContext *ctx) = 0;
  virtual void exitFld_70a_C(SwiftMtParser_MT568Parser::Fld_70a_CContext *ctx) = 0;

  virtual void enterFld_95a_C(SwiftMtParser_MT568Parser::Fld_95a_CContext *ctx) = 0;
  virtual void exitFld_95a_C(SwiftMtParser_MT568Parser::Fld_95a_CContext *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT568Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT568Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_28E_A_E(SwiftMtParser_MT568Parser::Fld_28E_A_EContext *ctx) = 0;
  virtual void exitFld_28E_A_E(SwiftMtParser_MT568Parser::Fld_28E_A_EContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT568Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT568Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT568Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT568Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_22F_A_F(SwiftMtParser_MT568Parser::Fld_22F_A_FContext *ctx) = 0;
  virtual void exitFld_22F_A_F(SwiftMtParser_MT568Parser::Fld_22F_A_FContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT568Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT568Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT568Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT568Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_22F_A1_F(SwiftMtParser_MT568Parser::Fld_22F_A1_FContext *ctx) = 0;
  virtual void exitFld_22F_A1_F(SwiftMtParser_MT568Parser::Fld_22F_A1_FContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT568Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT568Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT568Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT568Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT568Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT568Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_95a_B_P(SwiftMtParser_MT568Parser::Fld_95a_B_PContext *ctx) = 0;
  virtual void exitFld_95a_B_P(SwiftMtParser_MT568Parser::Fld_95a_B_PContext *ctx) = 0;

  virtual void enterFld_95a_B_R(SwiftMtParser_MT568Parser::Fld_95a_B_RContext *ctx) = 0;
  virtual void exitFld_95a_B_R(SwiftMtParser_MT568Parser::Fld_95a_B_RContext *ctx) = 0;

  virtual void enterFld_97a_B_A(SwiftMtParser_MT568Parser::Fld_97a_B_AContext *ctx) = 0;
  virtual void exitFld_97a_B_A(SwiftMtParser_MT568Parser::Fld_97a_B_AContext *ctx) = 0;

  virtual void enterFld_97a_B_C(SwiftMtParser_MT568Parser::Fld_97a_B_CContext *ctx) = 0;
  virtual void exitFld_97a_B_C(SwiftMtParser_MT568Parser::Fld_97a_B_CContext *ctx) = 0;

  virtual void enterFld_94a_B_B(SwiftMtParser_MT568Parser::Fld_94a_B_BContext *ctx) = 0;
  virtual void exitFld_94a_B_B(SwiftMtParser_MT568Parser::Fld_94a_B_BContext *ctx) = 0;

  virtual void enterFld_94a_B_C(SwiftMtParser_MT568Parser::Fld_94a_B_CContext *ctx) = 0;
  virtual void exitFld_94a_B_C(SwiftMtParser_MT568Parser::Fld_94a_B_CContext *ctx) = 0;

  virtual void enterFld_94a_B_F(SwiftMtParser_MT568Parser::Fld_94a_B_FContext *ctx) = 0;
  virtual void exitFld_94a_B_F(SwiftMtParser_MT568Parser::Fld_94a_B_FContext *ctx) = 0;

  virtual void enterFld_35B_B_B(SwiftMtParser_MT568Parser::Fld_35B_B_BContext *ctx) = 0;
  virtual void exitFld_35B_B_B(SwiftMtParser_MT568Parser::Fld_35B_B_BContext *ctx) = 0;

  virtual void enterFld_94B_B1_B(SwiftMtParser_MT568Parser::Fld_94B_B1_BContext *ctx) = 0;
  virtual void exitFld_94B_B1_B(SwiftMtParser_MT568Parser::Fld_94B_B1_BContext *ctx) = 0;

  virtual void enterFld_22F_B1_F(SwiftMtParser_MT568Parser::Fld_22F_B1_FContext *ctx) = 0;
  virtual void exitFld_22F_B1_F(SwiftMtParser_MT568Parser::Fld_22F_B1_FContext *ctx) = 0;

  virtual void enterFld_12a_B1_A(SwiftMtParser_MT568Parser::Fld_12a_B1_AContext *ctx) = 0;
  virtual void exitFld_12a_B1_A(SwiftMtParser_MT568Parser::Fld_12a_B1_AContext *ctx) = 0;

  virtual void enterFld_12a_B1_C(SwiftMtParser_MT568Parser::Fld_12a_B1_CContext *ctx) = 0;
  virtual void exitFld_12a_B1_C(SwiftMtParser_MT568Parser::Fld_12a_B1_CContext *ctx) = 0;

  virtual void enterFld_11A_B1_A(SwiftMtParser_MT568Parser::Fld_11A_B1_AContext *ctx) = 0;
  virtual void exitFld_11A_B1_A(SwiftMtParser_MT568Parser::Fld_11A_B1_AContext *ctx) = 0;

  virtual void enterFld_98A_B1_A(SwiftMtParser_MT568Parser::Fld_98A_B1_AContext *ctx) = 0;
  virtual void exitFld_98A_B1_A(SwiftMtParser_MT568Parser::Fld_98A_B1_AContext *ctx) = 0;

  virtual void enterFld_92A_B1_A(SwiftMtParser_MT568Parser::Fld_92A_B1_AContext *ctx) = 0;
  virtual void exitFld_92A_B1_A(SwiftMtParser_MT568Parser::Fld_92A_B1_AContext *ctx) = 0;

  virtual void enterFld_36B_B1_B(SwiftMtParser_MT568Parser::Fld_36B_B1_BContext *ctx) = 0;
  virtual void exitFld_36B_B1_B(SwiftMtParser_MT568Parser::Fld_36B_B1_BContext *ctx) = 0;

  virtual void enterFld_93a_B_B(SwiftMtParser_MT568Parser::Fld_93a_B_BContext *ctx) = 0;
  virtual void exitFld_93a_B_B(SwiftMtParser_MT568Parser::Fld_93a_B_BContext *ctx) = 0;

  virtual void enterFld_93a_B_C(SwiftMtParser_MT568Parser::Fld_93a_B_CContext *ctx) = 0;
  virtual void exitFld_93a_B_C(SwiftMtParser_MT568Parser::Fld_93a_B_CContext *ctx) = 0;

  virtual void enterFld_70a_C_E(SwiftMtParser_MT568Parser::Fld_70a_C_EContext *ctx) = 0;
  virtual void exitFld_70a_C_E(SwiftMtParser_MT568Parser::Fld_70a_C_EContext *ctx) = 0;

  virtual void enterFld_70a_C_F(SwiftMtParser_MT568Parser::Fld_70a_C_FContext *ctx) = 0;
  virtual void exitFld_70a_C_F(SwiftMtParser_MT568Parser::Fld_70a_C_FContext *ctx) = 0;

  virtual void enterFld_95a_C_P(SwiftMtParser_MT568Parser::Fld_95a_C_PContext *ctx) = 0;
  virtual void exitFld_95a_C_P(SwiftMtParser_MT568Parser::Fld_95a_C_PContext *ctx) = 0;

  virtual void enterFld_95a_C_Q(SwiftMtParser_MT568Parser::Fld_95a_C_QContext *ctx) = 0;
  virtual void exitFld_95a_C_Q(SwiftMtParser_MT568Parser::Fld_95a_C_QContext *ctx) = 0;

  virtual void enterFld_95a_C_R(SwiftMtParser_MT568Parser::Fld_95a_C_RContext *ctx) = 0;
  virtual void exitFld_95a_C_R(SwiftMtParser_MT568Parser::Fld_95a_C_RContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
