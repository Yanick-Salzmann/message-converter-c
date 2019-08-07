
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT370Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT370.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT370Listener.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This class provides an empty implementation of SwiftMtParser_MT370Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SwiftMtParser_MT370BaseListener : public SwiftMtParser_MT370Listener {
public:

  virtual void enterMessage(SwiftMtParser_MT370Parser::MessageContext * /*ctx*/) override { }
  virtual void exitMessage(SwiftMtParser_MT370Parser::MessageContext * /*ctx*/) override { }

  virtual void enterBh(SwiftMtParser_MT370Parser::BhContext * /*ctx*/) override { }
  virtual void exitBh(SwiftMtParser_MT370Parser::BhContext * /*ctx*/) override { }

  virtual void enterBh_content(SwiftMtParser_MT370Parser::Bh_contentContext * /*ctx*/) override { }
  virtual void exitBh_content(SwiftMtParser_MT370Parser::Bh_contentContext * /*ctx*/) override { }

  virtual void enterAh(SwiftMtParser_MT370Parser::AhContext * /*ctx*/) override { }
  virtual void exitAh(SwiftMtParser_MT370Parser::AhContext * /*ctx*/) override { }

  virtual void enterAh_content(SwiftMtParser_MT370Parser::Ah_contentContext * /*ctx*/) override { }
  virtual void exitAh_content(SwiftMtParser_MT370Parser::Ah_contentContext * /*ctx*/) override { }

  virtual void enterUh(SwiftMtParser_MT370Parser::UhContext * /*ctx*/) override { }
  virtual void exitUh(SwiftMtParser_MT370Parser::UhContext * /*ctx*/) override { }

  virtual void enterTr(SwiftMtParser_MT370Parser::TrContext * /*ctx*/) override { }
  virtual void exitTr(SwiftMtParser_MT370Parser::TrContext * /*ctx*/) override { }

  virtual void enterSys_block(SwiftMtParser_MT370Parser::Sys_blockContext * /*ctx*/) override { }
  virtual void exitSys_block(SwiftMtParser_MT370Parser::Sys_blockContext * /*ctx*/) override { }

  virtual void enterSys_element(SwiftMtParser_MT370Parser::Sys_elementContext * /*ctx*/) override { }
  virtual void exitSys_element(SwiftMtParser_MT370Parser::Sys_elementContext * /*ctx*/) override { }

  virtual void enterSys_element_key(SwiftMtParser_MT370Parser::Sys_element_keyContext * /*ctx*/) override { }
  virtual void exitSys_element_key(SwiftMtParser_MT370Parser::Sys_element_keyContext * /*ctx*/) override { }

  virtual void enterSys_element_content(SwiftMtParser_MT370Parser::Sys_element_contentContext * /*ctx*/) override { }
  virtual void exitSys_element_content(SwiftMtParser_MT370Parser::Sys_element_contentContext * /*ctx*/) override { }

  virtual void enterMt(SwiftMtParser_MT370Parser::MtContext * /*ctx*/) override { }
  virtual void exitMt(SwiftMtParser_MT370Parser::MtContext * /*ctx*/) override { }

  virtual void enterSeq_A(SwiftMtParser_MT370Parser::Seq_AContext * /*ctx*/) override { }
  virtual void exitSeq_A(SwiftMtParser_MT370Parser::Seq_AContext * /*ctx*/) override { }

  virtual void enterSeq_A1(SwiftMtParser_MT370Parser::Seq_A1Context * /*ctx*/) override { }
  virtual void exitSeq_A1(SwiftMtParser_MT370Parser::Seq_A1Context * /*ctx*/) override { }

  virtual void enterSeq_A2(SwiftMtParser_MT370Parser::Seq_A2Context * /*ctx*/) override { }
  virtual void exitSeq_A2(SwiftMtParser_MT370Parser::Seq_A2Context * /*ctx*/) override { }

  virtual void enterSeq_B(SwiftMtParser_MT370Parser::Seq_BContext * /*ctx*/) override { }
  virtual void exitSeq_B(SwiftMtParser_MT370Parser::Seq_BContext * /*ctx*/) override { }

  virtual void enterSeq_B1(SwiftMtParser_MT370Parser::Seq_B1Context * /*ctx*/) override { }
  virtual void exitSeq_B1(SwiftMtParser_MT370Parser::Seq_B1Context * /*ctx*/) override { }

  virtual void enterFld_16R_A(SwiftMtParser_MT370Parser::Fld_16R_AContext * /*ctx*/) override { }
  virtual void exitFld_16R_A(SwiftMtParser_MT370Parser::Fld_16R_AContext * /*ctx*/) override { }

  virtual void enterFld_20C_A(SwiftMtParser_MT370Parser::Fld_20C_AContext * /*ctx*/) override { }
  virtual void exitFld_20C_A(SwiftMtParser_MT370Parser::Fld_20C_AContext * /*ctx*/) override { }

  virtual void enterFld_23G_A(SwiftMtParser_MT370Parser::Fld_23G_AContext * /*ctx*/) override { }
  virtual void exitFld_23G_A(SwiftMtParser_MT370Parser::Fld_23G_AContext * /*ctx*/) override { }

  virtual void enterFld_98a_A(SwiftMtParser_MT370Parser::Fld_98a_AContext * /*ctx*/) override { }
  virtual void exitFld_98a_A(SwiftMtParser_MT370Parser::Fld_98a_AContext * /*ctx*/) override { }

  virtual void enterFld_16R_A1(SwiftMtParser_MT370Parser::Fld_16R_A1Context * /*ctx*/) override { }
  virtual void exitFld_16R_A1(SwiftMtParser_MT370Parser::Fld_16R_A1Context * /*ctx*/) override { }

  virtual void enterFld_20C_A1(SwiftMtParser_MT370Parser::Fld_20C_A1Context * /*ctx*/) override { }
  virtual void exitFld_20C_A1(SwiftMtParser_MT370Parser::Fld_20C_A1Context * /*ctx*/) override { }

  virtual void enterFld_16S_A1(SwiftMtParser_MT370Parser::Fld_16S_A1Context * /*ctx*/) override { }
  virtual void exitFld_16S_A1(SwiftMtParser_MT370Parser::Fld_16S_A1Context * /*ctx*/) override { }

  virtual void enterFld_95P_A(SwiftMtParser_MT370Parser::Fld_95P_AContext * /*ctx*/) override { }
  virtual void exitFld_95P_A(SwiftMtParser_MT370Parser::Fld_95P_AContext * /*ctx*/) override { }

  virtual void enterFld_16R_A2(SwiftMtParser_MT370Parser::Fld_16R_A2Context * /*ctx*/) override { }
  virtual void exitFld_16R_A2(SwiftMtParser_MT370Parser::Fld_16R_A2Context * /*ctx*/) override { }

  virtual void enterFld_95a_A2(SwiftMtParser_MT370Parser::Fld_95a_A2Context * /*ctx*/) override { }
  virtual void exitFld_95a_A2(SwiftMtParser_MT370Parser::Fld_95a_A2Context * /*ctx*/) override { }

  virtual void enterFld_97A_A2(SwiftMtParser_MT370Parser::Fld_97A_A2Context * /*ctx*/) override { }
  virtual void exitFld_97A_A2(SwiftMtParser_MT370Parser::Fld_97A_A2Context * /*ctx*/) override { }

  virtual void enterFld_16S_A2(SwiftMtParser_MT370Parser::Fld_16S_A2Context * /*ctx*/) override { }
  virtual void exitFld_16S_A2(SwiftMtParser_MT370Parser::Fld_16S_A2Context * /*ctx*/) override { }

  virtual void enterFld_16S_A(SwiftMtParser_MT370Parser::Fld_16S_AContext * /*ctx*/) override { }
  virtual void exitFld_16S_A(SwiftMtParser_MT370Parser::Fld_16S_AContext * /*ctx*/) override { }

  virtual void enterFld_16R_B(SwiftMtParser_MT370Parser::Fld_16R_BContext * /*ctx*/) override { }
  virtual void exitFld_16R_B(SwiftMtParser_MT370Parser::Fld_16R_BContext * /*ctx*/) override { }

  virtual void enterFld_20C_B(SwiftMtParser_MT370Parser::Fld_20C_BContext * /*ctx*/) override { }
  virtual void exitFld_20C_B(SwiftMtParser_MT370Parser::Fld_20C_BContext * /*ctx*/) override { }

  virtual void enterFld_98a_B(SwiftMtParser_MT370Parser::Fld_98a_BContext * /*ctx*/) override { }
  virtual void exitFld_98a_B(SwiftMtParser_MT370Parser::Fld_98a_BContext * /*ctx*/) override { }

  virtual void enterFld_97A_B(SwiftMtParser_MT370Parser::Fld_97A_BContext * /*ctx*/) override { }
  virtual void exitFld_97A_B(SwiftMtParser_MT370Parser::Fld_97A_BContext * /*ctx*/) override { }

  virtual void enterFld_19A_B(SwiftMtParser_MT370Parser::Fld_19A_BContext * /*ctx*/) override { }
  virtual void exitFld_19A_B(SwiftMtParser_MT370Parser::Fld_19A_BContext * /*ctx*/) override { }

  virtual void enterFld_22H_B(SwiftMtParser_MT370Parser::Fld_22H_BContext * /*ctx*/) override { }
  virtual void exitFld_22H_B(SwiftMtParser_MT370Parser::Fld_22H_BContext * /*ctx*/) override { }

  virtual void enterFld_98A_B(SwiftMtParser_MT370Parser::Fld_98A_BContext * /*ctx*/) override { }
  virtual void exitFld_98A_B(SwiftMtParser_MT370Parser::Fld_98A_BContext * /*ctx*/) override { }

  virtual void enterFld_99a_B(SwiftMtParser_MT370Parser::Fld_99a_BContext * /*ctx*/) override { }
  virtual void exitFld_99a_B(SwiftMtParser_MT370Parser::Fld_99a_BContext * /*ctx*/) override { }

  virtual void enterFld_22F_B(SwiftMtParser_MT370Parser::Fld_22F_BContext * /*ctx*/) override { }
  virtual void exitFld_22F_B(SwiftMtParser_MT370Parser::Fld_22F_BContext * /*ctx*/) override { }

  virtual void enterFld_70E_B(SwiftMtParser_MT370Parser::Fld_70E_BContext * /*ctx*/) override { }
  virtual void exitFld_70E_B(SwiftMtParser_MT370Parser::Fld_70E_BContext * /*ctx*/) override { }

  virtual void enterFld_16R_B1(SwiftMtParser_MT370Parser::Fld_16R_B1Context * /*ctx*/) override { }
  virtual void exitFld_16R_B1(SwiftMtParser_MT370Parser::Fld_16R_B1Context * /*ctx*/) override { }

  virtual void enterFld_95a_B1(SwiftMtParser_MT370Parser::Fld_95a_B1Context * /*ctx*/) override { }
  virtual void exitFld_95a_B1(SwiftMtParser_MT370Parser::Fld_95a_B1Context * /*ctx*/) override { }

  virtual void enterFld_97A_B1(SwiftMtParser_MT370Parser::Fld_97A_B1Context * /*ctx*/) override { }
  virtual void exitFld_97A_B1(SwiftMtParser_MT370Parser::Fld_97A_B1Context * /*ctx*/) override { }

  virtual void enterFld_16S_B1(SwiftMtParser_MT370Parser::Fld_16S_B1Context * /*ctx*/) override { }
  virtual void exitFld_16S_B1(SwiftMtParser_MT370Parser::Fld_16S_B1Context * /*ctx*/) override { }

  virtual void enterFld_16S_B(SwiftMtParser_MT370Parser::Fld_16S_BContext * /*ctx*/) override { }
  virtual void exitFld_16S_B(SwiftMtParser_MT370Parser::Fld_16S_BContext * /*ctx*/) override { }

  virtual void enterFld_20C_A_C(SwiftMtParser_MT370Parser::Fld_20C_A_CContext * /*ctx*/) override { }
  virtual void exitFld_20C_A_C(SwiftMtParser_MT370Parser::Fld_20C_A_CContext * /*ctx*/) override { }

  virtual void enterFld_23G_A_G(SwiftMtParser_MT370Parser::Fld_23G_A_GContext * /*ctx*/) override { }
  virtual void exitFld_23G_A_G(SwiftMtParser_MT370Parser::Fld_23G_A_GContext * /*ctx*/) override { }

  virtual void enterFld_98a_A_A(SwiftMtParser_MT370Parser::Fld_98a_A_AContext * /*ctx*/) override { }
  virtual void exitFld_98a_A_A(SwiftMtParser_MT370Parser::Fld_98a_A_AContext * /*ctx*/) override { }

  virtual void enterFld_98a_A_C(SwiftMtParser_MT370Parser::Fld_98a_A_CContext * /*ctx*/) override { }
  virtual void exitFld_98a_A_C(SwiftMtParser_MT370Parser::Fld_98a_A_CContext * /*ctx*/) override { }

  virtual void enterFld_98a_A_E(SwiftMtParser_MT370Parser::Fld_98a_A_EContext * /*ctx*/) override { }
  virtual void exitFld_98a_A_E(SwiftMtParser_MT370Parser::Fld_98a_A_EContext * /*ctx*/) override { }

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT370Parser::Fld_20C_A1_CContext * /*ctx*/) override { }
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT370Parser::Fld_20C_A1_CContext * /*ctx*/) override { }

  virtual void enterFld_95P_A_P(SwiftMtParser_MT370Parser::Fld_95P_A_PContext * /*ctx*/) override { }
  virtual void exitFld_95P_A_P(SwiftMtParser_MT370Parser::Fld_95P_A_PContext * /*ctx*/) override { }

  virtual void enterFld_95a_A2_P(SwiftMtParser_MT370Parser::Fld_95a_A2_PContext * /*ctx*/) override { }
  virtual void exitFld_95a_A2_P(SwiftMtParser_MT370Parser::Fld_95a_A2_PContext * /*ctx*/) override { }

  virtual void enterFld_95a_A2_Q(SwiftMtParser_MT370Parser::Fld_95a_A2_QContext * /*ctx*/) override { }
  virtual void exitFld_95a_A2_Q(SwiftMtParser_MT370Parser::Fld_95a_A2_QContext * /*ctx*/) override { }

  virtual void enterFld_95a_A2_R(SwiftMtParser_MT370Parser::Fld_95a_A2_RContext * /*ctx*/) override { }
  virtual void exitFld_95a_A2_R(SwiftMtParser_MT370Parser::Fld_95a_A2_RContext * /*ctx*/) override { }

  virtual void enterFld_97A_A2_A(SwiftMtParser_MT370Parser::Fld_97A_A2_AContext * /*ctx*/) override { }
  virtual void exitFld_97A_A2_A(SwiftMtParser_MT370Parser::Fld_97A_A2_AContext * /*ctx*/) override { }

  virtual void enterFld_20C_B_C(SwiftMtParser_MT370Parser::Fld_20C_B_CContext * /*ctx*/) override { }
  virtual void exitFld_20C_B_C(SwiftMtParser_MT370Parser::Fld_20C_B_CContext * /*ctx*/) override { }

  virtual void enterFld_98a_B_A(SwiftMtParser_MT370Parser::Fld_98a_B_AContext * /*ctx*/) override { }
  virtual void exitFld_98a_B_A(SwiftMtParser_MT370Parser::Fld_98a_B_AContext * /*ctx*/) override { }

  virtual void enterFld_98a_B_C(SwiftMtParser_MT370Parser::Fld_98a_B_CContext * /*ctx*/) override { }
  virtual void exitFld_98a_B_C(SwiftMtParser_MT370Parser::Fld_98a_B_CContext * /*ctx*/) override { }

  virtual void enterFld_97A_B_A(SwiftMtParser_MT370Parser::Fld_97A_B_AContext * /*ctx*/) override { }
  virtual void exitFld_97A_B_A(SwiftMtParser_MT370Parser::Fld_97A_B_AContext * /*ctx*/) override { }

  virtual void enterFld_19A_B_A(SwiftMtParser_MT370Parser::Fld_19A_B_AContext * /*ctx*/) override { }
  virtual void exitFld_19A_B_A(SwiftMtParser_MT370Parser::Fld_19A_B_AContext * /*ctx*/) override { }

  virtual void enterFld_22H_B_H(SwiftMtParser_MT370Parser::Fld_22H_B_HContext * /*ctx*/) override { }
  virtual void exitFld_22H_B_H(SwiftMtParser_MT370Parser::Fld_22H_B_HContext * /*ctx*/) override { }

  virtual void enterFld_98A_B_A(SwiftMtParser_MT370Parser::Fld_98A_B_AContext * /*ctx*/) override { }
  virtual void exitFld_98A_B_A(SwiftMtParser_MT370Parser::Fld_98A_B_AContext * /*ctx*/) override { }

  virtual void enterFld_99a_B_A(SwiftMtParser_MT370Parser::Fld_99a_B_AContext * /*ctx*/) override { }
  virtual void exitFld_99a_B_A(SwiftMtParser_MT370Parser::Fld_99a_B_AContext * /*ctx*/) override { }

  virtual void enterFld_99a_B_C(SwiftMtParser_MT370Parser::Fld_99a_B_CContext * /*ctx*/) override { }
  virtual void exitFld_99a_B_C(SwiftMtParser_MT370Parser::Fld_99a_B_CContext * /*ctx*/) override { }

  virtual void enterFld_22F_B_F(SwiftMtParser_MT370Parser::Fld_22F_B_FContext * /*ctx*/) override { }
  virtual void exitFld_22F_B_F(SwiftMtParser_MT370Parser::Fld_22F_B_FContext * /*ctx*/) override { }

  virtual void enterFld_70E_B_E(SwiftMtParser_MT370Parser::Fld_70E_B_EContext * /*ctx*/) override { }
  virtual void exitFld_70E_B_E(SwiftMtParser_MT370Parser::Fld_70E_B_EContext * /*ctx*/) override { }

  virtual void enterFld_95a_B1_P(SwiftMtParser_MT370Parser::Fld_95a_B1_PContext * /*ctx*/) override { }
  virtual void exitFld_95a_B1_P(SwiftMtParser_MT370Parser::Fld_95a_B1_PContext * /*ctx*/) override { }

  virtual void enterFld_95a_B1_Q(SwiftMtParser_MT370Parser::Fld_95a_B1_QContext * /*ctx*/) override { }
  virtual void exitFld_95a_B1_Q(SwiftMtParser_MT370Parser::Fld_95a_B1_QContext * /*ctx*/) override { }

  virtual void enterFld_95a_B1_R(SwiftMtParser_MT370Parser::Fld_95a_B1_RContext * /*ctx*/) override { }
  virtual void exitFld_95a_B1_R(SwiftMtParser_MT370Parser::Fld_95a_B1_RContext * /*ctx*/) override { }

  virtual void enterFld_97A_B1_A(SwiftMtParser_MT370Parser::Fld_97A_B1_AContext * /*ctx*/) override { }
  virtual void exitFld_97A_B1_A(SwiftMtParser_MT370Parser::Fld_97A_B1_AContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace message::definition::swift::mt::parsers::sr2018
