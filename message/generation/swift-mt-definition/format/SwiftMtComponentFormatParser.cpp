
#include "../proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtComponentFormatLexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-definition/format/SwiftMtComponentFormat.g4 by ANTLR 4.7.2


#include "SwiftMtComponentFormatListener.h"

#include "SwiftMtComponentFormatParser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt;
using namespace antlr4;

SwiftMtComponentFormatParser::SwiftMtComponentFormatParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtComponentFormatParser::~SwiftMtComponentFormatParser() {
  delete _interpreter;
}

std::string SwiftMtComponentFormatParser::getGrammarFileName() const {
  return "SwiftMtComponentFormat.g4";
}

const std::vector<std::string>& SwiftMtComponentFormatParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtComponentFormatParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Field_formatContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Field_formatContext::Field_formatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtComponentFormatParser::Field_formatContext::EOF() {
  return getToken(SwiftMtComponentFormatParser::EOF, 0);
}

std::vector<SwiftMtComponentFormatParser::Comp_formatContext *> SwiftMtComponentFormatParser::Field_formatContext::comp_format() {
  return getRuleContexts<SwiftMtComponentFormatParser::Comp_formatContext>();
}

SwiftMtComponentFormatParser::Comp_formatContext* SwiftMtComponentFormatParser::Field_formatContext::comp_format(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::Comp_formatContext>(i);
}

std::vector<SwiftMtComponentFormatParser::SeparatorContext *> SwiftMtComponentFormatParser::Field_formatContext::separator() {
  return getRuleContexts<SwiftMtComponentFormatParser::SeparatorContext>();
}

SwiftMtComponentFormatParser::SeparatorContext* SwiftMtComponentFormatParser::Field_formatContext::separator(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::SeparatorContext>(i);
}


size_t SwiftMtComponentFormatParser::Field_formatContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleField_format;
}

void SwiftMtComponentFormatParser::Field_formatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField_format(this);
}

void SwiftMtComponentFormatParser::Field_formatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField_format(this);
}

SwiftMtComponentFormatParser::Field_formatContext* SwiftMtComponentFormatParser::field_format() {
  Field_formatContext *_localctx = _tracker.createInstance<Field_formatContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtComponentFormatParser::RuleField_format);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(32);
      comp_format();
      setState(34);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(33);
        separator();
        break;
      }

      }
      setState(38); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtComponentFormatParser::IDENTIFIER)
      | (1ULL << SwiftMtComponentFormatParser::DIGIT)
      | (1ULL << SwiftMtComponentFormatParser::LBRACKET)
      | (1ULL << SwiftMtComponentFormatParser::ANY))) != 0));
    setState(40);
    match(SwiftMtComponentFormatParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Comp_formatContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Comp_formatContext::Comp_formatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtComponentFormatParser::ComponentContext* SwiftMtComponentFormatParser::Comp_formatContext::component() {
  return getRuleContext<SwiftMtComponentFormatParser::ComponentContext>(0);
}

SwiftMtComponentFormatParser::Optional_componentContext* SwiftMtComponentFormatParser::Comp_formatContext::optional_component() {
  return getRuleContext<SwiftMtComponentFormatParser::Optional_componentContext>(0);
}


size_t SwiftMtComponentFormatParser::Comp_formatContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleComp_format;
}

void SwiftMtComponentFormatParser::Comp_formatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComp_format(this);
}

void SwiftMtComponentFormatParser::Comp_formatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComp_format(this);
}

SwiftMtComponentFormatParser::Comp_formatContext* SwiftMtComponentFormatParser::comp_format() {
  Comp_formatContext *_localctx = _tracker.createInstance<Comp_formatContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtComponentFormatParser::RuleComp_format);
   new_component(); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(44);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SwiftMtComponentFormatParser::IDENTIFIER:
      case SwiftMtComponentFormatParser::DIGIT:
      case SwiftMtComponentFormatParser::ANY: {
        enterOuterAlt(_localctx, 1);
        setState(42);
        component();
        break;
      }

      case SwiftMtComponentFormatParser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(43);
        optional_component();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   _ctx->stop = _input->LT(-1);

                                _components.emplace_back(_current_component);
                           
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Optional_componentContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Optional_componentContext::Optional_componentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtComponentFormatParser::Optional_componentContext::LBRACKET() {
  return getToken(SwiftMtComponentFormatParser::LBRACKET, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Optional_componentContext::RBRACKET() {
  return getToken(SwiftMtComponentFormatParser::RBRACKET, 0);
}

SwiftMtComponentFormatParser::Opt_comp_cttntContext* SwiftMtComponentFormatParser::Optional_componentContext::opt_comp_cttnt() {
  return getRuleContext<SwiftMtComponentFormatParser::Opt_comp_cttntContext>(0);
}


size_t SwiftMtComponentFormatParser::Optional_componentContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleOptional_component;
}

void SwiftMtComponentFormatParser::Optional_componentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOptional_component(this);
}

void SwiftMtComponentFormatParser::Optional_componentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOptional_component(this);
}

SwiftMtComponentFormatParser::Optional_componentContext* SwiftMtComponentFormatParser::optional_component() {
  Optional_componentContext *_localctx = _tracker.createInstance<Optional_componentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtComponentFormatParser::RuleOptional_component);
   _current_component.set_is_optional(true); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(SwiftMtComponentFormatParser::LBRACKET);
    setState(47);
    dynamic_cast<Optional_componentContext *>(_localctx)->cntt = opt_comp_cttnt();
     *_current_component.mutable_full_format() = (dynamic_cast<Optional_componentContext *>(_localctx)->cntt != nullptr ? _input->getText(dynamic_cast<Optional_componentContext *>(_localctx)->cntt->start, dynamic_cast<Optional_componentContext *>(_localctx)->cntt->stop) : nullptr); 
    setState(49);
    match(SwiftMtComponentFormatParser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Opt_comp_cttntContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Opt_comp_cttntContext::Opt_comp_cttntContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtComponentFormatParser::Length_restrictedContext *> SwiftMtComponentFormatParser::Opt_comp_cttntContext::length_restricted() {
  return getRuleContexts<SwiftMtComponentFormatParser::Length_restrictedContext>();
}

SwiftMtComponentFormatParser::Length_restrictedContext* SwiftMtComponentFormatParser::Opt_comp_cttntContext::length_restricted(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::Length_restrictedContext>(i);
}

std::vector<SwiftMtComponentFormatParser::SignContext *> SwiftMtComponentFormatParser::Opt_comp_cttntContext::sign() {
  return getRuleContexts<SwiftMtComponentFormatParser::SignContext>();
}

SwiftMtComponentFormatParser::SignContext* SwiftMtComponentFormatParser::Opt_comp_cttntContext::sign(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::SignContext>(i);
}

std::vector<SwiftMtComponentFormatParser::ConstantContext *> SwiftMtComponentFormatParser::Opt_comp_cttntContext::constant() {
  return getRuleContexts<SwiftMtComponentFormatParser::ConstantContext>();
}

SwiftMtComponentFormatParser::ConstantContext* SwiftMtComponentFormatParser::Opt_comp_cttntContext::constant(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::ConstantContext>(i);
}

std::vector<SwiftMtComponentFormatParser::Comp_formatContext *> SwiftMtComponentFormatParser::Opt_comp_cttntContext::comp_format() {
  return getRuleContexts<SwiftMtComponentFormatParser::Comp_formatContext>();
}

SwiftMtComponentFormatParser::Comp_formatContext* SwiftMtComponentFormatParser::Opt_comp_cttntContext::comp_format(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::Comp_formatContext>(i);
}

std::vector<SwiftMtComponentFormatParser::SeparatorContext *> SwiftMtComponentFormatParser::Opt_comp_cttntContext::separator() {
  return getRuleContexts<SwiftMtComponentFormatParser::SeparatorContext>();
}

SwiftMtComponentFormatParser::SeparatorContext* SwiftMtComponentFormatParser::Opt_comp_cttntContext::separator(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::SeparatorContext>(i);
}


size_t SwiftMtComponentFormatParser::Opt_comp_cttntContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleOpt_comp_cttnt;
}

void SwiftMtComponentFormatParser::Opt_comp_cttntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOpt_comp_cttnt(this);
}

void SwiftMtComponentFormatParser::Opt_comp_cttntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOpt_comp_cttnt(this);
}

SwiftMtComponentFormatParser::Opt_comp_cttntContext* SwiftMtComponentFormatParser::opt_comp_cttnt() {
  Opt_comp_cttntContext *_localctx = _tracker.createInstance<Opt_comp_cttntContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtComponentFormatParser::RuleOpt_comp_cttnt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(52);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      setState(51);
      dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_before = separator();
      break;
    }

    }
     *_current_component.mutable_separator_before() = (dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_before != nullptr ? _input->getText(dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_before->start, dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_before->stop) : nullptr); 
    setState(59); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(59);
              _errHandler->sync(this);
              switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
              case 1: {
                setState(55);
                length_restricted();
                break;
              }

              case 2: {
                setState(56);
                sign();
                break;
              }

              case 3: {
                setState(57);
                constant();
                break;
              }

              case 4: {
                setState(58);
                comp_format();
                break;
              }

              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(61); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtComponentFormatParser::ANY) {
      setState(63);
      dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_after = separator();
    }
     *_current_component.mutable_separator_after() = (dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_after != nullptr ? _input->getText(dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_after->start, dynamic_cast<Opt_comp_cttntContext *>(_localctx)->sep_after->stop) : nullptr); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComponentContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::ComponentContext::ComponentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtComponentFormatParser::Length_restrictedContext* SwiftMtComponentFormatParser::ComponentContext::length_restricted() {
  return getRuleContext<SwiftMtComponentFormatParser::Length_restrictedContext>(0);
}

SwiftMtComponentFormatParser::ConstantContext* SwiftMtComponentFormatParser::ComponentContext::constant() {
  return getRuleContext<SwiftMtComponentFormatParser::ConstantContext>(0);
}

std::vector<SwiftMtComponentFormatParser::SeparatorContext *> SwiftMtComponentFormatParser::ComponentContext::separator() {
  return getRuleContexts<SwiftMtComponentFormatParser::SeparatorContext>();
}

SwiftMtComponentFormatParser::SeparatorContext* SwiftMtComponentFormatParser::ComponentContext::separator(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::SeparatorContext>(i);
}


size_t SwiftMtComponentFormatParser::ComponentContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleComponent;
}

void SwiftMtComponentFormatParser::ComponentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComponent(this);
}

void SwiftMtComponentFormatParser::ComponentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComponent(this);
}

SwiftMtComponentFormatParser::ComponentContext* SwiftMtComponentFormatParser::component() {
  ComponentContext *_localctx = _tracker.createInstance<ComponentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtComponentFormatParser::RuleComponent);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtComponentFormatParser::ANY) {
      setState(68);
      separator();
    }
    setState(73);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SwiftMtComponentFormatParser::DIGIT: {
        setState(71);
        length_restricted();
        break;
      }

      case SwiftMtComponentFormatParser::IDENTIFIER: {
        setState(72);
        constant();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(76);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(75);
      separator();
      break;
    }

    }
   _ctx->stop = _input->LT(-1);

                                *_current_component.mutable_full_format() = _input->getText(_localctx->start, _input->LT(-1));
                           
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SeparatorContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::SeparatorContext::SeparatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtComponentFormatParser::SeparatorContext::ANY() {
  return getTokens(SwiftMtComponentFormatParser::ANY);
}

tree::TerminalNode* SwiftMtComponentFormatParser::SeparatorContext::ANY(size_t i) {
  return getToken(SwiftMtComponentFormatParser::ANY, i);
}


size_t SwiftMtComponentFormatParser::SeparatorContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleSeparator;
}

void SwiftMtComponentFormatParser::SeparatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeparator(this);
}

void SwiftMtComponentFormatParser::SeparatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeparator(this);
}

SwiftMtComponentFormatParser::SeparatorContext* SwiftMtComponentFormatParser::separator() {
  SeparatorContext *_localctx = _tracker.createInstance<SeparatorContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtComponentFormatParser::RuleSeparator);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(79); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(78);
              match(SwiftMtComponentFormatParser::ANY);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(81); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Length_restrictedContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Length_restrictedContext::Length_restrictedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtComponentFormatParser::Length_restrictionContext* SwiftMtComponentFormatParser::Length_restrictedContext::length_restriction() {
  return getRuleContext<SwiftMtComponentFormatParser::Length_restrictionContext>(0);
}

SwiftMtComponentFormatParser::Charset_typeContext* SwiftMtComponentFormatParser::Length_restrictedContext::charset_type() {
  return getRuleContext<SwiftMtComponentFormatParser::Charset_typeContext>(0);
}


size_t SwiftMtComponentFormatParser::Length_restrictedContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleLength_restricted;
}

void SwiftMtComponentFormatParser::Length_restrictedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLength_restricted(this);
}

void SwiftMtComponentFormatParser::Length_restrictedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLength_restricted(this);
}

SwiftMtComponentFormatParser::Length_restrictedContext* SwiftMtComponentFormatParser::length_restricted() {
  Length_restrictedContext *_localctx = _tracker.createInstance<Length_restrictedContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtComponentFormatParser::RuleLength_restricted);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    length_restriction();
    setState(84);
    charset_type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t SwiftMtComponentFormatParser::SignContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleSign;
}

void SwiftMtComponentFormatParser::SignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSign(this);
}

void SwiftMtComponentFormatParser::SignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSign(this);
}

SwiftMtComponentFormatParser::SignContext* SwiftMtComponentFormatParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtComponentFormatParser::RuleSign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(SwiftMtComponentFormatParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtComponentFormatParser::ConstantContext::IDENTIFIER() {
  return getToken(SwiftMtComponentFormatParser::IDENTIFIER, 0);
}


size_t SwiftMtComponentFormatParser::ConstantContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleConstant;
}

void SwiftMtComponentFormatParser::ConstantContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstant(this);
}

void SwiftMtComponentFormatParser::ConstantContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstant(this);
}

SwiftMtComponentFormatParser::ConstantContext* SwiftMtComponentFormatParser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtComponentFormatParser::RuleConstant);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(88);
    match(SwiftMtComponentFormatParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Charset_typeContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Charset_typeContext::Charset_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_NUMERIC() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_NUMERIC, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_ALPHA() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_ALPHA, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_ALPHA_NUMERIC() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_ALPHA_NUMERIC, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_HEX() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_HEX, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_X() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_X, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_Y() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_Y, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_Z() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_Z, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_DECIMALS() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_DECIMALS, 0);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Charset_typeContext::CHARSET_BLANK() {
  return getToken(SwiftMtComponentFormatParser::CHARSET_BLANK, 0);
}


size_t SwiftMtComponentFormatParser::Charset_typeContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleCharset_type;
}

void SwiftMtComponentFormatParser::Charset_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharset_type(this);
}

void SwiftMtComponentFormatParser::Charset_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharset_type(this);
}

SwiftMtComponentFormatParser::Charset_typeContext* SwiftMtComponentFormatParser::charset_type() {
  Charset_typeContext *_localctx = _tracker.createInstance<Charset_typeContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtComponentFormatParser::RuleCharset_type);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtComponentFormatParser::CHARSET_NUMERIC)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_ALPHA)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_ALPHA_NUMERIC)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_HEX)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_X)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_Y)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_Z)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_DECIMALS)
      | (1ULL << SwiftMtComponentFormatParser::CHARSET_BLANK))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Length_restrictionContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Length_restrictionContext::Length_restrictionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtComponentFormatParser::Exact_restrictionContext* SwiftMtComponentFormatParser::Length_restrictionContext::exact_restriction() {
  return getRuleContext<SwiftMtComponentFormatParser::Exact_restrictionContext>(0);
}

SwiftMtComponentFormatParser::Range_restrictionContext* SwiftMtComponentFormatParser::Length_restrictionContext::range_restriction() {
  return getRuleContext<SwiftMtComponentFormatParser::Range_restrictionContext>(0);
}

SwiftMtComponentFormatParser::Line_restrictionContext* SwiftMtComponentFormatParser::Length_restrictionContext::line_restriction() {
  return getRuleContext<SwiftMtComponentFormatParser::Line_restrictionContext>(0);
}

SwiftMtComponentFormatParser::Max_restrictionContext* SwiftMtComponentFormatParser::Length_restrictionContext::max_restriction() {
  return getRuleContext<SwiftMtComponentFormatParser::Max_restrictionContext>(0);
}


size_t SwiftMtComponentFormatParser::Length_restrictionContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleLength_restriction;
}

void SwiftMtComponentFormatParser::Length_restrictionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLength_restriction(this);
}

void SwiftMtComponentFormatParser::Length_restrictionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLength_restriction(this);
}

SwiftMtComponentFormatParser::Length_restrictionContext* SwiftMtComponentFormatParser::length_restriction() {
  Length_restrictionContext *_localctx = _tracker.createInstance<Length_restrictionContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtComponentFormatParser::RuleLength_restriction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(96);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(92);
      exact_restriction();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(93);
      range_restriction();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(94);
      line_restriction();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(95);
      max_restriction();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Exact_restrictionContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Exact_restrictionContext::Exact_restrictionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtComponentFormatParser::Max_two_digitContext* SwiftMtComponentFormatParser::Exact_restrictionContext::max_two_digit() {
  return getRuleContext<SwiftMtComponentFormatParser::Max_two_digitContext>(0);
}


size_t SwiftMtComponentFormatParser::Exact_restrictionContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleExact_restriction;
}

void SwiftMtComponentFormatParser::Exact_restrictionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExact_restriction(this);
}

void SwiftMtComponentFormatParser::Exact_restrictionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExact_restriction(this);
}

SwiftMtComponentFormatParser::Exact_restrictionContext* SwiftMtComponentFormatParser::exact_restriction() {
  Exact_restrictionContext *_localctx = _tracker.createInstance<Exact_restrictionContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtComponentFormatParser::RuleExact_restriction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    max_two_digit();
    setState(99);
    match(SwiftMtComponentFormatParser::T__1);
   _ctx->stop = _input->LT(-1);

                                _current_component.set_fixed_length(true);
                                const auto length = to_unsigned_int(_input->getText(_localctx->start, _input->LT(-1)));
                                _current_component.set_min_length(length);
                                _current_component.set_max_length(length);
                           
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Range_restrictionContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Range_restrictionContext::Range_restrictionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtComponentFormatParser::Max_two_digitContext *> SwiftMtComponentFormatParser::Range_restrictionContext::max_two_digit() {
  return getRuleContexts<SwiftMtComponentFormatParser::Max_two_digitContext>();
}

SwiftMtComponentFormatParser::Max_two_digitContext* SwiftMtComponentFormatParser::Range_restrictionContext::max_two_digit(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::Max_two_digitContext>(i);
}


size_t SwiftMtComponentFormatParser::Range_restrictionContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleRange_restriction;
}

void SwiftMtComponentFormatParser::Range_restrictionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRange_restriction(this);
}

void SwiftMtComponentFormatParser::Range_restrictionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRange_restriction(this);
}

SwiftMtComponentFormatParser::Range_restrictionContext* SwiftMtComponentFormatParser::range_restriction() {
  Range_restrictionContext *_localctx = _tracker.createInstance<Range_restrictionContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtComponentFormatParser::RuleRange_restriction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    dynamic_cast<Range_restrictionContext *>(_localctx)->range_min = max_two_digit();
     _current_component.set_min_length(to_unsigned_int((dynamic_cast<Range_restrictionContext *>(_localctx)->range_min != nullptr ? _input->getText(dynamic_cast<Range_restrictionContext *>(_localctx)->range_min->start, dynamic_cast<Range_restrictionContext *>(_localctx)->range_min->stop) : nullptr))); 
    setState(103);
    match(SwiftMtComponentFormatParser::T__2);
    setState(104);
    dynamic_cast<Range_restrictionContext *>(_localctx)->range_max = max_two_digit();
     _current_component.set_max_length(to_unsigned_int((dynamic_cast<Range_restrictionContext *>(_localctx)->range_max != nullptr ? _input->getText(dynamic_cast<Range_restrictionContext *>(_localctx)->range_max->start, dynamic_cast<Range_restrictionContext *>(_localctx)->range_max->stop) : nullptr))); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Line_restrictionContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Line_restrictionContext::Line_restrictionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtComponentFormatParser::Max_two_digitContext *> SwiftMtComponentFormatParser::Line_restrictionContext::max_two_digit() {
  return getRuleContexts<SwiftMtComponentFormatParser::Max_two_digitContext>();
}

SwiftMtComponentFormatParser::Max_two_digitContext* SwiftMtComponentFormatParser::Line_restrictionContext::max_two_digit(size_t i) {
  return getRuleContext<SwiftMtComponentFormatParser::Max_two_digitContext>(i);
}


size_t SwiftMtComponentFormatParser::Line_restrictionContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleLine_restriction;
}

void SwiftMtComponentFormatParser::Line_restrictionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLine_restriction(this);
}

void SwiftMtComponentFormatParser::Line_restrictionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLine_restriction(this);
}

SwiftMtComponentFormatParser::Line_restrictionContext* SwiftMtComponentFormatParser::line_restriction() {
  Line_restrictionContext *_localctx = _tracker.createInstance<Line_restrictionContext>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtComponentFormatParser::RuleLine_restriction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(107);
    dynamic_cast<Line_restrictionContext *>(_localctx)->num_lines = max_two_digit();
     _current_component.set_line_count(to_unsigned_int((dynamic_cast<Line_restrictionContext *>(_localctx)->num_lines != nullptr ? _input->getText(dynamic_cast<Line_restrictionContext *>(_localctx)->num_lines->start, dynamic_cast<Line_restrictionContext *>(_localctx)->num_lines->stop) : nullptr))); 
    setState(109);
    match(SwiftMtComponentFormatParser::T__3);
    setState(110);
    dynamic_cast<Line_restrictionContext *>(_localctx)->line_size = max_two_digit();
     _current_component.set_max_length(to_unsigned_int((dynamic_cast<Line_restrictionContext *>(_localctx)->line_size != nullptr ? _input->getText(dynamic_cast<Line_restrictionContext *>(_localctx)->line_size->start, dynamic_cast<Line_restrictionContext *>(_localctx)->line_size->stop) : nullptr))); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Max_restrictionContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Max_restrictionContext::Max_restrictionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtComponentFormatParser::Max_two_digitContext* SwiftMtComponentFormatParser::Max_restrictionContext::max_two_digit() {
  return getRuleContext<SwiftMtComponentFormatParser::Max_two_digitContext>(0);
}


size_t SwiftMtComponentFormatParser::Max_restrictionContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleMax_restriction;
}

void SwiftMtComponentFormatParser::Max_restrictionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMax_restriction(this);
}

void SwiftMtComponentFormatParser::Max_restrictionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMax_restriction(this);
}

SwiftMtComponentFormatParser::Max_restrictionContext* SwiftMtComponentFormatParser::max_restriction() {
  Max_restrictionContext *_localctx = _tracker.createInstance<Max_restrictionContext>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtComponentFormatParser::RuleMax_restriction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    max_two_digit();
   _ctx->stop = _input->LT(-1);

                               _current_component.set_min_length(0);
                               _current_component.set_max_length(to_unsigned_int(_input->getText(_localctx->start, _input->LT(-1))));
                           
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Max_two_digitContext ------------------------------------------------------------------

SwiftMtComponentFormatParser::Max_two_digitContext::Max_two_digitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtComponentFormatParser::Max_two_digitContext::DIGIT() {
  return getTokens(SwiftMtComponentFormatParser::DIGIT);
}

tree::TerminalNode* SwiftMtComponentFormatParser::Max_two_digitContext::DIGIT(size_t i) {
  return getToken(SwiftMtComponentFormatParser::DIGIT, i);
}


size_t SwiftMtComponentFormatParser::Max_two_digitContext::getRuleIndex() const {
  return SwiftMtComponentFormatParser::RuleMax_two_digit;
}

void SwiftMtComponentFormatParser::Max_two_digitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMax_two_digit(this);
}

void SwiftMtComponentFormatParser::Max_two_digitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtComponentFormatListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMax_two_digit(this);
}

SwiftMtComponentFormatParser::Max_two_digitContext* SwiftMtComponentFormatParser::max_two_digit() {
  Max_two_digitContext *_localctx = _tracker.createInstance<Max_two_digitContext>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtComponentFormatParser::RuleMax_two_digit);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(SwiftMtComponentFormatParser::DIGIT);
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtComponentFormatParser::DIGIT) {
      setState(116);
      match(SwiftMtComponentFormatParser::DIGIT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtComponentFormatParser::_decisionToDFA;
atn::PredictionContextCache SwiftMtComponentFormatParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtComponentFormatParser::_atn;
std::vector<uint16_t> SwiftMtComponentFormatParser::_serializedATN;

std::vector<std::string> SwiftMtComponentFormatParser::_ruleNames = {
  "field_format", "comp_format", "optional_component", "opt_comp_cttnt", 
  "component", "separator", "length_restricted", "sign", "constant", "charset_type", 
  "length_restriction", "exact_restriction", "range_restriction", "line_restriction", 
  "max_restriction", "max_two_digit"
};

std::vector<std::string> SwiftMtComponentFormatParser::_literalNames = {
  "", "'N'", "'!'", "'-'", "'*'", "", "'n'", "'a'", "'c'", "'h'", "'x'", 
  "'y'", "'z'", "'d'", "'e'", "", "", "'['", "']'"
};

std::vector<std::string> SwiftMtComponentFormatParser::_symbolicNames = {
  "", "", "", "", "", "IDENTIFIER", "CHARSET_NUMERIC", "CHARSET_ALPHA", 
  "CHARSET_ALPHA_NUMERIC", "CHARSET_HEX", "CHARSET_X", "CHARSET_Y", "CHARSET_Z", 
  "CHARSET_DECIMALS", "CHARSET_BLANK", "DIGIT", "UPPERCASE_CHAR", "LBRACKET", 
  "RBRACKET", "ANY"
};

dfa::Vocabulary SwiftMtComponentFormatParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtComponentFormatParser::_tokenNames;

SwiftMtComponentFormatParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x15, 0x7a, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x3, 0x2, 
    0x3, 0x2, 0x5, 0x2, 0x25, 0xa, 0x2, 0x6, 0x2, 0x27, 0xa, 0x2, 0xd, 0x2, 
    0xe, 0x2, 0x28, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2f, 
    0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x5, 0x5, 0x37, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x6, 0x5, 0x3e, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x3f, 0x3, 0x5, 0x5, 
    0x5, 0x43, 0xa, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x5, 0x6, 0x48, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4c, 0xa, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x4f, 0xa, 0x6, 0x3, 0x7, 0x6, 0x7, 0x52, 0xa, 0x7, 0xd, 0x7, 0xe, 0x7, 
    0x53, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x5, 
    0xc, 0x63, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x5, 0x11, 0x78, 0xa, 0x11, 0x3, 0x11, 0x2, 0x2, 0x12, 0x2, 0x4, 
    0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x2, 0x3, 0x3, 0x2, 0x8, 0x10, 0x2, 0x7a, 0x2, 0x26, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x36, 0x3, 0x2, 0x2, 0x2, 0xa, 0x47, 0x3, 0x2, 0x2, 0x2, 0xc, 0x51, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x55, 0x3, 0x2, 0x2, 0x2, 0x10, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x14, 0x5c, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x62, 0x3, 0x2, 0x2, 0x2, 0x18, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x6d, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x73, 0x3, 0x2, 0x2, 0x2, 0x20, 0x75, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x24, 0x5, 0x4, 0x3, 0x2, 0x23, 0x25, 0x5, 0xc, 0x7, 0x2, 0x24, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x3, 0x2, 0x2, 0x2, 0x25, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0x22, 0x3, 0x2, 0x2, 0x2, 0x27, 0x28, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x2, 0x2, 0x3, 
    0x2b, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2f, 0x5, 0xa, 0x6, 0x2, 0x2d, 
    0x2f, 0x5, 0x6, 0x4, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2d, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 
    0x13, 0x2, 0x2, 0x31, 0x32, 0x5, 0x8, 0x5, 0x2, 0x32, 0x33, 0x8, 0x4, 
    0x1, 0x2, 0x33, 0x34, 0x7, 0x14, 0x2, 0x2, 0x34, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x37, 0x5, 0xc, 0x7, 0x2, 0x36, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 
    0x3d, 0x8, 0x5, 0x1, 0x2, 0x39, 0x3e, 0x5, 0xe, 0x8, 0x2, 0x3a, 0x3e, 
    0x5, 0x10, 0x9, 0x2, 0x3b, 0x3e, 0x5, 0x12, 0xa, 0x2, 0x3c, 0x3e, 0x5, 
    0x4, 0x3, 0x2, 0x3d, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x43, 0x5, 0xc, 0x7, 0x2, 0x42, 0x41, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x8, 
    0x5, 0x1, 0x2, 0x45, 0x9, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x5, 0xc, 
    0x7, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4c, 0x5, 0xe, 0x8, 0x2, 
    0x4a, 0x4c, 0x5, 0x12, 0xa, 0x2, 0x4b, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 
    0x5, 0xc, 0x7, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0xb, 0x3, 0x2, 0x2, 0x2, 0x50, 0x52, 0x7, 0x15, 
    0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0xd, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x5, 0x16, 0xc, 0x2, 0x56, 
    0x57, 0x5, 0x14, 0xb, 0x2, 0x57, 0xf, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 
    0x7, 0x3, 0x2, 0x2, 0x59, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5b, 0x7, 
    0x7, 0x2, 0x2, 0x5b, 0x13, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x9, 0x2, 
    0x2, 0x2, 0x5d, 0x15, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x63, 0x5, 0x18, 0xd, 
    0x2, 0x5f, 0x63, 0x5, 0x1a, 0xe, 0x2, 0x60, 0x63, 0x5, 0x1c, 0xf, 0x2, 
    0x61, 0x63, 0x5, 0x1e, 0x10, 0x2, 0x62, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x5f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x61, 
    0x3, 0x2, 0x2, 0x2, 0x63, 0x17, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 
    0x20, 0x11, 0x2, 0x65, 0x66, 0x7, 0x4, 0x2, 0x2, 0x66, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x68, 0x5, 0x20, 0x11, 0x2, 0x68, 0x69, 0x8, 0xe, 0x1, 
    0x2, 0x69, 0x6a, 0x7, 0x5, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x20, 0x11, 0x2, 
    0x6b, 0x6c, 0x8, 0xe, 0x1, 0x2, 0x6c, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x6e, 0x5, 0x20, 0x11, 0x2, 0x6e, 0x6f, 0x8, 0xf, 0x1, 0x2, 0x6f, 0x70, 
    0x7, 0x6, 0x2, 0x2, 0x70, 0x71, 0x5, 0x20, 0x11, 0x2, 0x71, 0x72, 0x8, 
    0xf, 0x1, 0x2, 0x72, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x5, 0x20, 
    0x11, 0x2, 0x74, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x75, 0x77, 0x7, 0x11, 0x2, 
    0x2, 0x76, 0x78, 0x7, 0x11, 0x2, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 
    0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf, 
    0x24, 0x28, 0x2e, 0x36, 0x3d, 0x3f, 0x42, 0x47, 0x4b, 0x4e, 0x53, 0x62, 
    0x77, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtComponentFormatParser::Initializer SwiftMtComponentFormatParser::_init;
