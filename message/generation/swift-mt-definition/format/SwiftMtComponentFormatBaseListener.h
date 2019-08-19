
#include "../proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtComponentFormatLexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-definition/format/SwiftMtComponentFormat.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtComponentFormatListener.h"


namespace message::definition::swift::mt {

/**
 * This class provides an empty implementation of SwiftMtComponentFormatListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SwiftMtComponentFormatBaseListener : public SwiftMtComponentFormatListener {
public:

  virtual void enterField_format(SwiftMtComponentFormatParser::Field_formatContext * /*ctx*/) override { }
  virtual void exitField_format(SwiftMtComponentFormatParser::Field_formatContext * /*ctx*/) override { }

  virtual void enterComp_format(SwiftMtComponentFormatParser::Comp_formatContext * /*ctx*/) override { }
  virtual void exitComp_format(SwiftMtComponentFormatParser::Comp_formatContext * /*ctx*/) override { }

  virtual void enterOptional_component(SwiftMtComponentFormatParser::Optional_componentContext * /*ctx*/) override { }
  virtual void exitOptional_component(SwiftMtComponentFormatParser::Optional_componentContext * /*ctx*/) override { }

  virtual void enterOpt_comp_cttnt(SwiftMtComponentFormatParser::Opt_comp_cttntContext * /*ctx*/) override { }
  virtual void exitOpt_comp_cttnt(SwiftMtComponentFormatParser::Opt_comp_cttntContext * /*ctx*/) override { }

  virtual void enterComponent(SwiftMtComponentFormatParser::ComponentContext * /*ctx*/) override { }
  virtual void exitComponent(SwiftMtComponentFormatParser::ComponentContext * /*ctx*/) override { }

  virtual void enterSeparator(SwiftMtComponentFormatParser::SeparatorContext * /*ctx*/) override { }
  virtual void exitSeparator(SwiftMtComponentFormatParser::SeparatorContext * /*ctx*/) override { }

  virtual void enterLength_restricted(SwiftMtComponentFormatParser::Length_restrictedContext * /*ctx*/) override { }
  virtual void exitLength_restricted(SwiftMtComponentFormatParser::Length_restrictedContext * /*ctx*/) override { }

  virtual void enterSign(SwiftMtComponentFormatParser::SignContext * /*ctx*/) override { }
  virtual void exitSign(SwiftMtComponentFormatParser::SignContext * /*ctx*/) override { }

  virtual void enterConstant(SwiftMtComponentFormatParser::ConstantContext * /*ctx*/) override { }
  virtual void exitConstant(SwiftMtComponentFormatParser::ConstantContext * /*ctx*/) override { }

  virtual void enterCharset_type(SwiftMtComponentFormatParser::Charset_typeContext * /*ctx*/) override { }
  virtual void exitCharset_type(SwiftMtComponentFormatParser::Charset_typeContext * /*ctx*/) override { }

  virtual void enterLength_restriction(SwiftMtComponentFormatParser::Length_restrictionContext * /*ctx*/) override { }
  virtual void exitLength_restriction(SwiftMtComponentFormatParser::Length_restrictionContext * /*ctx*/) override { }

  virtual void enterExact_restriction(SwiftMtComponentFormatParser::Exact_restrictionContext * /*ctx*/) override { }
  virtual void exitExact_restriction(SwiftMtComponentFormatParser::Exact_restrictionContext * /*ctx*/) override { }

  virtual void enterRange_restriction(SwiftMtComponentFormatParser::Range_restrictionContext * /*ctx*/) override { }
  virtual void exitRange_restriction(SwiftMtComponentFormatParser::Range_restrictionContext * /*ctx*/) override { }

  virtual void enterLine_restriction(SwiftMtComponentFormatParser::Line_restrictionContext * /*ctx*/) override { }
  virtual void exitLine_restriction(SwiftMtComponentFormatParser::Line_restrictionContext * /*ctx*/) override { }

  virtual void enterMax_restriction(SwiftMtComponentFormatParser::Max_restrictionContext * /*ctx*/) override { }
  virtual void exitMax_restriction(SwiftMtComponentFormatParser::Max_restrictionContext * /*ctx*/) override { }

  virtual void enterMax_two_digit(SwiftMtComponentFormatParser::Max_two_digitContext * /*ctx*/) override { }
  virtual void exitMax_two_digit(SwiftMtComponentFormatParser::Max_two_digitContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

}  // namespace message::definition::swift::mt
