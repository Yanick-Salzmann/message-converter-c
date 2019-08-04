
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars\SwiftMtParser_MT330.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT330Parser.h"


namespace message::definition::swift::mt::sr2018 {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtParser_MT330Parser.
 */
class  SwiftMtParser_MT330Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterMessage(SwiftMtParser_MT330Parser::MessageContext *ctx) = 0;
  virtual void exitMessage(SwiftMtParser_MT330Parser::MessageContext *ctx) = 0;

  virtual void enterBh(SwiftMtParser_MT330Parser::BhContext *ctx) = 0;
  virtual void exitBh(SwiftMtParser_MT330Parser::BhContext *ctx) = 0;

  virtual void enterBh_content(SwiftMtParser_MT330Parser::Bh_contentContext *ctx) = 0;
  virtual void exitBh_content(SwiftMtParser_MT330Parser::Bh_contentContext *ctx) = 0;

  virtual void enterAh(SwiftMtParser_MT330Parser::AhContext *ctx) = 0;
  virtual void exitAh(SwiftMtParser_MT330Parser::AhContext *ctx) = 0;

  virtual void enterAh_content(SwiftMtParser_MT330Parser::Ah_contentContext *ctx) = 0;
  virtual void exitAh_content(SwiftMtParser_MT330Parser::Ah_contentContext *ctx) = 0;

  virtual void enterUh(SwiftMtParser_MT330Parser::UhContext *ctx) = 0;
  virtual void exitUh(SwiftMtParser_MT330Parser::UhContext *ctx) = 0;

  virtual void enterTr(SwiftMtParser_MT330Parser::TrContext *ctx) = 0;
  virtual void exitTr(SwiftMtParser_MT330Parser::TrContext *ctx) = 0;

  virtual void enterSys_block(SwiftMtParser_MT330Parser::Sys_blockContext *ctx) = 0;
  virtual void exitSys_block(SwiftMtParser_MT330Parser::Sys_blockContext *ctx) = 0;

  virtual void enterSys_element(SwiftMtParser_MT330Parser::Sys_elementContext *ctx) = 0;
  virtual void exitSys_element(SwiftMtParser_MT330Parser::Sys_elementContext *ctx) = 0;

  virtual void enterSys_element_key(SwiftMtParser_MT330Parser::Sys_element_keyContext *ctx) = 0;
  virtual void exitSys_element_key(SwiftMtParser_MT330Parser::Sys_element_keyContext *ctx) = 0;

  virtual void enterSys_element_content(SwiftMtParser_MT330Parser::Sys_element_contentContext *ctx) = 0;
  virtual void exitSys_element_content(SwiftMtParser_MT330Parser::Sys_element_contentContext *ctx) = 0;

  virtual void enterMt(SwiftMtParser_MT330Parser::MtContext *ctx) = 0;
  virtual void exitMt(SwiftMtParser_MT330Parser::MtContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt::sr2018
