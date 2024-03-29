
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT586Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT586.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT586Parser.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT586Parser.
 */
class  SwiftMtParser_MT586Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT586Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT586Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT586Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT586Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT586Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT586Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT586Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT586Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT586Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT586Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT586Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT586Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT586Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT586Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT586Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT586Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT586Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT586Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT586Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT586Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT586Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT586Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT586Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT586Parser::MtContext *ctx) = 0;

  virtual void enterSeq_A(SwiftMtParser_MT586Parser::Seq_AContext *ctx) = 0;
  virtual void exitSeq_A(SwiftMtParser_MT586Parser::Seq_AContext *ctx) = 0;

  virtual void enterSeq_A1(SwiftMtParser_MT586Parser::Seq_A1Context *ctx) = 0;
  virtual void exitSeq_A1(SwiftMtParser_MT586Parser::Seq_A1Context *ctx) = 0;

  virtual void enterSeq_B(SwiftMtParser_MT586Parser::Seq_BContext *ctx) = 0;
  virtual void exitSeq_B(SwiftMtParser_MT586Parser::Seq_BContext *ctx) = 0;

  virtual void enterSeq_B1(SwiftMtParser_MT586Parser::Seq_B1Context *ctx) = 0;
  virtual void exitSeq_B1(SwiftMtParser_MT586Parser::Seq_B1Context *ctx) = 0;

  virtual void enterSeq_B2(SwiftMtParser_MT586Parser::Seq_B2Context *ctx) = 0;
  virtual void exitSeq_B2(SwiftMtParser_MT586Parser::Seq_B2Context *ctx) = 0;

  virtual void enterSeq_B3(SwiftMtParser_MT586Parser::Seq_B3Context *ctx) = 0;
  virtual void exitSeq_B3(SwiftMtParser_MT586Parser::Seq_B3Context *ctx) = 0;

  virtual void enterSeq_B3a(SwiftMtParser_MT586Parser::Seq_B3aContext *ctx) = 0;
  virtual void exitSeq_B3a(SwiftMtParser_MT586Parser::Seq_B3aContext *ctx) = 0;

  virtual void enterSeq_B4(SwiftMtParser_MT586Parser::Seq_B4Context *ctx) = 0;
  virtual void exitSeq_B4(SwiftMtParser_MT586Parser::Seq_B4Context *ctx) = 0;

  virtual void enterSeq_B5(SwiftMtParser_MT586Parser::Seq_B5Context *ctx) = 0;
  virtual void exitSeq_B5(SwiftMtParser_MT586Parser::Seq_B5Context *ctx) = 0;

  virtual void enterSeq_B5a(SwiftMtParser_MT586Parser::Seq_B5aContext *ctx) = 0;
  virtual void exitSeq_B5a(SwiftMtParser_MT586Parser::Seq_B5aContext *ctx) = 0;

  virtual void enterSeq_B5b(SwiftMtParser_MT586Parser::Seq_B5bContext *ctx) = 0;
  virtual void exitSeq_B5b(SwiftMtParser_MT586Parser::Seq_B5bContext *ctx) = 0;

  virtual void enterSeq_C(SwiftMtParser_MT586Parser::Seq_CContext *ctx) = 0;
  virtual void exitSeq_C(SwiftMtParser_MT586Parser::Seq_CContext *ctx) = 0;

  virtual void enterFld_16R_A(SwiftMtParser_MT586Parser::Fld_16R_AContext *ctx) = 0;
  virtual void exitFld_16R_A(SwiftMtParser_MT586Parser::Fld_16R_AContext *ctx) = 0;

  virtual void enterFld_28E_A(SwiftMtParser_MT586Parser::Fld_28E_AContext *ctx) = 0;
  virtual void exitFld_28E_A(SwiftMtParser_MT586Parser::Fld_28E_AContext *ctx) = 0;

  virtual void enterFld_13a_A(SwiftMtParser_MT586Parser::Fld_13a_AContext *ctx) = 0;
  virtual void exitFld_13a_A(SwiftMtParser_MT586Parser::Fld_13a_AContext *ctx) = 0;

  virtual void enterFld_20C_A(SwiftMtParser_MT586Parser::Fld_20C_AContext *ctx) = 0;
  virtual void exitFld_20C_A(SwiftMtParser_MT586Parser::Fld_20C_AContext *ctx) = 0;

  virtual void enterFld_23G_A(SwiftMtParser_MT586Parser::Fld_23G_AContext *ctx) = 0;
  virtual void exitFld_23G_A(SwiftMtParser_MT586Parser::Fld_23G_AContext *ctx) = 0;

  virtual void enterFld_98a_A(SwiftMtParser_MT586Parser::Fld_98a_AContext *ctx) = 0;
  virtual void exitFld_98a_A(SwiftMtParser_MT586Parser::Fld_98a_AContext *ctx) = 0;

  virtual void enterFld_22F_A(SwiftMtParser_MT586Parser::Fld_22F_AContext *ctx) = 0;
  virtual void exitFld_22F_A(SwiftMtParser_MT586Parser::Fld_22F_AContext *ctx) = 0;

  virtual void enterFld_16R_A1(SwiftMtParser_MT586Parser::Fld_16R_A1Context *ctx) = 0;
  virtual void exitFld_16R_A1(SwiftMtParser_MT586Parser::Fld_16R_A1Context *ctx) = 0;

  virtual void enterFld_13a_A1(SwiftMtParser_MT586Parser::Fld_13a_A1Context *ctx) = 0;
  virtual void exitFld_13a_A1(SwiftMtParser_MT586Parser::Fld_13a_A1Context *ctx) = 0;

  virtual void enterFld_20C_A1(SwiftMtParser_MT586Parser::Fld_20C_A1Context *ctx) = 0;
  virtual void exitFld_20C_A1(SwiftMtParser_MT586Parser::Fld_20C_A1Context *ctx) = 0;

  virtual void enterFld_16S_A1(SwiftMtParser_MT586Parser::Fld_16S_A1Context *ctx) = 0;
  virtual void exitFld_16S_A1(SwiftMtParser_MT586Parser::Fld_16S_A1Context *ctx) = 0;

  virtual void enterFld_95a_A(SwiftMtParser_MT586Parser::Fld_95a_AContext *ctx) = 0;
  virtual void exitFld_95a_A(SwiftMtParser_MT586Parser::Fld_95a_AContext *ctx) = 0;

  virtual void enterFld_97a_A(SwiftMtParser_MT586Parser::Fld_97a_AContext *ctx) = 0;
  virtual void exitFld_97a_A(SwiftMtParser_MT586Parser::Fld_97a_AContext *ctx) = 0;

  virtual void enterFld_17B_A(SwiftMtParser_MT586Parser::Fld_17B_AContext *ctx) = 0;
  virtual void exitFld_17B_A(SwiftMtParser_MT586Parser::Fld_17B_AContext *ctx) = 0;

  virtual void enterFld_16S_A(SwiftMtParser_MT586Parser::Fld_16S_AContext *ctx) = 0;
  virtual void exitFld_16S_A(SwiftMtParser_MT586Parser::Fld_16S_AContext *ctx) = 0;

  virtual void enterFld_16R_B(SwiftMtParser_MT586Parser::Fld_16R_BContext *ctx) = 0;
  virtual void exitFld_16R_B(SwiftMtParser_MT586Parser::Fld_16R_BContext *ctx) = 0;

  virtual void enterFld_16R_B1(SwiftMtParser_MT586Parser::Fld_16R_B1Context *ctx) = 0;
  virtual void exitFld_16R_B1(SwiftMtParser_MT586Parser::Fld_16R_B1Context *ctx) = 0;

  virtual void enterFld_13a_B1(SwiftMtParser_MT586Parser::Fld_13a_B1Context *ctx) = 0;
  virtual void exitFld_13a_B1(SwiftMtParser_MT586Parser::Fld_13a_B1Context *ctx) = 0;

  virtual void enterFld_20C_B1(SwiftMtParser_MT586Parser::Fld_20C_B1Context *ctx) = 0;
  virtual void exitFld_20C_B1(SwiftMtParser_MT586Parser::Fld_20C_B1Context *ctx) = 0;

  virtual void enterFld_16S_B1(SwiftMtParser_MT586Parser::Fld_16S_B1Context *ctx) = 0;
  virtual void exitFld_16S_B1(SwiftMtParser_MT586Parser::Fld_16S_B1Context *ctx) = 0;

  virtual void enterFld_25D_B(SwiftMtParser_MT586Parser::Fld_25D_BContext *ctx) = 0;
  virtual void exitFld_25D_B(SwiftMtParser_MT586Parser::Fld_25D_BContext *ctx) = 0;

  virtual void enterFld_94a_B(SwiftMtParser_MT586Parser::Fld_94a_BContext *ctx) = 0;
  virtual void exitFld_94a_B(SwiftMtParser_MT586Parser::Fld_94a_BContext *ctx) = 0;

  virtual void enterFld_98a_B(SwiftMtParser_MT586Parser::Fld_98a_BContext *ctx) = 0;
  virtual void exitFld_98a_B(SwiftMtParser_MT586Parser::Fld_98a_BContext *ctx) = 0;

  virtual void enterFld_90a_B(SwiftMtParser_MT586Parser::Fld_90a_BContext *ctx) = 0;
  virtual void exitFld_90a_B(SwiftMtParser_MT586Parser::Fld_90a_BContext *ctx) = 0;

  virtual void enterFld_99A_B(SwiftMtParser_MT586Parser::Fld_99A_BContext *ctx) = 0;
  virtual void exitFld_99A_B(SwiftMtParser_MT586Parser::Fld_99A_BContext *ctx) = 0;

  virtual void enterFld_35B_B(SwiftMtParser_MT586Parser::Fld_35B_BContext *ctx) = 0;
  virtual void exitFld_35B_B(SwiftMtParser_MT586Parser::Fld_35B_BContext *ctx) = 0;

  virtual void enterFld_16R_B2(SwiftMtParser_MT586Parser::Fld_16R_B2Context *ctx) = 0;
  virtual void exitFld_16R_B2(SwiftMtParser_MT586Parser::Fld_16R_B2Context *ctx) = 0;

  virtual void enterFld_94B_B2(SwiftMtParser_MT586Parser::Fld_94B_B2Context *ctx) = 0;
  virtual void exitFld_94B_B2(SwiftMtParser_MT586Parser::Fld_94B_B2Context *ctx) = 0;

  virtual void enterFld_22F_B2(SwiftMtParser_MT586Parser::Fld_22F_B2Context *ctx) = 0;
  virtual void exitFld_22F_B2(SwiftMtParser_MT586Parser::Fld_22F_B2Context *ctx) = 0;

  virtual void enterFld_12a_B2(SwiftMtParser_MT586Parser::Fld_12a_B2Context *ctx) = 0;
  virtual void exitFld_12a_B2(SwiftMtParser_MT586Parser::Fld_12a_B2Context *ctx) = 0;

  virtual void enterFld_11A_B2(SwiftMtParser_MT586Parser::Fld_11A_B2Context *ctx) = 0;
  virtual void exitFld_11A_B2(SwiftMtParser_MT586Parser::Fld_11A_B2Context *ctx) = 0;

  virtual void enterFld_98A_B2(SwiftMtParser_MT586Parser::Fld_98A_B2Context *ctx) = 0;
  virtual void exitFld_98A_B2(SwiftMtParser_MT586Parser::Fld_98A_B2Context *ctx) = 0;

  virtual void enterFld_92A_B2(SwiftMtParser_MT586Parser::Fld_92A_B2Context *ctx) = 0;
  virtual void exitFld_92A_B2(SwiftMtParser_MT586Parser::Fld_92A_B2Context *ctx) = 0;

  virtual void enterFld_13a_B2(SwiftMtParser_MT586Parser::Fld_13a_B2Context *ctx) = 0;
  virtual void exitFld_13a_B2(SwiftMtParser_MT586Parser::Fld_13a_B2Context *ctx) = 0;

  virtual void enterFld_17B_B2(SwiftMtParser_MT586Parser::Fld_17B_B2Context *ctx) = 0;
  virtual void exitFld_17B_B2(SwiftMtParser_MT586Parser::Fld_17B_B2Context *ctx) = 0;

  virtual void enterFld_90a_B2(SwiftMtParser_MT586Parser::Fld_90a_B2Context *ctx) = 0;
  virtual void exitFld_90a_B2(SwiftMtParser_MT586Parser::Fld_90a_B2Context *ctx) = 0;

  virtual void enterFld_36B_B2(SwiftMtParser_MT586Parser::Fld_36B_B2Context *ctx) = 0;
  virtual void exitFld_36B_B2(SwiftMtParser_MT586Parser::Fld_36B_B2Context *ctx) = 0;

  virtual void enterFld_35B_B2(SwiftMtParser_MT586Parser::Fld_35B_B2Context *ctx) = 0;
  virtual void exitFld_35B_B2(SwiftMtParser_MT586Parser::Fld_35B_B2Context *ctx) = 0;

  virtual void enterFld_70E_B2(SwiftMtParser_MT586Parser::Fld_70E_B2Context *ctx) = 0;
  virtual void exitFld_70E_B2(SwiftMtParser_MT586Parser::Fld_70E_B2Context *ctx) = 0;

  virtual void enterFld_16S_B2(SwiftMtParser_MT586Parser::Fld_16S_B2Context *ctx) = 0;
  virtual void exitFld_16S_B2(SwiftMtParser_MT586Parser::Fld_16S_B2Context *ctx) = 0;

  virtual void enterFld_22a_B(SwiftMtParser_MT586Parser::Fld_22a_BContext *ctx) = 0;
  virtual void exitFld_22a_B(SwiftMtParser_MT586Parser::Fld_22a_BContext *ctx) = 0;

  virtual void enterFld_16R_B3(SwiftMtParser_MT586Parser::Fld_16R_B3Context *ctx) = 0;
  virtual void exitFld_16R_B3(SwiftMtParser_MT586Parser::Fld_16R_B3Context *ctx) = 0;

  virtual void enterFld_36B_B3(SwiftMtParser_MT586Parser::Fld_36B_B3Context *ctx) = 0;
  virtual void exitFld_36B_B3(SwiftMtParser_MT586Parser::Fld_36B_B3Context *ctx) = 0;

  virtual void enterFld_70D_B3(SwiftMtParser_MT586Parser::Fld_70D_B3Context *ctx) = 0;
  virtual void exitFld_70D_B3(SwiftMtParser_MT586Parser::Fld_70D_B3Context *ctx) = 0;

  virtual void enterFld_97a_B3(SwiftMtParser_MT586Parser::Fld_97a_B3Context *ctx) = 0;
  virtual void exitFld_97a_B3(SwiftMtParser_MT586Parser::Fld_97a_B3Context *ctx) = 0;

  virtual void enterFld_94a_B3(SwiftMtParser_MT586Parser::Fld_94a_B3Context *ctx) = 0;
  virtual void exitFld_94a_B3(SwiftMtParser_MT586Parser::Fld_94a_B3Context *ctx) = 0;

  virtual void enterFld_16R_B3a(SwiftMtParser_MT586Parser::Fld_16R_B3aContext *ctx) = 0;
  virtual void exitFld_16R_B3a(SwiftMtParser_MT586Parser::Fld_16R_B3aContext *ctx) = 0;

  virtual void enterFld_13B_B3a(SwiftMtParser_MT586Parser::Fld_13B_B3aContext *ctx) = 0;
  virtual void exitFld_13B_B3a(SwiftMtParser_MT586Parser::Fld_13B_B3aContext *ctx) = 0;

  virtual void enterFld_36B_B3a(SwiftMtParser_MT586Parser::Fld_36B_B3aContext *ctx) = 0;
  virtual void exitFld_36B_B3a(SwiftMtParser_MT586Parser::Fld_36B_B3aContext *ctx) = 0;

  virtual void enterFld_98a_B3a(SwiftMtParser_MT586Parser::Fld_98a_B3aContext *ctx) = 0;
  virtual void exitFld_98a_B3a(SwiftMtParser_MT586Parser::Fld_98a_B3aContext *ctx) = 0;

  virtual void enterFld_90a_B3a(SwiftMtParser_MT586Parser::Fld_90a_B3aContext *ctx) = 0;
  virtual void exitFld_90a_B3a(SwiftMtParser_MT586Parser::Fld_90a_B3aContext *ctx) = 0;

  virtual void enterFld_22F_B3a(SwiftMtParser_MT586Parser::Fld_22F_B3aContext *ctx) = 0;
  virtual void exitFld_22F_B3a(SwiftMtParser_MT586Parser::Fld_22F_B3aContext *ctx) = 0;

  virtual void enterFld_16S_B3a(SwiftMtParser_MT586Parser::Fld_16S_B3aContext *ctx) = 0;
  virtual void exitFld_16S_B3a(SwiftMtParser_MT586Parser::Fld_16S_B3aContext *ctx) = 0;

  virtual void enterFld_16S_B3(SwiftMtParser_MT586Parser::Fld_16S_B3Context *ctx) = 0;
  virtual void exitFld_16S_B3(SwiftMtParser_MT586Parser::Fld_16S_B3Context *ctx) = 0;

  virtual void enterFld_16R_B4(SwiftMtParser_MT586Parser::Fld_16R_B4Context *ctx) = 0;
  virtual void exitFld_16R_B4(SwiftMtParser_MT586Parser::Fld_16R_B4Context *ctx) = 0;

  virtual void enterFld_98a_B4(SwiftMtParser_MT586Parser::Fld_98a_B4Context *ctx) = 0;
  virtual void exitFld_98a_B4(SwiftMtParser_MT586Parser::Fld_98a_B4Context *ctx) = 0;

  virtual void enterFld_22F_B4(SwiftMtParser_MT586Parser::Fld_22F_B4Context *ctx) = 0;
  virtual void exitFld_22F_B4(SwiftMtParser_MT586Parser::Fld_22F_B4Context *ctx) = 0;

  virtual void enterFld_20C_B4(SwiftMtParser_MT586Parser::Fld_20C_B4Context *ctx) = 0;
  virtual void exitFld_20C_B4(SwiftMtParser_MT586Parser::Fld_20C_B4Context *ctx) = 0;

  virtual void enterFld_92a_B4(SwiftMtParser_MT586Parser::Fld_92a_B4Context *ctx) = 0;
  virtual void exitFld_92a_B4(SwiftMtParser_MT586Parser::Fld_92a_B4Context *ctx) = 0;

  virtual void enterFld_99B_B4(SwiftMtParser_MT586Parser::Fld_99B_B4Context *ctx) = 0;
  virtual void exitFld_99B_B4(SwiftMtParser_MT586Parser::Fld_99B_B4Context *ctx) = 0;

  virtual void enterFld_19A_B4(SwiftMtParser_MT586Parser::Fld_19A_B4Context *ctx) = 0;
  virtual void exitFld_19A_B4(SwiftMtParser_MT586Parser::Fld_19A_B4Context *ctx) = 0;

  virtual void enterFld_70C_B4(SwiftMtParser_MT586Parser::Fld_70C_B4Context *ctx) = 0;
  virtual void exitFld_70C_B4(SwiftMtParser_MT586Parser::Fld_70C_B4Context *ctx) = 0;

  virtual void enterFld_16S_B4(SwiftMtParser_MT586Parser::Fld_16S_B4Context *ctx) = 0;
  virtual void exitFld_16S_B4(SwiftMtParser_MT586Parser::Fld_16S_B4Context *ctx) = 0;

  virtual void enterFld_16R_B5(SwiftMtParser_MT586Parser::Fld_16R_B5Context *ctx) = 0;
  virtual void exitFld_16R_B5(SwiftMtParser_MT586Parser::Fld_16R_B5Context *ctx) = 0;

  virtual void enterFld_22F_B5(SwiftMtParser_MT586Parser::Fld_22F_B5Context *ctx) = 0;
  virtual void exitFld_22F_B5(SwiftMtParser_MT586Parser::Fld_22F_B5Context *ctx) = 0;

  virtual void enterFld_16R_B5a(SwiftMtParser_MT586Parser::Fld_16R_B5aContext *ctx) = 0;
  virtual void exitFld_16R_B5a(SwiftMtParser_MT586Parser::Fld_16R_B5aContext *ctx) = 0;

  virtual void enterFld_95a_B5a(SwiftMtParser_MT586Parser::Fld_95a_B5aContext *ctx) = 0;
  virtual void exitFld_95a_B5a(SwiftMtParser_MT586Parser::Fld_95a_B5aContext *ctx) = 0;

  virtual void enterFld_97a_B5a(SwiftMtParser_MT586Parser::Fld_97a_B5aContext *ctx) = 0;
  virtual void exitFld_97a_B5a(SwiftMtParser_MT586Parser::Fld_97a_B5aContext *ctx) = 0;

  virtual void enterFld_98a_B5a(SwiftMtParser_MT586Parser::Fld_98a_B5aContext *ctx) = 0;
  virtual void exitFld_98a_B5a(SwiftMtParser_MT586Parser::Fld_98a_B5aContext *ctx) = 0;

  virtual void enterFld_20C_B5a(SwiftMtParser_MT586Parser::Fld_20C_B5aContext *ctx) = 0;
  virtual void exitFld_20C_B5a(SwiftMtParser_MT586Parser::Fld_20C_B5aContext *ctx) = 0;

  virtual void enterFld_70a_B5a(SwiftMtParser_MT586Parser::Fld_70a_B5aContext *ctx) = 0;
  virtual void exitFld_70a_B5a(SwiftMtParser_MT586Parser::Fld_70a_B5aContext *ctx) = 0;

  virtual void enterFld_16S_B5a(SwiftMtParser_MT586Parser::Fld_16S_B5aContext *ctx) = 0;
  virtual void exitFld_16S_B5a(SwiftMtParser_MT586Parser::Fld_16S_B5aContext *ctx) = 0;

  virtual void enterFld_16R_B5b(SwiftMtParser_MT586Parser::Fld_16R_B5bContext *ctx) = 0;
  virtual void exitFld_16R_B5b(SwiftMtParser_MT586Parser::Fld_16R_B5bContext *ctx) = 0;

  virtual void enterFld_19A_B5b(SwiftMtParser_MT586Parser::Fld_19A_B5bContext *ctx) = 0;
  virtual void exitFld_19A_B5b(SwiftMtParser_MT586Parser::Fld_19A_B5bContext *ctx) = 0;

  virtual void enterFld_98a_B5b(SwiftMtParser_MT586Parser::Fld_98a_B5bContext *ctx) = 0;
  virtual void exitFld_98a_B5b(SwiftMtParser_MT586Parser::Fld_98a_B5bContext *ctx) = 0;

  virtual void enterFld_92B_B5b(SwiftMtParser_MT586Parser::Fld_92B_B5bContext *ctx) = 0;
  virtual void exitFld_92B_B5b(SwiftMtParser_MT586Parser::Fld_92B_B5bContext *ctx) = 0;

  virtual void enterFld_16S_B5b(SwiftMtParser_MT586Parser::Fld_16S_B5bContext *ctx) = 0;
  virtual void exitFld_16S_B5b(SwiftMtParser_MT586Parser::Fld_16S_B5bContext *ctx) = 0;

  virtual void enterFld_16S_B5(SwiftMtParser_MT586Parser::Fld_16S_B5Context *ctx) = 0;
  virtual void exitFld_16S_B5(SwiftMtParser_MT586Parser::Fld_16S_B5Context *ctx) = 0;

  virtual void enterFld_16S_B(SwiftMtParser_MT586Parser::Fld_16S_BContext *ctx) = 0;
  virtual void exitFld_16S_B(SwiftMtParser_MT586Parser::Fld_16S_BContext *ctx) = 0;

  virtual void enterFld_16R_C(SwiftMtParser_MT586Parser::Fld_16R_CContext *ctx) = 0;
  virtual void exitFld_16R_C(SwiftMtParser_MT586Parser::Fld_16R_CContext *ctx) = 0;

  virtual void enterFld_95a_C(SwiftMtParser_MT586Parser::Fld_95a_CContext *ctx) = 0;
  virtual void exitFld_95a_C(SwiftMtParser_MT586Parser::Fld_95a_CContext *ctx) = 0;

  virtual void enterFld_16S_C(SwiftMtParser_MT586Parser::Fld_16S_CContext *ctx) = 0;
  virtual void exitFld_16S_C(SwiftMtParser_MT586Parser::Fld_16S_CContext *ctx) = 0;

  virtual void enterFld_28E_A_E(SwiftMtParser_MT586Parser::Fld_28E_A_EContext *ctx) = 0;
  virtual void exitFld_28E_A_E(SwiftMtParser_MT586Parser::Fld_28E_A_EContext *ctx) = 0;

  virtual void enterFld_13a_A_A(SwiftMtParser_MT586Parser::Fld_13a_A_AContext *ctx) = 0;
  virtual void exitFld_13a_A_A(SwiftMtParser_MT586Parser::Fld_13a_A_AContext *ctx) = 0;

  virtual void enterFld_13a_A_J(SwiftMtParser_MT586Parser::Fld_13a_A_JContext *ctx) = 0;
  virtual void exitFld_13a_A_J(SwiftMtParser_MT586Parser::Fld_13a_A_JContext *ctx) = 0;

  virtual void enterFld_20C_A_C(SwiftMtParser_MT586Parser::Fld_20C_A_CContext *ctx) = 0;
  virtual void exitFld_20C_A_C(SwiftMtParser_MT586Parser::Fld_20C_A_CContext *ctx) = 0;

  virtual void enterFld_23G_A_G(SwiftMtParser_MT586Parser::Fld_23G_A_GContext *ctx) = 0;
  virtual void exitFld_23G_A_G(SwiftMtParser_MT586Parser::Fld_23G_A_GContext *ctx) = 0;

  virtual void enterFld_98a_A_A(SwiftMtParser_MT586Parser::Fld_98a_A_AContext *ctx) = 0;
  virtual void exitFld_98a_A_A(SwiftMtParser_MT586Parser::Fld_98a_A_AContext *ctx) = 0;

  virtual void enterFld_98a_A_C(SwiftMtParser_MT586Parser::Fld_98a_A_CContext *ctx) = 0;
  virtual void exitFld_98a_A_C(SwiftMtParser_MT586Parser::Fld_98a_A_CContext *ctx) = 0;

  virtual void enterFld_98a_A_E(SwiftMtParser_MT586Parser::Fld_98a_A_EContext *ctx) = 0;
  virtual void exitFld_98a_A_E(SwiftMtParser_MT586Parser::Fld_98a_A_EContext *ctx) = 0;

  virtual void enterFld_22F_A_F(SwiftMtParser_MT586Parser::Fld_22F_A_FContext *ctx) = 0;
  virtual void exitFld_22F_A_F(SwiftMtParser_MT586Parser::Fld_22F_A_FContext *ctx) = 0;

  virtual void enterFld_13a_A1_A(SwiftMtParser_MT586Parser::Fld_13a_A1_AContext *ctx) = 0;
  virtual void exitFld_13a_A1_A(SwiftMtParser_MT586Parser::Fld_13a_A1_AContext *ctx) = 0;

  virtual void enterFld_13a_A1_B(SwiftMtParser_MT586Parser::Fld_13a_A1_BContext *ctx) = 0;
  virtual void exitFld_13a_A1_B(SwiftMtParser_MT586Parser::Fld_13a_A1_BContext *ctx) = 0;

  virtual void enterFld_20C_A1_C(SwiftMtParser_MT586Parser::Fld_20C_A1_CContext *ctx) = 0;
  virtual void exitFld_20C_A1_C(SwiftMtParser_MT586Parser::Fld_20C_A1_CContext *ctx) = 0;

  virtual void enterFld_95a_A_L(SwiftMtParser_MT586Parser::Fld_95a_A_LContext *ctx) = 0;
  virtual void exitFld_95a_A_L(SwiftMtParser_MT586Parser::Fld_95a_A_LContext *ctx) = 0;

  virtual void enterFld_95a_A_P(SwiftMtParser_MT586Parser::Fld_95a_A_PContext *ctx) = 0;
  virtual void exitFld_95a_A_P(SwiftMtParser_MT586Parser::Fld_95a_A_PContext *ctx) = 0;

  virtual void enterFld_95a_A_Q(SwiftMtParser_MT586Parser::Fld_95a_A_QContext *ctx) = 0;
  virtual void exitFld_95a_A_Q(SwiftMtParser_MT586Parser::Fld_95a_A_QContext *ctx) = 0;

  virtual void enterFld_95a_A_R(SwiftMtParser_MT586Parser::Fld_95a_A_RContext *ctx) = 0;
  virtual void exitFld_95a_A_R(SwiftMtParser_MT586Parser::Fld_95a_A_RContext *ctx) = 0;

  virtual void enterFld_97a_A_A(SwiftMtParser_MT586Parser::Fld_97a_A_AContext *ctx) = 0;
  virtual void exitFld_97a_A_A(SwiftMtParser_MT586Parser::Fld_97a_A_AContext *ctx) = 0;

  virtual void enterFld_97a_A_B(SwiftMtParser_MT586Parser::Fld_97a_A_BContext *ctx) = 0;
  virtual void exitFld_97a_A_B(SwiftMtParser_MT586Parser::Fld_97a_A_BContext *ctx) = 0;

  virtual void enterFld_17B_A_B(SwiftMtParser_MT586Parser::Fld_17B_A_BContext *ctx) = 0;
  virtual void exitFld_17B_A_B(SwiftMtParser_MT586Parser::Fld_17B_A_BContext *ctx) = 0;

  virtual void enterFld_13a_B1_A(SwiftMtParser_MT586Parser::Fld_13a_B1_AContext *ctx) = 0;
  virtual void exitFld_13a_B1_A(SwiftMtParser_MT586Parser::Fld_13a_B1_AContext *ctx) = 0;

  virtual void enterFld_13a_B1_B(SwiftMtParser_MT586Parser::Fld_13a_B1_BContext *ctx) = 0;
  virtual void exitFld_13a_B1_B(SwiftMtParser_MT586Parser::Fld_13a_B1_BContext *ctx) = 0;

  virtual void enterFld_20C_B1_C(SwiftMtParser_MT586Parser::Fld_20C_B1_CContext *ctx) = 0;
  virtual void exitFld_20C_B1_C(SwiftMtParser_MT586Parser::Fld_20C_B1_CContext *ctx) = 0;

  virtual void enterFld_25D_B_D(SwiftMtParser_MT586Parser::Fld_25D_B_DContext *ctx) = 0;
  virtual void exitFld_25D_B_D(SwiftMtParser_MT586Parser::Fld_25D_B_DContext *ctx) = 0;

  virtual void enterFld_94a_B_B(SwiftMtParser_MT586Parser::Fld_94a_B_BContext *ctx) = 0;
  virtual void exitFld_94a_B_B(SwiftMtParser_MT586Parser::Fld_94a_B_BContext *ctx) = 0;

  virtual void enterFld_94a_B_H(SwiftMtParser_MT586Parser::Fld_94a_B_HContext *ctx) = 0;
  virtual void exitFld_94a_B_H(SwiftMtParser_MT586Parser::Fld_94a_B_HContext *ctx) = 0;

  virtual void enterFld_94a_B_L(SwiftMtParser_MT586Parser::Fld_94a_B_LContext *ctx) = 0;
  virtual void exitFld_94a_B_L(SwiftMtParser_MT586Parser::Fld_94a_B_LContext *ctx) = 0;

  virtual void enterFld_98a_B_A(SwiftMtParser_MT586Parser::Fld_98a_B_AContext *ctx) = 0;
  virtual void exitFld_98a_B_A(SwiftMtParser_MT586Parser::Fld_98a_B_AContext *ctx) = 0;

  virtual void enterFld_98a_B_B(SwiftMtParser_MT586Parser::Fld_98a_B_BContext *ctx) = 0;
  virtual void exitFld_98a_B_B(SwiftMtParser_MT586Parser::Fld_98a_B_BContext *ctx) = 0;

  virtual void enterFld_98a_B_C(SwiftMtParser_MT586Parser::Fld_98a_B_CContext *ctx) = 0;
  virtual void exitFld_98a_B_C(SwiftMtParser_MT586Parser::Fld_98a_B_CContext *ctx) = 0;

  virtual void enterFld_90a_B_A(SwiftMtParser_MT586Parser::Fld_90a_B_AContext *ctx) = 0;
  virtual void exitFld_90a_B_A(SwiftMtParser_MT586Parser::Fld_90a_B_AContext *ctx) = 0;

  virtual void enterFld_90a_B_B(SwiftMtParser_MT586Parser::Fld_90a_B_BContext *ctx) = 0;
  virtual void exitFld_90a_B_B(SwiftMtParser_MT586Parser::Fld_90a_B_BContext *ctx) = 0;

  virtual void enterFld_99A_B_A(SwiftMtParser_MT586Parser::Fld_99A_B_AContext *ctx) = 0;
  virtual void exitFld_99A_B_A(SwiftMtParser_MT586Parser::Fld_99A_B_AContext *ctx) = 0;

  virtual void enterFld_35B_B_B(SwiftMtParser_MT586Parser::Fld_35B_B_BContext *ctx) = 0;
  virtual void exitFld_35B_B_B(SwiftMtParser_MT586Parser::Fld_35B_B_BContext *ctx) = 0;

  virtual void enterFld_94B_B2_B(SwiftMtParser_MT586Parser::Fld_94B_B2_BContext *ctx) = 0;
  virtual void exitFld_94B_B2_B(SwiftMtParser_MT586Parser::Fld_94B_B2_BContext *ctx) = 0;

  virtual void enterFld_22F_B2_F(SwiftMtParser_MT586Parser::Fld_22F_B2_FContext *ctx) = 0;
  virtual void exitFld_22F_B2_F(SwiftMtParser_MT586Parser::Fld_22F_B2_FContext *ctx) = 0;

  virtual void enterFld_12a_B2_A(SwiftMtParser_MT586Parser::Fld_12a_B2_AContext *ctx) = 0;
  virtual void exitFld_12a_B2_A(SwiftMtParser_MT586Parser::Fld_12a_B2_AContext *ctx) = 0;

  virtual void enterFld_12a_B2_B(SwiftMtParser_MT586Parser::Fld_12a_B2_BContext *ctx) = 0;
  virtual void exitFld_12a_B2_B(SwiftMtParser_MT586Parser::Fld_12a_B2_BContext *ctx) = 0;

  virtual void enterFld_12a_B2_C(SwiftMtParser_MT586Parser::Fld_12a_B2_CContext *ctx) = 0;
  virtual void exitFld_12a_B2_C(SwiftMtParser_MT586Parser::Fld_12a_B2_CContext *ctx) = 0;

  virtual void enterFld_11A_B2_A(SwiftMtParser_MT586Parser::Fld_11A_B2_AContext *ctx) = 0;
  virtual void exitFld_11A_B2_A(SwiftMtParser_MT586Parser::Fld_11A_B2_AContext *ctx) = 0;

  virtual void enterFld_98A_B2_A(SwiftMtParser_MT586Parser::Fld_98A_B2_AContext *ctx) = 0;
  virtual void exitFld_98A_B2_A(SwiftMtParser_MT586Parser::Fld_98A_B2_AContext *ctx) = 0;

  virtual void enterFld_92A_B2_A(SwiftMtParser_MT586Parser::Fld_92A_B2_AContext *ctx) = 0;
  virtual void exitFld_92A_B2_A(SwiftMtParser_MT586Parser::Fld_92A_B2_AContext *ctx) = 0;

  virtual void enterFld_13a_B2_A(SwiftMtParser_MT586Parser::Fld_13a_B2_AContext *ctx) = 0;
  virtual void exitFld_13a_B2_A(SwiftMtParser_MT586Parser::Fld_13a_B2_AContext *ctx) = 0;

  virtual void enterFld_13a_B2_B(SwiftMtParser_MT586Parser::Fld_13a_B2_BContext *ctx) = 0;
  virtual void exitFld_13a_B2_B(SwiftMtParser_MT586Parser::Fld_13a_B2_BContext *ctx) = 0;

  virtual void enterFld_17B_B2_B(SwiftMtParser_MT586Parser::Fld_17B_B2_BContext *ctx) = 0;
  virtual void exitFld_17B_B2_B(SwiftMtParser_MT586Parser::Fld_17B_B2_BContext *ctx) = 0;

  virtual void enterFld_90a_B2_A(SwiftMtParser_MT586Parser::Fld_90a_B2_AContext *ctx) = 0;
  virtual void exitFld_90a_B2_A(SwiftMtParser_MT586Parser::Fld_90a_B2_AContext *ctx) = 0;

  virtual void enterFld_90a_B2_B(SwiftMtParser_MT586Parser::Fld_90a_B2_BContext *ctx) = 0;
  virtual void exitFld_90a_B2_B(SwiftMtParser_MT586Parser::Fld_90a_B2_BContext *ctx) = 0;

  virtual void enterFld_36B_B2_B(SwiftMtParser_MT586Parser::Fld_36B_B2_BContext *ctx) = 0;
  virtual void exitFld_36B_B2_B(SwiftMtParser_MT586Parser::Fld_36B_B2_BContext *ctx) = 0;

  virtual void enterFld_35B_B2_B(SwiftMtParser_MT586Parser::Fld_35B_B2_BContext *ctx) = 0;
  virtual void exitFld_35B_B2_B(SwiftMtParser_MT586Parser::Fld_35B_B2_BContext *ctx) = 0;

  virtual void enterFld_70E_B2_E(SwiftMtParser_MT586Parser::Fld_70E_B2_EContext *ctx) = 0;
  virtual void exitFld_70E_B2_E(SwiftMtParser_MT586Parser::Fld_70E_B2_EContext *ctx) = 0;

  virtual void enterFld_22a_B_F(SwiftMtParser_MT586Parser::Fld_22a_B_FContext *ctx) = 0;
  virtual void exitFld_22a_B_F(SwiftMtParser_MT586Parser::Fld_22a_B_FContext *ctx) = 0;

  virtual void enterFld_22a_B_H(SwiftMtParser_MT586Parser::Fld_22a_B_HContext *ctx) = 0;
  virtual void exitFld_22a_B_H(SwiftMtParser_MT586Parser::Fld_22a_B_HContext *ctx) = 0;

  virtual void enterFld_36B_B3_B(SwiftMtParser_MT586Parser::Fld_36B_B3_BContext *ctx) = 0;
  virtual void exitFld_36B_B3_B(SwiftMtParser_MT586Parser::Fld_36B_B3_BContext *ctx) = 0;

  virtual void enterFld_70D_B3_D(SwiftMtParser_MT586Parser::Fld_70D_B3_DContext *ctx) = 0;
  virtual void exitFld_70D_B3_D(SwiftMtParser_MT586Parser::Fld_70D_B3_DContext *ctx) = 0;

  virtual void enterFld_97a_B3_A(SwiftMtParser_MT586Parser::Fld_97a_B3_AContext *ctx) = 0;
  virtual void exitFld_97a_B3_A(SwiftMtParser_MT586Parser::Fld_97a_B3_AContext *ctx) = 0;

  virtual void enterFld_97a_B3_E(SwiftMtParser_MT586Parser::Fld_97a_B3_EContext *ctx) = 0;
  virtual void exitFld_97a_B3_E(SwiftMtParser_MT586Parser::Fld_97a_B3_EContext *ctx) = 0;

  virtual void enterFld_94a_B3_B(SwiftMtParser_MT586Parser::Fld_94a_B3_BContext *ctx) = 0;
  virtual void exitFld_94a_B3_B(SwiftMtParser_MT586Parser::Fld_94a_B3_BContext *ctx) = 0;

  virtual void enterFld_94a_B3_C(SwiftMtParser_MT586Parser::Fld_94a_B3_CContext *ctx) = 0;
  virtual void exitFld_94a_B3_C(SwiftMtParser_MT586Parser::Fld_94a_B3_CContext *ctx) = 0;

  virtual void enterFld_94a_B3_F(SwiftMtParser_MT586Parser::Fld_94a_B3_FContext *ctx) = 0;
  virtual void exitFld_94a_B3_F(SwiftMtParser_MT586Parser::Fld_94a_B3_FContext *ctx) = 0;

  virtual void enterFld_94a_B3_L(SwiftMtParser_MT586Parser::Fld_94a_B3_LContext *ctx) = 0;
  virtual void exitFld_94a_B3_L(SwiftMtParser_MT586Parser::Fld_94a_B3_LContext *ctx) = 0;

  virtual void enterFld_13B_B3a_B(SwiftMtParser_MT586Parser::Fld_13B_B3a_BContext *ctx) = 0;
  virtual void exitFld_13B_B3a_B(SwiftMtParser_MT586Parser::Fld_13B_B3a_BContext *ctx) = 0;

  virtual void enterFld_36B_B3a_B(SwiftMtParser_MT586Parser::Fld_36B_B3a_BContext *ctx) = 0;
  virtual void exitFld_36B_B3a_B(SwiftMtParser_MT586Parser::Fld_36B_B3a_BContext *ctx) = 0;

  virtual void enterFld_98a_B3a_A(SwiftMtParser_MT586Parser::Fld_98a_B3a_AContext *ctx) = 0;
  virtual void exitFld_98a_B3a_A(SwiftMtParser_MT586Parser::Fld_98a_B3a_AContext *ctx) = 0;

  virtual void enterFld_98a_B3a_C(SwiftMtParser_MT586Parser::Fld_98a_B3a_CContext *ctx) = 0;
  virtual void exitFld_98a_B3a_C(SwiftMtParser_MT586Parser::Fld_98a_B3a_CContext *ctx) = 0;

  virtual void enterFld_98a_B3a_E(SwiftMtParser_MT586Parser::Fld_98a_B3a_EContext *ctx) = 0;
  virtual void exitFld_98a_B3a_E(SwiftMtParser_MT586Parser::Fld_98a_B3a_EContext *ctx) = 0;

  virtual void enterFld_90a_B3a_A(SwiftMtParser_MT586Parser::Fld_90a_B3a_AContext *ctx) = 0;
  virtual void exitFld_90a_B3a_A(SwiftMtParser_MT586Parser::Fld_90a_B3a_AContext *ctx) = 0;

  virtual void enterFld_90a_B3a_B(SwiftMtParser_MT586Parser::Fld_90a_B3a_BContext *ctx) = 0;
  virtual void exitFld_90a_B3a_B(SwiftMtParser_MT586Parser::Fld_90a_B3a_BContext *ctx) = 0;

  virtual void enterFld_22F_B3a_F(SwiftMtParser_MT586Parser::Fld_22F_B3a_FContext *ctx) = 0;
  virtual void exitFld_22F_B3a_F(SwiftMtParser_MT586Parser::Fld_22F_B3a_FContext *ctx) = 0;

  virtual void enterFld_98a_B4_A(SwiftMtParser_MT586Parser::Fld_98a_B4_AContext *ctx) = 0;
  virtual void exitFld_98a_B4_A(SwiftMtParser_MT586Parser::Fld_98a_B4_AContext *ctx) = 0;

  virtual void enterFld_98a_B4_B(SwiftMtParser_MT586Parser::Fld_98a_B4_BContext *ctx) = 0;
  virtual void exitFld_98a_B4_B(SwiftMtParser_MT586Parser::Fld_98a_B4_BContext *ctx) = 0;

  virtual void enterFld_98a_B4_C(SwiftMtParser_MT586Parser::Fld_98a_B4_CContext *ctx) = 0;
  virtual void exitFld_98a_B4_C(SwiftMtParser_MT586Parser::Fld_98a_B4_CContext *ctx) = 0;

  virtual void enterFld_22F_B4_F(SwiftMtParser_MT586Parser::Fld_22F_B4_FContext *ctx) = 0;
  virtual void exitFld_22F_B4_F(SwiftMtParser_MT586Parser::Fld_22F_B4_FContext *ctx) = 0;

  virtual void enterFld_20C_B4_C(SwiftMtParser_MT586Parser::Fld_20C_B4_CContext *ctx) = 0;
  virtual void exitFld_20C_B4_C(SwiftMtParser_MT586Parser::Fld_20C_B4_CContext *ctx) = 0;

  virtual void enterFld_92a_B4_A(SwiftMtParser_MT586Parser::Fld_92a_B4_AContext *ctx) = 0;
  virtual void exitFld_92a_B4_A(SwiftMtParser_MT586Parser::Fld_92a_B4_AContext *ctx) = 0;

  virtual void enterFld_92a_B4_C(SwiftMtParser_MT586Parser::Fld_92a_B4_CContext *ctx) = 0;
  virtual void exitFld_92a_B4_C(SwiftMtParser_MT586Parser::Fld_92a_B4_CContext *ctx) = 0;

  virtual void enterFld_99B_B4_B(SwiftMtParser_MT586Parser::Fld_99B_B4_BContext *ctx) = 0;
  virtual void exitFld_99B_B4_B(SwiftMtParser_MT586Parser::Fld_99B_B4_BContext *ctx) = 0;

  virtual void enterFld_19A_B4_A(SwiftMtParser_MT586Parser::Fld_19A_B4_AContext *ctx) = 0;
  virtual void exitFld_19A_B4_A(SwiftMtParser_MT586Parser::Fld_19A_B4_AContext *ctx) = 0;

  virtual void enterFld_70C_B4_C(SwiftMtParser_MT586Parser::Fld_70C_B4_CContext *ctx) = 0;
  virtual void exitFld_70C_B4_C(SwiftMtParser_MT586Parser::Fld_70C_B4_CContext *ctx) = 0;

  virtual void enterFld_22F_B5_F(SwiftMtParser_MT586Parser::Fld_22F_B5_FContext *ctx) = 0;
  virtual void exitFld_22F_B5_F(SwiftMtParser_MT586Parser::Fld_22F_B5_FContext *ctx) = 0;

  virtual void enterFld_95a_B5a_C(SwiftMtParser_MT586Parser::Fld_95a_B5a_CContext *ctx) = 0;
  virtual void exitFld_95a_B5a_C(SwiftMtParser_MT586Parser::Fld_95a_B5a_CContext *ctx) = 0;

  virtual void enterFld_95a_B5a_L(SwiftMtParser_MT586Parser::Fld_95a_B5a_LContext *ctx) = 0;
  virtual void exitFld_95a_B5a_L(SwiftMtParser_MT586Parser::Fld_95a_B5a_LContext *ctx) = 0;

  virtual void enterFld_95a_B5a_P(SwiftMtParser_MT586Parser::Fld_95a_B5a_PContext *ctx) = 0;
  virtual void exitFld_95a_B5a_P(SwiftMtParser_MT586Parser::Fld_95a_B5a_PContext *ctx) = 0;

  virtual void enterFld_95a_B5a_Q(SwiftMtParser_MT586Parser::Fld_95a_B5a_QContext *ctx) = 0;
  virtual void exitFld_95a_B5a_Q(SwiftMtParser_MT586Parser::Fld_95a_B5a_QContext *ctx) = 0;

  virtual void enterFld_95a_B5a_R(SwiftMtParser_MT586Parser::Fld_95a_B5a_RContext *ctx) = 0;
  virtual void exitFld_95a_B5a_R(SwiftMtParser_MT586Parser::Fld_95a_B5a_RContext *ctx) = 0;

  virtual void enterFld_95a_B5a_S(SwiftMtParser_MT586Parser::Fld_95a_B5a_SContext *ctx) = 0;
  virtual void exitFld_95a_B5a_S(SwiftMtParser_MT586Parser::Fld_95a_B5a_SContext *ctx) = 0;

  virtual void enterFld_97a_B5a_A(SwiftMtParser_MT586Parser::Fld_97a_B5a_AContext *ctx) = 0;
  virtual void exitFld_97a_B5a_A(SwiftMtParser_MT586Parser::Fld_97a_B5a_AContext *ctx) = 0;

  virtual void enterFld_97a_B5a_B(SwiftMtParser_MT586Parser::Fld_97a_B5a_BContext *ctx) = 0;
  virtual void exitFld_97a_B5a_B(SwiftMtParser_MT586Parser::Fld_97a_B5a_BContext *ctx) = 0;

  virtual void enterFld_98a_B5a_A(SwiftMtParser_MT586Parser::Fld_98a_B5a_AContext *ctx) = 0;
  virtual void exitFld_98a_B5a_A(SwiftMtParser_MT586Parser::Fld_98a_B5a_AContext *ctx) = 0;

  virtual void enterFld_98a_B5a_C(SwiftMtParser_MT586Parser::Fld_98a_B5a_CContext *ctx) = 0;
  virtual void exitFld_98a_B5a_C(SwiftMtParser_MT586Parser::Fld_98a_B5a_CContext *ctx) = 0;

  virtual void enterFld_20C_B5a_C(SwiftMtParser_MT586Parser::Fld_20C_B5a_CContext *ctx) = 0;
  virtual void exitFld_20C_B5a_C(SwiftMtParser_MT586Parser::Fld_20C_B5a_CContext *ctx) = 0;

  virtual void enterFld_70a_B5a_C(SwiftMtParser_MT586Parser::Fld_70a_B5a_CContext *ctx) = 0;
  virtual void exitFld_70a_B5a_C(SwiftMtParser_MT586Parser::Fld_70a_B5a_CContext *ctx) = 0;

  virtual void enterFld_70a_B5a_D(SwiftMtParser_MT586Parser::Fld_70a_B5a_DContext *ctx) = 0;
  virtual void exitFld_70a_B5a_D(SwiftMtParser_MT586Parser::Fld_70a_B5a_DContext *ctx) = 0;

  virtual void enterFld_70a_B5a_E(SwiftMtParser_MT586Parser::Fld_70a_B5a_EContext *ctx) = 0;
  virtual void exitFld_70a_B5a_E(SwiftMtParser_MT586Parser::Fld_70a_B5a_EContext *ctx) = 0;

  virtual void enterFld_19A_B5b_A(SwiftMtParser_MT586Parser::Fld_19A_B5b_AContext *ctx) = 0;
  virtual void exitFld_19A_B5b_A(SwiftMtParser_MT586Parser::Fld_19A_B5b_AContext *ctx) = 0;

  virtual void enterFld_98a_B5b_A(SwiftMtParser_MT586Parser::Fld_98a_B5b_AContext *ctx) = 0;
  virtual void exitFld_98a_B5b_A(SwiftMtParser_MT586Parser::Fld_98a_B5b_AContext *ctx) = 0;

  virtual void enterFld_98a_B5b_C(SwiftMtParser_MT586Parser::Fld_98a_B5b_CContext *ctx) = 0;
  virtual void exitFld_98a_B5b_C(SwiftMtParser_MT586Parser::Fld_98a_B5b_CContext *ctx) = 0;

  virtual void enterFld_92B_B5b_B(SwiftMtParser_MT586Parser::Fld_92B_B5b_BContext *ctx) = 0;
  virtual void exitFld_92B_B5b_B(SwiftMtParser_MT586Parser::Fld_92B_B5b_BContext *ctx) = 0;

  virtual void enterFld_95a_C_C(SwiftMtParser_MT586Parser::Fld_95a_C_CContext *ctx) = 0;
  virtual void exitFld_95a_C_C(SwiftMtParser_MT586Parser::Fld_95a_C_CContext *ctx) = 0;

  virtual void enterFld_95a_C_L(SwiftMtParser_MT586Parser::Fld_95a_C_LContext *ctx) = 0;
  virtual void exitFld_95a_C_L(SwiftMtParser_MT586Parser::Fld_95a_C_LContext *ctx) = 0;

  virtual void enterFld_95a_C_P(SwiftMtParser_MT586Parser::Fld_95a_C_PContext *ctx) = 0;
  virtual void exitFld_95a_C_P(SwiftMtParser_MT586Parser::Fld_95a_C_PContext *ctx) = 0;

  virtual void enterFld_95a_C_Q(SwiftMtParser_MT586Parser::Fld_95a_C_QContext *ctx) = 0;
  virtual void exitFld_95a_C_Q(SwiftMtParser_MT586Parser::Fld_95a_C_QContext *ctx) = 0;

  virtual void enterFld_95a_C_R(SwiftMtParser_MT586Parser::Fld_95a_C_RContext *ctx) = 0;
  virtual void exitFld_95a_C_R(SwiftMtParser_MT586Parser::Fld_95a_C_RContext *ctx) = 0;

  virtual void enterFld_95a_C_S(SwiftMtParser_MT586Parser::Fld_95a_C_SContext *ctx) = 0;
  virtual void exitFld_95a_C_S(SwiftMtParser_MT586Parser::Fld_95a_C_SContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::parsers::sr2018
