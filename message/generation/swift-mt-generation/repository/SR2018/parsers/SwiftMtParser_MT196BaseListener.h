
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT196.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MT196Listener.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This class provides an empty implementation of SwiftMtParser_MT196Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SwiftMtParser_MT196BaseListener : public SwiftMtParser_MT196Listener {
public:

  virtual void enterMessage(SwiftMtParser_MT196Parser::MessageContext * /*ctx*/) override { }
  virtual void exitMessage(SwiftMtParser_MT196Parser::MessageContext * /*ctx*/) override { }

  virtual void enterBh(SwiftMtParser_MT196Parser::BhContext * /*ctx*/) override { }
  virtual void exitBh(SwiftMtParser_MT196Parser::BhContext * /*ctx*/) override { }

  virtual void enterBh_content(SwiftMtParser_MT196Parser::Bh_contentContext * /*ctx*/) override { }
  virtual void exitBh_content(SwiftMtParser_MT196Parser::Bh_contentContext * /*ctx*/) override { }

  virtual void enterAh(SwiftMtParser_MT196Parser::AhContext * /*ctx*/) override { }
  virtual void exitAh(SwiftMtParser_MT196Parser::AhContext * /*ctx*/) override { }

  virtual void enterAh_content(SwiftMtParser_MT196Parser::Ah_contentContext * /*ctx*/) override { }
  virtual void exitAh_content(SwiftMtParser_MT196Parser::Ah_contentContext * /*ctx*/) override { }

  virtual void enterUh(SwiftMtParser_MT196Parser::UhContext * /*ctx*/) override { }
  virtual void exitUh(SwiftMtParser_MT196Parser::UhContext * /*ctx*/) override { }

  virtual void enterTr(SwiftMtParser_MT196Parser::TrContext * /*ctx*/) override { }
  virtual void exitTr(SwiftMtParser_MT196Parser::TrContext * /*ctx*/) override { }

  virtual void enterSys_block(SwiftMtParser_MT196Parser::Sys_blockContext * /*ctx*/) override { }
  virtual void exitSys_block(SwiftMtParser_MT196Parser::Sys_blockContext * /*ctx*/) override { }

  virtual void enterSys_element(SwiftMtParser_MT196Parser::Sys_elementContext * /*ctx*/) override { }
  virtual void exitSys_element(SwiftMtParser_MT196Parser::Sys_elementContext * /*ctx*/) override { }

  virtual void enterSys_element_key(SwiftMtParser_MT196Parser::Sys_element_keyContext * /*ctx*/) override { }
  virtual void exitSys_element_key(SwiftMtParser_MT196Parser::Sys_element_keyContext * /*ctx*/) override { }

  virtual void enterSys_element_content(SwiftMtParser_MT196Parser::Sys_element_contentContext * /*ctx*/) override { }
  virtual void exitSys_element_content(SwiftMtParser_MT196Parser::Sys_element_contentContext * /*ctx*/) override { }

  virtual void enterMt(SwiftMtParser_MT196Parser::MtContext * /*ctx*/) override { }
  virtual void exitMt(SwiftMtParser_MT196Parser::MtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace message::definition::swift::mt::parsers::sr2018
