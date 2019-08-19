
#include "../proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtComponentFormatLexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-definition/format/SwiftMtComponentFormat.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "SwiftMtComponentFormatParser.h"


namespace message::definition::swift::mt {

/**
 * This interface defines an abstract listener for a parse tree produced by SwiftMtComponentFormatParser.
 */
class  SwiftMtComponentFormatListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterField_format(SwiftMtComponentFormatParser::Field_formatContext *ctx) = 0;
  virtual void exitField_format(SwiftMtComponentFormatParser::Field_formatContext *ctx) = 0;

  virtual void enterComp_format(SwiftMtComponentFormatParser::Comp_formatContext *ctx) = 0;
  virtual void exitComp_format(SwiftMtComponentFormatParser::Comp_formatContext *ctx) = 0;

  virtual void enterOptional_component(SwiftMtComponentFormatParser::Optional_componentContext *ctx) = 0;
  virtual void exitOptional_component(SwiftMtComponentFormatParser::Optional_componentContext *ctx) = 0;

  virtual void enterOpt_comp_cttnt(SwiftMtComponentFormatParser::Opt_comp_cttntContext *ctx) = 0;
  virtual void exitOpt_comp_cttnt(SwiftMtComponentFormatParser::Opt_comp_cttntContext *ctx) = 0;

  virtual void enterComponent(SwiftMtComponentFormatParser::ComponentContext *ctx) = 0;
  virtual void exitComponent(SwiftMtComponentFormatParser::ComponentContext *ctx) = 0;

  virtual void enterSeparator(SwiftMtComponentFormatParser::SeparatorContext *ctx) = 0;
  virtual void exitSeparator(SwiftMtComponentFormatParser::SeparatorContext *ctx) = 0;

  virtual void enterLength_restricted(SwiftMtComponentFormatParser::Length_restrictedContext *ctx) = 0;
  virtual void exitLength_restricted(SwiftMtComponentFormatParser::Length_restrictedContext *ctx) = 0;

  virtual void enterSign(SwiftMtComponentFormatParser::SignContext *ctx) = 0;
  virtual void exitSign(SwiftMtComponentFormatParser::SignContext *ctx) = 0;

  virtual void enterConstant(SwiftMtComponentFormatParser::ConstantContext *ctx) = 0;
  virtual void exitConstant(SwiftMtComponentFormatParser::ConstantContext *ctx) = 0;

  virtual void enterCharset_type(SwiftMtComponentFormatParser::Charset_typeContext *ctx) = 0;
  virtual void exitCharset_type(SwiftMtComponentFormatParser::Charset_typeContext *ctx) = 0;

  virtual void enterLength_restriction(SwiftMtComponentFormatParser::Length_restrictionContext *ctx) = 0;
  virtual void exitLength_restriction(SwiftMtComponentFormatParser::Length_restrictionContext *ctx) = 0;

  virtual void enterExact_restriction(SwiftMtComponentFormatParser::Exact_restrictionContext *ctx) = 0;
  virtual void exitExact_restriction(SwiftMtComponentFormatParser::Exact_restrictionContext *ctx) = 0;

  virtual void enterRange_restriction(SwiftMtComponentFormatParser::Range_restrictionContext *ctx) = 0;
  virtual void exitRange_restriction(SwiftMtComponentFormatParser::Range_restrictionContext *ctx) = 0;

  virtual void enterLine_restriction(SwiftMtComponentFormatParser::Line_restrictionContext *ctx) = 0;
  virtual void exitLine_restriction(SwiftMtComponentFormatParser::Line_restrictionContext *ctx) = 0;

  virtual void enterMax_restriction(SwiftMtComponentFormatParser::Max_restrictionContext *ctx) = 0;
  virtual void exitMax_restriction(SwiftMtComponentFormatParser::Max_restrictionContext *ctx) = 0;

  virtual void enterMax_two_digit(SwiftMtComponentFormatParser::Max_two_digitContext *ctx) = 0;
  virtual void exitMax_two_digit(SwiftMtComponentFormatParser::Max_two_digitContext *ctx) = 0;


};

}  // namespace message::definition::swift::mt
