
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT671.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT671Listener.h"

#include "SwiftMtParser_MT671Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
using namespace antlr4;

SwiftMtParser_MT671Parser::SwiftMtParser_MT671Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT671Parser::~SwiftMtParser_MT671Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT671Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT671.g4";
}

const std::vector<std::string>& SwiftMtParser_MT671Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT671Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::BhContext* SwiftMtParser_MT671Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT671Parser::BhContext>(0);
}

SwiftMtParser_MT671Parser::AhContext* SwiftMtParser_MT671Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT671Parser::AhContext>(0);
}

SwiftMtParser_MT671Parser::MtContext* SwiftMtParser_MT671Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT671Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT671Parser::EOF, 0);
}

SwiftMtParser_MT671Parser::UhContext* SwiftMtParser_MT671Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT671Parser::UhContext>(0);
}

SwiftMtParser_MT671Parser::TrContext* SwiftMtParser_MT671Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT671Parser::TrContext>(0);
}


size_t SwiftMtParser_MT671Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleMessage;
}

void SwiftMtParser_MT671Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT671Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT671Parser::MessageContext* SwiftMtParser_MT671Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT671Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(140);
    bh();
    setState(141);
    ah();
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT671Parser::TAG_UH) {
      setState(142);
      uh();
    }
    setState(145);
    mt();
    setState(147);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT671Parser::TAG_TR) {
      setState(146);
      tr();
    }
    setState(149);
    match(SwiftMtParser_MT671Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT671Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT671Parser::TAG_BH, 0);
}

SwiftMtParser_MT671Parser::Bh_contentContext* SwiftMtParser_MT671Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT671Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT671Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleBh;
}

void SwiftMtParser_MT671Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT671Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT671Parser::BhContext* SwiftMtParser_MT671Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT671Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(151);
    match(SwiftMtParser_MT671Parser::TAG_BH);
    setState(152);
    bh_content();
    setState(153);
    match(SwiftMtParser_MT671Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT671Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, i);
}


size_t SwiftMtParser_MT671Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleBh_content;
}

void SwiftMtParser_MT671Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT671Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT671Parser::Bh_contentContext* SwiftMtParser_MT671Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT671Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(155);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(158); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT671Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT671Parser::TAG_AH, 0);
}

SwiftMtParser_MT671Parser::Ah_contentContext* SwiftMtParser_MT671Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT671Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT671Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleAh;
}

void SwiftMtParser_MT671Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT671Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT671Parser::AhContext* SwiftMtParser_MT671Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT671Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(SwiftMtParser_MT671Parser::TAG_AH);
    setState(161);
    ah_content();
    setState(162);
    match(SwiftMtParser_MT671Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT671Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, i);
}


size_t SwiftMtParser_MT671Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleAh_content;
}

void SwiftMtParser_MT671Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT671Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT671Parser::Ah_contentContext* SwiftMtParser_MT671Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT671Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(164);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(167); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT671Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT671Parser::TAG_UH, 0);
}

SwiftMtParser_MT671Parser::Sys_blockContext* SwiftMtParser_MT671Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT671Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT671Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleUh;
}

void SwiftMtParser_MT671Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT671Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT671Parser::UhContext* SwiftMtParser_MT671Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT671Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(SwiftMtParser_MT671Parser::TAG_UH);
    setState(170);
    sys_block();
    setState(171);
    match(SwiftMtParser_MT671Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT671Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT671Parser::TAG_TR, 0);
}

SwiftMtParser_MT671Parser::Sys_blockContext* SwiftMtParser_MT671Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT671Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT671Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleTr;
}

void SwiftMtParser_MT671Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT671Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT671Parser::TrContext* SwiftMtParser_MT671Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT671Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(SwiftMtParser_MT671Parser::TAG_TR);
    setState(174);
    sys_block();
    setState(175);
    match(SwiftMtParser_MT671Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT671Parser::Sys_elementContext *> SwiftMtParser_MT671Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Sys_elementContext>();
}

SwiftMtParser_MT671Parser::Sys_elementContext* SwiftMtParser_MT671Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT671Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSys_block;
}

void SwiftMtParser_MT671Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT671Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT671Parser::Sys_blockContext* SwiftMtParser_MT671Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT671Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(177);
      sys_element();
      setState(180); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT671Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT671Parser::LBRACE, 0);
}

SwiftMtParser_MT671Parser::Sys_element_keyContext* SwiftMtParser_MT671Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT671Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT671Parser::COLON, 0);
}

SwiftMtParser_MT671Parser::Sys_element_contentContext* SwiftMtParser_MT671Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT671Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT671Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSys_element;
}

void SwiftMtParser_MT671Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT671Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT671Parser::Sys_elementContext* SwiftMtParser_MT671Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT671Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(SwiftMtParser_MT671Parser::LBRACE);
    setState(183);
    sys_element_key();
    setState(184);
    match(SwiftMtParser_MT671Parser::COLON);
    setState(185);
    sys_element_content();
    setState(186);
    match(SwiftMtParser_MT671Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT671Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT671Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, i);
}


size_t SwiftMtParser_MT671Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSys_element_key;
}

void SwiftMtParser_MT671Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT671Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT671Parser::Sys_element_keyContext* SwiftMtParser_MT671Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT671Parser::RuleSys_element_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(189); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(188);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::RBRACE

      || _la == SwiftMtParser_MT671Parser::COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(191); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT671Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::RBRACE, i);
}


size_t SwiftMtParser_MT671Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSys_element_content;
}

void SwiftMtParser_MT671Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT671Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT671Parser::Sys_element_contentContext* SwiftMtParser_MT671Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT671Parser::RuleSys_element_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(193);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(196); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT671Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT671Parser::TAG_MT, 0);
}

SwiftMtParser_MT671Parser::Seq_AContext* SwiftMtParser_MT671Parser::MtContext::seq_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Seq_AContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT671Parser::MT_END, 0);
}

std::vector<SwiftMtParser_MT671Parser::Seq_BContext *> SwiftMtParser_MT671Parser::MtContext::seq_B() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Seq_BContext>();
}

SwiftMtParser_MT671Parser::Seq_BContext* SwiftMtParser_MT671Parser::MtContext::seq_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Seq_BContext>(i);
}

SwiftMtParser_MT671Parser::Seq_CContext* SwiftMtParser_MT671Parser::MtContext::seq_C() {
  return getRuleContext<SwiftMtParser_MT671Parser::Seq_CContext>(0);
}


size_t SwiftMtParser_MT671Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleMt;
}

void SwiftMtParser_MT671Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT671Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT671Parser::MtContext* SwiftMtParser_MT671Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT671Parser::RuleMt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(198);
    match(SwiftMtParser_MT671Parser::TAG_MT);
    setState(199);
    seq_A();
    setState(201); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(200);
              seq_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(203); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(206);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT671Parser::START_OF_FIELD) {
      setState(205);
      seq_C();
    }
    setState(208);
    match(SwiftMtParser_MT671Parser::MT_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Seq_AContext::Seq_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_16R_AContext* SwiftMtParser_MT671Parser::Seq_AContext::fld_16R_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16R_AContext>(0);
}

SwiftMtParser_MT671Parser::Fld_20C_AContext* SwiftMtParser_MT671Parser::Seq_AContext::fld_20C_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_20C_AContext>(0);
}

SwiftMtParser_MT671Parser::Fld_23G_AContext* SwiftMtParser_MT671Parser::Seq_AContext::fld_23G_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_23G_AContext>(0);
}

SwiftMtParser_MT671Parser::Fld_22F_AContext* SwiftMtParser_MT671Parser::Seq_AContext::fld_22F_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_AContext>(0);
}

SwiftMtParser_MT671Parser::Fld_16S_AContext* SwiftMtParser_MT671Parser::Seq_AContext::fld_16S_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16S_AContext>(0);
}

std::vector<SwiftMtParser_MT671Parser::Seq_A1Context *> SwiftMtParser_MT671Parser::Seq_AContext::seq_A1() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Seq_A1Context>();
}

SwiftMtParser_MT671Parser::Seq_A1Context* SwiftMtParser_MT671Parser::Seq_AContext::seq_A1(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Seq_A1Context>(i);
}

std::vector<SwiftMtParser_MT671Parser::Fld_95a_AContext *> SwiftMtParser_MT671Parser::Seq_AContext::fld_95a_A() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Fld_95a_AContext>();
}

SwiftMtParser_MT671Parser::Fld_95a_AContext* SwiftMtParser_MT671Parser::Seq_AContext::fld_95a_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_AContext>(i);
}

SwiftMtParser_MT671Parser::Fld_97A_AContext* SwiftMtParser_MT671Parser::Seq_AContext::fld_97A_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_97A_AContext>(0);
}


size_t SwiftMtParser_MT671Parser::Seq_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSeq_A;
}

void SwiftMtParser_MT671Parser::Seq_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A(this);
}

void SwiftMtParser_MT671Parser::Seq_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A(this);
}

SwiftMtParser_MT671Parser::Seq_AContext* SwiftMtParser_MT671Parser::seq_A() {
  Seq_AContext *_localctx = _tracker.createInstance<Seq_AContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtParser_MT671Parser::RuleSeq_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(210);
    fld_16R_A();
    setState(211);
    fld_20C_A();
    setState(212);
    fld_23G_A();
    setState(216);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(213);
        seq_A1(); 
      }
      setState(218);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
    setState(220); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(219);
              fld_95a_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(222); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(224);
    fld_22F_A();
    setState(226);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(225);
      fld_97A_A();
      break;
    }

    }
    setState(228);
    fld_16S_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_A1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Seq_A1Context::Seq_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_16R_A1Context* SwiftMtParser_MT671Parser::Seq_A1Context::fld_16R_A1() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16R_A1Context>(0);
}

SwiftMtParser_MT671Parser::Fld_20C_A1Context* SwiftMtParser_MT671Parser::Seq_A1Context::fld_20C_A1() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_20C_A1Context>(0);
}

SwiftMtParser_MT671Parser::Fld_16S_A1Context* SwiftMtParser_MT671Parser::Seq_A1Context::fld_16S_A1() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16S_A1Context>(0);
}


size_t SwiftMtParser_MT671Parser::Seq_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSeq_A1;
}

void SwiftMtParser_MT671Parser::Seq_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A1(this);
}

void SwiftMtParser_MT671Parser::Seq_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A1(this);
}

SwiftMtParser_MT671Parser::Seq_A1Context* SwiftMtParser_MT671Parser::seq_A1() {
  Seq_A1Context *_localctx = _tracker.createInstance<Seq_A1Context>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtParser_MT671Parser::RuleSeq_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    fld_16R_A1();
    setState(231);
    fld_20C_A1();
    setState(232);
    fld_16S_A1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Seq_BContext::Seq_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_16R_BContext* SwiftMtParser_MT671Parser::Seq_BContext::fld_16R_B() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16R_BContext>(0);
}

SwiftMtParser_MT671Parser::Fld_22H_BContext* SwiftMtParser_MT671Parser::Seq_BContext::fld_22H_B() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22H_BContext>(0);
}

SwiftMtParser_MT671Parser::Fld_11A_BContext* SwiftMtParser_MT671Parser::Seq_BContext::fld_11A_B() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_11A_BContext>(0);
}

SwiftMtParser_MT671Parser::Fld_98A_BContext* SwiftMtParser_MT671Parser::Seq_BContext::fld_98A_B() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_98A_BContext>(0);
}

SwiftMtParser_MT671Parser::Fld_16S_BContext* SwiftMtParser_MT671Parser::Seq_BContext::fld_16S_B() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16S_BContext>(0);
}

SwiftMtParser_MT671Parser::Fld_20C_BContext* SwiftMtParser_MT671Parser::Seq_BContext::fld_20C_B() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_20C_BContext>(0);
}

std::vector<SwiftMtParser_MT671Parser::Fld_22F_BContext *> SwiftMtParser_MT671Parser::Seq_BContext::fld_22F_B() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Fld_22F_BContext>();
}

SwiftMtParser_MT671Parser::Fld_22F_BContext* SwiftMtParser_MT671Parser::Seq_BContext::fld_22F_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_BContext>(i);
}

std::vector<SwiftMtParser_MT671Parser::Seq_B1Context *> SwiftMtParser_MT671Parser::Seq_BContext::seq_B1() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Seq_B1Context>();
}

SwiftMtParser_MT671Parser::Seq_B1Context* SwiftMtParser_MT671Parser::Seq_BContext::seq_B1(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Seq_B1Context>(i);
}

SwiftMtParser_MT671Parser::Seq_B2Context* SwiftMtParser_MT671Parser::Seq_BContext::seq_B2() {
  return getRuleContext<SwiftMtParser_MT671Parser::Seq_B2Context>(0);
}


size_t SwiftMtParser_MT671Parser::Seq_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSeq_B;
}

void SwiftMtParser_MT671Parser::Seq_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B(this);
}

void SwiftMtParser_MT671Parser::Seq_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B(this);
}

SwiftMtParser_MT671Parser::Seq_BContext* SwiftMtParser_MT671Parser::seq_B() {
  Seq_BContext *_localctx = _tracker.createInstance<Seq_BContext>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtParser_MT671Parser::RuleSeq_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(234);
    fld_16R_B();
    setState(235);
    fld_22H_B();
    setState(237);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(236);
      fld_20C_B();
      break;
    }

    }
    setState(239);
    fld_11A_B();
    setState(240);
    fld_98A_B();
    setState(242); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(241);
              fld_22F_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(244); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(247); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(246);
              seq_B1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(249); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(252);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(251);
      seq_B2();
      break;
    }

    }
    setState(254);
    fld_16S_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_B1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Seq_B1Context::Seq_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_16R_B1Context* SwiftMtParser_MT671Parser::Seq_B1Context::fld_16R_B1() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16R_B1Context>(0);
}

SwiftMtParser_MT671Parser::Fld_16S_B1Context* SwiftMtParser_MT671Parser::Seq_B1Context::fld_16S_B1() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16S_B1Context>(0);
}

std::vector<SwiftMtParser_MT671Parser::Fld_95a_B1Context *> SwiftMtParser_MT671Parser::Seq_B1Context::fld_95a_B1() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Fld_95a_B1Context>();
}

SwiftMtParser_MT671Parser::Fld_95a_B1Context* SwiftMtParser_MT671Parser::Seq_B1Context::fld_95a_B1(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_B1Context>(i);
}

SwiftMtParser_MT671Parser::Fld_97A_B1Context* SwiftMtParser_MT671Parser::Seq_B1Context::fld_97A_B1() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_97A_B1Context>(0);
}


size_t SwiftMtParser_MT671Parser::Seq_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSeq_B1;
}

void SwiftMtParser_MT671Parser::Seq_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B1(this);
}

void SwiftMtParser_MT671Parser::Seq_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B1(this);
}

SwiftMtParser_MT671Parser::Seq_B1Context* SwiftMtParser_MT671Parser::seq_B1() {
  Seq_B1Context *_localctx = _tracker.createInstance<Seq_B1Context>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtParser_MT671Parser::RuleSeq_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(256);
    fld_16R_B1();
    setState(258); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(257);
              fld_95a_B1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(260); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(263);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(262);
      fld_97A_B1();
      break;
    }

    }
    setState(265);
    fld_16S_B1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_B2Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Seq_B2Context::Seq_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_16R_B2Context* SwiftMtParser_MT671Parser::Seq_B2Context::fld_16R_B2() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16R_B2Context>(0);
}

SwiftMtParser_MT671Parser::Fld_16S_B2Context* SwiftMtParser_MT671Parser::Seq_B2Context::fld_16S_B2() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16S_B2Context>(0);
}

std::vector<SwiftMtParser_MT671Parser::Fld_70E_B2Context *> SwiftMtParser_MT671Parser::Seq_B2Context::fld_70E_B2() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Fld_70E_B2Context>();
}

SwiftMtParser_MT671Parser::Fld_70E_B2Context* SwiftMtParser_MT671Parser::Seq_B2Context::fld_70E_B2(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_70E_B2Context>(i);
}

SwiftMtParser_MT671Parser::Fld_22F_B2Context* SwiftMtParser_MT671Parser::Seq_B2Context::fld_22F_B2() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_B2Context>(0);
}

SwiftMtParser_MT671Parser::Fld_22H_B2Context* SwiftMtParser_MT671Parser::Seq_B2Context::fld_22H_B2() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22H_B2Context>(0);
}


size_t SwiftMtParser_MT671Parser::Seq_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSeq_B2;
}

void SwiftMtParser_MT671Parser::Seq_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B2(this);
}

void SwiftMtParser_MT671Parser::Seq_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B2(this);
}

SwiftMtParser_MT671Parser::Seq_B2Context* SwiftMtParser_MT671Parser::seq_B2() {
  Seq_B2Context *_localctx = _tracker.createInstance<Seq_B2Context>(_ctx, getState());
  enterRule(_localctx, 32, SwiftMtParser_MT671Parser::RuleSeq_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(267);
    fld_16R_B2();
    setState(271);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(268);
        fld_70E_B2(); 
      }
      setState(273);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(275);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(274);
      fld_22F_B2();
      break;
    }

    }
    setState(278);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(277);
      fld_22H_B2();
      break;
    }

    }
    setState(280);
    fld_16S_B2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_CContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Seq_CContext::Seq_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_16R_CContext* SwiftMtParser_MT671Parser::Seq_CContext::fld_16R_C() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16R_CContext>(0);
}

SwiftMtParser_MT671Parser::Fld_16S_CContext* SwiftMtParser_MT671Parser::Seq_CContext::fld_16S_C() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_16S_CContext>(0);
}

std::vector<SwiftMtParser_MT671Parser::Fld_70E_CContext *> SwiftMtParser_MT671Parser::Seq_CContext::fld_70E_C() {
  return getRuleContexts<SwiftMtParser_MT671Parser::Fld_70E_CContext>();
}

SwiftMtParser_MT671Parser::Fld_70E_CContext* SwiftMtParser_MT671Parser::Seq_CContext::fld_70E_C(size_t i) {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_70E_CContext>(i);
}

SwiftMtParser_MT671Parser::Fld_22F_CContext* SwiftMtParser_MT671Parser::Seq_CContext::fld_22F_C() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_CContext>(0);
}


size_t SwiftMtParser_MT671Parser::Seq_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleSeq_C;
}

void SwiftMtParser_MT671Parser::Seq_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_C(this);
}

void SwiftMtParser_MT671Parser::Seq_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_C(this);
}

SwiftMtParser_MT671Parser::Seq_CContext* SwiftMtParser_MT671Parser::seq_C() {
  Seq_CContext *_localctx = _tracker.createInstance<Seq_CContext>(_ctx, getState());
  enterRule(_localctx, 34, SwiftMtParser_MT671Parser::RuleSeq_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(282);
    fld_16R_C();
    setState(286);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(283);
        fld_70E_C(); 
      }
      setState(288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
    setState(290);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(289);
      fld_22F_C();
      break;
    }

    }
    setState(292);
    fld_16S_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16R_AContext::Fld_16R_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16R_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16R_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16R_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16R_A;
}

void SwiftMtParser_MT671Parser::Fld_16R_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A(this);
}

void SwiftMtParser_MT671Parser::Fld_16R_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A(this);
}

SwiftMtParser_MT671Parser::Fld_16R_AContext* SwiftMtParser_MT671Parser::fld_16R_A() {
  Fld_16R_AContext *_localctx = _tracker.createInstance<Fld_16R_AContext>(_ctx, getState());
  enterRule(_localctx, 36, SwiftMtParser_MT671Parser::RuleFld_16R_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(294);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(295);
    match(SwiftMtParser_MT671Parser::T__0);
    setState(297); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(296);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(299); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_20C_AContext::Fld_20C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_20C_A_CContext* SwiftMtParser_MT671Parser::Fld_20C_AContext::fld_20C_A_C() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_20C_A_CContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_20C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_20C_A;
}

void SwiftMtParser_MT671Parser::Fld_20C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A(this);
}

void SwiftMtParser_MT671Parser::Fld_20C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A(this);
}

SwiftMtParser_MT671Parser::Fld_20C_AContext* SwiftMtParser_MT671Parser::fld_20C_A() {
  Fld_20C_AContext *_localctx = _tracker.createInstance<Fld_20C_AContext>(_ctx, getState());
  enterRule(_localctx, 38, SwiftMtParser_MT671Parser::RuleFld_20C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(301);
    fld_20C_A_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_23G_AContext::Fld_23G_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_23G_A_GContext* SwiftMtParser_MT671Parser::Fld_23G_AContext::fld_23G_A_G() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_23G_A_GContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_23G_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_23G_A;
}

void SwiftMtParser_MT671Parser::Fld_23G_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A(this);
}

void SwiftMtParser_MT671Parser::Fld_23G_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A(this);
}

SwiftMtParser_MT671Parser::Fld_23G_AContext* SwiftMtParser_MT671Parser::fld_23G_A() {
  Fld_23G_AContext *_localctx = _tracker.createInstance<Fld_23G_AContext>(_ctx, getState());
  enterRule(_localctx, 40, SwiftMtParser_MT671Parser::RuleFld_23G_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(303);
    fld_23G_A_G();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16R_A1Context::Fld_16R_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16R_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16R_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16R_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16R_A1;
}

void SwiftMtParser_MT671Parser::Fld_16R_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A1(this);
}

void SwiftMtParser_MT671Parser::Fld_16R_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A1(this);
}

SwiftMtParser_MT671Parser::Fld_16R_A1Context* SwiftMtParser_MT671Parser::fld_16R_A1() {
  Fld_16R_A1Context *_localctx = _tracker.createInstance<Fld_16R_A1Context>(_ctx, getState());
  enterRule(_localctx, 42, SwiftMtParser_MT671Parser::RuleFld_16R_A1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(306);
    match(SwiftMtParser_MT671Parser::T__0);
    setState(308); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(307);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(310); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_20C_A1Context::Fld_20C_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_20C_A1_CContext* SwiftMtParser_MT671Parser::Fld_20C_A1Context::fld_20C_A1_C() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_20C_A1_CContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_20C_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_20C_A1;
}

void SwiftMtParser_MT671Parser::Fld_20C_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1(this);
}

void SwiftMtParser_MT671Parser::Fld_20C_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1(this);
}

SwiftMtParser_MT671Parser::Fld_20C_A1Context* SwiftMtParser_MT671Parser::fld_20C_A1() {
  Fld_20C_A1Context *_localctx = _tracker.createInstance<Fld_20C_A1Context>(_ctx, getState());
  enterRule(_localctx, 44, SwiftMtParser_MT671Parser::RuleFld_20C_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
    fld_20C_A1_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_A1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16S_A1Context::Fld_16S_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16S_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16S_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16S_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16S_A1;
}

void SwiftMtParser_MT671Parser::Fld_16S_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A1(this);
}

void SwiftMtParser_MT671Parser::Fld_16S_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A1(this);
}

SwiftMtParser_MT671Parser::Fld_16S_A1Context* SwiftMtParser_MT671Parser::fld_16S_A1() {
  Fld_16S_A1Context *_localctx = _tracker.createInstance<Fld_16S_A1Context>(_ctx, getState());
  enterRule(_localctx, 46, SwiftMtParser_MT671Parser::RuleFld_16S_A1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(315);
    match(SwiftMtParser_MT671Parser::T__1);
    setState(317); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(316);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(319); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_AContext::Fld_95a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_95a_A_PContext* SwiftMtParser_MT671Parser::Fld_95a_AContext::fld_95a_A_P() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_A_PContext>(0);
}

SwiftMtParser_MT671Parser::Fld_95a_A_QContext* SwiftMtParser_MT671Parser::Fld_95a_AContext::fld_95a_A_Q() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_A_QContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_A;
}

void SwiftMtParser_MT671Parser::Fld_95a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A(this);
}

SwiftMtParser_MT671Parser::Fld_95a_AContext* SwiftMtParser_MT671Parser::fld_95a_A() {
  Fld_95a_AContext *_localctx = _tracker.createInstance<Fld_95a_AContext>(_ctx, getState());
  enterRule(_localctx, 48, SwiftMtParser_MT671Parser::RuleFld_95a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(321);
      fld_95a_A_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(322);
      fld_95a_A_Q();
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

//----------------- Fld_22F_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_AContext::Fld_22F_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_22F_A_FContext* SwiftMtParser_MT671Parser::Fld_22F_AContext::fld_22F_A_F() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_A_FContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_A;
}

void SwiftMtParser_MT671Parser::Fld_22F_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_A(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_A(this);
}

SwiftMtParser_MT671Parser::Fld_22F_AContext* SwiftMtParser_MT671Parser::fld_22F_A() {
  Fld_22F_AContext *_localctx = _tracker.createInstance<Fld_22F_AContext>(_ctx, getState());
  enterRule(_localctx, 50, SwiftMtParser_MT671Parser::RuleFld_22F_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(325);
    fld_22F_A_F();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_97A_AContext::Fld_97A_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_97A_A_AContext* SwiftMtParser_MT671Parser::Fld_97A_AContext::fld_97A_A_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_97A_A_AContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_97A_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_97A_A;
}

void SwiftMtParser_MT671Parser::Fld_97A_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_A(this);
}

void SwiftMtParser_MT671Parser::Fld_97A_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_A(this);
}

SwiftMtParser_MT671Parser::Fld_97A_AContext* SwiftMtParser_MT671Parser::fld_97A_A() {
  Fld_97A_AContext *_localctx = _tracker.createInstance<Fld_97A_AContext>(_ctx, getState());
  enterRule(_localctx, 52, SwiftMtParser_MT671Parser::RuleFld_97A_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    fld_97A_A_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16S_AContext::Fld_16S_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16S_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16S_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16S_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16S_A;
}

void SwiftMtParser_MT671Parser::Fld_16S_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A(this);
}

void SwiftMtParser_MT671Parser::Fld_16S_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A(this);
}

SwiftMtParser_MT671Parser::Fld_16S_AContext* SwiftMtParser_MT671Parser::fld_16S_A() {
  Fld_16S_AContext *_localctx = _tracker.createInstance<Fld_16S_AContext>(_ctx, getState());
  enterRule(_localctx, 54, SwiftMtParser_MT671Parser::RuleFld_16S_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(330);
    match(SwiftMtParser_MT671Parser::T__1);
    setState(332); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(331);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(334); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16R_BContext::Fld_16R_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16R_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16R_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16R_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16R_B;
}

void SwiftMtParser_MT671Parser::Fld_16R_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B(this);
}

void SwiftMtParser_MT671Parser::Fld_16R_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B(this);
}

SwiftMtParser_MT671Parser::Fld_16R_BContext* SwiftMtParser_MT671Parser::fld_16R_B() {
  Fld_16R_BContext *_localctx = _tracker.createInstance<Fld_16R_BContext>(_ctx, getState());
  enterRule(_localctx, 56, SwiftMtParser_MT671Parser::RuleFld_16R_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(337);
    match(SwiftMtParser_MT671Parser::T__0);
    setState(339); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(338);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(341); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22H_BContext::Fld_22H_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_22H_B_HContext* SwiftMtParser_MT671Parser::Fld_22H_BContext::fld_22H_B_H() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22H_B_HContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_22H_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22H_B;
}

void SwiftMtParser_MT671Parser::Fld_22H_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B(this);
}

void SwiftMtParser_MT671Parser::Fld_22H_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B(this);
}

SwiftMtParser_MT671Parser::Fld_22H_BContext* SwiftMtParser_MT671Parser::fld_22H_B() {
  Fld_22H_BContext *_localctx = _tracker.createInstance<Fld_22H_BContext>(_ctx, getState());
  enterRule(_localctx, 58, SwiftMtParser_MT671Parser::RuleFld_22H_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    fld_22H_B_H();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_20C_BContext::Fld_20C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_20C_B_CContext* SwiftMtParser_MT671Parser::Fld_20C_BContext::fld_20C_B_C() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_20C_B_CContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_20C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_20C_B;
}

void SwiftMtParser_MT671Parser::Fld_20C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B(this);
}

void SwiftMtParser_MT671Parser::Fld_20C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B(this);
}

SwiftMtParser_MT671Parser::Fld_20C_BContext* SwiftMtParser_MT671Parser::fld_20C_B() {
  Fld_20C_BContext *_localctx = _tracker.createInstance<Fld_20C_BContext>(_ctx, getState());
  enterRule(_localctx, 60, SwiftMtParser_MT671Parser::RuleFld_20C_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(345);
    fld_20C_B_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_11A_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_11A_BContext::Fld_11A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_11A_B_AContext* SwiftMtParser_MT671Parser::Fld_11A_BContext::fld_11A_B_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_11A_B_AContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_11A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_11A_B;
}

void SwiftMtParser_MT671Parser::Fld_11A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_11A_B(this);
}

void SwiftMtParser_MT671Parser::Fld_11A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_11A_B(this);
}

SwiftMtParser_MT671Parser::Fld_11A_BContext* SwiftMtParser_MT671Parser::fld_11A_B() {
  Fld_11A_BContext *_localctx = _tracker.createInstance<Fld_11A_BContext>(_ctx, getState());
  enterRule(_localctx, 62, SwiftMtParser_MT671Parser::RuleFld_11A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    fld_11A_B_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_98A_BContext::Fld_98A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_98A_B_AContext* SwiftMtParser_MT671Parser::Fld_98A_BContext::fld_98A_B_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_98A_B_AContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_98A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_98A_B;
}

void SwiftMtParser_MT671Parser::Fld_98A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B(this);
}

void SwiftMtParser_MT671Parser::Fld_98A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B(this);
}

SwiftMtParser_MT671Parser::Fld_98A_BContext* SwiftMtParser_MT671Parser::fld_98A_B() {
  Fld_98A_BContext *_localctx = _tracker.createInstance<Fld_98A_BContext>(_ctx, getState());
  enterRule(_localctx, 64, SwiftMtParser_MT671Parser::RuleFld_98A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(349);
    fld_98A_B_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_BContext::Fld_22F_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_22F_B_FContext* SwiftMtParser_MT671Parser::Fld_22F_BContext::fld_22F_B_F() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_B_FContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_B;
}

void SwiftMtParser_MT671Parser::Fld_22F_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_B(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_B(this);
}

SwiftMtParser_MT671Parser::Fld_22F_BContext* SwiftMtParser_MT671Parser::fld_22F_B() {
  Fld_22F_BContext *_localctx = _tracker.createInstance<Fld_22F_BContext>(_ctx, getState());
  enterRule(_localctx, 66, SwiftMtParser_MT671Parser::RuleFld_22F_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(351);
    fld_22F_B_F();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16R_B1Context::Fld_16R_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16R_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16R_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16R_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16R_B1;
}

void SwiftMtParser_MT671Parser::Fld_16R_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B1(this);
}

void SwiftMtParser_MT671Parser::Fld_16R_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B1(this);
}

SwiftMtParser_MT671Parser::Fld_16R_B1Context* SwiftMtParser_MT671Parser::fld_16R_B1() {
  Fld_16R_B1Context *_localctx = _tracker.createInstance<Fld_16R_B1Context>(_ctx, getState());
  enterRule(_localctx, 68, SwiftMtParser_MT671Parser::RuleFld_16R_B1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(354);
    match(SwiftMtParser_MT671Parser::T__0);
    setState(356); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(355);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(358); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_B1Context::Fld_95a_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_95a_B1_PContext* SwiftMtParser_MT671Parser::Fld_95a_B1Context::fld_95a_B1_P() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_B1_PContext>(0);
}

SwiftMtParser_MT671Parser::Fld_95a_B1_QContext* SwiftMtParser_MT671Parser::Fld_95a_B1Context::fld_95a_B1_Q() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_B1_QContext>(0);
}

SwiftMtParser_MT671Parser::Fld_95a_B1_RContext* SwiftMtParser_MT671Parser::Fld_95a_B1Context::fld_95a_B1_R() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_B1_RContext>(0);
}

SwiftMtParser_MT671Parser::Fld_95a_B1_SContext* SwiftMtParser_MT671Parser::Fld_95a_B1Context::fld_95a_B1_S() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_95a_B1_SContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_B1;
}

void SwiftMtParser_MT671Parser::Fld_95a_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1(this);
}

SwiftMtParser_MT671Parser::Fld_95a_B1Context* SwiftMtParser_MT671Parser::fld_95a_B1() {
  Fld_95a_B1Context *_localctx = _tracker.createInstance<Fld_95a_B1Context>(_ctx, getState());
  enterRule(_localctx, 70, SwiftMtParser_MT671Parser::RuleFld_95a_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(364);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(360);
      fld_95a_B1_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(361);
      fld_95a_B1_Q();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(362);
      fld_95a_B1_R();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(363);
      fld_95a_B1_S();
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

SwiftMtParser_MT671Parser::Fld_97A_B1Context::Fld_97A_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_97A_B1_AContext* SwiftMtParser_MT671Parser::Fld_97A_B1Context::fld_97A_B1_A() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_97A_B1_AContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_97A_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_97A_B1;
}

void SwiftMtParser_MT671Parser::Fld_97A_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B1(this);
}

void SwiftMtParser_MT671Parser::Fld_97A_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B1(this);
}

SwiftMtParser_MT671Parser::Fld_97A_B1Context* SwiftMtParser_MT671Parser::fld_97A_B1() {
  Fld_97A_B1Context *_localctx = _tracker.createInstance<Fld_97A_B1Context>(_ctx, getState());
  enterRule(_localctx, 72, SwiftMtParser_MT671Parser::RuleFld_97A_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(366);
    fld_97A_B1_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_B1Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16S_B1Context::Fld_16S_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16S_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16S_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16S_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16S_B1;
}

void SwiftMtParser_MT671Parser::Fld_16S_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B1(this);
}

void SwiftMtParser_MT671Parser::Fld_16S_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B1(this);
}

SwiftMtParser_MT671Parser::Fld_16S_B1Context* SwiftMtParser_MT671Parser::fld_16S_B1() {
  Fld_16S_B1Context *_localctx = _tracker.createInstance<Fld_16S_B1Context>(_ctx, getState());
  enterRule(_localctx, 74, SwiftMtParser_MT671Parser::RuleFld_16S_B1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(369);
    match(SwiftMtParser_MT671Parser::T__1);
    setState(371); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(370);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(373); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B2Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16R_B2Context::Fld_16R_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16R_B2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16R_B2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16R_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16R_B2;
}

void SwiftMtParser_MT671Parser::Fld_16R_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B2(this);
}

void SwiftMtParser_MT671Parser::Fld_16R_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B2(this);
}

SwiftMtParser_MT671Parser::Fld_16R_B2Context* SwiftMtParser_MT671Parser::fld_16R_B2() {
  Fld_16R_B2Context *_localctx = _tracker.createInstance<Fld_16R_B2Context>(_ctx, getState());
  enterRule(_localctx, 76, SwiftMtParser_MT671Parser::RuleFld_16R_B2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(375);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(376);
    match(SwiftMtParser_MT671Parser::T__0);
    setState(378); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(377);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(380); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_B2Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_70E_B2Context::Fld_70E_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_70E_B2_EContext* SwiftMtParser_MT671Parser::Fld_70E_B2Context::fld_70E_B2_E() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_70E_B2_EContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_70E_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_70E_B2;
}

void SwiftMtParser_MT671Parser::Fld_70E_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_B2(this);
}

void SwiftMtParser_MT671Parser::Fld_70E_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_B2(this);
}

SwiftMtParser_MT671Parser::Fld_70E_B2Context* SwiftMtParser_MT671Parser::fld_70E_B2() {
  Fld_70E_B2Context *_localctx = _tracker.createInstance<Fld_70E_B2Context>(_ctx, getState());
  enterRule(_localctx, 78, SwiftMtParser_MT671Parser::RuleFld_70E_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    fld_70E_B2_E();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_B2Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_B2Context::Fld_22F_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_22F_B2_FContext* SwiftMtParser_MT671Parser::Fld_22F_B2Context::fld_22F_B2_F() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_B2_FContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_B2;
}

void SwiftMtParser_MT671Parser::Fld_22F_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_B2(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_B2(this);
}

SwiftMtParser_MT671Parser::Fld_22F_B2Context* SwiftMtParser_MT671Parser::fld_22F_B2() {
  Fld_22F_B2Context *_localctx = _tracker.createInstance<Fld_22F_B2Context>(_ctx, getState());
  enterRule(_localctx, 80, SwiftMtParser_MT671Parser::RuleFld_22F_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(384);
    fld_22F_B2_F();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_B2Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22H_B2Context::Fld_22H_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_22H_B2_HContext* SwiftMtParser_MT671Parser::Fld_22H_B2Context::fld_22H_B2_H() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22H_B2_HContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_22H_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22H_B2;
}

void SwiftMtParser_MT671Parser::Fld_22H_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B2(this);
}

void SwiftMtParser_MT671Parser::Fld_22H_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B2(this);
}

SwiftMtParser_MT671Parser::Fld_22H_B2Context* SwiftMtParser_MT671Parser::fld_22H_B2() {
  Fld_22H_B2Context *_localctx = _tracker.createInstance<Fld_22H_B2Context>(_ctx, getState());
  enterRule(_localctx, 82, SwiftMtParser_MT671Parser::RuleFld_22H_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    fld_22H_B2_H();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_B2Context ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16S_B2Context::Fld_16S_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16S_B2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16S_B2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16S_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16S_B2;
}

void SwiftMtParser_MT671Parser::Fld_16S_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B2(this);
}

void SwiftMtParser_MT671Parser::Fld_16S_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B2(this);
}

SwiftMtParser_MT671Parser::Fld_16S_B2Context* SwiftMtParser_MT671Parser::fld_16S_B2() {
  Fld_16S_B2Context *_localctx = _tracker.createInstance<Fld_16S_B2Context>(_ctx, getState());
  enterRule(_localctx, 84, SwiftMtParser_MT671Parser::RuleFld_16S_B2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(389);
    match(SwiftMtParser_MT671Parser::T__1);
    setState(391); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(390);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(393); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_BContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16S_BContext::Fld_16S_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16S_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16S_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16S_BContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16S_B;
}

void SwiftMtParser_MT671Parser::Fld_16S_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B(this);
}

void SwiftMtParser_MT671Parser::Fld_16S_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B(this);
}

SwiftMtParser_MT671Parser::Fld_16S_BContext* SwiftMtParser_MT671Parser::fld_16S_B() {
  Fld_16S_BContext *_localctx = _tracker.createInstance<Fld_16S_BContext>(_ctx, getState());
  enterRule(_localctx, 86, SwiftMtParser_MT671Parser::RuleFld_16S_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(395);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(396);
    match(SwiftMtParser_MT671Parser::T__1);
    setState(398); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(397);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
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
      setState(400); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_CContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16R_CContext::Fld_16R_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16R_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16R_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16R_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16R_C;
}

void SwiftMtParser_MT671Parser::Fld_16R_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_C(this);
}

void SwiftMtParser_MT671Parser::Fld_16R_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_C(this);
}

SwiftMtParser_MT671Parser::Fld_16R_CContext* SwiftMtParser_MT671Parser::fld_16R_C() {
  Fld_16R_CContext *_localctx = _tracker.createInstance<Fld_16R_CContext>(_ctx, getState());
  enterRule(_localctx, 88, SwiftMtParser_MT671Parser::RuleFld_16R_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(403);
    match(SwiftMtParser_MT671Parser::T__0);
    setState(405); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(404);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(407); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_CContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_70E_CContext::Fld_70E_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_70E_C_EContext* SwiftMtParser_MT671Parser::Fld_70E_CContext::fld_70E_C_E() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_70E_C_EContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_70E_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_70E_C;
}

void SwiftMtParser_MT671Parser::Fld_70E_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_C(this);
}

void SwiftMtParser_MT671Parser::Fld_70E_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_C(this);
}

SwiftMtParser_MT671Parser::Fld_70E_CContext* SwiftMtParser_MT671Parser::fld_70E_C() {
  Fld_70E_CContext *_localctx = _tracker.createInstance<Fld_70E_CContext>(_ctx, getState());
  enterRule(_localctx, 90, SwiftMtParser_MT671Parser::RuleFld_70E_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    fld_70E_C_E();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_CContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_CContext::Fld_22F_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT671Parser::Fld_22F_C_FContext* SwiftMtParser_MT671Parser::Fld_22F_CContext::fld_22F_C_F() {
  return getRuleContext<SwiftMtParser_MT671Parser::Fld_22F_C_FContext>(0);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_C;
}

void SwiftMtParser_MT671Parser::Fld_22F_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_C(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_C(this);
}

SwiftMtParser_MT671Parser::Fld_22F_CContext* SwiftMtParser_MT671Parser::fld_22F_C() {
  Fld_22F_CContext *_localctx = _tracker.createInstance<Fld_22F_CContext>(_ctx, getState());
  enterRule(_localctx, 92, SwiftMtParser_MT671Parser::RuleFld_22F_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    fld_22F_C_F();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_CContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_16S_CContext::Fld_16S_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_16S_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_16S_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_16S_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_16S_C;
}

void SwiftMtParser_MT671Parser::Fld_16S_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_C(this);
}

void SwiftMtParser_MT671Parser::Fld_16S_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_C(this);
}

SwiftMtParser_MT671Parser::Fld_16S_CContext* SwiftMtParser_MT671Parser::fld_16S_C() {
  Fld_16S_CContext *_localctx = _tracker.createInstance<Fld_16S_CContext>(_ctx, getState());
  enterRule(_localctx, 94, SwiftMtParser_MT671Parser::RuleFld_16S_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(413);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(414);
    match(SwiftMtParser_MT671Parser::T__1);
    setState(416); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(415);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
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
      setState(418); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx);
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

SwiftMtParser_MT671Parser::Fld_20C_A_CContext::Fld_20C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_20C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_20C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_20C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_20C_A_C;
}

void SwiftMtParser_MT671Parser::Fld_20C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A_C(this);
}

void SwiftMtParser_MT671Parser::Fld_20C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A_C(this);
}

SwiftMtParser_MT671Parser::Fld_20C_A_CContext* SwiftMtParser_MT671Parser::fld_20C_A_C() {
  Fld_20C_A_CContext *_localctx = _tracker.createInstance<Fld_20C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 96, SwiftMtParser_MT671Parser::RuleFld_20C_A_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(421);
    match(SwiftMtParser_MT671Parser::T__2);
    setState(423); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(422);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(425); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_A_GContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_23G_A_GContext::Fld_23G_A_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_23G_A_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_23G_A_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_23G_A_GContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_23G_A_G;
}

void SwiftMtParser_MT671Parser::Fld_23G_A_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A_G(this);
}

void SwiftMtParser_MT671Parser::Fld_23G_A_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A_G(this);
}

SwiftMtParser_MT671Parser::Fld_23G_A_GContext* SwiftMtParser_MT671Parser::fld_23G_A_G() {
  Fld_23G_A_GContext *_localctx = _tracker.createInstance<Fld_23G_A_GContext>(_ctx, getState());
  enterRule(_localctx, 98, SwiftMtParser_MT671Parser::RuleFld_23G_A_G);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(428);
    match(SwiftMtParser_MT671Parser::T__3);
    setState(430); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(429);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(432); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1_CContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_20C_A1_CContext::Fld_20C_A1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_20C_A1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_20C_A1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_20C_A1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_20C_A1_C;
}

void SwiftMtParser_MT671Parser::Fld_20C_A1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1_C(this);
}

void SwiftMtParser_MT671Parser::Fld_20C_A1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1_C(this);
}

SwiftMtParser_MT671Parser::Fld_20C_A1_CContext* SwiftMtParser_MT671Parser::fld_20C_A1_C() {
  Fld_20C_A1_CContext *_localctx = _tracker.createInstance<Fld_20C_A1_CContext>(_ctx, getState());
  enterRule(_localctx, 100, SwiftMtParser_MT671Parser::RuleFld_20C_A1_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(435);
    match(SwiftMtParser_MT671Parser::T__2);
    setState(437); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(436);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(439); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_PContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_A_PContext::Fld_95a_A_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_95a_A_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_95a_A_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_A_PContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_A_P;
}

void SwiftMtParser_MT671Parser::Fld_95a_A_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_P(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_A_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_P(this);
}

SwiftMtParser_MT671Parser::Fld_95a_A_PContext* SwiftMtParser_MT671Parser::fld_95a_A_P() {
  Fld_95a_A_PContext *_localctx = _tracker.createInstance<Fld_95a_A_PContext>(_ctx, getState());
  enterRule(_localctx, 102, SwiftMtParser_MT671Parser::RuleFld_95a_A_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(442);
    match(SwiftMtParser_MT671Parser::T__4);
    setState(444); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(443);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(446); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_QContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_A_QContext::Fld_95a_A_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_95a_A_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_95a_A_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_A_QContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_A_Q;
}

void SwiftMtParser_MT671Parser::Fld_95a_A_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_Q(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_A_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_Q(this);
}

SwiftMtParser_MT671Parser::Fld_95a_A_QContext* SwiftMtParser_MT671Parser::fld_95a_A_Q() {
  Fld_95a_A_QContext *_localctx = _tracker.createInstance<Fld_95a_A_QContext>(_ctx, getState());
  enterRule(_localctx, 104, SwiftMtParser_MT671Parser::RuleFld_95a_A_Q);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(449);
    match(SwiftMtParser_MT671Parser::T__5);
    setState(451); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(450);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(453); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_A_FContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_A_FContext::Fld_22F_A_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_22F_A_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_22F_A_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_A_FContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_A_F;
}

void SwiftMtParser_MT671Parser::Fld_22F_A_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_A_F(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_A_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_A_F(this);
}

SwiftMtParser_MT671Parser::Fld_22F_A_FContext* SwiftMtParser_MT671Parser::fld_22F_A_F() {
  Fld_22F_A_FContext *_localctx = _tracker.createInstance<Fld_22F_A_FContext>(_ctx, getState());
  enterRule(_localctx, 106, SwiftMtParser_MT671Parser::RuleFld_22F_A_F);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(456);
    match(SwiftMtParser_MT671Parser::T__6);
    setState(458); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(457);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(460); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_A_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_97A_A_AContext::Fld_97A_A_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_97A_A_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_97A_A_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_97A_A_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_97A_A_A;
}

void SwiftMtParser_MT671Parser::Fld_97A_A_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_A_A(this);
}

void SwiftMtParser_MT671Parser::Fld_97A_A_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_A_A(this);
}

SwiftMtParser_MT671Parser::Fld_97A_A_AContext* SwiftMtParser_MT671Parser::fld_97A_A_A() {
  Fld_97A_A_AContext *_localctx = _tracker.createInstance<Fld_97A_A_AContext>(_ctx, getState());
  enterRule(_localctx, 108, SwiftMtParser_MT671Parser::RuleFld_97A_A_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(463);
    match(SwiftMtParser_MT671Parser::T__7);
    setState(465); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(464);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(467); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_B_HContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22H_B_HContext::Fld_22H_B_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_22H_B_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_22H_B_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_22H_B_HContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22H_B_H;
}

void SwiftMtParser_MT671Parser::Fld_22H_B_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B_H(this);
}

void SwiftMtParser_MT671Parser::Fld_22H_B_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B_H(this);
}

SwiftMtParser_MT671Parser::Fld_22H_B_HContext* SwiftMtParser_MT671Parser::fld_22H_B_H() {
  Fld_22H_B_HContext *_localctx = _tracker.createInstance<Fld_22H_B_HContext>(_ctx, getState());
  enterRule(_localctx, 110, SwiftMtParser_MT671Parser::RuleFld_22H_B_H);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(470);
    match(SwiftMtParser_MT671Parser::T__8);
    setState(472); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(471);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(474); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_20C_B_CContext::Fld_20C_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_20C_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_20C_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_20C_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_20C_B_C;
}

void SwiftMtParser_MT671Parser::Fld_20C_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B_C(this);
}

void SwiftMtParser_MT671Parser::Fld_20C_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B_C(this);
}

SwiftMtParser_MT671Parser::Fld_20C_B_CContext* SwiftMtParser_MT671Parser::fld_20C_B_C() {
  Fld_20C_B_CContext *_localctx = _tracker.createInstance<Fld_20C_B_CContext>(_ctx, getState());
  enterRule(_localctx, 112, SwiftMtParser_MT671Parser::RuleFld_20C_B_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(476);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(477);
    match(SwiftMtParser_MT671Parser::T__2);
    setState(479); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(478);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(481); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_11A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_11A_B_AContext::Fld_11A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_11A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_11A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_11A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_11A_B_A;
}

void SwiftMtParser_MT671Parser::Fld_11A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_11A_B_A(this);
}

void SwiftMtParser_MT671Parser::Fld_11A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_11A_B_A(this);
}

SwiftMtParser_MT671Parser::Fld_11A_B_AContext* SwiftMtParser_MT671Parser::fld_11A_B_A() {
  Fld_11A_B_AContext *_localctx = _tracker.createInstance<Fld_11A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 114, SwiftMtParser_MT671Parser::RuleFld_11A_B_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(483);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(484);
    match(SwiftMtParser_MT671Parser::T__9);
    setState(486); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(485);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(488); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_98A_B_AContext::Fld_98A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_98A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_98A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_98A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_98A_B_A;
}

void SwiftMtParser_MT671Parser::Fld_98A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B_A(this);
}

void SwiftMtParser_MT671Parser::Fld_98A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B_A(this);
}

SwiftMtParser_MT671Parser::Fld_98A_B_AContext* SwiftMtParser_MT671Parser::fld_98A_B_A() {
  Fld_98A_B_AContext *_localctx = _tracker.createInstance<Fld_98A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 116, SwiftMtParser_MT671Parser::RuleFld_98A_B_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(490);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(491);
    match(SwiftMtParser_MT671Parser::T__10);
    setState(493); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(492);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(495); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_B_FContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_B_FContext::Fld_22F_B_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_22F_B_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_22F_B_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_B_FContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_B_F;
}

void SwiftMtParser_MT671Parser::Fld_22F_B_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_B_F(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_B_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_B_F(this);
}

SwiftMtParser_MT671Parser::Fld_22F_B_FContext* SwiftMtParser_MT671Parser::fld_22F_B_F() {
  Fld_22F_B_FContext *_localctx = _tracker.createInstance<Fld_22F_B_FContext>(_ctx, getState());
  enterRule(_localctx, 118, SwiftMtParser_MT671Parser::RuleFld_22F_B_F);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(497);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(498);
    match(SwiftMtParser_MT671Parser::T__6);
    setState(500); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(499);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(502); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_PContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_B1_PContext::Fld_95a_B1_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_95a_B1_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_95a_B1_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_B1_PContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_B1_P;
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_P(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_P(this);
}

SwiftMtParser_MT671Parser::Fld_95a_B1_PContext* SwiftMtParser_MT671Parser::fld_95a_B1_P() {
  Fld_95a_B1_PContext *_localctx = _tracker.createInstance<Fld_95a_B1_PContext>(_ctx, getState());
  enterRule(_localctx, 120, SwiftMtParser_MT671Parser::RuleFld_95a_B1_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(504);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(505);
    match(SwiftMtParser_MT671Parser::T__4);
    setState(507); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(506);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(509); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_QContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_B1_QContext::Fld_95a_B1_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_95a_B1_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_95a_B1_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_B1_QContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_B1_Q;
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_Q(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_Q(this);
}

SwiftMtParser_MT671Parser::Fld_95a_B1_QContext* SwiftMtParser_MT671Parser::fld_95a_B1_Q() {
  Fld_95a_B1_QContext *_localctx = _tracker.createInstance<Fld_95a_B1_QContext>(_ctx, getState());
  enterRule(_localctx, 122, SwiftMtParser_MT671Parser::RuleFld_95a_B1_Q);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(511);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(512);
    match(SwiftMtParser_MT671Parser::T__5);
    setState(514); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(513);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(516); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_RContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_B1_RContext::Fld_95a_B1_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_95a_B1_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_95a_B1_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_B1_RContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_B1_R;
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_R(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_R(this);
}

SwiftMtParser_MT671Parser::Fld_95a_B1_RContext* SwiftMtParser_MT671Parser::fld_95a_B1_R() {
  Fld_95a_B1_RContext *_localctx = _tracker.createInstance<Fld_95a_B1_RContext>(_ctx, getState());
  enterRule(_localctx, 124, SwiftMtParser_MT671Parser::RuleFld_95a_B1_R);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(518);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(519);
    match(SwiftMtParser_MT671Parser::T__11);
    setState(521); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(520);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(523); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_SContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_95a_B1_SContext::Fld_95a_B1_SContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_95a_B1_SContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_95a_B1_SContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_95a_B1_SContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_95a_B1_S;
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_SContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_S(this);
}

void SwiftMtParser_MT671Parser::Fld_95a_B1_SContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_S(this);
}

SwiftMtParser_MT671Parser::Fld_95a_B1_SContext* SwiftMtParser_MT671Parser::fld_95a_B1_S() {
  Fld_95a_B1_SContext *_localctx = _tracker.createInstance<Fld_95a_B1_SContext>(_ctx, getState());
  enterRule(_localctx, 126, SwiftMtParser_MT671Parser::RuleFld_95a_B1_S);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(525);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(526);
    match(SwiftMtParser_MT671Parser::T__12);
    setState(528); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(527);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(530); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_B1_AContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_97A_B1_AContext::Fld_97A_B1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_97A_B1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_97A_B1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_97A_B1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_97A_B1_A;
}

void SwiftMtParser_MT671Parser::Fld_97A_B1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B1_A(this);
}

void SwiftMtParser_MT671Parser::Fld_97A_B1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B1_A(this);
}

SwiftMtParser_MT671Parser::Fld_97A_B1_AContext* SwiftMtParser_MT671Parser::fld_97A_B1_A() {
  Fld_97A_B1_AContext *_localctx = _tracker.createInstance<Fld_97A_B1_AContext>(_ctx, getState());
  enterRule(_localctx, 128, SwiftMtParser_MT671Parser::RuleFld_97A_B1_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(532);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(533);
    match(SwiftMtParser_MT671Parser::T__7);
    setState(535); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(534);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(537); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_B2_EContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_70E_B2_EContext::Fld_70E_B2_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_70E_B2_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_70E_B2_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_70E_B2_EContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_70E_B2_E;
}

void SwiftMtParser_MT671Parser::Fld_70E_B2_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_B2_E(this);
}

void SwiftMtParser_MT671Parser::Fld_70E_B2_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_B2_E(this);
}

SwiftMtParser_MT671Parser::Fld_70E_B2_EContext* SwiftMtParser_MT671Parser::fld_70E_B2_E() {
  Fld_70E_B2_EContext *_localctx = _tracker.createInstance<Fld_70E_B2_EContext>(_ctx, getState());
  enterRule(_localctx, 130, SwiftMtParser_MT671Parser::RuleFld_70E_B2_E);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(539);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(540);
    match(SwiftMtParser_MT671Parser::T__13);
    setState(542); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(541);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(544); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_B2_FContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_B2_FContext::Fld_22F_B2_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_22F_B2_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_22F_B2_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_B2_FContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_B2_F;
}

void SwiftMtParser_MT671Parser::Fld_22F_B2_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_B2_F(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_B2_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_B2_F(this);
}

SwiftMtParser_MT671Parser::Fld_22F_B2_FContext* SwiftMtParser_MT671Parser::fld_22F_B2_F() {
  Fld_22F_B2_FContext *_localctx = _tracker.createInstance<Fld_22F_B2_FContext>(_ctx, getState());
  enterRule(_localctx, 132, SwiftMtParser_MT671Parser::RuleFld_22F_B2_F);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(547);
    match(SwiftMtParser_MT671Parser::T__6);
    setState(549); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(548);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(551); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_B2_HContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22H_B2_HContext::Fld_22H_B2_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_22H_B2_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_22H_B2_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_22H_B2_HContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22H_B2_H;
}

void SwiftMtParser_MT671Parser::Fld_22H_B2_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B2_H(this);
}

void SwiftMtParser_MT671Parser::Fld_22H_B2_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B2_H(this);
}

SwiftMtParser_MT671Parser::Fld_22H_B2_HContext* SwiftMtParser_MT671Parser::fld_22H_B2_H() {
  Fld_22H_B2_HContext *_localctx = _tracker.createInstance<Fld_22H_B2_HContext>(_ctx, getState());
  enterRule(_localctx, 134, SwiftMtParser_MT671Parser::RuleFld_22H_B2_H);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(553);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(554);
    match(SwiftMtParser_MT671Parser::T__8);
    setState(556); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(555);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(558); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_C_EContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_70E_C_EContext::Fld_70E_C_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_70E_C_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_70E_C_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_70E_C_EContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_70E_C_E;
}

void SwiftMtParser_MT671Parser::Fld_70E_C_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_C_E(this);
}

void SwiftMtParser_MT671Parser::Fld_70E_C_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_C_E(this);
}

SwiftMtParser_MT671Parser::Fld_70E_C_EContext* SwiftMtParser_MT671Parser::fld_70E_C_E() {
  Fld_70E_C_EContext *_localctx = _tracker.createInstance<Fld_70E_C_EContext>(_ctx, getState());
  enterRule(_localctx, 136, SwiftMtParser_MT671Parser::RuleFld_70E_C_E);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(560);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(561);
    match(SwiftMtParser_MT671Parser::T__13);
    setState(563); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(562);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(565); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_C_FContext ------------------------------------------------------------------

SwiftMtParser_MT671Parser::Fld_22F_C_FContext::Fld_22F_C_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT671Parser::Fld_22F_C_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT671Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT671Parser::Fld_22F_C_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT671Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT671Parser::Fld_22F_C_FContext::getRuleIndex() const {
  return SwiftMtParser_MT671Parser::RuleFld_22F_C_F;
}

void SwiftMtParser_MT671Parser::Fld_22F_C_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_C_F(this);
}

void SwiftMtParser_MT671Parser::Fld_22F_C_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT671Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_C_F(this);
}

SwiftMtParser_MT671Parser::Fld_22F_C_FContext* SwiftMtParser_MT671Parser::fld_22F_C_F() {
  Fld_22F_C_FContext *_localctx = _tracker.createInstance<Fld_22F_C_FContext>(_ctx, getState());
  enterRule(_localctx, 138, SwiftMtParser_MT671Parser::RuleFld_22F_C_F);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(567);
    match(SwiftMtParser_MT671Parser::START_OF_FIELD);
    setState(568);
    match(SwiftMtParser_MT671Parser::T__6);
    setState(570); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(569);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT671Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(572); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT671Parser::T__0)
      | (1ULL << SwiftMtParser_MT671Parser::T__1)
      | (1ULL << SwiftMtParser_MT671Parser::T__2)
      | (1ULL << SwiftMtParser_MT671Parser::T__3)
      | (1ULL << SwiftMtParser_MT671Parser::T__4)
      | (1ULL << SwiftMtParser_MT671Parser::T__5)
      | (1ULL << SwiftMtParser_MT671Parser::T__6)
      | (1ULL << SwiftMtParser_MT671Parser::T__7)
      | (1ULL << SwiftMtParser_MT671Parser::T__8)
      | (1ULL << SwiftMtParser_MT671Parser::T__9)
      | (1ULL << SwiftMtParser_MT671Parser::T__10)
      | (1ULL << SwiftMtParser_MT671Parser::T__11)
      | (1ULL << SwiftMtParser_MT671Parser::T__12)
      | (1ULL << SwiftMtParser_MT671Parser::T__13)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT671Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT671Parser::MT_END)
      | (1ULL << SwiftMtParser_MT671Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT671Parser::COLON)
      | (1ULL << SwiftMtParser_MT671Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT671Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT671Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT671Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT671Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT671Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt", "seq_A", 
  "seq_A1", "seq_B", "seq_B1", "seq_B2", "seq_C", "fld_16R_A", "fld_20C_A", 
  "fld_23G_A", "fld_16R_A1", "fld_20C_A1", "fld_16S_A1", "fld_95a_A", "fld_22F_A", 
  "fld_97A_A", "fld_16S_A", "fld_16R_B", "fld_22H_B", "fld_20C_B", "fld_11A_B", 
  "fld_98A_B", "fld_22F_B", "fld_16R_B1", "fld_95a_B1", "fld_97A_B1", "fld_16S_B1", 
  "fld_16R_B2", "fld_70E_B2", "fld_22F_B2", "fld_22H_B2", "fld_16S_B2", 
  "fld_16S_B", "fld_16R_C", "fld_70E_C", "fld_22F_C", "fld_16S_C", "fld_20C_A_C", 
  "fld_23G_A_G", "fld_20C_A1_C", "fld_95a_A_P", "fld_95a_A_Q", "fld_22F_A_F", 
  "fld_97A_A_A", "fld_22H_B_H", "fld_20C_B_C", "fld_11A_B_A", "fld_98A_B_A", 
  "fld_22F_B_F", "fld_95a_B1_P", "fld_95a_B1_Q", "fld_95a_B1_R", "fld_95a_B1_S", 
  "fld_97A_B1_A", "fld_70E_B2_E", "fld_22F_B2_F", "fld_22H_B2_H", "fld_70E_C_E", 
  "fld_22F_C_F"
};

std::vector<std::string> SwiftMtParser_MT671Parser::_literalNames = {
  "", "'16R:'", "'16S:'", "'20C:'", "'23G:'", "'95P:'", "'95Q:'", "'22F:'", 
  "'97A:'", "'22H:'", "'11A:'", "'98A:'", "'95R:'", "'95S:'", "'70E:'", 
  "'{1:'", "'{2:'", "'{3:'", "'{4:'", "'{5:'", "'-}'", "'{'", "'}'", "':'"
};

std::vector<std::string> SwiftMtParser_MT671Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "TAG_BH", 
  "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", "MT_END", "LBRACE", "RBRACE", 
  "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT671Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT671Parser::_tokenNames;

SwiftMtParser_MT671Parser::Initializer::Initializer() {
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
    0x3, 0x1b, 0x241, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x5, 0x2, 0x92, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x96, 0xa, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x6, 0x4, 0x9f, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0xa0, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0xa8, 0xa, 0x6, 0xd, 0x6, 0xe, 
    0x6, 0xa9, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0xb5, 0xa, 0x9, 0xd, 0x9, 0xe, 
    0x9, 0xb6, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xb, 0x6, 0xb, 0xc0, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xc1, 0x3, 0xc, 
    0x6, 0xc, 0xc5, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xc6, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x6, 0xd, 0xcc, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xcd, 0x3, 0xd, 
    0x5, 0xd, 0xd1, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0xd9, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xdc, 0xb, 
    0xe, 0x3, 0xe, 0x6, 0xe, 0xdf, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xe0, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0xe5, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0xf0, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0xf5, 
    0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xf6, 0x3, 0x10, 0x6, 0x10, 0xfa, 0xa, 
    0x10, 0xd, 0x10, 0xe, 0x10, 0xfb, 0x3, 0x10, 0x5, 0x10, 0xff, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x105, 0xa, 0x11, 
    0xd, 0x11, 0xe, 0x11, 0x106, 0x3, 0x11, 0x5, 0x11, 0x10a, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0x110, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x113, 0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 0x116, 
    0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x119, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0x11f, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 
    0x122, 0xb, 0x13, 0x3, 0x13, 0x5, 0x13, 0x125, 0xa, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x12c, 0xa, 0x14, 
    0xd, 0x14, 0xe, 0x14, 0x12d, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x6, 0x17, 0x137, 0xa, 0x17, 0xd, 0x17, 
    0xe, 0x17, 0x138, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x6, 0x19, 0x140, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0x141, 0x3, 0x1a, 
    0x3, 0x1a, 0x5, 0x1a, 0x146, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x6, 0x1d, 0x14f, 0xa, 0x1d, 
    0xd, 0x1d, 0xe, 0x1d, 0x150, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 
    0x156, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x157, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 
    0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x6, 0x24, 0x167, 
    0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x168, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x3, 0x25, 0x5, 0x25, 0x16f, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x27, 0x6, 0x27, 0x176, 0xa, 0x27, 0xd, 0x27, 0xe, 0x27, 
    0x177, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x6, 0x28, 0x17d, 0xa, 0x28, 
    0xd, 0x28, 0xe, 0x28, 0x17e, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 0x3, 0x2a, 
    0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x6, 0x2c, 0x18a, 
    0xa, 0x2c, 0xd, 0x2c, 0xe, 0x2c, 0x18b, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 
    0x6, 0x2d, 0x191, 0xa, 0x2d, 0xd, 0x2d, 0xe, 0x2d, 0x192, 0x3, 0x2e, 
    0x3, 0x2e, 0x3, 0x2e, 0x6, 0x2e, 0x198, 0xa, 0x2e, 0xd, 0x2e, 0xe, 0x2e, 
    0x199, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x6, 0x31, 0x1a3, 0xa, 0x31, 0xd, 0x31, 0xe, 0x31, 0x1a4, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x6, 0x32, 0x1aa, 0xa, 0x32, 0xd, 0x32, 
    0xe, 0x32, 0x1ab, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x1b1, 
    0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 0x1b2, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x6, 0x34, 0x1b8, 0xa, 0x34, 0xd, 0x34, 0xe, 0x34, 0x1b9, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 0x1bf, 0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 
    0x1c0, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x6, 0x36, 0x1c6, 0xa, 0x36, 
    0xd, 0x36, 0xe, 0x36, 0x1c7, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x6, 0x37, 
    0x1cd, 0xa, 0x37, 0xd, 0x37, 0xe, 0x37, 0x1ce, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x6, 0x38, 0x1d4, 0xa, 0x38, 0xd, 0x38, 0xe, 0x38, 0x1d5, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x6, 0x39, 0x1db, 0xa, 0x39, 0xd, 0x39, 
    0xe, 0x39, 0x1dc, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x1e2, 
    0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 0x1e3, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x6, 0x3b, 0x1e9, 0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 0x1ea, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x6, 0x3c, 0x1f0, 0xa, 0x3c, 0xd, 0x3c, 0xe, 0x3c, 
    0x1f1, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x6, 0x3d, 0x1f7, 0xa, 0x3d, 
    0xd, 0x3d, 0xe, 0x3d, 0x1f8, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x6, 0x3e, 
    0x1fe, 0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x1ff, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x6, 0x3f, 0x205, 0xa, 0x3f, 0xd, 0x3f, 0xe, 0x3f, 0x206, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x6, 0x40, 0x20c, 0xa, 0x40, 0xd, 0x40, 
    0xe, 0x40, 0x20d, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x6, 0x41, 0x213, 
    0xa, 0x41, 0xd, 0x41, 0xe, 0x41, 0x214, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x6, 0x42, 0x21a, 0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 0x21b, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x221, 0xa, 0x43, 0xd, 0x43, 0xe, 0x43, 
    0x222, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x6, 0x44, 0x228, 0xa, 0x44, 
    0xd, 0x44, 0xe, 0x44, 0x229, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x6, 0x45, 
    0x22f, 0xa, 0x45, 0xd, 0x45, 0xe, 0x45, 0x230, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x6, 0x46, 0x236, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x237, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x6, 0x47, 0x23d, 0xa, 0x47, 0xd, 0x47, 
    0xe, 0x47, 0x23e, 0x3, 0x47, 0x2, 0x2, 0x48, 0x2, 0x4, 0x6, 0x8, 0xa, 
    0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
    0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 
    0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 
    0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 
    0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 
    0x84, 0x86, 0x88, 0x8a, 0x8c, 0x2, 0x5, 0x3, 0x2, 0x18, 0x18, 0x3, 0x2, 
    0x18, 0x19, 0x3, 0x2, 0x1a, 0x1a, 0x2, 0x237, 0x2, 0x8e, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0x99, 0x3, 0x2, 0x2, 0x2, 0x6, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0xa2, 0x3, 0x2, 0x2, 0x2, 0xa, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xc, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x10, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x14, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc8, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xd4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xe8, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xec, 0x3, 0x2, 0x2, 0x2, 0x20, 0x102, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x10d, 0x3, 0x2, 0x2, 0x2, 0x24, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x26, 0x128, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x133, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x32, 0x145, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x147, 0x3, 0x2, 0x2, 0x2, 0x36, 0x149, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x152, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x159, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x40, 0x15d, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x44, 0x161, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x163, 0x3, 0x2, 0x2, 0x2, 0x48, 0x16e, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x170, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x172, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x179, 0x3, 0x2, 0x2, 0x2, 0x50, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x182, 0x3, 0x2, 0x2, 0x2, 0x54, 0x184, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x186, 0x3, 0x2, 0x2, 0x2, 0x58, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x194, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x19b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x19d, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1b4, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x1c9, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x1d7, 0x3, 0x2, 0x2, 0x2, 0x72, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x74, 0x1e5, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x78, 0x1f3, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x201, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x208, 0x3, 0x2, 0x2, 0x2, 0x80, 0x20f, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x216, 0x3, 0x2, 0x2, 0x2, 0x84, 0x21d, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x224, 0x3, 0x2, 0x2, 0x2, 0x88, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x232, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x239, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 
    0x5, 0x4, 0x3, 0x2, 0x8f, 0x91, 0x5, 0x8, 0x5, 0x2, 0x90, 0x92, 0x5, 
    0xc, 0x7, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x95, 0x5, 0x18, 0xd, 
    0x2, 0x94, 0x96, 0x5, 0xe, 0x8, 0x2, 0x95, 0x94, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x98, 0x7, 0x2, 0x2, 0x3, 0x98, 0x3, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 
    0x7, 0x11, 0x2, 0x2, 0x9a, 0x9b, 0x5, 0x6, 0x4, 0x2, 0x9b, 0x9c, 0x7, 
    0x18, 0x2, 0x2, 0x9c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0xa, 0x2, 
    0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa1, 0x7, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x12, 0x2, 0x2, 0xa3, 
    0xa4, 0x5, 0xa, 0x6, 0x2, 0xa4, 0xa5, 0x7, 0x18, 0x2, 0x2, 0xa5, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0xa, 0x2, 0x2, 0x2, 0xa7, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 
    0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0xab, 0xac, 0x7, 0x13, 0x2, 0x2, 0xac, 0xad, 0x5, 0x10, 0x9, 0x2, 
    0xad, 0xae, 0x7, 0x18, 0x2, 0x2, 0xae, 0xd, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb0, 0x7, 0x15, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x10, 0x9, 0x2, 0xb1, 0xb2, 
    0x7, 0x18, 0x2, 0x2, 0xb2, 0xf, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x5, 
    0x12, 0xa, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x17, 0x2, 0x2, 
    0xb9, 0xba, 0x5, 0x14, 0xb, 0x2, 0xba, 0xbb, 0x7, 0x19, 0x2, 0x2, 0xbb, 
    0xbc, 0x5, 0x16, 0xc, 0x2, 0xbc, 0xbd, 0x7, 0x18, 0x2, 0x2, 0xbd, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xc0, 0xa, 0x3, 0x2, 0x2, 0xbf, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0xc5, 0xa, 0x2, 0x2, 0x2, 0xc4, 0xc3, 0x3, 0x2, 0x2, 0x2, 
    0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 
    0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 0x17, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 
    0x7, 0x14, 0x2, 0x2, 0xc9, 0xcb, 0x5, 0x1a, 0xe, 0x2, 0xca, 0xcc, 0x5, 
    0x1e, 0x10, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0x24, 0x13, 0x2, 
    0xd0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x16, 0x2, 0x2, 0xd3, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x5, 0x26, 0x14, 0x2, 0xd5, 0xd6, 0x5, 
    0x28, 0x15, 0x2, 0xd6, 0xda, 0x5, 0x2a, 0x16, 0x2, 0xd7, 0xd9, 0x5, 
    0x1c, 0xf, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 0x2, 
    0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdd, 0xdf, 0x5, 0x32, 0x1a, 0x2, 0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 
    0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe4, 0x5, 
    0x34, 0x1b, 0x2, 0xe3, 0xe5, 0x5, 0x36, 0x1c, 0x2, 0xe4, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0xe6, 0xe7, 0x5, 0x38, 0x1d, 0x2, 0xe7, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0xe8, 0xe9, 0x5, 0x2c, 0x17, 0x2, 0xe9, 0xea, 0x5, 0x2e, 0x18, 
    0x2, 0xea, 0xeb, 0x5, 0x30, 0x19, 0x2, 0xeb, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xec, 0xed, 0x5, 0x3a, 0x1e, 0x2, 0xed, 0xef, 0x5, 0x3c, 0x1f, 0x2, 
    0xee, 0xf0, 0x5, 0x3e, 0x20, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 
    0x5, 0x40, 0x21, 0x2, 0xf2, 0xf4, 0x5, 0x42, 0x22, 0x2, 0xf3, 0xf5, 
    0x5, 0x44, 0x23, 0x2, 0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 
    0x2, 0x2, 0xf7, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfa, 0x5, 0x20, 0x11, 
    0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xff, 0x5, 0x22, 0x12, 0x2, 0xfe, 0xfd, 
    0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x3, 
    0x2, 0x2, 0x2, 0x100, 0x101, 0x5, 0x58, 0x2d, 0x2, 0x101, 0x1f, 0x3, 
    0x2, 0x2, 0x2, 0x102, 0x104, 0x5, 0x46, 0x24, 0x2, 0x103, 0x105, 0x5, 
    0x48, 0x25, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x107, 0x109, 0x3, 0x2, 0x2, 0x2, 0x108, 0x10a, 0x5, 
    0x4a, 0x26, 0x2, 0x109, 0x108, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x5, 
    0x4c, 0x27, 0x2, 0x10c, 0x21, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x111, 0x5, 
    0x4e, 0x28, 0x2, 0x10e, 0x110, 0x5, 0x50, 0x29, 0x2, 0x10f, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x113, 0x3, 0x2, 0x2, 0x2, 0x111, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 0x2, 0x2, 0x112, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x111, 0x3, 0x2, 0x2, 0x2, 0x114, 0x116, 0x5, 
    0x52, 0x2a, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x3, 
    0x2, 0x2, 0x2, 0x116, 0x118, 0x3, 0x2, 0x2, 0x2, 0x117, 0x119, 0x5, 
    0x54, 0x2b, 0x2, 0x118, 0x117, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x5, 
    0x56, 0x2c, 0x2, 0x11b, 0x23, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x120, 0x5, 
    0x5a, 0x2e, 0x2, 0x11d, 0x11f, 0x5, 0x5c, 0x2f, 0x2, 0x11e, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11f, 0x122, 0x3, 0x2, 0x2, 0x2, 0x120, 0x11e, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x121, 0x3, 0x2, 0x2, 0x2, 0x121, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 0x5, 
    0x5e, 0x30, 0x2, 0x124, 0x123, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x5, 
    0x60, 0x31, 0x2, 0x127, 0x25, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x7, 
    0x1a, 0x2, 0x2, 0x129, 0x12b, 0x7, 0x3, 0x2, 0x2, 0x12a, 0x12c, 0xa, 
    0x4, 0x2, 0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x27, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x130, 0x5, 0x62, 
    0x32, 0x2, 0x130, 0x29, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x5, 0x64, 
    0x33, 0x2, 0x132, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x1a, 
    0x2, 0x2, 0x134, 0x136, 0x7, 0x3, 0x2, 0x2, 0x135, 0x137, 0xa, 0x4, 
    0x2, 0x2, 0x136, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 
    0x2, 0x2, 0x139, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x5, 0x66, 
    0x34, 0x2, 0x13b, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x1a, 
    0x2, 0x2, 0x13d, 0x13f, 0x7, 0x4, 0x2, 0x2, 0x13e, 0x140, 0xa, 0x4, 
    0x2, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x31, 0x3, 0x2, 0x2, 0x2, 0x143, 0x146, 0x5, 0x68, 
    0x35, 0x2, 0x144, 0x146, 0x5, 0x6a, 0x36, 0x2, 0x145, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x146, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x147, 0x148, 0x5, 0x6c, 0x37, 0x2, 0x148, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x149, 0x14a, 0x5, 0x6e, 0x38, 0x2, 0x14a, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x14b, 0x14c, 0x7, 0x1a, 0x2, 0x2, 0x14c, 0x14e, 0x7, 0x4, 0x2, 
    0x2, 0x14d, 0x14f, 0xa, 0x4, 0x2, 0x2, 0x14e, 0x14d, 0x3, 0x2, 0x2, 
    0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14e, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x153, 0x7, 0x1a, 0x2, 0x2, 0x153, 0x155, 0x7, 0x3, 0x2, 0x2, 
    0x154, 0x156, 0xa, 0x4, 0x2, 0x2, 0x155, 0x154, 0x3, 0x2, 0x2, 0x2, 
    0x156, 0x157, 0x3, 0x2, 0x2, 0x2, 0x157, 0x155, 0x3, 0x2, 0x2, 0x2, 
    0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x159, 
    0x15a, 0x5, 0x70, 0x39, 0x2, 0x15a, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x15b, 
    0x15c, 0x5, 0x72, 0x3a, 0x2, 0x15c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x15d, 
    0x15e, 0x5, 0x74, 0x3b, 0x2, 0x15e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x15f, 
    0x160, 0x5, 0x76, 0x3c, 0x2, 0x160, 0x43, 0x3, 0x2, 0x2, 0x2, 0x161, 
    0x162, 0x5, 0x78, 0x3d, 0x2, 0x162, 0x45, 0x3, 0x2, 0x2, 0x2, 0x163, 
    0x164, 0x7, 0x1a, 0x2, 0x2, 0x164, 0x166, 0x7, 0x3, 0x2, 0x2, 0x165, 
    0x167, 0xa, 0x4, 0x2, 0x2, 0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 
    0x168, 0x3, 0x2, 0x2, 0x2, 0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x169, 0x47, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16f, 
    0x5, 0x7a, 0x3e, 0x2, 0x16b, 0x16f, 0x5, 0x7c, 0x3f, 0x2, 0x16c, 0x16f, 
    0x5, 0x7e, 0x40, 0x2, 0x16d, 0x16f, 0x5, 0x80, 0x41, 0x2, 0x16e, 0x16a, 
    0x3, 0x2, 0x2, 0x2, 0x16e, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16e, 0x16c, 
    0x3, 0x2, 0x2, 0x2, 0x16e, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x170, 0x171, 0x5, 0x82, 0x42, 0x2, 0x171, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x172, 0x173, 0x7, 0x1a, 0x2, 0x2, 0x173, 0x175, 0x7, 
    0x4, 0x2, 0x2, 0x174, 0x176, 0xa, 0x4, 0x2, 0x2, 0x175, 0x174, 0x3, 
    0x2, 0x2, 0x2, 0x176, 0x177, 0x3, 0x2, 0x2, 0x2, 0x177, 0x175, 0x3, 
    0x2, 0x2, 0x2, 0x177, 0x178, 0x3, 0x2, 0x2, 0x2, 0x178, 0x4d, 0x3, 0x2, 
    0x2, 0x2, 0x179, 0x17a, 0x7, 0x1a, 0x2, 0x2, 0x17a, 0x17c, 0x7, 0x3, 
    0x2, 0x2, 0x17b, 0x17d, 0xa, 0x4, 0x2, 0x2, 0x17c, 0x17b, 0x3, 0x2, 
    0x2, 0x2, 0x17d, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17c, 0x3, 0x2, 
    0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x4f, 0x3, 0x2, 0x2, 
    0x2, 0x180, 0x181, 0x5, 0x84, 0x43, 0x2, 0x181, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x182, 0x183, 0x5, 0x86, 0x44, 0x2, 0x183, 0x53, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x185, 0x5, 0x88, 0x45, 0x2, 0x185, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x186, 0x187, 0x7, 0x1a, 0x2, 0x2, 0x187, 0x189, 0x7, 0x4, 0x2, 
    0x2, 0x188, 0x18a, 0xa, 0x4, 0x2, 0x2, 0x189, 0x188, 0x3, 0x2, 0x2, 
    0x2, 0x18a, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x18b, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x18e, 0x7, 0x1a, 0x2, 0x2, 0x18e, 0x190, 0x7, 0x4, 0x2, 0x2, 
    0x18f, 0x191, 0xa, 0x4, 0x2, 0x2, 0x190, 0x18f, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 0x192, 0x190, 0x3, 0x2, 0x2, 0x2, 
    0x192, 0x193, 0x3, 0x2, 0x2, 0x2, 0x193, 0x59, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x195, 0x7, 0x1a, 0x2, 0x2, 0x195, 0x197, 0x7, 0x3, 0x2, 0x2, 0x196, 
    0x198, 0xa, 0x4, 0x2, 0x2, 0x197, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 
    0x5, 0x8a, 0x46, 0x2, 0x19c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 
    0x5, 0x8c, 0x47, 0x2, 0x19e, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x1a0, 
    0x7, 0x1a, 0x2, 0x2, 0x1a0, 0x1a2, 0x7, 0x4, 0x2, 0x2, 0x1a1, 0x1a3, 
    0xa, 0x4, 0x2, 0x2, 0x1a2, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x1a4, 
    0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a5, 
    0x3, 0x2, 0x2, 0x2, 0x1a5, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 
    0x1a, 0x2, 0x2, 0x1a7, 0x1a9, 0x7, 0x5, 0x2, 0x2, 0x1a8, 0x1aa, 0xa, 
    0x4, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 
    0x2, 0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 
    0x2, 0x2, 0x2, 0x1ac, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x1a, 
    0x2, 0x2, 0x1ae, 0x1b0, 0x7, 0x6, 0x2, 0x2, 0x1af, 0x1b1, 0xa, 0x4, 
    0x2, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 
    0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 
    0x2, 0x2, 0x1b3, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x1a, 
    0x2, 0x2, 0x1b5, 0x1b7, 0x7, 0x5, 0x2, 0x2, 0x1b6, 0x1b8, 0xa, 0x4, 
    0x2, 0x2, 0x1b7, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 
    0x2, 0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 
    0x2, 0x2, 0x1ba, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x7, 0x1a, 
    0x2, 0x2, 0x1bc, 0x1be, 0x7, 0x7, 0x2, 0x2, 0x1bd, 0x1bf, 0xa, 0x4, 
    0x2, 0x2, 0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x1c1, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x7, 0x1a, 
    0x2, 0x2, 0x1c3, 0x1c5, 0x7, 0x8, 0x2, 0x2, 0x1c4, 0x1c6, 0xa, 0x4, 
    0x2, 0x2, 0x1c5, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x3, 0x2, 
    0x2, 0x2, 0x1c7, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c7, 0x1c8, 0x3, 0x2, 
    0x2, 0x2, 0x1c8, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1c9, 0x1ca, 0x7, 0x1a, 
    0x2, 0x2, 0x1ca, 0x1cc, 0x7, 0x9, 0x2, 0x2, 0x1cb, 0x1cd, 0xa, 0x4, 
    0x2, 0x2, 0x1cc, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1ce, 0x3, 0x2, 
    0x2, 0x2, 0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 0x3, 0x2, 
    0x2, 0x2, 0x1cf, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 0x7, 0x1a, 
    0x2, 0x2, 0x1d1, 0x1d3, 0x7, 0xa, 0x2, 0x2, 0x1d2, 0x1d4, 0xa, 0x4, 
    0x2, 0x2, 0x1d3, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 0x3, 0x2, 
    0x2, 0x2, 0x1d5, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 
    0x2, 0x2, 0x1d6, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x1a, 
    0x2, 0x2, 0x1d8, 0x1da, 0x7, 0xb, 0x2, 0x2, 0x1d9, 0x1db, 0xa, 0x4, 
    0x2, 0x2, 0x1da, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 
    0x2, 0x2, 0x1dc, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 
    0x2, 0x2, 0x1dd, 0x71, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x7, 0x1a, 
    0x2, 0x2, 0x1df, 0x1e1, 0x7, 0x5, 0x2, 0x2, 0x1e0, 0x1e2, 0xa, 0x4, 
    0x2, 0x2, 0x1e1, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e3, 0x3, 0x2, 
    0x2, 0x2, 0x1e3, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 
    0x2, 0x2, 0x1e4, 0x73, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x7, 0x1a, 
    0x2, 0x2, 0x1e6, 0x1e8, 0x7, 0xc, 0x2, 0x2, 0x1e7, 0x1e9, 0xa, 0x4, 
    0x2, 0x2, 0x1e8, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x3, 0x2, 
    0x2, 0x2, 0x1ea, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x3, 0x2, 
    0x2, 0x2, 0x1eb, 0x75, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x7, 0x1a, 
    0x2, 0x2, 0x1ed, 0x1ef, 0x7, 0xd, 0x2, 0x2, 0x1ee, 0x1f0, 0xa, 0x4, 
    0x2, 0x2, 0x1ef, 0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x3, 0x2, 
    0x2, 0x2, 0x1f1, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x3, 0x2, 
    0x2, 0x2, 0x1f2, 0x77, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x7, 0x1a, 
    0x2, 0x2, 0x1f4, 0x1f6, 0x7, 0x9, 0x2, 0x2, 0x1f5, 0x1f7, 0xa, 0x4, 
    0x2, 0x2, 0x1f6, 0x1f5, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x3, 0x2, 
    0x2, 0x2, 0x1f8, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x3, 0x2, 
    0x2, 0x2, 0x1f9, 0x79, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x7, 0x1a, 
    0x2, 0x2, 0x1fb, 0x1fd, 0x7, 0x7, 0x2, 0x2, 0x1fc, 0x1fe, 0xa, 0x4, 
    0x2, 0x2, 0x1fd, 0x1fc, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 
    0x2, 0x2, 0x1ff, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x3, 0x2, 
    0x2, 0x2, 0x200, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x7, 0x1a, 
    0x2, 0x2, 0x202, 0x204, 0x7, 0x8, 0x2, 0x2, 0x203, 0x205, 0xa, 0x4, 
    0x2, 0x2, 0x204, 0x203, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x3, 0x2, 
    0x2, 0x2, 0x206, 0x204, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x3, 0x2, 
    0x2, 0x2, 0x207, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x7, 0x1a, 
    0x2, 0x2, 0x209, 0x20b, 0x7, 0xe, 0x2, 0x2, 0x20a, 0x20c, 0xa, 0x4, 
    0x2, 0x2, 0x20b, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x3, 0x2, 
    0x2, 0x2, 0x20d, 0x20b, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x3, 0x2, 
    0x2, 0x2, 0x20e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x7, 0x1a, 
    0x2, 0x2, 0x210, 0x212, 0x7, 0xf, 0x2, 0x2, 0x211, 0x213, 0xa, 0x4, 
    0x2, 0x2, 0x212, 0x211, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x3, 0x2, 
    0x2, 0x2, 0x214, 0x212, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 
    0x2, 0x2, 0x215, 0x81, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x7, 0x1a, 
    0x2, 0x2, 0x217, 0x219, 0x7, 0xa, 0x2, 0x2, 0x218, 0x21a, 0xa, 0x4, 
    0x2, 0x2, 0x219, 0x218, 0x3, 0x2, 0x2, 0x2, 0x21a, 0x21b, 0x3, 0x2, 
    0x2, 0x2, 0x21b, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x3, 0x2, 
    0x2, 0x2, 0x21c, 0x83, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x7, 0x1a, 
    0x2, 0x2, 0x21e, 0x220, 0x7, 0x10, 0x2, 0x2, 0x21f, 0x221, 0xa, 0x4, 
    0x2, 0x2, 0x220, 0x21f, 0x3, 0x2, 0x2, 0x2, 0x221, 0x222, 0x3, 0x2, 
    0x2, 0x2, 0x222, 0x220, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x3, 0x2, 
    0x2, 0x2, 0x223, 0x85, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x7, 0x1a, 
    0x2, 0x2, 0x225, 0x227, 0x7, 0x9, 0x2, 0x2, 0x226, 0x228, 0xa, 0x4, 
    0x2, 0x2, 0x227, 0x226, 0x3, 0x2, 0x2, 0x2, 0x228, 0x229, 0x3, 0x2, 
    0x2, 0x2, 0x229, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x3, 0x2, 
    0x2, 0x2, 0x22a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x7, 0x1a, 
    0x2, 0x2, 0x22c, 0x22e, 0x7, 0xb, 0x2, 0x2, 0x22d, 0x22f, 0xa, 0x4, 
    0x2, 0x2, 0x22e, 0x22d, 0x3, 0x2, 0x2, 0x2, 0x22f, 0x230, 0x3, 0x2, 
    0x2, 0x2, 0x230, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x3, 0x2, 
    0x2, 0x2, 0x231, 0x89, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x7, 0x1a, 
    0x2, 0x2, 0x233, 0x235, 0x7, 0x10, 0x2, 0x2, 0x234, 0x236, 0xa, 0x4, 
    0x2, 0x2, 0x235, 0x234, 0x3, 0x2, 0x2, 0x2, 0x236, 0x237, 0x3, 0x2, 
    0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x3, 0x2, 
    0x2, 0x2, 0x238, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x7, 0x1a, 
    0x2, 0x2, 0x23a, 0x23c, 0x7, 0x9, 0x2, 0x2, 0x23b, 0x23d, 0xa, 0x4, 
    0x2, 0x2, 0x23c, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23d, 0x23e, 0x3, 0x2, 
    0x2, 0x2, 0x23e, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x3, 0x2, 
    0x2, 0x2, 0x23f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x91, 0x95, 0xa0, 0xa9, 
    0xb6, 0xc1, 0xc6, 0xcd, 0xd0, 0xda, 0xe0, 0xe4, 0xef, 0xf6, 0xfb, 0xfe, 
    0x106, 0x109, 0x111, 0x115, 0x118, 0x120, 0x124, 0x12d, 0x138, 0x141, 
    0x145, 0x150, 0x157, 0x168, 0x16e, 0x177, 0x17e, 0x18b, 0x192, 0x199, 
    0x1a4, 0x1ab, 0x1b2, 0x1b9, 0x1c0, 0x1c7, 0x1ce, 0x1d5, 0x1dc, 0x1e3, 
    0x1ea, 0x1f1, 0x1f8, 0x1ff, 0x206, 0x20d, 0x214, 0x21b, 0x222, 0x229, 
    0x230, 0x237, 0x23e, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT671Parser::Initializer SwiftMtParser_MT671Parser::_init;
