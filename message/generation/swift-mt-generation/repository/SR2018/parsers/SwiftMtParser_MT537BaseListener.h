
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT537Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT537.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT537Listener.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This class provides an empty implementation of SwiftMtParser_MT537Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SwiftMtParser_MT537BaseListener : public SwiftMtParser_MT537Listener {
public:

  virtual void enterMessage(SwiftMtParser_MT537Parser::MessageContext * /*ctx*/) override { }
  virtual void exitMessage(SwiftMtParser_MT537Parser::MessageContext * /*ctx*/) override { }

  virtual void enterBh(SwiftMtParser_MT537Parser::BhContext * /*ctx*/) override { }
  virtual void exitBh(SwiftMtParser_MT537Parser::BhContext * /*ctx*/) override { }

  virtual void enterBh_content(SwiftMtParser_MT537Parser::Bh_contentContext * /*ctx*/) override { }
  virtual void exitBh_content(SwiftMtParser_MT537Parser::Bh_contentContext * /*ctx*/) override { }

  virtual void enterAh(SwiftMtParser_MT537Parser::AhContext * /*ctx*/) override { }
  virtual void exitAh(SwiftMtParser_MT537Parser::AhContext * /*ctx*/) override { }

  virtual void enterAh_content(SwiftMtParser_MT537Parser::Ah_contentContext * /*ctx*/) override { }
  virtual void exitAh_content(SwiftMtParser_MT537Parser::Ah_contentContext * /*ctx*/) override { }

  virtual void enterUh(SwiftMtParser_MT537Parser::UhContext * /*ctx*/) override { }
  virtual void exitUh(SwiftMtParser_MT537Parser::UhContext * /*ctx*/) override { }

  virtual void enterTr(SwiftMtParser_MT537Parser::TrContext * /*ctx*/) override { }
  virtual void exitTr(SwiftMtParser_MT537Parser::TrContext * /*ctx*/) override { }

  virtual void enterSys_block(SwiftMtParser_MT537Parser::Sys_blockContext * /*ctx*/) override { }
  virtual void exitSys_block(SwiftMtParser_MT537Parser::Sys_blockContext * /*ctx*/) override { }

  virtual void enterSys_element(SwiftMtParser_MT537Parser::Sys_elementContext * /*ctx*/) override { }
  virtual void exitSys_element(SwiftMtParser_MT537Parser::Sys_elementContext * /*ctx*/) override { }

  virtual void enterSys_element_key(SwiftMtParser_MT537Parser::Sys_element_keyContext * /*ctx*/) override { }
  virtual void exitSys_element_key(SwiftMtParser_MT537Parser::Sys_element_keyContext * /*ctx*/) override { }

  virtual void enterSys_element_content(SwiftMtParser_MT537Parser::Sys_element_contentContext * /*ctx*/) override { }
  virtual void exitSys_element_content(SwiftMtParser_MT537Parser::Sys_element_contentContext * /*ctx*/) override { }

  virtual void enterMt(SwiftMtParser_MT537Parser::MtContext * /*ctx*/) override { }
  virtual void exitMt(SwiftMtParser_MT537Parser::MtContext * /*ctx*/) override { }

  virtual void enterSeq_A(SwiftMtParser_MT537Parser::Seq_AContext * /*ctx*/) override { }
  virtual void exitSeq_A(SwiftMtParser_MT537Parser::Seq_AContext * /*ctx*/) override { }

  virtual void enterSeq_A1(SwiftMtParser_MT537Parser::Seq_A1Context * /*ctx*/) override { }
  virtual void exitSeq_A1(SwiftMtParser_MT537Parser::Seq_A1Context * /*ctx*/) override { }

  virtual void enterSeq_B(SwiftMtParser_MT537Parser::Seq_BContext * /*ctx*/) override { }
  virtual void exitSeq_B(SwiftMtParser_MT537Parser::Seq_BContext * /*ctx*/) override { }

  virtual void enterSeq_B1(SwiftMtParser_MT537Parser::Seq_B1Context * /*ctx*/) override { }
  virtual void exitSeq_B1(SwiftMtParser_MT537Parser::Seq_B1Context * /*ctx*/) override { }

  virtual void enterSeq_B2(SwiftMtParser_MT537Parser::Seq_B2Context * /*ctx*/) override { }
  virtual void exitSeq_B2(SwiftMtParser_MT537Parser::Seq_B2Context * /*ctx*/) override { }

  virtual void enterSeq_B2a(SwiftMtParser_MT537Parser::Seq_B2aContext * /*ctx*/) override { }
  virtual void exitSeq_B2a(SwiftMtParser_MT537Parser::Seq_B2aContext * /*ctx*/) override { }

  virtual void enterSeq_B2b(SwiftMtParser_MT537Parser::Seq_B2bContext * /*ctx*/) override { }
  virtual void exitSeq_B2b(SwiftMtParser_MT537Parser::Seq_B2bContext * /*ctx*/) override { }

  virtual void enterFld_16R_A(SwiftMtParser_MT537Parser::Fld_16R_AContext * /*ctx*/) override { }
  virtual void exitFld_16R_A(SwiftMtParser_MT537Parser::Fld_16R_AContext * /*ctx*/) override { }

  virtual void enterFld_28E_A(SwiftMtParser_MT537Parser::Fld_28E_AContext * /*ctx*/) override { }
  virtual void exitFld_28E_A(SwiftMtParser_MT537Parser::Fld_28E_AContext * /*ctx*/) override { }

  virtual void enterFld_13a_A(SwiftMtParser_MT537Parser::Fld_13a_AContext * /*ctx*/) override { }
  virtual void exitFld_13a_A(SwiftMtParser_MT537Parser::Fld_13a_AContext * /*ctx*/) override { }

  virtual void enterFld_20C_A(SwiftMtParser_MT537Parser::Fld_20C_AContext * /*ctx*/) override { }
  virtual void exitFld_20C_A(SwiftMtParser_MT537Parser::Fld_20C_AContext * /*ctx*/) override { }

  virtual void enterFld_23G_A(SwiftMtParser_MT537Parser::Fld_23G_AContext * /*ctx*/) override { }
  virtual void exitFld_23G_A(SwiftMtParser_MT537Parser::Fld_23G_AContext * /*ctx*/) override { }

  virtual void enterFld_98a_A(SwiftMtParser_MT537Parser::Fld_98a_AContext * /*ctx*/) override { }
  virtual void exitFld_98a_A(SwiftMtParser_MT537Parser::Fld_98a_AContext * /*ctx*/) override { }

  virtual void enterFld_22a_A(SwiftMtParser_MT537Parser::Fld_22a_AContext * /*ctx*/) override { }
  virtual void exitFld_22a_A(SwiftMtParser_MT537Parser::Fld_22a_AContext * /*ctx*/) override { }

  virtual void enterFld_16R_A1(SwiftMtParser_MT537Parser::Fld_16R_A1Context * /*ctx*/) override { }
  virtual void exitFld_16R_A1(SwiftMtParser_MT537Parser::Fld_16R_A1Context * /*ctx*/) override { }

  virtual void enterFld_13a_A1(SwiftMtParser_MT537Parser::Fld_13a_A1Context * /*ctx*/) override { }
  virtual void exitFld_13a_A1(SwiftMtParser_MT537Parser::Fld_13a_A1Context * /*ctx*/) override { }

  virtual void enterFld_20C_A1(SwiftMtParser_MT537Parser::Fld_20C_A1Context * /*ctx*/) override { }
  virtual void exitFld_20C_A1(SwiftMtParser_MT537Parser::Fld_20C_A1Context * /*ctx*/) override { }

  virtual void enterFld_16S_A1(SwiftMtParser_MT537Parser::Fld_16S_A1Context * /*ctx*/) override { }
  virtual void exitFld_16S_A1(SwiftMtParser_MT537Parser::Fld_16S_A1Context * /*ctx*/) override { }

  virtual void enterFld_95a_A(SwiftMtParser_MT537Parser::Fld_95a_AContext * /*ctx*/) override { }
  virtual void exitFld_95a_A(SwiftMtParser_MT537Parser::Fld_95a_AContext * /*ctx*/) override { }

  virtual void enterFld_97a_A(SwiftMtParser_MT537Parser::Fld_97a_AContext * /*ctx*/) override { }
  virtual void exitFld_97a_A(SwiftMtParser_MT537Parser::Fld_97a_AContext * /*ctx*/) override { }

  virtual void enterFld_17B_A(SwiftMtParser_MT537Parser::Fld_17B_AContext * /*ctx*/) override { }
  virtual void exitFld_17B_A(SwiftMtParser_MT537Parser::Fld_17B_AContext * /*ctx*/) override { }

  virtual void enterFld_16S_A(SwiftMtParser_MT537Parser::Fld_16S_AContext * /*ctx*/) override { }
  virtual void exitFld_16S_A(SwiftMtParser_MT537Parser::Fld_16S_AContext * /*ctx*/) override { }

  virtual void enterFld_16R_B(SwiftMtParser_MT537Parser::Fld_16R_BContext * /*ctx*/) override { }
  virtual void exitFld_16R_B(SwiftMtParser_MT537Parser::Fld_16R_BContext * /*ctx*/) override { }

  virtual void enterFld_25D_B(SwiftMtParser_MT537Parser::Fld_25D_BContext * /*ctx*/) override { }
  virtual void exitFld_25D_B(SwiftMtParser_MT537Parser::Fld_25D_BContext * /*ctx*/) override { }

  virtual void enterFld_16R_B1(SwiftMtParser_MT537Parser::Fld_16R_B1Context * /*ctx*/) override { }
  virtual void exitFld_16R_B1(SwiftMtParser_MT537Parser::Fld_16R_B1Context * /*ctx*/) override { }

  virtual void enterFld_24B_B1(SwiftMtParser_MT537Parser::Fld_24B_B1Context * /*ctx*/) override { }
  virtual void exitFld_24B_B1(SwiftMtParser_MT537Parser::Fld_24B_B1Context * /*ctx*/) override { }

  virtual void enterFld_70D_B1(SwiftMtParser_MT537Parser::Fld_70D_B1Context * /*ctx*/) override { }
  virtual void exitFld_70D_B1(SwiftMtParser_MT537Parser::Fld_70D_B1Context * /*ctx*/) override { }

  virtual void enterFld_16S_B1(SwiftMtParser_MT537Parser::Fld_16S_B1Context * /*ctx*/) override { }
  virtual void exitFld_16S_B1(SwiftMtParser_MT537Parser::Fld_16S_B1Context * /*ctx*/) override { }

  virtual void enterFld_16R_B2(SwiftMtParser_MT537Parser::Fld_16R_B2Context * /*ctx*/) override { }
  virtual void exitFld_16R_B2(SwiftMtParser_MT537Parser::Fld_16R_B2Context * /*ctx*/) override { }

  virtual void enterFld_16R_B2a(SwiftMtParser_MT537Parser::Fld_16R_B2aContext * /*ctx*/) override { }
  virtual void exitFld_16R_B2a(SwiftMtParser_MT537Parser::Fld_16R_B2aContext * /*ctx*/) override { }

  virtual void enterFld_13a_B2a(SwiftMtParser_MT537Parser::Fld_13a_B2aContext * /*ctx*/) override { }
  virtual void exitFld_13a_B2a(SwiftMtParser_MT537Parser::Fld_13a_B2aContext * /*ctx*/) override { }

  virtual void enterFld_20C_B2a(SwiftMtParser_MT537Parser::Fld_20C_B2aContext * /*ctx*/) override { }
  virtual void exitFld_20C_B2a(SwiftMtParser_MT537Parser::Fld_20C_B2aContext * /*ctx*/) override { }

  virtual void enterFld_16S_B2a(SwiftMtParser_MT537Parser::Fld_16S_B2aContext * /*ctx*/) override { }
  virtual void exitFld_16S_B2a(SwiftMtParser_MT537Parser::Fld_16S_B2aContext * /*ctx*/) override { }

  virtual void enterFld_16R_B2b(SwiftMtParser_MT537Parser::Fld_16R_B2bContext * /*ctx*/) override { }
  virtual void exitFld_16R_B2b(SwiftMtParser_MT537Parser::Fld_16R_B2bContext * /*ctx*/) override { }

  virtual void enterFld_94a_B2b(SwiftMtParser_MT537Parser::Fld_94a_B2bContext * /*ctx*/) override { }
  virtual void exitFld_94a_B2b(SwiftMtParser_MT537Parser::Fld_94a_B2bContext * /*ctx*/) override { }

  virtual void enterFld_35B_B2b(SwiftMtParser_MT537Parser::Fld_35B_B2bContext * /*ctx*/) override { }
  virtual void exitFld_35B_B2b(SwiftMtParser_MT537Parser::Fld_35B_B2bContext * /*ctx*/) override { }

  virtual void enterFld_36B_B2b(SwiftMtParser_MT537Parser::Fld_36B_B2bContext * /*ctx*/) override { }
  virtual void exitFld_36B_B2b(SwiftMtParser_MT537Parser::Fld_36B_B2bContext * /*ctx*/) override { }

  virtual void enterFld_19A_B2b(SwiftMtParser_MT537Parser::Fld_19A_B2bContext * /*ctx*/) override { }
  virtual void exitFld_19A_B2b(SwiftMtParser_MT537Parser::Fld_19A_B2bContext * /*ctx*/) override { }

  virtual void enterFld_22a_B2b(SwiftMtParser_MT537Parser::Fld_22a_B2bContext * /*ctx*/) override { }
  virtual void exitFld_22a_B2b(SwiftMtParser_MT537Parser::Fld_22a_B2bContext * /*ctx*/) override { }

  virtual void enterFld_98a_B2b(SwiftMtParser_MT537Parser::Fld_98a_B2bContext * /*ctx*/) override { }
  virtual void exitFld_98a_B2b(SwiftMtParser_MT537Parser::Fld_98a_B2bContext * /*ctx*/) override { }

  virtual void enterFld_70E_B2b(SwiftMtParser_MT537Parser::Fld_70E_B2bContext * /*ctx*/) override { }
  virtual void exitFld_70E_B2b(SwiftMtParser_MT537Parser::Fld_70E_B2bContext * /*ctx*/) override { }

  virtual void enterFld_28E_A_E(SwiftMtParser_MT537Parser::Fld_28E_A_EContext * /*ctx*/) override { }
  virtual void exitFld_28E_A_E(SwiftMtParser_MT537Parser::Fld_28E_A_EContext * /*ctx*/) override { }

  virtual void enterFld_13a_A_A(SwiftMtParser_MT537Parser::Fld_13a_A_AContext * /*ctx*/) override { }
  virtual void exitFld_13a_A_A(SwiftMtParser_MT537Parser::Fld_13a_A_AContext * /*ctx*/) override { }

  virtual void enterFld_13a_A_J(SwiftMtParser_MT537Parser::Fld_13a_A_JContext * /*ctx*/) override { }
  virtual void exitFld_13a_A_J(SwiftMtParser_MT537Parser::Fld_13a_A_JContext * /*ctx*/) override { }

  virtual void enterFld_20C_A_C(SwiftMtParser_MT537Parser::Fld_20C_A_CContext * /*ctx*/) override { }
  virtual void exitFld_20C_A_C(SwiftMtParser_MT537Parser::Fld_20C_A_CContext * /*ctx*/) override { }

  virtual void enterFld_23G_A_G(SwiftMtParser_MT537Parser::Fld_23G_A_GContext * /*ctx*/) override { }
  virtual void exitFld_23G_A_G(SwiftMtParser_MT537Parser::Fld_23G_A_GContext * /*ctx*/) override { }

  virtual void enterFld_98a_A_A(SwiftMtParser_MT537Parser::Fld_98a_A_AContext * /*ctx*/) override { }
  virtual void exitFld_98a_A_A(SwiftMtParser_MT537Parser::Fld_98a_A_AContext * /*ctx*/) override { }

  virtual void enterFld_98a_A_C(SwiftMtParser_MT537Parser::Fld_98a_A_CContext * /*ctx*/) override { }
  virtual void exitFld_98a_A_C(SwiftMtParser_MT537Parser::Fld_98a_A_CContext * /*ctx*/) override { }

  virtual void enterFld_98a_A_E(SwiftMtParser_MT537Parser::Fld_98a_A_EContext * /*ctx*/) override { }
  virtual void exitFld_98a_A_E(SwiftMtParser_MT537Parser::Fld_98a_A_EContext * /*ctx*/) override { }

  virtual void enterFld_22a_A_F(SwiftMtParser_MT537Parser::Fld_22a_A_FContext * /*ctx*/) override { }
  virtual void exitFld_22a_A_F(SwiftMtParser_MT537Parser::Fld_22a_A_FContext * /*ctx*/) override { }

  virtual void enterFld_22a_A_H(SwiftMtParser_MT537Parser::Fld_22a_A_HContext * /*ctx*/) override { }
  virtual void exitFld_22a_A_H(SwiftMtParser_MT537Parser::Fld_22a_A_HContext * /*ctx*/) override { }

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT537Parser::Fld_13a_A1_AContext * /*ctx*/) override { }
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT537Parser::Fld_13a_A1_AContext * /*ctx*/) override { }

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT537Parser::Fld_13a_A1_BContext * /*ctx*/) override { }
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT537Parser::Fld_13a_A1_BContext * /*ctx*/) override { }

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT537Parser::Fld_20C_A1_CContext * /*ctx*/) override { }
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT537Parser::Fld_20C_A1_CContext * /*ctx*/) override { }

  virtual void enterFld_95a_A_L(SwiftMtParser_MT537Parser::Fld_95a_A_LContext * /*ctx*/) override { }
  virtual void exitFld_95a_A_L(SwiftMtParser_MT537Parser::Fld_95a_A_LContext * /*ctx*/) override { }

  virtual void enterFld_95a_A_P(SwiftMtParser_MT537Parser::Fld_95a_A_PContext * /*ctx*/) override { }
  virtual void exitFld_95a_A_P(SwiftMtParser_MT537Parser::Fld_95a_A_PContext * /*ctx*/) override { }

  virtual void enterFld_95a_A_R(SwiftMtParser_MT537Parser::Fld_95a_A_RContext * /*ctx*/) override { }
  virtual void exitFld_95a_A_R(SwiftMtParser_MT537Parser::Fld_95a_A_RContext * /*ctx*/) override { }

  virtual void enterFld_97a_A_A(SwiftMtParser_MT537Parser::Fld_97a_A_AContext * /*ctx*/) override { }
  virtual void exitFld_97a_A_A(SwiftMtParser_MT537Parser::Fld_97a_A_AContext * /*ctx*/) override { }

  virtual void enterFld_97a_A_B(SwiftMtParser_MT537Parser::Fld_97a_A_BContext * /*ctx*/) override { }
  virtual void exitFld_97a_A_B(SwiftMtParser_MT537Parser::Fld_97a_A_BContext * /*ctx*/) override { }

  virtual void enterFld_17B_A_B(SwiftMtParser_MT537Parser::Fld_17B_A_BContext * /*ctx*/) override { }
  virtual void exitFld_17B_A_B(SwiftMtParser_MT537Parser::Fld_17B_A_BContext * /*ctx*/) override { }

  virtual void enterFld_25D_B_D(SwiftMtParser_MT537Parser::Fld_25D_B_DContext * /*ctx*/) override { }
  virtual void exitFld_25D_B_D(SwiftMtParser_MT537Parser::Fld_25D_B_DContext * /*ctx*/) override { }

  virtual void enterFld_24B_B1_B(SwiftMtParser_MT537Parser::Fld_24B_B1_BContext * /*ctx*/) override { }
  virtual void exitFld_24B_B1_B(SwiftMtParser_MT537Parser::Fld_24B_B1_BContext * /*ctx*/) override { }

  virtual void enterFld_70D_B1_D(SwiftMtParser_MT537Parser::Fld_70D_B1_DContext * /*ctx*/) override { }
  virtual void exitFld_70D_B1_D(SwiftMtParser_MT537Parser::Fld_70D_B1_DContext * /*ctx*/) override { }

  virtual void enterFld_13a_B2a_A(SwiftMtParser_MT537Parser::Fld_13a_B2a_AContext * /*ctx*/) override { }
  virtual void exitFld_13a_B2a_A(SwiftMtParser_MT537Parser::Fld_13a_B2a_AContext * /*ctx*/) override { }

  virtual void enterFld_13a_B2a_B(SwiftMtParser_MT537Parser::Fld_13a_B2a_BContext * /*ctx*/) override { }
  virtual void exitFld_13a_B2a_B(SwiftMtParser_MT537Parser::Fld_13a_B2a_BContext * /*ctx*/) override { }

  virtual void enterFld_20C_B2a_C(SwiftMtParser_MT537Parser::Fld_20C_B2a_CContext * /*ctx*/) override { }
  virtual void exitFld_20C_B2a_C(SwiftMtParser_MT537Parser::Fld_20C_B2a_CContext * /*ctx*/) override { }

  virtual void enterFld_94a_B2b_B(SwiftMtParser_MT537Parser::Fld_94a_B2b_BContext * /*ctx*/) override { }
  virtual void exitFld_94a_B2b_B(SwiftMtParser_MT537Parser::Fld_94a_B2b_BContext * /*ctx*/) override { }

  virtual void enterFld_94a_B2b_C(SwiftMtParser_MT537Parser::Fld_94a_B2b_CContext * /*ctx*/) override { }
  virtual void exitFld_94a_B2b_C(SwiftMtParser_MT537Parser::Fld_94a_B2b_CContext * /*ctx*/) override { }

  virtual void enterFld_94a_B2b_F(SwiftMtParser_MT537Parser::Fld_94a_B2b_FContext * /*ctx*/) override { }
  virtual void exitFld_94a_B2b_F(SwiftMtParser_MT537Parser::Fld_94a_B2b_FContext * /*ctx*/) override { }

  virtual void enterFld_94a_B2b_H(SwiftMtParser_MT537Parser::Fld_94a_B2b_HContext * /*ctx*/) override { }
  virtual void exitFld_94a_B2b_H(SwiftMtParser_MT537Parser::Fld_94a_B2b_HContext * /*ctx*/) override { }

  virtual void enterFld_94a_B2b_L(SwiftMtParser_MT537Parser::Fld_94a_B2b_LContext * /*ctx*/) override { }
  virtual void exitFld_94a_B2b_L(SwiftMtParser_MT537Parser::Fld_94a_B2b_LContext * /*ctx*/) override { }

  virtual void enterFld_35B_B2b_B(SwiftMtParser_MT537Parser::Fld_35B_B2b_BContext * /*ctx*/) override { }
  virtual void exitFld_35B_B2b_B(SwiftMtParser_MT537Parser::Fld_35B_B2b_BContext * /*ctx*/) override { }

  virtual void enterFld_36B_B2b_B(SwiftMtParser_MT537Parser::Fld_36B_B2b_BContext * /*ctx*/) override { }
  virtual void exitFld_36B_B2b_B(SwiftMtParser_MT537Parser::Fld_36B_B2b_BContext * /*ctx*/) override { }

  virtual void enterFld_19A_B2b_A(SwiftMtParser_MT537Parser::Fld_19A_B2b_AContext * /*ctx*/) override { }
  virtual void exitFld_19A_B2b_A(SwiftMtParser_MT537Parser::Fld_19A_B2b_AContext * /*ctx*/) override { }

  virtual void enterFld_22a_B2b_F(SwiftMtParser_MT537Parser::Fld_22a_B2b_FContext * /*ctx*/) override { }
  virtual void exitFld_22a_B2b_F(SwiftMtParser_MT537Parser::Fld_22a_B2b_FContext * /*ctx*/) override { }

  virtual void enterFld_22a_B2b_H(SwiftMtParser_MT537Parser::Fld_22a_B2b_HContext * /*ctx*/) override { }
  virtual void exitFld_22a_B2b_H(SwiftMtParser_MT537Parser::Fld_22a_B2b_HContext * /*ctx*/) override { }

  virtual void enterFld_98a_B2b_A(SwiftMtParser_MT537Parser::Fld_98a_B2b_AContext * /*ctx*/) override { }
  virtual void exitFld_98a_B2b_A(SwiftMtParser_MT537Parser::Fld_98a_B2b_AContext * /*ctx*/) override { }

  virtual void enterFld_98a_B2b_B(SwiftMtParser_MT537Parser::Fld_98a_B2b_BContext * /*ctx*/) override { }
  virtual void exitFld_98a_B2b_B(SwiftMtParser_MT537Parser::Fld_98a_B2b_BContext * /*ctx*/) override { }

  virtual void enterFld_98a_B2b_C(SwiftMtParser_MT537Parser::Fld_98a_B2b_CContext * /*ctx*/) override { }
  virtual void exitFld_98a_B2b_C(SwiftMtParser_MT537Parser::Fld_98a_B2b_CContext * /*ctx*/) override { }

  virtual void enterFld_70E_B2b_E(SwiftMtParser_MT537Parser::Fld_70E_B2b_EContext * /*ctx*/) override { }
  virtual void exitFld_70E_B2b_E(SwiftMtParser_MT537Parser::Fld_70E_B2b_EContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace message::definition::swift::mt::parsers::sr2018
