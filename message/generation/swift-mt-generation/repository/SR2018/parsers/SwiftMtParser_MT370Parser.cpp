
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT370Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT370.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT370Listener.h"

#include "SwiftMtParser_MT370Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
using namespace antlr4;

SwiftMtParser_MT370Parser::SwiftMtParser_MT370Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT370Parser::~SwiftMtParser_MT370Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT370Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT370.g4";
}

const std::vector<std::string>& SwiftMtParser_MT370Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT370Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::BhContext* SwiftMtParser_MT370Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT370Parser::BhContext>(0);
}

SwiftMtParser_MT370Parser::AhContext* SwiftMtParser_MT370Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT370Parser::AhContext>(0);
}

SwiftMtParser_MT370Parser::MtContext* SwiftMtParser_MT370Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT370Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT370Parser::EOF, 0);
}

SwiftMtParser_MT370Parser::UhContext* SwiftMtParser_MT370Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT370Parser::UhContext>(0);
}

SwiftMtParser_MT370Parser::TrContext* SwiftMtParser_MT370Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT370Parser::TrContext>(0);
}


size_t SwiftMtParser_MT370Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleMessage;
}

void SwiftMtParser_MT370Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT370Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT370Parser::MessageContext* SwiftMtParser_MT370Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT370Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    bh();
    setState(143);
    ah();
    setState(145);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT370Parser::TAG_UH) {
      setState(144);
      uh();
    }
    setState(147);
    mt();
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT370Parser::TAG_TR) {
      setState(148);
      tr();
    }
    setState(151);
    match(SwiftMtParser_MT370Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT370Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT370Parser::TAG_BH, 0);
}

SwiftMtParser_MT370Parser::Bh_contentContext* SwiftMtParser_MT370Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT370Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT370Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleBh;
}

void SwiftMtParser_MT370Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT370Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT370Parser::BhContext* SwiftMtParser_MT370Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT370Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(SwiftMtParser_MT370Parser::TAG_BH);
    setState(154);
    bh_content();
    setState(155);
    match(SwiftMtParser_MT370Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT370Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, i);
}


size_t SwiftMtParser_MT370Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleBh_content;
}

void SwiftMtParser_MT370Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT370Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT370Parser::Bh_contentContext* SwiftMtParser_MT370Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT370Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(157);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(160); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT370Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT370Parser::TAG_AH, 0);
}

SwiftMtParser_MT370Parser::Ah_contentContext* SwiftMtParser_MT370Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT370Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT370Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleAh;
}

void SwiftMtParser_MT370Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT370Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT370Parser::AhContext* SwiftMtParser_MT370Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT370Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(SwiftMtParser_MT370Parser::TAG_AH);
    setState(163);
    ah_content();
    setState(164);
    match(SwiftMtParser_MT370Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT370Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, i);
}


size_t SwiftMtParser_MT370Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleAh_content;
}

void SwiftMtParser_MT370Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT370Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT370Parser::Ah_contentContext* SwiftMtParser_MT370Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT370Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(166);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(169); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT370Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT370Parser::TAG_UH, 0);
}

SwiftMtParser_MT370Parser::Sys_blockContext* SwiftMtParser_MT370Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT370Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT370Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleUh;
}

void SwiftMtParser_MT370Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT370Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT370Parser::UhContext* SwiftMtParser_MT370Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT370Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    match(SwiftMtParser_MT370Parser::TAG_UH);
    setState(172);
    sys_block();
    setState(173);
    match(SwiftMtParser_MT370Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT370Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT370Parser::TAG_TR, 0);
}

SwiftMtParser_MT370Parser::Sys_blockContext* SwiftMtParser_MT370Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT370Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT370Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleTr;
}

void SwiftMtParser_MT370Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT370Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT370Parser::TrContext* SwiftMtParser_MT370Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT370Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(SwiftMtParser_MT370Parser::TAG_TR);
    setState(176);
    sys_block();
    setState(177);
    match(SwiftMtParser_MT370Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT370Parser::Sys_elementContext *> SwiftMtParser_MT370Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT370Parser::Sys_elementContext>();
}

SwiftMtParser_MT370Parser::Sys_elementContext* SwiftMtParser_MT370Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT370Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT370Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSys_block;
}

void SwiftMtParser_MT370Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT370Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT370Parser::Sys_blockContext* SwiftMtParser_MT370Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT370Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(180); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(179);
      sys_element();
      setState(182); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT370Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT370Parser::LBRACE, 0);
}

SwiftMtParser_MT370Parser::Sys_element_keyContext* SwiftMtParser_MT370Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT370Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT370Parser::COLON, 0);
}

SwiftMtParser_MT370Parser::Sys_element_contentContext* SwiftMtParser_MT370Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT370Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT370Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSys_element;
}

void SwiftMtParser_MT370Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT370Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT370Parser::Sys_elementContext* SwiftMtParser_MT370Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT370Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    match(SwiftMtParser_MT370Parser::LBRACE);
    setState(185);
    sys_element_key();
    setState(186);
    match(SwiftMtParser_MT370Parser::COLON);
    setState(187);
    sys_element_content();
    setState(188);
    match(SwiftMtParser_MT370Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT370Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT370Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, i);
}


size_t SwiftMtParser_MT370Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSys_element_key;
}

void SwiftMtParser_MT370Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT370Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT370Parser::Sys_element_keyContext* SwiftMtParser_MT370Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT370Parser::RuleSys_element_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(190);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::RBRACE

      || _la == SwiftMtParser_MT370Parser::COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(193); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT370Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::RBRACE, i);
}


size_t SwiftMtParser_MT370Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSys_element_content;
}

void SwiftMtParser_MT370Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT370Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT370Parser::Sys_element_contentContext* SwiftMtParser_MT370Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT370Parser::RuleSys_element_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(196); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(195);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(198); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT370Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT370Parser::TAG_MT, 0);
}

SwiftMtParser_MT370Parser::Seq_AContext* SwiftMtParser_MT370Parser::MtContext::seq_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Seq_AContext>(0);
}

SwiftMtParser_MT370Parser::Seq_BContext* SwiftMtParser_MT370Parser::MtContext::seq_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Seq_BContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT370Parser::MT_END, 0);
}


size_t SwiftMtParser_MT370Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleMt;
}

void SwiftMtParser_MT370Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT370Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT370Parser::MtContext* SwiftMtParser_MT370Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT370Parser::RuleMt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200);
    match(SwiftMtParser_MT370Parser::TAG_MT);
    setState(201);
    seq_A();
    setState(202);
    seq_B();
    setState(203);
    match(SwiftMtParser_MT370Parser::MT_END);
   _ctx->stop = _input->LT(-1);
     _message_builder.mutable_msg_text()->MergeFrom(_localctx->elem); 
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Seq_AContext::Seq_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_16R_AContext* SwiftMtParser_MT370Parser::Seq_AContext::fld_16R_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16R_AContext>(0);
}

SwiftMtParser_MT370Parser::Fld_20C_AContext* SwiftMtParser_MT370Parser::Seq_AContext::fld_20C_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_20C_AContext>(0);
}

SwiftMtParser_MT370Parser::Fld_23G_AContext* SwiftMtParser_MT370Parser::Seq_AContext::fld_23G_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_23G_AContext>(0);
}

std::vector<SwiftMtParser_MT370Parser::Fld_95P_AContext *> SwiftMtParser_MT370Parser::Seq_AContext::fld_95P_A() {
  return getRuleContexts<SwiftMtParser_MT370Parser::Fld_95P_AContext>();
}

SwiftMtParser_MT370Parser::Fld_95P_AContext* SwiftMtParser_MT370Parser::Seq_AContext::fld_95P_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95P_AContext>(i);
}

SwiftMtParser_MT370Parser::Fld_16S_AContext* SwiftMtParser_MT370Parser::Seq_AContext::fld_16S_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16S_AContext>(0);
}

SwiftMtParser_MT370Parser::Fld_98a_AContext* SwiftMtParser_MT370Parser::Seq_AContext::fld_98a_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98a_AContext>(0);
}

std::vector<SwiftMtParser_MT370Parser::Seq_A1Context *> SwiftMtParser_MT370Parser::Seq_AContext::seq_A1() {
  return getRuleContexts<SwiftMtParser_MT370Parser::Seq_A1Context>();
}

SwiftMtParser_MT370Parser::Seq_A1Context* SwiftMtParser_MT370Parser::Seq_AContext::seq_A1(size_t i) {
  return getRuleContext<SwiftMtParser_MT370Parser::Seq_A1Context>(i);
}

SwiftMtParser_MT370Parser::Seq_A2Context* SwiftMtParser_MT370Parser::Seq_AContext::seq_A2() {
  return getRuleContext<SwiftMtParser_MT370Parser::Seq_A2Context>(0);
}


size_t SwiftMtParser_MT370Parser::Seq_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSeq_A;
}

void SwiftMtParser_MT370Parser::Seq_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A(this);
}

void SwiftMtParser_MT370Parser::Seq_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A(this);
}

SwiftMtParser_MT370Parser::Seq_AContext* SwiftMtParser_MT370Parser::seq_A() {
  Seq_AContext *_localctx = _tracker.createInstance<Seq_AContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtParser_MT370Parser::RuleSeq_A);
   _localctx->elem.set_tag("A"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(205);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext = fld_16R_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext->fld); 
    setState(207);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext = fld_20C_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext->fld); 
    setState(209);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext = fld_23G_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext->fld); 
    setState(212);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(211);
      dynamic_cast<Seq_AContext *>(_localctx)->fld_98a_AContext = fld_98a_A();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_98a_AContext->fld); 
    setState(218);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(215);
        dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context = seq_A1(); 
      }
      setState(220);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context->elem); 
    setState(222);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_95P_AContext = fld_95P_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_95P_AContext->fld); 
    setState(225);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(224);
      dynamic_cast<Seq_AContext *>(_localctx)->seq_A2Context = seq_A2();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->seq_A2Context->elem); 
    setState(228);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_95P_AContext = fld_95P_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_95P_AContext->fld); 
    setState(230);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_16S_AContext = fld_16S_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_16S_AContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_A1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Seq_A1Context::Seq_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_16R_A1Context* SwiftMtParser_MT370Parser::Seq_A1Context::fld_16R_A1() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16R_A1Context>(0);
}

SwiftMtParser_MT370Parser::Fld_20C_A1Context* SwiftMtParser_MT370Parser::Seq_A1Context::fld_20C_A1() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_20C_A1Context>(0);
}

SwiftMtParser_MT370Parser::Fld_16S_A1Context* SwiftMtParser_MT370Parser::Seq_A1Context::fld_16S_A1() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16S_A1Context>(0);
}


size_t SwiftMtParser_MT370Parser::Seq_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSeq_A1;
}

void SwiftMtParser_MT370Parser::Seq_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A1(this);
}

void SwiftMtParser_MT370Parser::Seq_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A1(this);
}

SwiftMtParser_MT370Parser::Seq_A1Context* SwiftMtParser_MT370Parser::seq_A1() {
  Seq_A1Context *_localctx = _tracker.createInstance<Seq_A1Context>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtParser_MT370Parser::RuleSeq_A1);
   _localctx->elem.set_tag("A1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(233);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context = fld_16R_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context->fld); 
    setState(235);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context = fld_20C_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context->fld); 
    setState(237);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_16S_A1Context = fld_16S_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_16S_A1Context->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_A2Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Seq_A2Context::Seq_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_16R_A2Context* SwiftMtParser_MT370Parser::Seq_A2Context::fld_16R_A2() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16R_A2Context>(0);
}

SwiftMtParser_MT370Parser::Fld_95a_A2Context* SwiftMtParser_MT370Parser::Seq_A2Context::fld_95a_A2() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_A2Context>(0);
}

SwiftMtParser_MT370Parser::Fld_16S_A2Context* SwiftMtParser_MT370Parser::Seq_A2Context::fld_16S_A2() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16S_A2Context>(0);
}

SwiftMtParser_MT370Parser::Fld_97A_A2Context* SwiftMtParser_MT370Parser::Seq_A2Context::fld_97A_A2() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_97A_A2Context>(0);
}


size_t SwiftMtParser_MT370Parser::Seq_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSeq_A2;
}

void SwiftMtParser_MT370Parser::Seq_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A2(this);
}

void SwiftMtParser_MT370Parser::Seq_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A2(this);
}

SwiftMtParser_MT370Parser::Seq_A2Context* SwiftMtParser_MT370Parser::seq_A2() {
  Seq_A2Context *_localctx = _tracker.createInstance<Seq_A2Context>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtParser_MT370Parser::RuleSeq_A2);
   _localctx->elem.set_tag("A2"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    dynamic_cast<Seq_A2Context *>(_localctx)->fld_16R_A2Context = fld_16R_A2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A2Context *>(_localctx)->fld_16R_A2Context->fld); 
    setState(242);
    dynamic_cast<Seq_A2Context *>(_localctx)->fld_95a_A2Context = fld_95a_A2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A2Context *>(_localctx)->fld_95a_A2Context->fld); 
    setState(245);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(244);
      dynamic_cast<Seq_A2Context *>(_localctx)->fld_97A_A2Context = fld_97A_A2();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A2Context *>(_localctx)->fld_97A_A2Context->fld); 
    setState(248);
    dynamic_cast<Seq_A2Context *>(_localctx)->fld_16S_A2Context = fld_16S_A2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A2Context *>(_localctx)->fld_16S_A2Context->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Seq_BContext::Seq_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_16R_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_16R_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16R_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_20C_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_20C_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_20C_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_19A_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_19A_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_19A_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_22H_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_22H_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_22H_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_98A_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_98A_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98A_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_16S_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_16S_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16S_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_98a_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_98a_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98a_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_97A_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_97A_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_97A_BContext>(0);
}

SwiftMtParser_MT370Parser::Fld_99a_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_99a_B() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_99a_BContext>(0);
}

std::vector<SwiftMtParser_MT370Parser::Fld_22F_BContext *> SwiftMtParser_MT370Parser::Seq_BContext::fld_22F_B() {
  return getRuleContexts<SwiftMtParser_MT370Parser::Fld_22F_BContext>();
}

SwiftMtParser_MT370Parser::Fld_22F_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_22F_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_22F_BContext>(i);
}

std::vector<SwiftMtParser_MT370Parser::Fld_70E_BContext *> SwiftMtParser_MT370Parser::Seq_BContext::fld_70E_B() {
  return getRuleContexts<SwiftMtParser_MT370Parser::Fld_70E_BContext>();
}

SwiftMtParser_MT370Parser::Fld_70E_BContext* SwiftMtParser_MT370Parser::Seq_BContext::fld_70E_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_70E_BContext>(i);
}

std::vector<SwiftMtParser_MT370Parser::Seq_B1Context *> SwiftMtParser_MT370Parser::Seq_BContext::seq_B1() {
  return getRuleContexts<SwiftMtParser_MT370Parser::Seq_B1Context>();
}

SwiftMtParser_MT370Parser::Seq_B1Context* SwiftMtParser_MT370Parser::Seq_BContext::seq_B1(size_t i) {
  return getRuleContext<SwiftMtParser_MT370Parser::Seq_B1Context>(i);
}


size_t SwiftMtParser_MT370Parser::Seq_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSeq_B;
}

void SwiftMtParser_MT370Parser::Seq_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B(this);
}

void SwiftMtParser_MT370Parser::Seq_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B(this);
}

SwiftMtParser_MT370Parser::Seq_BContext* SwiftMtParser_MT370Parser::seq_B() {
  Seq_BContext *_localctx = _tracker.createInstance<Seq_BContext>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtParser_MT370Parser::RuleSeq_B);
   _localctx->elem.set_tag("B"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(251);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext = fld_16R_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext->fld); 
    setState(253);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_20C_BContext = fld_20C_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_20C_BContext->fld); 
    setState(256);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(255);
      dynamic_cast<Seq_BContext *>(_localctx)->fld_98a_BContext = fld_98a_B();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_98a_BContext->fld); 
    setState(260);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(259);
      dynamic_cast<Seq_BContext *>(_localctx)->fld_97A_BContext = fld_97A_B();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_97A_BContext->fld); 
    setState(263);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_19A_BContext = fld_19A_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_19A_BContext->fld); 
    setState(265);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_22H_BContext = fld_22H_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_22H_BContext->fld); 
    setState(267);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_98A_BContext = fld_98A_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_98A_BContext->fld); 
    setState(270);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(269);
      dynamic_cast<Seq_BContext *>(_localctx)->fld_99a_BContext = fld_99a_B();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_99a_BContext->fld); 
    setState(276);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(273);
        dynamic_cast<Seq_BContext *>(_localctx)->fld_22F_BContext = fld_22F_B(); 
      }
      setState(278);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_22F_BContext->fld); 
    setState(283);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(280);
        dynamic_cast<Seq_BContext *>(_localctx)->fld_70E_BContext = fld_70E_B(); 
      }
      setState(285);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_70E_BContext->fld); 
    setState(290);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(287);
        dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context = seq_B1(); 
      }
      setState(292);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context->elem); 
    setState(294);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_16S_BContext = fld_16S_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_16S_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_B1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Seq_B1Context::Seq_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_16R_B1Context* SwiftMtParser_MT370Parser::Seq_B1Context::fld_16R_B1() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16R_B1Context>(0);
}

SwiftMtParser_MT370Parser::Fld_95a_B1Context* SwiftMtParser_MT370Parser::Seq_B1Context::fld_95a_B1() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_B1Context>(0);
}

SwiftMtParser_MT370Parser::Fld_16S_B1Context* SwiftMtParser_MT370Parser::Seq_B1Context::fld_16S_B1() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_16S_B1Context>(0);
}

SwiftMtParser_MT370Parser::Fld_97A_B1Context* SwiftMtParser_MT370Parser::Seq_B1Context::fld_97A_B1() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_97A_B1Context>(0);
}


size_t SwiftMtParser_MT370Parser::Seq_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleSeq_B1;
}

void SwiftMtParser_MT370Parser::Seq_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B1(this);
}

void SwiftMtParser_MT370Parser::Seq_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B1(this);
}

SwiftMtParser_MT370Parser::Seq_B1Context* SwiftMtParser_MT370Parser::seq_B1() {
  Seq_B1Context *_localctx = _tracker.createInstance<Seq_B1Context>(_ctx, getState());
  enterRule(_localctx, 32, SwiftMtParser_MT370Parser::RuleSeq_B1);
   _localctx->elem.set_tag("B1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(297);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context = fld_16R_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context->fld); 
    setState(299);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_95a_B1Context = fld_95a_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_95a_B1Context->fld); 
    setState(302);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(301);
      dynamic_cast<Seq_B1Context *>(_localctx)->fld_97A_B1Context = fld_97A_B1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_97A_B1Context->fld); 
    setState(305);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_16S_B1Context = fld_16S_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_16S_B1Context->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16R_AContext::Fld_16R_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16R_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16R_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16R_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16R_A;
}

void SwiftMtParser_MT370Parser::Fld_16R_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A(this);
}

void SwiftMtParser_MT370Parser::Fld_16R_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A(this);
}

SwiftMtParser_MT370Parser::Fld_16R_AContext* SwiftMtParser_MT370Parser::fld_16R_A() {
  Fld_16R_AContext *_localctx = _tracker.createInstance<Fld_16R_AContext>(_ctx, getState());
  enterRule(_localctx, 34, SwiftMtParser_MT370Parser::RuleFld_16R_A);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(309);
    match(SwiftMtParser_MT370Parser::T__0);
    setState(311); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(310);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(313); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_20C_AContext::Fld_20C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_20C_A_CContext* SwiftMtParser_MT370Parser::Fld_20C_AContext::fld_20C_A_C() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_20C_A_CContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_20C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_20C_A;
}

void SwiftMtParser_MT370Parser::Fld_20C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A(this);
}

void SwiftMtParser_MT370Parser::Fld_20C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A(this);
}

SwiftMtParser_MT370Parser::Fld_20C_AContext* SwiftMtParser_MT370Parser::fld_20C_A() {
  Fld_20C_AContext *_localctx = _tracker.createInstance<Fld_20C_AContext>(_ctx, getState());
  enterRule(_localctx, 36, SwiftMtParser_MT370Parser::RuleFld_20C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
    dynamic_cast<Fld_20C_AContext *>(_localctx)->fld_20C_A_CContext = fld_20C_A_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_20C_AContext *>(_localctx)->fld_20C_A_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_23G_AContext::Fld_23G_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_23G_A_GContext* SwiftMtParser_MT370Parser::Fld_23G_AContext::fld_23G_A_G() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_23G_A_GContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_23G_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_23G_A;
}

void SwiftMtParser_MT370Parser::Fld_23G_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A(this);
}

void SwiftMtParser_MT370Parser::Fld_23G_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A(this);
}

SwiftMtParser_MT370Parser::Fld_23G_AContext* SwiftMtParser_MT370Parser::fld_23G_A() {
  Fld_23G_AContext *_localctx = _tracker.createInstance<Fld_23G_AContext>(_ctx, getState());
  enterRule(_localctx, 38, SwiftMtParser_MT370Parser::RuleFld_23G_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    dynamic_cast<Fld_23G_AContext *>(_localctx)->fld_23G_A_GContext = fld_23G_A_G();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_23G_AContext *>(_localctx)->fld_23G_A_GContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98a_AContext::Fld_98a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_98a_A_AContext* SwiftMtParser_MT370Parser::Fld_98a_AContext::fld_98a_A_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98a_A_AContext>(0);
}

SwiftMtParser_MT370Parser::Fld_98a_A_CContext* SwiftMtParser_MT370Parser::Fld_98a_AContext::fld_98a_A_C() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98a_A_CContext>(0);
}

SwiftMtParser_MT370Parser::Fld_98a_A_EContext* SwiftMtParser_MT370Parser::Fld_98a_AContext::fld_98a_A_E() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98a_A_EContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_98a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98a_A;
}

void SwiftMtParser_MT370Parser::Fld_98a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A(this);
}

void SwiftMtParser_MT370Parser::Fld_98a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A(this);
}

SwiftMtParser_MT370Parser::Fld_98a_AContext* SwiftMtParser_MT370Parser::fld_98a_A() {
  Fld_98a_AContext *_localctx = _tracker.createInstance<Fld_98a_AContext>(_ctx, getState());
  enterRule(_localctx, 40, SwiftMtParser_MT370Parser::RuleFld_98a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(330);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(321);
      dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_AContext = fld_98a_A_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(324);
      dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_CContext = fld_98a_A_C();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_CContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(327);
      dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_EContext = fld_98a_A_E();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_EContext->fld); 
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

//----------------- Fld_16R_A1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16R_A1Context::Fld_16R_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16R_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16R_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16R_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16R_A1;
}

void SwiftMtParser_MT370Parser::Fld_16R_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A1(this);
}

void SwiftMtParser_MT370Parser::Fld_16R_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A1(this);
}

SwiftMtParser_MT370Parser::Fld_16R_A1Context* SwiftMtParser_MT370Parser::fld_16R_A1() {
  Fld_16R_A1Context *_localctx = _tracker.createInstance<Fld_16R_A1Context>(_ctx, getState());
  enterRule(_localctx, 42, SwiftMtParser_MT370Parser::RuleFld_16R_A1);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(332);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(333);
    match(SwiftMtParser_MT370Parser::T__0);
    setState(335); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(334);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(337); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_20C_A1Context::Fld_20C_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_20C_A1_CContext* SwiftMtParser_MT370Parser::Fld_20C_A1Context::fld_20C_A1_C() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_20C_A1_CContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_20C_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_20C_A1;
}

void SwiftMtParser_MT370Parser::Fld_20C_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1(this);
}

void SwiftMtParser_MT370Parser::Fld_20C_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1(this);
}

SwiftMtParser_MT370Parser::Fld_20C_A1Context* SwiftMtParser_MT370Parser::fld_20C_A1() {
  Fld_20C_A1Context *_localctx = _tracker.createInstance<Fld_20C_A1Context>(_ctx, getState());
  enterRule(_localctx, 44, SwiftMtParser_MT370Parser::RuleFld_20C_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    dynamic_cast<Fld_20C_A1Context *>(_localctx)->fld_20C_A1_CContext = fld_20C_A1_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_20C_A1Context *>(_localctx)->fld_20C_A1_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_A1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16S_A1Context::Fld_16S_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16S_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16S_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16S_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16S_A1;
}

void SwiftMtParser_MT370Parser::Fld_16S_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A1(this);
}

void SwiftMtParser_MT370Parser::Fld_16S_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A1(this);
}

SwiftMtParser_MT370Parser::Fld_16S_A1Context* SwiftMtParser_MT370Parser::fld_16S_A1() {
  Fld_16S_A1Context *_localctx = _tracker.createInstance<Fld_16S_A1Context>(_ctx, getState());
  enterRule(_localctx, 46, SwiftMtParser_MT370Parser::RuleFld_16S_A1);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(342);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(343);
    match(SwiftMtParser_MT370Parser::T__1);
    setState(345); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(344);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(347); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95P_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95P_AContext::Fld_95P_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_95P_A_PContext* SwiftMtParser_MT370Parser::Fld_95P_AContext::fld_95P_A_P() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95P_A_PContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_95P_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95P_A;
}

void SwiftMtParser_MT370Parser::Fld_95P_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95P_A(this);
}

void SwiftMtParser_MT370Parser::Fld_95P_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95P_A(this);
}

SwiftMtParser_MT370Parser::Fld_95P_AContext* SwiftMtParser_MT370Parser::fld_95P_A() {
  Fld_95P_AContext *_localctx = _tracker.createInstance<Fld_95P_AContext>(_ctx, getState());
  enterRule(_localctx, 48, SwiftMtParser_MT370Parser::RuleFld_95P_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    dynamic_cast<Fld_95P_AContext *>(_localctx)->fld_95P_A_PContext = fld_95P_A_P();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_95P_AContext *>(_localctx)->fld_95P_A_PContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A2Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16R_A2Context::Fld_16R_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16R_A2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16R_A2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16R_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16R_A2;
}

void SwiftMtParser_MT370Parser::Fld_16R_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A2(this);
}

void SwiftMtParser_MT370Parser::Fld_16R_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A2(this);
}

SwiftMtParser_MT370Parser::Fld_16R_A2Context* SwiftMtParser_MT370Parser::fld_16R_A2() {
  Fld_16R_A2Context *_localctx = _tracker.createInstance<Fld_16R_A2Context>(_ctx, getState());
  enterRule(_localctx, 50, SwiftMtParser_MT370Parser::RuleFld_16R_A2);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(352);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(353);
    match(SwiftMtParser_MT370Parser::T__0);
    setState(355); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(354);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(357); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A2Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_A2Context::Fld_95a_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_95a_A2_PContext* SwiftMtParser_MT370Parser::Fld_95a_A2Context::fld_95a_A2_P() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_A2_PContext>(0);
}

SwiftMtParser_MT370Parser::Fld_95a_A2_QContext* SwiftMtParser_MT370Parser::Fld_95a_A2Context::fld_95a_A2_Q() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_A2_QContext>(0);
}

SwiftMtParser_MT370Parser::Fld_95a_A2_RContext* SwiftMtParser_MT370Parser::Fld_95a_A2Context::fld_95a_A2_R() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_A2_RContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_A2;
}

void SwiftMtParser_MT370Parser::Fld_95a_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A2(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A2(this);
}

SwiftMtParser_MT370Parser::Fld_95a_A2Context* SwiftMtParser_MT370Parser::fld_95a_A2() {
  Fld_95a_A2Context *_localctx = _tracker.createInstance<Fld_95a_A2Context>(_ctx, getState());
  enterRule(_localctx, 52, SwiftMtParser_MT370Parser::RuleFld_95a_A2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(368);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(359);
      dynamic_cast<Fld_95a_A2Context *>(_localctx)->fld_95a_A2_PContext = fld_95a_A2_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_A2Context *>(_localctx)->fld_95a_A2_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(362);
      dynamic_cast<Fld_95a_A2Context *>(_localctx)->fld_95a_A2_QContext = fld_95a_A2_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_A2Context *>(_localctx)->fld_95a_A2_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(365);
      dynamic_cast<Fld_95a_A2Context *>(_localctx)->fld_95a_A2_RContext = fld_95a_A2_R();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_A2Context *>(_localctx)->fld_95a_A2_RContext->fld); 
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

//----------------- Fld_97A_A2Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_97A_A2Context::Fld_97A_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_97A_A2_AContext* SwiftMtParser_MT370Parser::Fld_97A_A2Context::fld_97A_A2_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_97A_A2_AContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_97A_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_97A_A2;
}

void SwiftMtParser_MT370Parser::Fld_97A_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_A2(this);
}

void SwiftMtParser_MT370Parser::Fld_97A_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_A2(this);
}

SwiftMtParser_MT370Parser::Fld_97A_A2Context* SwiftMtParser_MT370Parser::fld_97A_A2() {
  Fld_97A_A2Context *_localctx = _tracker.createInstance<Fld_97A_A2Context>(_ctx, getState());
  enterRule(_localctx, 54, SwiftMtParser_MT370Parser::RuleFld_97A_A2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(370);
    dynamic_cast<Fld_97A_A2Context *>(_localctx)->fld_97A_A2_AContext = fld_97A_A2_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_97A_A2Context *>(_localctx)->fld_97A_A2_AContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_A2Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16S_A2Context::Fld_16S_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16S_A2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16S_A2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16S_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16S_A2;
}

void SwiftMtParser_MT370Parser::Fld_16S_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A2(this);
}

void SwiftMtParser_MT370Parser::Fld_16S_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A2(this);
}

SwiftMtParser_MT370Parser::Fld_16S_A2Context* SwiftMtParser_MT370Parser::fld_16S_A2() {
  Fld_16S_A2Context *_localctx = _tracker.createInstance<Fld_16S_A2Context>(_ctx, getState());
  enterRule(_localctx, 56, SwiftMtParser_MT370Parser::RuleFld_16S_A2);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(373);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(374);
    match(SwiftMtParser_MT370Parser::T__1);
    setState(376); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(375);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(378); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16S_AContext::Fld_16S_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16S_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16S_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16S_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16S_A;
}

void SwiftMtParser_MT370Parser::Fld_16S_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A(this);
}

void SwiftMtParser_MT370Parser::Fld_16S_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A(this);
}

SwiftMtParser_MT370Parser::Fld_16S_AContext* SwiftMtParser_MT370Parser::fld_16S_A() {
  Fld_16S_AContext *_localctx = _tracker.createInstance<Fld_16S_AContext>(_ctx, getState());
  enterRule(_localctx, 58, SwiftMtParser_MT370Parser::RuleFld_16S_A);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(380);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(381);
    match(SwiftMtParser_MT370Parser::T__1);
    setState(383); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(382);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(385); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16R_BContext::Fld_16R_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16R_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16R_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16R_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16R_B;
}

void SwiftMtParser_MT370Parser::Fld_16R_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B(this);
}

void SwiftMtParser_MT370Parser::Fld_16R_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B(this);
}

SwiftMtParser_MT370Parser::Fld_16R_BContext* SwiftMtParser_MT370Parser::fld_16R_B() {
  Fld_16R_BContext *_localctx = _tracker.createInstance<Fld_16R_BContext>(_ctx, getState());
  enterRule(_localctx, 60, SwiftMtParser_MT370Parser::RuleFld_16R_B);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(387);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(388);
    match(SwiftMtParser_MT370Parser::T__0);
    setState(390); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(389);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(392); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_20C_BContext::Fld_20C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_20C_B_CContext* SwiftMtParser_MT370Parser::Fld_20C_BContext::fld_20C_B_C() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_20C_B_CContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_20C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_20C_B;
}

void SwiftMtParser_MT370Parser::Fld_20C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B(this);
}

void SwiftMtParser_MT370Parser::Fld_20C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B(this);
}

SwiftMtParser_MT370Parser::Fld_20C_BContext* SwiftMtParser_MT370Parser::fld_20C_B() {
  Fld_20C_BContext *_localctx = _tracker.createInstance<Fld_20C_BContext>(_ctx, getState());
  enterRule(_localctx, 62, SwiftMtParser_MT370Parser::RuleFld_20C_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    dynamic_cast<Fld_20C_BContext *>(_localctx)->fld_20C_B_CContext = fld_20C_B_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_20C_BContext *>(_localctx)->fld_20C_B_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98a_BContext::Fld_98a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_98a_B_AContext* SwiftMtParser_MT370Parser::Fld_98a_BContext::fld_98a_B_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98a_B_AContext>(0);
}

SwiftMtParser_MT370Parser::Fld_98a_B_CContext* SwiftMtParser_MT370Parser::Fld_98a_BContext::fld_98a_B_C() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98a_B_CContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_98a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98a_B;
}

void SwiftMtParser_MT370Parser::Fld_98a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B(this);
}

void SwiftMtParser_MT370Parser::Fld_98a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B(this);
}

SwiftMtParser_MT370Parser::Fld_98a_BContext* SwiftMtParser_MT370Parser::fld_98a_B() {
  Fld_98a_BContext *_localctx = _tracker.createInstance<Fld_98a_BContext>(_ctx, getState());
  enterRule(_localctx, 64, SwiftMtParser_MT370Parser::RuleFld_98a_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(403);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(397);
      dynamic_cast<Fld_98a_BContext *>(_localctx)->fld_98a_B_AContext = fld_98a_B_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_BContext *>(_localctx)->fld_98a_B_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(400);
      dynamic_cast<Fld_98a_BContext *>(_localctx)->fld_98a_B_CContext = fld_98a_B_C();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_BContext *>(_localctx)->fld_98a_B_CContext->fld); 
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

//----------------- Fld_97A_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_97A_BContext::Fld_97A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_97A_B_AContext* SwiftMtParser_MT370Parser::Fld_97A_BContext::fld_97A_B_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_97A_B_AContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_97A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_97A_B;
}

void SwiftMtParser_MT370Parser::Fld_97A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B(this);
}

void SwiftMtParser_MT370Parser::Fld_97A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B(this);
}

SwiftMtParser_MT370Parser::Fld_97A_BContext* SwiftMtParser_MT370Parser::fld_97A_B() {
  Fld_97A_BContext *_localctx = _tracker.createInstance<Fld_97A_BContext>(_ctx, getState());
  enterRule(_localctx, 66, SwiftMtParser_MT370Parser::RuleFld_97A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    dynamic_cast<Fld_97A_BContext *>(_localctx)->fld_97A_B_AContext = fld_97A_B_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_97A_BContext *>(_localctx)->fld_97A_B_AContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_19A_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_19A_BContext::Fld_19A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_19A_B_AContext* SwiftMtParser_MT370Parser::Fld_19A_BContext::fld_19A_B_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_19A_B_AContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_19A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_19A_B;
}

void SwiftMtParser_MT370Parser::Fld_19A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_19A_B(this);
}

void SwiftMtParser_MT370Parser::Fld_19A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_19A_B(this);
}

SwiftMtParser_MT370Parser::Fld_19A_BContext* SwiftMtParser_MT370Parser::fld_19A_B() {
  Fld_19A_BContext *_localctx = _tracker.createInstance<Fld_19A_BContext>(_ctx, getState());
  enterRule(_localctx, 68, SwiftMtParser_MT370Parser::RuleFld_19A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    dynamic_cast<Fld_19A_BContext *>(_localctx)->fld_19A_B_AContext = fld_19A_B_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_19A_BContext *>(_localctx)->fld_19A_B_AContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_22H_BContext::Fld_22H_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_22H_B_HContext* SwiftMtParser_MT370Parser::Fld_22H_BContext::fld_22H_B_H() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_22H_B_HContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_22H_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_22H_B;
}

void SwiftMtParser_MT370Parser::Fld_22H_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B(this);
}

void SwiftMtParser_MT370Parser::Fld_22H_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B(this);
}

SwiftMtParser_MT370Parser::Fld_22H_BContext* SwiftMtParser_MT370Parser::fld_22H_B() {
  Fld_22H_BContext *_localctx = _tracker.createInstance<Fld_22H_BContext>(_ctx, getState());
  enterRule(_localctx, 70, SwiftMtParser_MT370Parser::RuleFld_22H_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    dynamic_cast<Fld_22H_BContext *>(_localctx)->fld_22H_B_HContext = fld_22H_B_H();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_22H_BContext *>(_localctx)->fld_22H_B_HContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98A_BContext::Fld_98A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_98A_B_AContext* SwiftMtParser_MT370Parser::Fld_98A_BContext::fld_98A_B_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_98A_B_AContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_98A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98A_B;
}

void SwiftMtParser_MT370Parser::Fld_98A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B(this);
}

void SwiftMtParser_MT370Parser::Fld_98A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B(this);
}

SwiftMtParser_MT370Parser::Fld_98A_BContext* SwiftMtParser_MT370Parser::fld_98A_B() {
  Fld_98A_BContext *_localctx = _tracker.createInstance<Fld_98A_BContext>(_ctx, getState());
  enterRule(_localctx, 72, SwiftMtParser_MT370Parser::RuleFld_98A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    dynamic_cast<Fld_98A_BContext *>(_localctx)->fld_98A_B_AContext = fld_98A_B_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_98A_BContext *>(_localctx)->fld_98A_B_AContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_99a_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_99a_BContext::Fld_99a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_99a_B_AContext* SwiftMtParser_MT370Parser::Fld_99a_BContext::fld_99a_B_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_99a_B_AContext>(0);
}

SwiftMtParser_MT370Parser::Fld_99a_B_CContext* SwiftMtParser_MT370Parser::Fld_99a_BContext::fld_99a_B_C() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_99a_B_CContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_99a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_99a_B;
}

void SwiftMtParser_MT370Parser::Fld_99a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_99a_B(this);
}

void SwiftMtParser_MT370Parser::Fld_99a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_99a_B(this);
}

SwiftMtParser_MT370Parser::Fld_99a_BContext* SwiftMtParser_MT370Parser::fld_99a_B() {
  Fld_99a_BContext *_localctx = _tracker.createInstance<Fld_99a_BContext>(_ctx, getState());
  enterRule(_localctx, 74, SwiftMtParser_MT370Parser::RuleFld_99a_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(423);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(417);
      dynamic_cast<Fld_99a_BContext *>(_localctx)->fld_99a_B_AContext = fld_99a_B_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_99a_BContext *>(_localctx)->fld_99a_B_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(420);
      dynamic_cast<Fld_99a_BContext *>(_localctx)->fld_99a_B_CContext = fld_99a_B_C();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_99a_BContext *>(_localctx)->fld_99a_B_CContext->fld); 
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

//----------------- Fld_22F_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_22F_BContext::Fld_22F_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_22F_B_FContext* SwiftMtParser_MT370Parser::Fld_22F_BContext::fld_22F_B_F() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_22F_B_FContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_22F_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_22F_B;
}

void SwiftMtParser_MT370Parser::Fld_22F_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_B(this);
}

void SwiftMtParser_MT370Parser::Fld_22F_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_B(this);
}

SwiftMtParser_MT370Parser::Fld_22F_BContext* SwiftMtParser_MT370Parser::fld_22F_B() {
  Fld_22F_BContext *_localctx = _tracker.createInstance<Fld_22F_BContext>(_ctx, getState());
  enterRule(_localctx, 76, SwiftMtParser_MT370Parser::RuleFld_22F_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(425);
    dynamic_cast<Fld_22F_BContext *>(_localctx)->fld_22F_B_FContext = fld_22F_B_F();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_22F_BContext *>(_localctx)->fld_22F_B_FContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_70E_BContext::Fld_70E_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_70E_B_EContext* SwiftMtParser_MT370Parser::Fld_70E_BContext::fld_70E_B_E() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_70E_B_EContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_70E_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_70E_B;
}

void SwiftMtParser_MT370Parser::Fld_70E_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_B(this);
}

void SwiftMtParser_MT370Parser::Fld_70E_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_B(this);
}

SwiftMtParser_MT370Parser::Fld_70E_BContext* SwiftMtParser_MT370Parser::fld_70E_B() {
  Fld_70E_BContext *_localctx = _tracker.createInstance<Fld_70E_BContext>(_ctx, getState());
  enterRule(_localctx, 78, SwiftMtParser_MT370Parser::RuleFld_70E_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(428);
    dynamic_cast<Fld_70E_BContext *>(_localctx)->fld_70E_B_EContext = fld_70E_B_E();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_70E_BContext *>(_localctx)->fld_70E_B_EContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16R_B1Context::Fld_16R_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16R_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16R_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16R_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16R_B1;
}

void SwiftMtParser_MT370Parser::Fld_16R_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B1(this);
}

void SwiftMtParser_MT370Parser::Fld_16R_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B1(this);
}

SwiftMtParser_MT370Parser::Fld_16R_B1Context* SwiftMtParser_MT370Parser::fld_16R_B1() {
  Fld_16R_B1Context *_localctx = _tracker.createInstance<Fld_16R_B1Context>(_ctx, getState());
  enterRule(_localctx, 80, SwiftMtParser_MT370Parser::RuleFld_16R_B1);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(431);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(432);
    match(SwiftMtParser_MT370Parser::T__0);
    setState(434); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(433);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(436); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_B1Context::Fld_95a_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_95a_B1_PContext* SwiftMtParser_MT370Parser::Fld_95a_B1Context::fld_95a_B1_P() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_B1_PContext>(0);
}

SwiftMtParser_MT370Parser::Fld_95a_B1_QContext* SwiftMtParser_MT370Parser::Fld_95a_B1Context::fld_95a_B1_Q() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_B1_QContext>(0);
}

SwiftMtParser_MT370Parser::Fld_95a_B1_RContext* SwiftMtParser_MT370Parser::Fld_95a_B1Context::fld_95a_B1_R() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_95a_B1_RContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_B1;
}

void SwiftMtParser_MT370Parser::Fld_95a_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1(this);
}

SwiftMtParser_MT370Parser::Fld_95a_B1Context* SwiftMtParser_MT370Parser::fld_95a_B1() {
  Fld_95a_B1Context *_localctx = _tracker.createInstance<Fld_95a_B1Context>(_ctx, getState());
  enterRule(_localctx, 82, SwiftMtParser_MT370Parser::RuleFld_95a_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(447);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(438);
      dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_PContext = fld_95a_B1_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(441);
      dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_QContext = fld_95a_B1_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(444);
      dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_RContext = fld_95a_B1_R();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_RContext->fld); 
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

//----------------- Fld_97A_B1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_97A_B1Context::Fld_97A_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT370Parser::Fld_97A_B1_AContext* SwiftMtParser_MT370Parser::Fld_97A_B1Context::fld_97A_B1_A() {
  return getRuleContext<SwiftMtParser_MT370Parser::Fld_97A_B1_AContext>(0);
}


size_t SwiftMtParser_MT370Parser::Fld_97A_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_97A_B1;
}

void SwiftMtParser_MT370Parser::Fld_97A_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B1(this);
}

void SwiftMtParser_MT370Parser::Fld_97A_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B1(this);
}

SwiftMtParser_MT370Parser::Fld_97A_B1Context* SwiftMtParser_MT370Parser::fld_97A_B1() {
  Fld_97A_B1Context *_localctx = _tracker.createInstance<Fld_97A_B1Context>(_ctx, getState());
  enterRule(_localctx, 84, SwiftMtParser_MT370Parser::RuleFld_97A_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    dynamic_cast<Fld_97A_B1Context *>(_localctx)->fld_97A_B1_AContext = fld_97A_B1_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_97A_B1Context *>(_localctx)->fld_97A_B1_AContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_B1Context ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16S_B1Context::Fld_16S_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16S_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16S_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16S_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16S_B1;
}

void SwiftMtParser_MT370Parser::Fld_16S_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B1(this);
}

void SwiftMtParser_MT370Parser::Fld_16S_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B1(this);
}

SwiftMtParser_MT370Parser::Fld_16S_B1Context* SwiftMtParser_MT370Parser::fld_16S_B1() {
  Fld_16S_B1Context *_localctx = _tracker.createInstance<Fld_16S_B1Context>(_ctx, getState());
  enterRule(_localctx, 86, SwiftMtParser_MT370Parser::RuleFld_16S_B1);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(453);
    match(SwiftMtParser_MT370Parser::T__1);
    setState(455); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(454);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(457); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_BContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_16S_BContext::Fld_16S_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_16S_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_16S_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_16S_BContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_16S_B;
}

void SwiftMtParser_MT370Parser::Fld_16S_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B(this);
}

void SwiftMtParser_MT370Parser::Fld_16S_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B(this);
}

SwiftMtParser_MT370Parser::Fld_16S_BContext* SwiftMtParser_MT370Parser::fld_16S_B() {
  Fld_16S_BContext *_localctx = _tracker.createInstance<Fld_16S_BContext>(_ctx, getState());
  enterRule(_localctx, 88, SwiftMtParser_MT370Parser::RuleFld_16S_B);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(459);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(460);
    match(SwiftMtParser_MT370Parser::T__1);
    setState(462); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(461);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(464); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A_CContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_20C_A_CContext::Fld_20C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_20C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_20C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_20C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_20C_A_C;
}

void SwiftMtParser_MT370Parser::Fld_20C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A_C(this);
}

void SwiftMtParser_MT370Parser::Fld_20C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A_C(this);
}

SwiftMtParser_MT370Parser::Fld_20C_A_CContext* SwiftMtParser_MT370Parser::fld_20C_A_C() {
  Fld_20C_A_CContext *_localctx = _tracker.createInstance<Fld_20C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 90, SwiftMtParser_MT370Parser::RuleFld_20C_A_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(466);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(467);
    match(SwiftMtParser_MT370Parser::T__2);
    setState(469); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(468);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(471); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_A_GContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_23G_A_GContext::Fld_23G_A_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_23G_A_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_23G_A_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_23G_A_GContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_23G_A_G;
}

void SwiftMtParser_MT370Parser::Fld_23G_A_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A_G(this);
}

void SwiftMtParser_MT370Parser::Fld_23G_A_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A_G(this);
}

SwiftMtParser_MT370Parser::Fld_23G_A_GContext* SwiftMtParser_MT370Parser::fld_23G_A_G() {
  Fld_23G_A_GContext *_localctx = _tracker.createInstance<Fld_23G_A_GContext>(_ctx, getState());
  enterRule(_localctx, 92, SwiftMtParser_MT370Parser::RuleFld_23G_A_G);
   _localctx->fld.set_tag("23G"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(474);
    match(SwiftMtParser_MT370Parser::T__3);
    setState(476); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(475);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(478); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98a_A_AContext::Fld_98a_A_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_98a_A_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_98a_A_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_98a_A_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98a_A_A;
}

void SwiftMtParser_MT370Parser::Fld_98a_A_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_A(this);
}

void SwiftMtParser_MT370Parser::Fld_98a_A_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_A(this);
}

SwiftMtParser_MT370Parser::Fld_98a_A_AContext* SwiftMtParser_MT370Parser::fld_98a_A_A() {
  Fld_98a_A_AContext *_localctx = _tracker.createInstance<Fld_98a_A_AContext>(_ctx, getState());
  enterRule(_localctx, 94, SwiftMtParser_MT370Parser::RuleFld_98a_A_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(480);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(481);
    match(SwiftMtParser_MT370Parser::T__4);
    setState(483); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(482);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(485); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_CContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98a_A_CContext::Fld_98a_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_98a_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_98a_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_98a_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98a_A_C;
}

void SwiftMtParser_MT370Parser::Fld_98a_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_C(this);
}

void SwiftMtParser_MT370Parser::Fld_98a_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_C(this);
}

SwiftMtParser_MT370Parser::Fld_98a_A_CContext* SwiftMtParser_MT370Parser::fld_98a_A_C() {
  Fld_98a_A_CContext *_localctx = _tracker.createInstance<Fld_98a_A_CContext>(_ctx, getState());
  enterRule(_localctx, 96, SwiftMtParser_MT370Parser::RuleFld_98a_A_C);
   _localctx->fld.set_tag("98C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(488);
    match(SwiftMtParser_MT370Parser::T__5);
    setState(490); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(489);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(492); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_EContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98a_A_EContext::Fld_98a_A_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_98a_A_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_98a_A_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_98a_A_EContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98a_A_E;
}

void SwiftMtParser_MT370Parser::Fld_98a_A_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_E(this);
}

void SwiftMtParser_MT370Parser::Fld_98a_A_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_E(this);
}

SwiftMtParser_MT370Parser::Fld_98a_A_EContext* SwiftMtParser_MT370Parser::fld_98a_A_E() {
  Fld_98a_A_EContext *_localctx = _tracker.createInstance<Fld_98a_A_EContext>(_ctx, getState());
  enterRule(_localctx, 98, SwiftMtParser_MT370Parser::RuleFld_98a_A_E);
   _localctx->fld.set_tag("98E"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(495);
    match(SwiftMtParser_MT370Parser::T__6);
    setState(497); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(496);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(499); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1_CContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_20C_A1_CContext::Fld_20C_A1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_20C_A1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_20C_A1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_20C_A1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_20C_A1_C;
}

void SwiftMtParser_MT370Parser::Fld_20C_A1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1_C(this);
}

void SwiftMtParser_MT370Parser::Fld_20C_A1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1_C(this);
}

SwiftMtParser_MT370Parser::Fld_20C_A1_CContext* SwiftMtParser_MT370Parser::fld_20C_A1_C() {
  Fld_20C_A1_CContext *_localctx = _tracker.createInstance<Fld_20C_A1_CContext>(_ctx, getState());
  enterRule(_localctx, 100, SwiftMtParser_MT370Parser::RuleFld_20C_A1_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(501);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(502);
    match(SwiftMtParser_MT370Parser::T__2);
    setState(504); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(503);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(506); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95P_A_PContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95P_A_PContext::Fld_95P_A_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_95P_A_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_95P_A_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_95P_A_PContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95P_A_P;
}

void SwiftMtParser_MT370Parser::Fld_95P_A_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95P_A_P(this);
}

void SwiftMtParser_MT370Parser::Fld_95P_A_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95P_A_P(this);
}

SwiftMtParser_MT370Parser::Fld_95P_A_PContext* SwiftMtParser_MT370Parser::fld_95P_A_P() {
  Fld_95P_A_PContext *_localctx = _tracker.createInstance<Fld_95P_A_PContext>(_ctx, getState());
  enterRule(_localctx, 102, SwiftMtParser_MT370Parser::RuleFld_95P_A_P);
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(509);
    match(SwiftMtParser_MT370Parser::T__7);
    setState(511); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(510);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(513); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A2_PContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_A2_PContext::Fld_95a_A2_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_95a_A2_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_95a_A2_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_A2_PContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_A2_P;
}

void SwiftMtParser_MT370Parser::Fld_95a_A2_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A2_P(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_A2_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A2_P(this);
}

SwiftMtParser_MT370Parser::Fld_95a_A2_PContext* SwiftMtParser_MT370Parser::fld_95a_A2_P() {
  Fld_95a_A2_PContext *_localctx = _tracker.createInstance<Fld_95a_A2_PContext>(_ctx, getState());
  enterRule(_localctx, 104, SwiftMtParser_MT370Parser::RuleFld_95a_A2_P);
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(516);
    match(SwiftMtParser_MT370Parser::T__7);
    setState(518); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(517);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(520); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A2_QContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_A2_QContext::Fld_95a_A2_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_95a_A2_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_95a_A2_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_A2_QContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_A2_Q;
}

void SwiftMtParser_MT370Parser::Fld_95a_A2_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A2_Q(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_A2_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A2_Q(this);
}

SwiftMtParser_MT370Parser::Fld_95a_A2_QContext* SwiftMtParser_MT370Parser::fld_95a_A2_Q() {
  Fld_95a_A2_QContext *_localctx = _tracker.createInstance<Fld_95a_A2_QContext>(_ctx, getState());
  enterRule(_localctx, 106, SwiftMtParser_MT370Parser::RuleFld_95a_A2_Q);
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(523);
    match(SwiftMtParser_MT370Parser::T__8);
    setState(525); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(524);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(527); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A2_RContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_A2_RContext::Fld_95a_A2_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_95a_A2_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_95a_A2_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_A2_RContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_A2_R;
}

void SwiftMtParser_MT370Parser::Fld_95a_A2_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A2_R(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_A2_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A2_R(this);
}

SwiftMtParser_MT370Parser::Fld_95a_A2_RContext* SwiftMtParser_MT370Parser::fld_95a_A2_R() {
  Fld_95a_A2_RContext *_localctx = _tracker.createInstance<Fld_95a_A2_RContext>(_ctx, getState());
  enterRule(_localctx, 108, SwiftMtParser_MT370Parser::RuleFld_95a_A2_R);
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(529);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(530);
    match(SwiftMtParser_MT370Parser::T__9);
    setState(532); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(531);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(534); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_A2_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_97A_A2_AContext::Fld_97A_A2_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_97A_A2_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_97A_A2_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_97A_A2_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_97A_A2_A;
}

void SwiftMtParser_MT370Parser::Fld_97A_A2_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_A2_A(this);
}

void SwiftMtParser_MT370Parser::Fld_97A_A2_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_A2_A(this);
}

SwiftMtParser_MT370Parser::Fld_97A_A2_AContext* SwiftMtParser_MT370Parser::fld_97A_A2_A() {
  Fld_97A_A2_AContext *_localctx = _tracker.createInstance<Fld_97A_A2_AContext>(_ctx, getState());
  enterRule(_localctx, 110, SwiftMtParser_MT370Parser::RuleFld_97A_A2_A);
   _localctx->fld.set_tag("97A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(536);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(537);
    match(SwiftMtParser_MT370Parser::T__10);
    setState(539); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(538);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(541); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_20C_B_CContext::Fld_20C_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_20C_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_20C_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_20C_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_20C_B_C;
}

void SwiftMtParser_MT370Parser::Fld_20C_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B_C(this);
}

void SwiftMtParser_MT370Parser::Fld_20C_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B_C(this);
}

SwiftMtParser_MT370Parser::Fld_20C_B_CContext* SwiftMtParser_MT370Parser::fld_20C_B_C() {
  Fld_20C_B_CContext *_localctx = _tracker.createInstance<Fld_20C_B_CContext>(_ctx, getState());
  enterRule(_localctx, 112, SwiftMtParser_MT370Parser::RuleFld_20C_B_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(543);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(544);
    match(SwiftMtParser_MT370Parser::T__2);
    setState(546); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(545);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(548); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98a_B_AContext::Fld_98a_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_98a_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_98a_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_98a_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98a_B_A;
}

void SwiftMtParser_MT370Parser::Fld_98a_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B_A(this);
}

void SwiftMtParser_MT370Parser::Fld_98a_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B_A(this);
}

SwiftMtParser_MT370Parser::Fld_98a_B_AContext* SwiftMtParser_MT370Parser::fld_98a_B_A() {
  Fld_98a_B_AContext *_localctx = _tracker.createInstance<Fld_98a_B_AContext>(_ctx, getState());
  enterRule(_localctx, 114, SwiftMtParser_MT370Parser::RuleFld_98a_B_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(550);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(551);
    match(SwiftMtParser_MT370Parser::T__4);
    setState(553); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(552);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(555); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98a_B_CContext::Fld_98a_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_98a_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_98a_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_98a_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98a_B_C;
}

void SwiftMtParser_MT370Parser::Fld_98a_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B_C(this);
}

void SwiftMtParser_MT370Parser::Fld_98a_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B_C(this);
}

SwiftMtParser_MT370Parser::Fld_98a_B_CContext* SwiftMtParser_MT370Parser::fld_98a_B_C() {
  Fld_98a_B_CContext *_localctx = _tracker.createInstance<Fld_98a_B_CContext>(_ctx, getState());
  enterRule(_localctx, 116, SwiftMtParser_MT370Parser::RuleFld_98a_B_C);
   _localctx->fld.set_tag("98C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(557);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(558);
    match(SwiftMtParser_MT370Parser::T__5);
    setState(560); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(559);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(562); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_97A_B_AContext::Fld_97A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_97A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_97A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_97A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_97A_B_A;
}

void SwiftMtParser_MT370Parser::Fld_97A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B_A(this);
}

void SwiftMtParser_MT370Parser::Fld_97A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B_A(this);
}

SwiftMtParser_MT370Parser::Fld_97A_B_AContext* SwiftMtParser_MT370Parser::fld_97A_B_A() {
  Fld_97A_B_AContext *_localctx = _tracker.createInstance<Fld_97A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 118, SwiftMtParser_MT370Parser::RuleFld_97A_B_A);
   _localctx->fld.set_tag("97A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(565);
    match(SwiftMtParser_MT370Parser::T__10);
    setState(567); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(566);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(569); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_19A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_19A_B_AContext::Fld_19A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_19A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_19A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_19A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_19A_B_A;
}

void SwiftMtParser_MT370Parser::Fld_19A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_19A_B_A(this);
}

void SwiftMtParser_MT370Parser::Fld_19A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_19A_B_A(this);
}

SwiftMtParser_MT370Parser::Fld_19A_B_AContext* SwiftMtParser_MT370Parser::fld_19A_B_A() {
  Fld_19A_B_AContext *_localctx = _tracker.createInstance<Fld_19A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 120, SwiftMtParser_MT370Parser::RuleFld_19A_B_A);
   _localctx->fld.set_tag("19A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(571);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(572);
    match(SwiftMtParser_MT370Parser::T__11);
    setState(574); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(573);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(576); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_B_HContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_22H_B_HContext::Fld_22H_B_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_22H_B_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_22H_B_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_22H_B_HContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_22H_B_H;
}

void SwiftMtParser_MT370Parser::Fld_22H_B_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B_H(this);
}

void SwiftMtParser_MT370Parser::Fld_22H_B_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B_H(this);
}

SwiftMtParser_MT370Parser::Fld_22H_B_HContext* SwiftMtParser_MT370Parser::fld_22H_B_H() {
  Fld_22H_B_HContext *_localctx = _tracker.createInstance<Fld_22H_B_HContext>(_ctx, getState());
  enterRule(_localctx, 122, SwiftMtParser_MT370Parser::RuleFld_22H_B_H);
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(578);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(579);
    match(SwiftMtParser_MT370Parser::T__12);
    setState(581); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(580);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(583); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_98A_B_AContext::Fld_98A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_98A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_98A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_98A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_98A_B_A;
}

void SwiftMtParser_MT370Parser::Fld_98A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B_A(this);
}

void SwiftMtParser_MT370Parser::Fld_98A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B_A(this);
}

SwiftMtParser_MT370Parser::Fld_98A_B_AContext* SwiftMtParser_MT370Parser::fld_98A_B_A() {
  Fld_98A_B_AContext *_localctx = _tracker.createInstance<Fld_98A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 124, SwiftMtParser_MT370Parser::RuleFld_98A_B_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(585);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(586);
    match(SwiftMtParser_MT370Parser::T__4);
    setState(588); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(587);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(590); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_99a_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_99a_B_AContext::Fld_99a_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_99a_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_99a_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_99a_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_99a_B_A;
}

void SwiftMtParser_MT370Parser::Fld_99a_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_99a_B_A(this);
}

void SwiftMtParser_MT370Parser::Fld_99a_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_99a_B_A(this);
}

SwiftMtParser_MT370Parser::Fld_99a_B_AContext* SwiftMtParser_MT370Parser::fld_99a_B_A() {
  Fld_99a_B_AContext *_localctx = _tracker.createInstance<Fld_99a_B_AContext>(_ctx, getState());
  enterRule(_localctx, 126, SwiftMtParser_MT370Parser::RuleFld_99a_B_A);
   _localctx->fld.set_tag("99A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(592);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(593);
    match(SwiftMtParser_MT370Parser::T__13);
    setState(595); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(594);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(597); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_99a_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_99a_B_CContext::Fld_99a_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_99a_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_99a_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_99a_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_99a_B_C;
}

void SwiftMtParser_MT370Parser::Fld_99a_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_99a_B_C(this);
}

void SwiftMtParser_MT370Parser::Fld_99a_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_99a_B_C(this);
}

SwiftMtParser_MT370Parser::Fld_99a_B_CContext* SwiftMtParser_MT370Parser::fld_99a_B_C() {
  Fld_99a_B_CContext *_localctx = _tracker.createInstance<Fld_99a_B_CContext>(_ctx, getState());
  enterRule(_localctx, 128, SwiftMtParser_MT370Parser::RuleFld_99a_B_C);
   _localctx->fld.set_tag("99C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(599);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(600);
    match(SwiftMtParser_MT370Parser::T__14);
    setState(602); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(601);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(604); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_B_FContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_22F_B_FContext::Fld_22F_B_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_22F_B_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_22F_B_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_22F_B_FContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_22F_B_F;
}

void SwiftMtParser_MT370Parser::Fld_22F_B_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_B_F(this);
}

void SwiftMtParser_MT370Parser::Fld_22F_B_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_B_F(this);
}

SwiftMtParser_MT370Parser::Fld_22F_B_FContext* SwiftMtParser_MT370Parser::fld_22F_B_F() {
  Fld_22F_B_FContext *_localctx = _tracker.createInstance<Fld_22F_B_FContext>(_ctx, getState());
  enterRule(_localctx, 130, SwiftMtParser_MT370Parser::RuleFld_22F_B_F);
   _localctx->fld.set_tag("22F"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(606);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(607);
    match(SwiftMtParser_MT370Parser::T__15);
    setState(609); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(608);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(611); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_B_EContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_70E_B_EContext::Fld_70E_B_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_70E_B_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_70E_B_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_70E_B_EContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_70E_B_E;
}

void SwiftMtParser_MT370Parser::Fld_70E_B_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_B_E(this);
}

void SwiftMtParser_MT370Parser::Fld_70E_B_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_B_E(this);
}

SwiftMtParser_MT370Parser::Fld_70E_B_EContext* SwiftMtParser_MT370Parser::fld_70E_B_E() {
  Fld_70E_B_EContext *_localctx = _tracker.createInstance<Fld_70E_B_EContext>(_ctx, getState());
  enterRule(_localctx, 132, SwiftMtParser_MT370Parser::RuleFld_70E_B_E);
   _localctx->fld.set_tag("70E"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(613);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(614);
    match(SwiftMtParser_MT370Parser::T__16);
    setState(616); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(615);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(618); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_PContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_B1_PContext::Fld_95a_B1_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_95a_B1_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_95a_B1_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_B1_PContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_B1_P;
}

void SwiftMtParser_MT370Parser::Fld_95a_B1_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_P(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_B1_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_P(this);
}

SwiftMtParser_MT370Parser::Fld_95a_B1_PContext* SwiftMtParser_MT370Parser::fld_95a_B1_P() {
  Fld_95a_B1_PContext *_localctx = _tracker.createInstance<Fld_95a_B1_PContext>(_ctx, getState());
  enterRule(_localctx, 134, SwiftMtParser_MT370Parser::RuleFld_95a_B1_P);
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(620);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(621);
    match(SwiftMtParser_MT370Parser::T__7);
    setState(623); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(622);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(625); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_QContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_B1_QContext::Fld_95a_B1_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_95a_B1_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_95a_B1_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_B1_QContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_B1_Q;
}

void SwiftMtParser_MT370Parser::Fld_95a_B1_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_Q(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_B1_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_Q(this);
}

SwiftMtParser_MT370Parser::Fld_95a_B1_QContext* SwiftMtParser_MT370Parser::fld_95a_B1_Q() {
  Fld_95a_B1_QContext *_localctx = _tracker.createInstance<Fld_95a_B1_QContext>(_ctx, getState());
  enterRule(_localctx, 136, SwiftMtParser_MT370Parser::RuleFld_95a_B1_Q);
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(627);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(628);
    match(SwiftMtParser_MT370Parser::T__8);
    setState(630); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(629);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(632); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_RContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_95a_B1_RContext::Fld_95a_B1_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_95a_B1_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_95a_B1_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_95a_B1_RContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_95a_B1_R;
}

void SwiftMtParser_MT370Parser::Fld_95a_B1_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_R(this);
}

void SwiftMtParser_MT370Parser::Fld_95a_B1_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_R(this);
}

SwiftMtParser_MT370Parser::Fld_95a_B1_RContext* SwiftMtParser_MT370Parser::fld_95a_B1_R() {
  Fld_95a_B1_RContext *_localctx = _tracker.createInstance<Fld_95a_B1_RContext>(_ctx, getState());
  enterRule(_localctx, 138, SwiftMtParser_MT370Parser::RuleFld_95a_B1_R);
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(634);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(635);
    match(SwiftMtParser_MT370Parser::T__9);
    setState(637); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(636);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(639); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_B1_AContext ------------------------------------------------------------------

SwiftMtParser_MT370Parser::Fld_97A_B1_AContext::Fld_97A_B1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT370Parser::Fld_97A_B1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT370Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT370Parser::Fld_97A_B1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT370Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT370Parser::Fld_97A_B1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT370Parser::RuleFld_97A_B1_A;
}

void SwiftMtParser_MT370Parser::Fld_97A_B1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B1_A(this);
}

void SwiftMtParser_MT370Parser::Fld_97A_B1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT370Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B1_A(this);
}

SwiftMtParser_MT370Parser::Fld_97A_B1_AContext* SwiftMtParser_MT370Parser::fld_97A_B1_A() {
  Fld_97A_B1_AContext *_localctx = _tracker.createInstance<Fld_97A_B1_AContext>(_ctx, getState());
  enterRule(_localctx, 140, SwiftMtParser_MT370Parser::RuleFld_97A_B1_A);
   _localctx->fld.set_tag("97A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    match(SwiftMtParser_MT370Parser::START_OF_FIELD);
    setState(642);
    match(SwiftMtParser_MT370Parser::T__10);
    setState(644); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(643);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT370Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(646); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT370Parser::T__0)
      | (1ULL << SwiftMtParser_MT370Parser::T__1)
      | (1ULL << SwiftMtParser_MT370Parser::T__2)
      | (1ULL << SwiftMtParser_MT370Parser::T__3)
      | (1ULL << SwiftMtParser_MT370Parser::T__4)
      | (1ULL << SwiftMtParser_MT370Parser::T__5)
      | (1ULL << SwiftMtParser_MT370Parser::T__6)
      | (1ULL << SwiftMtParser_MT370Parser::T__7)
      | (1ULL << SwiftMtParser_MT370Parser::T__8)
      | (1ULL << SwiftMtParser_MT370Parser::T__9)
      | (1ULL << SwiftMtParser_MT370Parser::T__10)
      | (1ULL << SwiftMtParser_MT370Parser::T__11)
      | (1ULL << SwiftMtParser_MT370Parser::T__12)
      | (1ULL << SwiftMtParser_MT370Parser::T__13)
      | (1ULL << SwiftMtParser_MT370Parser::T__14)
      | (1ULL << SwiftMtParser_MT370Parser::T__15)
      | (1ULL << SwiftMtParser_MT370Parser::T__16)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT370Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT370Parser::MT_END)
      | (1ULL << SwiftMtParser_MT370Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT370Parser::COLON)
      | (1ULL << SwiftMtParser_MT370Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT370Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT370Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT370Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT370Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT370Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt", "seq_A", 
  "seq_A1", "seq_A2", "seq_B", "seq_B1", "fld_16R_A", "fld_20C_A", "fld_23G_A", 
  "fld_98a_A", "fld_16R_A1", "fld_20C_A1", "fld_16S_A1", "fld_95P_A", "fld_16R_A2", 
  "fld_95a_A2", "fld_97A_A2", "fld_16S_A2", "fld_16S_A", "fld_16R_B", "fld_20C_B", 
  "fld_98a_B", "fld_97A_B", "fld_19A_B", "fld_22H_B", "fld_98A_B", "fld_99a_B", 
  "fld_22F_B", "fld_70E_B", "fld_16R_B1", "fld_95a_B1", "fld_97A_B1", "fld_16S_B1", 
  "fld_16S_B", "fld_20C_A_C", "fld_23G_A_G", "fld_98a_A_A", "fld_98a_A_C", 
  "fld_98a_A_E", "fld_20C_A1_C", "fld_95P_A_P", "fld_95a_A2_P", "fld_95a_A2_Q", 
  "fld_95a_A2_R", "fld_97A_A2_A", "fld_20C_B_C", "fld_98a_B_A", "fld_98a_B_C", 
  "fld_97A_B_A", "fld_19A_B_A", "fld_22H_B_H", "fld_98A_B_A", "fld_99a_B_A", 
  "fld_99a_B_C", "fld_22F_B_F", "fld_70E_B_E", "fld_95a_B1_P", "fld_95a_B1_Q", 
  "fld_95a_B1_R", "fld_97A_B1_A"
};

std::vector<std::string> SwiftMtParser_MT370Parser::_literalNames = {
  "", "'16R:'", "'16S:'", "'20C:'", "'23G:'", "'98A:'", "'98C:'", "'98E:'", 
  "'95P:'", "'95Q:'", "'95R:'", "'97A:'", "'19A:'", "'22H:'", "'99A:'", 
  "'99C:'", "'22F:'", "'70E:'", "'{1:'", "'{2:'", "'{3:'", "'{4:'", "'{5:'", 
  "'-}'", "'{'", "'}'", "':'"
};

std::vector<std::string> SwiftMtParser_MT370Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "TAG_BH", "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", "MT_END", "LBRACE", 
  "RBRACE", "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT370Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT370Parser::_tokenNames;

SwiftMtParser_MT370Parser::Initializer::Initializer() {
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
    0x3, 0x1e, 0x28b, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 
    0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 
    0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 
    0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 
    0x2c, 0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
    0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 0x9, 
    0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 0x9, 0x35, 
    0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 0x9, 0x38, 0x4, 
    0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 0x9, 0x3b, 0x4, 0x3c, 
    0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 0x9, 0x3e, 0x4, 0x3f, 0x9, 
    0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x94, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x98, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x6, 0x4, 0xa1, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0xa2, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0xaa, 0xa, 
    0x6, 0xd, 0x6, 0xe, 0x6, 0xab, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0xb7, 0xa, 
    0x9, 0xd, 0x9, 0xe, 0x9, 0xb8, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0xc2, 0xa, 0xb, 0xd, 0xb, 0xe, 
    0xb, 0xc3, 0x3, 0xc, 0x6, 0xc, 0xc7, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xc8, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xd7, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xdb, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0xde, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xe4, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xf8, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x103, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x107, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 
    0x11, 0x111, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x115, 0xa, 
    0x11, 0xc, 0x11, 0xe, 0x11, 0x118, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x7, 0x11, 0x11c, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x11f, 0xb, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x123, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
    0x126, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x131, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x6, 0x13, 0x13a, 0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0x13b, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0x14d, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 
    0x3, 0x17, 0x6, 0x17, 0x152, 0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x153, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x6, 
    0x19, 0x15c, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x15d, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x6, 0x1b, 0x166, 
    0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0x167, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 
    0x1c, 0x173, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x17b, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 
    0x17c, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x6, 0x1f, 0x182, 0xa, 0x1f, 
    0xd, 0x1f, 0xe, 0x1f, 0x183, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x6, 0x20, 
    0x189, 0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 0x18a, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x22, 0x5, 0x22, 0x196, 0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
    0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 
    0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x1aa, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 
    0x2a, 0x6, 0x2a, 0x1b5, 0xa, 0x2a, 0xd, 0x2a, 0xe, 0x2a, 0x1b6, 0x3, 
    0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2b, 0x5, 0x2b, 0x1c2, 0xa, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x6, 0x2d, 0x1ca, 0xa, 0x2d, 
    0xd, 0x2d, 0xe, 0x2d, 0x1cb, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x6, 0x2e, 
    0x1d1, 0xa, 0x2e, 0xd, 0x2e, 0xe, 0x2e, 0x1d2, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x6, 0x2f, 0x1d8, 0xa, 0x2f, 0xd, 0x2f, 0xe, 0x2f, 0x1d9, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x6, 0x30, 0x1df, 0xa, 0x30, 0xd, 0x30, 
    0xe, 0x30, 0x1e0, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x6, 0x31, 0x1e6, 
    0xa, 0x31, 0xd, 0x31, 0xe, 0x31, 0x1e7, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 
    0x6, 0x32, 0x1ed, 0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x1ee, 0x3, 0x33, 
    0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x1f4, 0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 
    0x1f5, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x6, 0x34, 0x1fb, 0xa, 0x34, 
    0xd, 0x34, 0xe, 0x34, 0x1fc, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 
    0x202, 0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 0x203, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x6, 0x36, 0x209, 0xa, 0x36, 0xd, 0x36, 0xe, 0x36, 0x20a, 
    0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x6, 0x37, 0x210, 0xa, 0x37, 0xd, 0x37, 
    0xe, 0x37, 0x211, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x6, 0x38, 0x217, 
    0xa, 0x38, 0xd, 0x38, 0xe, 0x38, 0x218, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
    0x6, 0x39, 0x21e, 0xa, 0x39, 0xd, 0x39, 0xe, 0x39, 0x21f, 0x3, 0x3a, 
    0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x225, 0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 
    0x226, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x6, 0x3b, 0x22c, 0xa, 0x3b, 
    0xd, 0x3b, 0xe, 0x3b, 0x22d, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x6, 0x3c, 
    0x233, 0xa, 0x3c, 0xd, 0x3c, 0xe, 0x3c, 0x234, 0x3, 0x3d, 0x3, 0x3d, 
    0x3, 0x3d, 0x6, 0x3d, 0x23a, 0xa, 0x3d, 0xd, 0x3d, 0xe, 0x3d, 0x23b, 
    0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x6, 0x3e, 0x241, 0xa, 0x3e, 0xd, 0x3e, 
    0xe, 0x3e, 0x242, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x6, 0x3f, 0x248, 
    0xa, 0x3f, 0xd, 0x3f, 0xe, 0x3f, 0x249, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 
    0x6, 0x40, 0x24f, 0xa, 0x40, 0xd, 0x40, 0xe, 0x40, 0x250, 0x3, 0x41, 
    0x3, 0x41, 0x3, 0x41, 0x6, 0x41, 0x256, 0xa, 0x41, 0xd, 0x41, 0xe, 0x41, 
    0x257, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x6, 0x42, 0x25d, 0xa, 0x42, 
    0xd, 0x42, 0xe, 0x42, 0x25e, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 
    0x264, 0xa, 0x43, 0xd, 0x43, 0xe, 0x43, 0x265, 0x3, 0x44, 0x3, 0x44, 
    0x3, 0x44, 0x6, 0x44, 0x26b, 0xa, 0x44, 0xd, 0x44, 0xe, 0x44, 0x26c, 
    0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x6, 0x45, 0x272, 0xa, 0x45, 0xd, 0x45, 
    0xe, 0x45, 0x273, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x6, 0x46, 0x279, 
    0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x27a, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 
    0x6, 0x47, 0x280, 0xa, 0x47, 0xd, 0x47, 0xe, 0x47, 0x281, 0x3, 0x48, 
    0x3, 0x48, 0x3, 0x48, 0x6, 0x48, 0x287, 0xa, 0x48, 0xd, 0x48, 0xe, 0x48, 
    0x288, 0x3, 0x48, 0x2, 0x2, 0x49, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 
    0x88, 0x8a, 0x8c, 0x8e, 0x2, 0x5, 0x3, 0x2, 0x1b, 0x1b, 0x3, 0x2, 0x1b, 
    0x1c, 0x3, 0x2, 0x1d, 0x1d, 0x2, 0x281, 0x2, 0x90, 0x3, 0x2, 0x2, 0x2, 
    0x4, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xc, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x10, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xba, 0x3, 0x2, 0x2, 0x2, 0x14, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xc6, 0x3, 0x2, 0x2, 0x2, 0x18, 0xca, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xcf, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0xfd, 0x3, 0x2, 0x2, 0x2, 0x22, 0x12b, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x136, 0x3, 0x2, 0x2, 0x2, 0x26, 0x13d, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x140, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x14c, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x158, 0x3, 0x2, 0x2, 0x2, 0x32, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x162, 0x3, 0x2, 0x2, 0x2, 0x36, 0x172, 0x3, 0x2, 0x2, 0x2, 0x38, 0x174, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x177, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x17e, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x185, 0x3, 0x2, 0x2, 0x2, 0x40, 0x18c, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x195, 0x3, 0x2, 0x2, 0x2, 0x44, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x48, 0x19d, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x1ab, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1ae, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1b1, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1c3, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1cd, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1db, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1e9, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x1fe, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x205, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x213, 0x3, 0x2, 0x2, 0x2, 0x70, 0x21a, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x221, 0x3, 0x2, 0x2, 0x2, 0x74, 0x228, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x78, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x244, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x252, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x259, 0x3, 0x2, 0x2, 0x2, 0x84, 0x260, 0x3, 0x2, 0x2, 0x2, 0x86, 0x267, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x26e, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x275, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x27c, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x283, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0x5, 0x4, 0x3, 0x2, 0x91, 0x93, 0x5, 0x8, 0x5, 
    0x2, 0x92, 0x94, 0x5, 0xc, 0x7, 0x2, 0x93, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x97, 0x5, 0x18, 0xd, 0x2, 0x96, 0x98, 0x5, 0xe, 0x8, 0x2, 0x97, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 0x2, 0x2, 0x3, 0x9a, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x9b, 0x9c, 0x7, 0x14, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x6, 0x4, 
    0x2, 0x9d, 0x9e, 0x7, 0x1b, 0x2, 0x2, 0x9e, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x9f, 0xa1, 0xa, 0x2, 0x2, 0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0x7, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 
    0x15, 0x2, 0x2, 0xa5, 0xa6, 0x5, 0xa, 0x6, 0x2, 0xa6, 0xa7, 0x7, 0x1b, 
    0x2, 0x2, 0xa7, 0x9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 0xa, 0x2, 0x2, 
    0x2, 0xa9, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x16, 0x2, 0x2, 0xae, 0xaf, 
    0x5, 0x10, 0x9, 0x2, 0xaf, 0xb0, 0x7, 0x1b, 0x2, 0x2, 0xb0, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x18, 0x2, 0x2, 0xb2, 0xb3, 0x5, 0x10, 
    0x9, 0x2, 0xb3, 0xb4, 0x7, 0x1b, 0x2, 0x2, 0xb4, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xb7, 0x5, 0x12, 0xa, 0x2, 0xb6, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 
    0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0x11, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
    0x7, 0x1a, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x14, 0xb, 0x2, 0xbc, 0xbd, 0x7, 
    0x1c, 0x2, 0x2, 0xbd, 0xbe, 0x5, 0x16, 0xc, 0x2, 0xbe, 0xbf, 0x7, 0x1b, 
    0x2, 0x2, 0xbf, 0x13, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc2, 0xa, 0x3, 0x2, 
    0x2, 0xc1, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc3, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc7, 0xa, 0x2, 0x2, 0x2, 0xc6, 0xc5, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 
    0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xca, 0xcb, 0x7, 0x17, 0x2, 0x2, 0xcb, 0xcc, 0x5, 0x1a, 0xe, 
    0x2, 0xcc, 0xcd, 0x5, 0x20, 0x11, 0x2, 0xcd, 0xce, 0x7, 0x19, 0x2, 0x2, 
    0xce, 0x19, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x5, 0x24, 0x13, 0x2, 0xd0, 
    0xd1, 0x8, 0xe, 0x1, 0x2, 0xd1, 0xd2, 0x5, 0x26, 0x14, 0x2, 0xd2, 0xd3, 
    0x8, 0xe, 0x1, 0x2, 0xd3, 0xd4, 0x5, 0x28, 0x15, 0x2, 0xd4, 0xd6, 0x8, 
    0xe, 0x1, 0x2, 0xd5, 0xd7, 0x5, 0x2a, 0x16, 0x2, 0xd6, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xdc, 0x8, 0xe, 0x1, 0x2, 0xd9, 0xdb, 0x5, 0x1c, 0xf, 0x2, 
    0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x8, 
    0xe, 0x1, 0x2, 0xe0, 0xe1, 0x5, 0x32, 0x1a, 0x2, 0xe1, 0xe3, 0x8, 0xe, 
    0x1, 0x2, 0xe2, 0xe4, 0x5, 0x1e, 0x10, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 
    0xe5, 0xe6, 0x8, 0xe, 0x1, 0x2, 0xe6, 0xe7, 0x5, 0x32, 0x1a, 0x2, 0xe7, 
    0xe8, 0x8, 0xe, 0x1, 0x2, 0xe8, 0xe9, 0x5, 0x3c, 0x1f, 0x2, 0xe9, 0xea, 
    0x8, 0xe, 0x1, 0x2, 0xea, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x5, 
    0x2c, 0x17, 0x2, 0xec, 0xed, 0x8, 0xf, 0x1, 0x2, 0xed, 0xee, 0x5, 0x2e, 
    0x18, 0x2, 0xee, 0xef, 0x8, 0xf, 0x1, 0x2, 0xef, 0xf0, 0x5, 0x30, 0x19, 
    0x2, 0xf0, 0xf1, 0x8, 0xf, 0x1, 0x2, 0xf1, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf3, 0x5, 0x34, 0x1b, 0x2, 0xf3, 0xf4, 0x8, 0x10, 0x1, 0x2, 0xf4, 
    0xf5, 0x5, 0x36, 0x1c, 0x2, 0xf5, 0xf7, 0x8, 0x10, 0x1, 0x2, 0xf6, 0xf8, 
    0x5, 0x38, 0x1d, 0x2, 0xf7, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfa, 0x8, 0x10, 
    0x1, 0x2, 0xfa, 0xfb, 0x5, 0x3a, 0x1e, 0x2, 0xfb, 0xfc, 0x8, 0x10, 0x1, 
    0x2, 0xfc, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x3e, 0x20, 0x2, 
    0xfe, 0xff, 0x8, 0x11, 0x1, 0x2, 0xff, 0x100, 0x5, 0x40, 0x21, 0x2, 
    0x100, 0x102, 0x8, 0x11, 0x1, 0x2, 0x101, 0x103, 0x5, 0x42, 0x22, 0x2, 
    0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 
    0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 0x8, 0x11, 0x1, 0x2, 
    0x105, 0x107, 0x5, 0x44, 0x23, 0x2, 0x106, 0x105, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0x107, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 
    0x108, 0x109, 0x8, 0x11, 0x1, 0x2, 0x109, 0x10a, 0x5, 0x46, 0x24, 0x2, 
    0x10a, 0x10b, 0x8, 0x11, 0x1, 0x2, 0x10b, 0x10c, 0x5, 0x48, 0x25, 0x2, 
    0x10c, 0x10d, 0x8, 0x11, 0x1, 0x2, 0x10d, 0x10e, 0x5, 0x4a, 0x26, 0x2, 
    0x10e, 0x110, 0x8, 0x11, 0x1, 0x2, 0x10f, 0x111, 0x5, 0x4c, 0x27, 0x2, 
    0x110, 0x10f, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 
    0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x116, 0x8, 0x11, 0x1, 0x2, 
    0x113, 0x115, 0x5, 0x4e, 0x28, 0x2, 0x114, 0x113, 0x3, 0x2, 0x2, 0x2, 
    0x115, 0x118, 0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 
    0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x119, 0x3, 0x2, 0x2, 0x2, 
    0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11d, 0x8, 0x11, 0x1, 0x2, 
    0x11a, 0x11c, 0x5, 0x50, 0x29, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 
    0x11c, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x120, 0x124, 0x8, 0x11, 0x1, 0x2, 
    0x121, 0x123, 0x5, 0x22, 0x12, 0x2, 0x122, 0x121, 0x3, 0x2, 0x2, 0x2, 
    0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 
    0x124, 0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 0x3, 0x2, 0x2, 0x2, 
    0x126, 0x124, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x8, 0x11, 0x1, 0x2, 
    0x128, 0x129, 0x5, 0x5a, 0x2e, 0x2, 0x129, 0x12a, 0x8, 0x11, 0x1, 0x2, 
    0x12a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x5, 0x52, 0x2a, 0x2, 
    0x12c, 0x12d, 0x8, 0x12, 0x1, 0x2, 0x12d, 0x12e, 0x5, 0x54, 0x2b, 0x2, 
    0x12e, 0x130, 0x8, 0x12, 0x1, 0x2, 0x12f, 0x131, 0x5, 0x56, 0x2c, 0x2, 
    0x130, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 
    0x131, 0x132, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x8, 0x12, 0x1, 0x2, 
    0x133, 0x134, 0x5, 0x58, 0x2d, 0x2, 0x134, 0x135, 0x8, 0x12, 0x1, 0x2, 
    0x135, 0x23, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x7, 0x1d, 0x2, 0x2, 
    0x137, 0x139, 0x7, 0x3, 0x2, 0x2, 0x138, 0x13a, 0xa, 0x4, 0x2, 0x2, 
    0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 
    0x13b, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 
    0x13c, 0x25, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x5c, 0x2f, 0x2, 
    0x13e, 0x13f, 0x8, 0x14, 0x1, 0x2, 0x13f, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0x140, 0x141, 0x5, 0x5e, 0x30, 0x2, 0x141, 0x142, 0x8, 0x15, 0x1, 0x2, 
    0x142, 0x29, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x5, 0x60, 0x31, 0x2, 
    0x144, 0x145, 0x8, 0x16, 0x1, 0x2, 0x145, 0x14d, 0x3, 0x2, 0x2, 0x2, 
    0x146, 0x147, 0x5, 0x62, 0x32, 0x2, 0x147, 0x148, 0x8, 0x16, 0x1, 0x2, 
    0x148, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x5, 0x64, 0x33, 0x2, 
    0x14a, 0x14b, 0x8, 0x16, 0x1, 0x2, 0x14b, 0x14d, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x143, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x146, 0x3, 0x2, 0x2, 0x2, 
    0x14c, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x14e, 
    0x14f, 0x7, 0x1d, 0x2, 0x2, 0x14f, 0x151, 0x7, 0x3, 0x2, 0x2, 0x150, 
    0x152, 0xa, 0x4, 0x2, 0x2, 0x151, 0x150, 0x3, 0x2, 0x2, 0x2, 0x152, 
    0x153, 0x3, 0x2, 0x2, 0x2, 0x153, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 
    0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 
    0x5, 0x66, 0x34, 0x2, 0x156, 0x157, 0x8, 0x18, 0x1, 0x2, 0x157, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x158, 0x159, 0x7, 0x1d, 0x2, 0x2, 0x159, 0x15b, 
    0x7, 0x4, 0x2, 0x2, 0x15a, 0x15c, 0xa, 0x4, 0x2, 0x2, 0x15b, 0x15a, 
    0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15b, 
    0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x160, 0x5, 0x68, 0x35, 0x2, 0x160, 0x161, 0x8, 
    0x1a, 0x1, 0x2, 0x161, 0x33, 0x3, 0x2, 0x2, 0x2, 0x162, 0x163, 0x7, 
    0x1d, 0x2, 0x2, 0x163, 0x165, 0x7, 0x3, 0x2, 0x2, 0x164, 0x166, 0xa, 
    0x4, 0x2, 0x2, 0x165, 0x164, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x3, 
    0x2, 0x2, 0x2, 0x167, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 
    0x2, 0x2, 0x2, 0x168, 0x35, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 0x5, 0x6a, 
    0x36, 0x2, 0x16a, 0x16b, 0x8, 0x1c, 0x1, 0x2, 0x16b, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x16c, 0x16d, 0x5, 0x6c, 0x37, 0x2, 0x16d, 0x16e, 0x8, 0x1c, 
    0x1, 0x2, 0x16e, 0x173, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x5, 0x6e, 
    0x38, 0x2, 0x170, 0x171, 0x8, 0x1c, 0x1, 0x2, 0x171, 0x173, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x169, 0x3, 0x2, 0x2, 0x2, 0x172, 0x16c, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x173, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x175, 0x5, 0x70, 0x39, 0x2, 0x175, 0x176, 0x8, 0x1d, 0x1, 
    0x2, 0x176, 0x39, 0x3, 0x2, 0x2, 0x2, 0x177, 0x178, 0x7, 0x1d, 0x2, 
    0x2, 0x178, 0x17a, 0x7, 0x4, 0x2, 0x2, 0x179, 0x17b, 0xa, 0x4, 0x2, 
    0x2, 0x17a, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 0x2, 0x2, 
    0x2, 0x17c, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 0x2, 0x2, 
    0x2, 0x17d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x7, 0x1d, 0x2, 
    0x2, 0x17f, 0x181, 0x7, 0x4, 0x2, 0x2, 0x180, 0x182, 0xa, 0x4, 0x2, 
    0x2, 0x181, 0x180, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 
    0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x7, 0x1d, 0x2, 
    0x2, 0x186, 0x188, 0x7, 0x3, 0x2, 0x2, 0x187, 0x189, 0xa, 0x4, 0x2, 
    0x2, 0x188, 0x187, 0x3, 0x2, 0x2, 0x2, 0x189, 0x18a, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x5, 0x72, 0x3a, 
    0x2, 0x18d, 0x18e, 0x8, 0x21, 0x1, 0x2, 0x18e, 0x41, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x190, 0x5, 0x74, 0x3b, 0x2, 0x190, 0x191, 0x8, 0x22, 0x1, 
    0x2, 0x191, 0x196, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x5, 0x76, 0x3c, 
    0x2, 0x193, 0x194, 0x8, 0x22, 0x1, 0x2, 0x194, 0x196, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x195, 0x192, 0x3, 0x2, 0x2, 
    0x2, 0x196, 0x43, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x5, 0x78, 0x3d, 
    0x2, 0x198, 0x199, 0x8, 0x23, 0x1, 0x2, 0x199, 0x45, 0x3, 0x2, 0x2, 
    0x2, 0x19a, 0x19b, 0x5, 0x7a, 0x3e, 0x2, 0x19b, 0x19c, 0x8, 0x24, 0x1, 
    0x2, 0x19c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x5, 0x7c, 0x3f, 
    0x2, 0x19e, 0x19f, 0x8, 0x25, 0x1, 0x2, 0x19f, 0x49, 0x3, 0x2, 0x2, 
    0x2, 0x1a0, 0x1a1, 0x5, 0x7e, 0x40, 0x2, 0x1a1, 0x1a2, 0x8, 0x26, 0x1, 
    0x2, 0x1a2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 0x5, 0x80, 0x41, 
    0x2, 0x1a4, 0x1a5, 0x8, 0x27, 0x1, 0x2, 0x1a5, 0x1aa, 0x3, 0x2, 0x2, 
    0x2, 0x1a6, 0x1a7, 0x5, 0x82, 0x42, 0x2, 0x1a7, 0x1a8, 0x8, 0x27, 0x1, 
    0x2, 0x1a8, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x1a9, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x1ab, 0x1ac, 0x5, 0x84, 0x43, 0x2, 0x1ac, 0x1ad, 0x8, 0x28, 0x1, 0x2, 
    0x1ad, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1af, 0x5, 0x86, 0x44, 0x2, 
    0x1af, 0x1b0, 0x8, 0x29, 0x1, 0x2, 0x1b0, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x1b1, 0x1b2, 0x7, 0x1d, 0x2, 0x2, 0x1b2, 0x1b4, 0x7, 0x3, 0x2, 0x2, 
    0x1b3, 0x1b5, 0xa, 0x4, 0x2, 0x2, 0x1b4, 0x1b3, 0x3, 0x2, 0x2, 0x2, 
    0x1b5, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b6, 0x1b4, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1b8, 
    0x1b9, 0x5, 0x88, 0x45, 0x2, 0x1b9, 0x1ba, 0x8, 0x2b, 0x1, 0x2, 0x1ba, 
    0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x8a, 0x46, 0x2, 0x1bc, 
    0x1bd, 0x8, 0x2b, 0x1, 0x2, 0x1bd, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1be, 
    0x1bf, 0x5, 0x8c, 0x47, 0x2, 0x1bf, 0x1c0, 0x8, 0x2b, 0x1, 0x2, 0x1c0, 
    0x1c2, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1c1, 
    0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c2, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c4, 0x5, 0x8e, 0x48, 0x2, 0x1c4, 
    0x1c5, 0x8, 0x2c, 0x1, 0x2, 0x1c5, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1c6, 
    0x1c7, 0x7, 0x1d, 0x2, 0x2, 0x1c7, 0x1c9, 0x7, 0x4, 0x2, 0x2, 0x1c8, 
    0x1ca, 0xa, 0x4, 0x2, 0x2, 0x1c9, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 
    0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x1cb, 
    0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 
    0x7, 0x1d, 0x2, 0x2, 0x1ce, 0x1d0, 0x7, 0x4, 0x2, 0x2, 0x1cf, 0x1d1, 
    0xa, 0x4, 0x2, 0x2, 0x1d0, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 
    0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d2, 0x1d3, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x7, 
    0x1d, 0x2, 0x2, 0x1d5, 0x1d7, 0x7, 0x5, 0x2, 0x2, 0x1d6, 0x1d8, 0xa, 
    0x4, 0x2, 0x2, 0x1d7, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x3, 
    0x2, 0x2, 0x2, 0x1d9, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x3, 
    0x2, 0x2, 0x2, 0x1da, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x7, 0x1d, 
    0x2, 0x2, 0x1dc, 0x1de, 0x7, 0x6, 0x2, 0x2, 0x1dd, 0x1df, 0xa, 0x4, 
    0x2, 0x2, 0x1de, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x1e0, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x3, 0x2, 
    0x2, 0x2, 0x1e1, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x7, 0x1d, 
    0x2, 0x2, 0x1e3, 0x1e5, 0x7, 0x7, 0x2, 0x2, 0x1e4, 0x1e6, 0xa, 0x4, 
    0x2, 0x2, 0x1e5, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 0x2, 
    0x2, 0x2, 0x1e8, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x7, 0x1d, 
    0x2, 0x2, 0x1ea, 0x1ec, 0x7, 0x8, 0x2, 0x2, 0x1eb, 0x1ed, 0xa, 0x4, 
    0x2, 0x2, 0x1ec, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x1ef, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x1d, 
    0x2, 0x2, 0x1f1, 0x1f3, 0x7, 0x9, 0x2, 0x2, 0x1f2, 0x1f4, 0xa, 0x4, 
    0x2, 0x2, 0x1f3, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x7, 0x1d, 
    0x2, 0x2, 0x1f8, 0x1fa, 0x7, 0x5, 0x2, 0x2, 0x1f9, 0x1fb, 0xa, 0x4, 
    0x2, 0x2, 0x1fa, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 
    0x2, 0x2, 0x1fd, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x7, 0x1d, 
    0x2, 0x2, 0x1ff, 0x201, 0x7, 0xa, 0x2, 0x2, 0x200, 0x202, 0xa, 0x4, 
    0x2, 0x2, 0x201, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 
    0x2, 0x2, 0x204, 0x69, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x7, 0x1d, 
    0x2, 0x2, 0x206, 0x208, 0x7, 0xa, 0x2, 0x2, 0x207, 0x209, 0xa, 0x4, 
    0x2, 0x2, 0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 
    0x2, 0x2, 0x20b, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x7, 0x1d, 
    0x2, 0x2, 0x20d, 0x20f, 0x7, 0xb, 0x2, 0x2, 0x20e, 0x210, 0xa, 0x4, 
    0x2, 0x2, 0x20f, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x7, 0x1d, 
    0x2, 0x2, 0x214, 0x216, 0x7, 0xc, 0x2, 0x2, 0x215, 0x217, 0xa, 0x4, 
    0x2, 0x2, 0x216, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x218, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x219, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x7, 0x1d, 
    0x2, 0x2, 0x21b, 0x21d, 0x7, 0xd, 0x2, 0x2, 0x21c, 0x21e, 0xa, 0x4, 
    0x2, 0x2, 0x21d, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x21f, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 
    0x2, 0x2, 0x220, 0x71, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x7, 0x1d, 
    0x2, 0x2, 0x222, 0x224, 0x7, 0x5, 0x2, 0x2, 0x223, 0x225, 0xa, 0x4, 
    0x2, 0x2, 0x224, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x226, 0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 
    0x2, 0x2, 0x227, 0x73, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x7, 0x1d, 
    0x2, 0x2, 0x229, 0x22b, 0x7, 0x7, 0x2, 0x2, 0x22a, 0x22c, 0xa, 0x4, 
    0x2, 0x2, 0x22b, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 
    0x2, 0x2, 0x22e, 0x75, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x7, 0x1d, 
    0x2, 0x2, 0x230, 0x232, 0x7, 0x8, 0x2, 0x2, 0x231, 0x233, 0xa, 0x4, 
    0x2, 0x2, 0x232, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 0x2, 
    0x2, 0x2, 0x234, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x3, 0x2, 
    0x2, 0x2, 0x235, 0x77, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x1d, 
    0x2, 0x2, 0x237, 0x239, 0x7, 0xd, 0x2, 0x2, 0x238, 0x23a, 0xa, 0x4, 
    0x2, 0x2, 0x239, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 
    0x2, 0x2, 0x23b, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x79, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x7, 0x1d, 
    0x2, 0x2, 0x23e, 0x240, 0x7, 0xe, 0x2, 0x2, 0x23f, 0x241, 0xa, 0x4, 
    0x2, 0x2, 0x240, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 
    0x2, 0x2, 0x242, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 
    0x2, 0x2, 0x243, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x244, 0x245, 0x7, 0x1d, 
    0x2, 0x2, 0x245, 0x247, 0x7, 0xf, 0x2, 0x2, 0x246, 0x248, 0xa, 0x4, 
    0x2, 0x2, 0x247, 0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 
    0x2, 0x2, 0x249, 0x247, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 0x2, 
    0x2, 0x2, 0x24a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x24b, 0x24c, 0x7, 0x1d, 
    0x2, 0x2, 0x24c, 0x24e, 0x7, 0x7, 0x2, 0x2, 0x24d, 0x24f, 0xa, 0x4, 
    0x2, 0x2, 0x24e, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x250, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 
    0x2, 0x2, 0x251, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x7, 0x1d, 
    0x2, 0x2, 0x253, 0x255, 0x7, 0x10, 0x2, 0x2, 0x254, 0x256, 0xa, 0x4, 
    0x2, 0x2, 0x255, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 
    0x2, 0x2, 0x257, 0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 
    0x2, 0x2, 0x258, 0x81, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x7, 0x1d, 
    0x2, 0x2, 0x25a, 0x25c, 0x7, 0x11, 0x2, 0x2, 0x25b, 0x25d, 0xa, 0x4, 
    0x2, 0x2, 0x25c, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 0x2, 
    0x2, 0x2, 0x25e, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 
    0x2, 0x2, 0x25f, 0x83, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x7, 0x1d, 
    0x2, 0x2, 0x261, 0x263, 0x7, 0x12, 0x2, 0x2, 0x262, 0x264, 0xa, 0x4, 
    0x2, 0x2, 0x263, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0x3, 0x2, 
    0x2, 0x2, 0x265, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x266, 0x85, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x7, 0x1d, 
    0x2, 0x2, 0x268, 0x26a, 0x7, 0x13, 0x2, 0x2, 0x269, 0x26b, 0xa, 0x4, 
    0x2, 0x2, 0x26a, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x3, 0x2, 
    0x2, 0x2, 0x26c, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 
    0x2, 0x2, 0x26d, 0x87, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x7, 0x1d, 
    0x2, 0x2, 0x26f, 0x271, 0x7, 0xa, 0x2, 0x2, 0x270, 0x272, 0xa, 0x4, 
    0x2, 0x2, 0x271, 0x270, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 
    0x2, 0x2, 0x273, 0x271, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x89, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x7, 0x1d, 
    0x2, 0x2, 0x276, 0x278, 0x7, 0xb, 0x2, 0x2, 0x277, 0x279, 0xa, 0x4, 
    0x2, 0x2, 0x278, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x3, 0x2, 
    0x2, 0x2, 0x27a, 0x278, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 
    0x2, 0x2, 0x27b, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0x1d, 
    0x2, 0x2, 0x27d, 0x27f, 0x7, 0xc, 0x2, 0x2, 0x27e, 0x280, 0xa, 0x4, 
    0x2, 0x2, 0x27f, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x3, 0x2, 
    0x2, 0x2, 0x282, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x7, 0x1d, 
    0x2, 0x2, 0x284, 0x286, 0x7, 0xd, 0x2, 0x2, 0x285, 0x287, 0xa, 0x4, 
    0x2, 0x2, 0x286, 0x285, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 
    0x2, 0x2, 0x288, 0x286, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 0x3, 0x2, 
    0x2, 0x2, 0x289, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x93, 0x97, 0xa2, 0xab, 
    0xb8, 0xc3, 0xc8, 0xd6, 0xdc, 0xe3, 0xf7, 0x102, 0x106, 0x110, 0x116, 
    0x11d, 0x124, 0x130, 0x13b, 0x14c, 0x153, 0x15d, 0x167, 0x172, 0x17c, 
    0x183, 0x18a, 0x195, 0x1a9, 0x1b6, 0x1c1, 0x1cb, 0x1d2, 0x1d9, 0x1e0, 
    0x1e7, 0x1ee, 0x1f5, 0x1fc, 0x203, 0x20a, 0x211, 0x218, 0x21f, 0x226, 
    0x22d, 0x234, 0x23b, 0x242, 0x249, 0x250, 0x257, 0x25e, 0x265, 0x26c, 
    0x273, 0x27a, 0x281, 0x288, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT370Parser::Initializer SwiftMtParser_MT370Parser::_init;
