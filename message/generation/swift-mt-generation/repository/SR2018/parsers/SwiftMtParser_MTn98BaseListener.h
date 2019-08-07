
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MTn98Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MTn98.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtParser_MTn98Listener.h"


namespace message::definition::swift::mt::parsers::sr2018 {

/**
 * This class provides an empty implementation of SwiftMtParser_MTn98Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SwiftMtParser_MTn98BaseListener : public SwiftMtParser_MTn98Listener {
public:

  virtual void enterMessage(SwiftMtParser_MTn98Parser::MessageContext * /*ctx*/) override { }
  virtual void exitMessage(SwiftMtParser_MTn98Parser::MessageContext * /*ctx*/) override { }

  virtual void enterBh(SwiftMtParser_MTn98Parser::BhContext * /*ctx*/) override { }
  virtual void exitBh(SwiftMtParser_MTn98Parser::BhContext * /*ctx*/) override { }

  virtual void enterBh_content(SwiftMtParser_MTn98Parser::Bh_contentContext * /*ctx*/) override { }
  virtual void exitBh_content(SwiftMtParser_MTn98Parser::Bh_contentContext * /*ctx*/) override { }

  virtual void enterAh(SwiftMtParser_MTn98Parser::AhContext * /*ctx*/) override { }
  virtual void exitAh(SwiftMtParser_MTn98Parser::AhContext * /*ctx*/) override { }

  virtual void enterAh_content(SwiftMtParser_MTn98Parser::Ah_contentContext * /*ctx*/) override { }
  virtual void exitAh_content(SwiftMtParser_MTn98Parser::Ah_contentContext * /*ctx*/) override { }

  virtual void enterUh(SwiftMtParser_MTn98Parser::UhContext * /*ctx*/) override { }
  virtual void exitUh(SwiftMtParser_MTn98Parser::UhContext * /*ctx*/) override { }

  virtual void enterTr(SwiftMtParser_MTn98Parser::TrContext * /*ctx*/) override { }
  virtual void exitTr(SwiftMtParser_MTn98Parser::TrContext * /*ctx*/) override { }

  virtual void enterSys_block(SwiftMtParser_MTn98Parser::Sys_blockContext * /*ctx*/) override { }
  virtual void exitSys_block(SwiftMtParser_MTn98Parser::Sys_blockContext * /*ctx*/) override { }

  virtual void enterSys_element(SwiftMtParser_MTn98Parser::Sys_elementContext * /*ctx*/) override { }
  virtual void exitSys_element(SwiftMtParser_MTn98Parser::Sys_elementContext * /*ctx*/) override { }

  virtual void enterSys_element_key(SwiftMtParser_MTn98Parser::Sys_element_keyContext * /*ctx*/) override { }
  virtual void exitSys_element_key(SwiftMtParser_MTn98Parser::Sys_element_keyContext * /*ctx*/) override { }

  virtual void enterSys_element_content(SwiftMtParser_MTn98Parser::Sys_element_contentContext * /*ctx*/) override { }
  virtual void exitSys_element_content(SwiftMtParser_MTn98Parser::Sys_element_contentContext * /*ctx*/) override { }

  virtual void enterMt(SwiftMtParser_MTn98Parser::MtContext * /*ctx*/) override { }
  virtual void exitMt(SwiftMtParser_MTn98Parser::MtContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace message::definition::swift::mt::parsers::sr2018
