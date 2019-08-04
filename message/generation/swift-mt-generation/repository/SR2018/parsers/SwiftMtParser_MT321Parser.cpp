
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars\SwiftMtParser_MT321.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT321Listener.h"

#include "SwiftMtParser_MT321Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::sr2018;
using namespace antlr4;

SwiftMtParser_MT321Parser::SwiftMtParser_MT321Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT321Parser::~SwiftMtParser_MT321Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT321Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT321.g4";
}

const std::vector<std::string>& SwiftMtParser_MT321Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT321Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::BhContext* SwiftMtParser_MT321Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT321Parser::BhContext>(0);
}

SwiftMtParser_MT321Parser::AhContext* SwiftMtParser_MT321Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT321Parser::AhContext>(0);
}

SwiftMtParser_MT321Parser::MtContext* SwiftMtParser_MT321Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT321Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT321Parser::EOF, 0);
}

SwiftMtParser_MT321Parser::UhContext* SwiftMtParser_MT321Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT321Parser::UhContext>(0);
}

SwiftMtParser_MT321Parser::TrContext* SwiftMtParser_MT321Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT321Parser::TrContext>(0);
}


size_t SwiftMtParser_MT321Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleMessage;
}

void SwiftMtParser_MT321Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT321Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT321Parser::MessageContext* SwiftMtParser_MT321Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT321Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    bh();
    setState(175);
    ah();
    setState(177);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT321Parser::TAG_UH) {
      setState(176);
      uh();
    }
    setState(179);
    mt();
    setState(181);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT321Parser::TAG_TR) {
      setState(180);
      tr();
    }
    setState(183);
    match(SwiftMtParser_MT321Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT321Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT321Parser::TAG_BH, 0);
}

SwiftMtParser_MT321Parser::Bh_contentContext* SwiftMtParser_MT321Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT321Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT321Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleBh;
}

void SwiftMtParser_MT321Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT321Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT321Parser::BhContext* SwiftMtParser_MT321Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT321Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
    match(SwiftMtParser_MT321Parser::TAG_BH);
    setState(186);
    bh_content();
    setState(187);
    match(SwiftMtParser_MT321Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT321Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, i);
}


size_t SwiftMtParser_MT321Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleBh_content;
}

void SwiftMtParser_MT321Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT321Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT321Parser::Bh_contentContext* SwiftMtParser_MT321Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT321Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(189);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(192); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT321Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT321Parser::TAG_AH, 0);
}

SwiftMtParser_MT321Parser::Ah_contentContext* SwiftMtParser_MT321Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT321Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT321Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleAh;
}

void SwiftMtParser_MT321Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT321Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT321Parser::AhContext* SwiftMtParser_MT321Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT321Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(SwiftMtParser_MT321Parser::TAG_AH);
    setState(195);
    ah_content();
    setState(196);
    match(SwiftMtParser_MT321Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT321Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, i);
}


size_t SwiftMtParser_MT321Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleAh_content;
}

void SwiftMtParser_MT321Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT321Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT321Parser::Ah_contentContext* SwiftMtParser_MT321Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT321Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(199); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(198);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(201); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT321Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT321Parser::TAG_UH, 0);
}

SwiftMtParser_MT321Parser::Sys_blockContext* SwiftMtParser_MT321Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT321Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT321Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleUh;
}

void SwiftMtParser_MT321Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT321Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT321Parser::UhContext* SwiftMtParser_MT321Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT321Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(203);
    match(SwiftMtParser_MT321Parser::TAG_UH);
    setState(204);
    sys_block();
    setState(205);
    match(SwiftMtParser_MT321Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT321Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT321Parser::TAG_TR, 0);
}

SwiftMtParser_MT321Parser::Sys_blockContext* SwiftMtParser_MT321Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT321Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT321Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleTr;
}

void SwiftMtParser_MT321Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT321Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT321Parser::TrContext* SwiftMtParser_MT321Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT321Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(SwiftMtParser_MT321Parser::TAG_TR);
    setState(208);
    sys_block();
    setState(209);
    match(SwiftMtParser_MT321Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT321Parser::Sys_elementContext *> SwiftMtParser_MT321Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Sys_elementContext>();
}

SwiftMtParser_MT321Parser::Sys_elementContext* SwiftMtParser_MT321Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT321Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSys_block;
}

void SwiftMtParser_MT321Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT321Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT321Parser::Sys_blockContext* SwiftMtParser_MT321Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT321Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(211);
      sys_element();
      setState(214); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT321Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT321Parser::LBRACE, 0);
}

SwiftMtParser_MT321Parser::Sys_element_keyContext* SwiftMtParser_MT321Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT321Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT321Parser::COLON, 0);
}

SwiftMtParser_MT321Parser::Sys_element_contentContext* SwiftMtParser_MT321Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT321Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT321Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSys_element;
}

void SwiftMtParser_MT321Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT321Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT321Parser::Sys_elementContext* SwiftMtParser_MT321Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT321Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    match(SwiftMtParser_MT321Parser::LBRACE);
    setState(217);
    sys_element_key();
    setState(218);
    match(SwiftMtParser_MT321Parser::COLON);
    setState(219);
    sys_element_content();
    setState(220);
    match(SwiftMtParser_MT321Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT321Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT321Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, i);
}


size_t SwiftMtParser_MT321Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSys_element_key;
}

void SwiftMtParser_MT321Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT321Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT321Parser::Sys_element_keyContext* SwiftMtParser_MT321Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT321Parser::RuleSys_element_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(222);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::RBRACE

      || _la == SwiftMtParser_MT321Parser::COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(225); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT321Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::RBRACE, i);
}


size_t SwiftMtParser_MT321Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSys_element_content;
}

void SwiftMtParser_MT321Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT321Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT321Parser::Sys_element_contentContext* SwiftMtParser_MT321Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT321Parser::RuleSys_element_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(227);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(230); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT321Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT321Parser::TAG_MT, 0);
}

SwiftMtParser_MT321Parser::Seq_AContext* SwiftMtParser_MT321Parser::MtContext::seq_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_AContext>(0);
}

SwiftMtParser_MT321Parser::Seq_BContext* SwiftMtParser_MT321Parser::MtContext::seq_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_BContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT321Parser::MT_END, 0);
}

std::vector<SwiftMtParser_MT321Parser::Seq_CContext *> SwiftMtParser_MT321Parser::MtContext::seq_C() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Seq_CContext>();
}

SwiftMtParser_MT321Parser::Seq_CContext* SwiftMtParser_MT321Parser::MtContext::seq_C(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_CContext>(i);
}


size_t SwiftMtParser_MT321Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleMt;
}

void SwiftMtParser_MT321Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT321Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT321Parser::MtContext* SwiftMtParser_MT321Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT321Parser::RuleMt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(SwiftMtParser_MT321Parser::TAG_MT);
    setState(233);
    seq_A();
    setState(234);
    seq_B();
    setState(236); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(235);
      seq_C();
      setState(238); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(240);
    match(SwiftMtParser_MT321Parser::MT_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Seq_AContext::Seq_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_AContext* SwiftMtParser_MT321Parser::Seq_AContext::fld_16R_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_AContext>(0);
}

SwiftMtParser_MT321Parser::Fld_23G_AContext* SwiftMtParser_MT321Parser::Seq_AContext::fld_23G_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_23G_AContext>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_AContext* SwiftMtParser_MT321Parser::Seq_AContext::fld_16S_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_AContext>(0);
}

std::vector<SwiftMtParser_MT321Parser::Fld_20C_AContext *> SwiftMtParser_MT321Parser::Seq_AContext::fld_20C_A() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_20C_AContext>();
}

SwiftMtParser_MT321Parser::Fld_20C_AContext* SwiftMtParser_MT321Parser::Seq_AContext::fld_20C_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_20C_AContext>(i);
}

std::vector<SwiftMtParser_MT321Parser::Fld_22H_AContext *> SwiftMtParser_MT321Parser::Seq_AContext::fld_22H_A() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_22H_AContext>();
}

SwiftMtParser_MT321Parser::Fld_22H_AContext* SwiftMtParser_MT321Parser::Seq_AContext::fld_22H_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_22H_AContext>(i);
}

std::vector<SwiftMtParser_MT321Parser::Fld_99B_AContext *> SwiftMtParser_MT321Parser::Seq_AContext::fld_99B_A() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_99B_AContext>();
}

SwiftMtParser_MT321Parser::Fld_99B_AContext* SwiftMtParser_MT321Parser::Seq_AContext::fld_99B_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_99B_AContext>(i);
}

std::vector<SwiftMtParser_MT321Parser::Seq_A1Context *> SwiftMtParser_MT321Parser::Seq_AContext::seq_A1() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Seq_A1Context>();
}

SwiftMtParser_MT321Parser::Seq_A1Context* SwiftMtParser_MT321Parser::Seq_AContext::seq_A1(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_A1Context>(i);
}


size_t SwiftMtParser_MT321Parser::Seq_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_A;
}

void SwiftMtParser_MT321Parser::Seq_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A(this);
}

void SwiftMtParser_MT321Parser::Seq_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A(this);
}

SwiftMtParser_MT321Parser::Seq_AContext* SwiftMtParser_MT321Parser::seq_A() {
  Seq_AContext *_localctx = _tracker.createInstance<Seq_AContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtParser_MT321Parser::RuleSeq_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(242);
    fld_16R_A();
    setState(244); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(243);
              fld_20C_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(246); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(248);
    fld_23G_A();
    setState(250); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(249);
              fld_22H_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(252); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(257);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(254);
        fld_99B_A(); 
      }
      setState(259);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(263);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(260);
        seq_A1(); 
      }
      setState(265);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
    setState(266);
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

SwiftMtParser_MT321Parser::Seq_A1Context::Seq_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_A1Context* SwiftMtParser_MT321Parser::Seq_A1Context::fld_16R_A1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_A1Context>(0);
}

SwiftMtParser_MT321Parser::Fld_20C_A1Context* SwiftMtParser_MT321Parser::Seq_A1Context::fld_20C_A1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_20C_A1Context>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_A1Context* SwiftMtParser_MT321Parser::Seq_A1Context::fld_16S_A1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_A1Context>(0);
}

SwiftMtParser_MT321Parser::Fld_13a_A1Context* SwiftMtParser_MT321Parser::Seq_A1Context::fld_13a_A1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_13a_A1Context>(0);
}


size_t SwiftMtParser_MT321Parser::Seq_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_A1;
}

void SwiftMtParser_MT321Parser::Seq_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A1(this);
}

void SwiftMtParser_MT321Parser::Seq_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A1(this);
}

SwiftMtParser_MT321Parser::Seq_A1Context* SwiftMtParser_MT321Parser::seq_A1() {
  Seq_A1Context *_localctx = _tracker.createInstance<Seq_A1Context>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtParser_MT321Parser::RuleSeq_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(268);
    fld_16R_A1();
    setState(270);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(269);
      fld_13a_A1();
      break;
    }

    }
    setState(272);
    fld_20C_A1();
    setState(273);
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

SwiftMtParser_MT321Parser::Seq_BContext::Seq_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_16R_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_BContext>(0);
}

SwiftMtParser_MT321Parser::Fld_20C_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_20C_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_20C_BContext>(0);
}

SwiftMtParser_MT321Parser::Fld_92A_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_92A_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_92A_BContext>(0);
}

SwiftMtParser_MT321Parser::Seq_B1Context* SwiftMtParser_MT321Parser::Seq_BContext::seq_B1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_B1Context>(0);
}

SwiftMtParser_MT321Parser::Seq_B2Context* SwiftMtParser_MT321Parser::Seq_BContext::seq_B2() {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_B2Context>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_16S_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_BContext>(0);
}

std::vector<SwiftMtParser_MT321Parser::Fld_22H_BContext *> SwiftMtParser_MT321Parser::Seq_BContext::fld_22H_B() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_22H_BContext>();
}

SwiftMtParser_MT321Parser::Fld_22H_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_22H_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_22H_BContext>(i);
}

std::vector<SwiftMtParser_MT321Parser::Fld_98A_BContext *> SwiftMtParser_MT321Parser::Seq_BContext::fld_98A_B() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_98A_BContext>();
}

SwiftMtParser_MT321Parser::Fld_98A_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_98A_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_98A_BContext>(i);
}

std::vector<SwiftMtParser_MT321Parser::Fld_19A_BContext *> SwiftMtParser_MT321Parser::Seq_BContext::fld_19A_B() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_19A_BContext>();
}

SwiftMtParser_MT321Parser::Fld_19A_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_19A_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_19A_BContext>(i);
}

SwiftMtParser_MT321Parser::Fld_99B_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_99B_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_99B_BContext>(0);
}

SwiftMtParser_MT321Parser::Fld_94C_BContext* SwiftMtParser_MT321Parser::Seq_BContext::fld_94C_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_94C_BContext>(0);
}

SwiftMtParser_MT321Parser::Seq_B3Context* SwiftMtParser_MT321Parser::Seq_BContext::seq_B3() {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_B3Context>(0);
}


size_t SwiftMtParser_MT321Parser::Seq_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_B;
}

void SwiftMtParser_MT321Parser::Seq_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B(this);
}

void SwiftMtParser_MT321Parser::Seq_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B(this);
}

SwiftMtParser_MT321Parser::Seq_BContext* SwiftMtParser_MT321Parser::seq_B() {
  Seq_BContext *_localctx = _tracker.createInstance<Seq_BContext>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtParser_MT321Parser::RuleSeq_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(275);
    fld_16R_B();
    setState(276);
    fld_20C_B();
    setState(278); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(277);
              fld_22H_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(280); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(283); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(282);
              fld_98A_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(285); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(288); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(287);
              fld_19A_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(290); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(292);
    fld_92A_B();
    setState(294);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(293);
      fld_99B_B();
      break;
    }

    }
    setState(297);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(296);
      fld_94C_B();
      break;
    }

    }
    setState(299);
    seq_B1();
    setState(300);
    seq_B2();
    setState(302);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(301);
      seq_B3();
      break;
    }

    }
    setState(304);
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

SwiftMtParser_MT321Parser::Seq_B1Context::Seq_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_B1Context* SwiftMtParser_MT321Parser::Seq_B1Context::fld_16R_B1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_B1Context>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B1Context* SwiftMtParser_MT321Parser::Seq_B1Context::fld_95a_B1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B1Context>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_B1Context* SwiftMtParser_MT321Parser::Seq_B1Context::fld_16S_B1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_B1Context>(0);
}


size_t SwiftMtParser_MT321Parser::Seq_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_B1;
}

void SwiftMtParser_MT321Parser::Seq_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B1(this);
}

void SwiftMtParser_MT321Parser::Seq_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B1(this);
}

SwiftMtParser_MT321Parser::Seq_B1Context* SwiftMtParser_MT321Parser::seq_B1() {
  Seq_B1Context *_localctx = _tracker.createInstance<Seq_B1Context>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtParser_MT321Parser::RuleSeq_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    fld_16R_B1();
    setState(307);
    fld_95a_B1();
    setState(308);
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

SwiftMtParser_MT321Parser::Seq_B2Context::Seq_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_B2Context* SwiftMtParser_MT321Parser::Seq_B2Context::fld_16R_B2() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_B2Context>(0);
}

SwiftMtParser_MT321Parser::Fld_97A_B2Context* SwiftMtParser_MT321Parser::Seq_B2Context::fld_97A_B2() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_97A_B2Context>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_B2Context* SwiftMtParser_MT321Parser::Seq_B2Context::fld_16S_B2() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_B2Context>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B2Context* SwiftMtParser_MT321Parser::Seq_B2Context::fld_95a_B2() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B2Context>(0);
}


size_t SwiftMtParser_MT321Parser::Seq_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_B2;
}

void SwiftMtParser_MT321Parser::Seq_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B2(this);
}

void SwiftMtParser_MT321Parser::Seq_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B2(this);
}

SwiftMtParser_MT321Parser::Seq_B2Context* SwiftMtParser_MT321Parser::seq_B2() {
  Seq_B2Context *_localctx = _tracker.createInstance<Seq_B2Context>(_ctx, getState());
  enterRule(_localctx, 32, SwiftMtParser_MT321Parser::RuleSeq_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(310);
    fld_16R_B2();
    setState(312);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(311);
      fld_95a_B2();
      break;
    }

    }
    setState(314);
    fld_97A_B2();
    setState(315);
    fld_16S_B2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_B3Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Seq_B3Context::Seq_B3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_B3Context* SwiftMtParser_MT321Parser::Seq_B3Context::fld_16R_B3() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_B3Context>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_B3Context* SwiftMtParser_MT321Parser::Seq_B3Context::fld_16S_B3() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_B3Context>(0);
}

std::vector<SwiftMtParser_MT321Parser::Fld_95a_B3Context *> SwiftMtParser_MT321Parser::Seq_B3Context::fld_95a_B3() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_95a_B3Context>();
}

SwiftMtParser_MT321Parser::Fld_95a_B3Context* SwiftMtParser_MT321Parser::Seq_B3Context::fld_95a_B3(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B3Context>(i);
}


size_t SwiftMtParser_MT321Parser::Seq_B3Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_B3;
}

void SwiftMtParser_MT321Parser::Seq_B3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B3(this);
}

void SwiftMtParser_MT321Parser::Seq_B3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B3(this);
}

SwiftMtParser_MT321Parser::Seq_B3Context* SwiftMtParser_MT321Parser::seq_B3() {
  Seq_B3Context *_localctx = _tracker.createInstance<Seq_B3Context>(_ctx, getState());
  enterRule(_localctx, 34, SwiftMtParser_MT321Parser::RuleSeq_B3);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(317);
    fld_16R_B3();
    setState(319); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(318);
              fld_95a_B3();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(321); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(323);
    fld_16S_B3();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Seq_CContext::Seq_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_CContext* SwiftMtParser_MT321Parser::Seq_CContext::fld_16R_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_CContext>(0);
}

SwiftMtParser_MT321Parser::Fld_22H_CContext* SwiftMtParser_MT321Parser::Seq_CContext::fld_22H_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_22H_CContext>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_CContext* SwiftMtParser_MT321Parser::Seq_CContext::fld_16S_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_CContext>(0);
}

std::vector<SwiftMtParser_MT321Parser::Seq_C1Context *> SwiftMtParser_MT321Parser::Seq_CContext::seq_C1() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Seq_C1Context>();
}

SwiftMtParser_MT321Parser::Seq_C1Context* SwiftMtParser_MT321Parser::Seq_CContext::seq_C1(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Seq_C1Context>(i);
}


size_t SwiftMtParser_MT321Parser::Seq_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_C;
}

void SwiftMtParser_MT321Parser::Seq_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_C(this);
}

void SwiftMtParser_MT321Parser::Seq_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_C(this);
}

SwiftMtParser_MT321Parser::Seq_CContext* SwiftMtParser_MT321Parser::seq_C() {
  Seq_CContext *_localctx = _tracker.createInstance<Seq_CContext>(_ctx, getState());
  enterRule(_localctx, 36, SwiftMtParser_MT321Parser::RuleSeq_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(325);
    fld_16R_C();
    setState(326);
    fld_22H_C();
    setState(328); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(327);
              seq_C1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(330); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(332);
    fld_16S_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_C1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Seq_C1Context::Seq_C1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_16R_C1Context* SwiftMtParser_MT321Parser::Seq_C1Context::fld_16R_C1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16R_C1Context>(0);
}

SwiftMtParser_MT321Parser::Fld_16S_C1Context* SwiftMtParser_MT321Parser::Seq_C1Context::fld_16S_C1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_16S_C1Context>(0);
}

std::vector<SwiftMtParser_MT321Parser::Fld_95a_C1Context *> SwiftMtParser_MT321Parser::Seq_C1Context::fld_95a_C1() {
  return getRuleContexts<SwiftMtParser_MT321Parser::Fld_95a_C1Context>();
}

SwiftMtParser_MT321Parser::Fld_95a_C1Context* SwiftMtParser_MT321Parser::Seq_C1Context::fld_95a_C1(size_t i) {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_C1Context>(i);
}

SwiftMtParser_MT321Parser::Fld_97A_C1Context* SwiftMtParser_MT321Parser::Seq_C1Context::fld_97A_C1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_97A_C1Context>(0);
}

SwiftMtParser_MT321Parser::Fld_70C_C1Context* SwiftMtParser_MT321Parser::Seq_C1Context::fld_70C_C1() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_70C_C1Context>(0);
}


size_t SwiftMtParser_MT321Parser::Seq_C1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleSeq_C1;
}

void SwiftMtParser_MT321Parser::Seq_C1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_C1(this);
}

void SwiftMtParser_MT321Parser::Seq_C1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_C1(this);
}

SwiftMtParser_MT321Parser::Seq_C1Context* SwiftMtParser_MT321Parser::seq_C1() {
  Seq_C1Context *_localctx = _tracker.createInstance<Seq_C1Context>(_ctx, getState());
  enterRule(_localctx, 38, SwiftMtParser_MT321Parser::RuleSeq_C1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(334);
    fld_16R_C1();
    setState(336); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(335);
              fld_95a_C1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(338); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(341);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(340);
      fld_97A_C1();
      break;
    }

    }
    setState(344);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(343);
      fld_70C_C1();
      break;
    }

    }
    setState(346);
    fld_16S_C1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_AContext::Fld_16R_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_A;
}

void SwiftMtParser_MT321Parser::Fld_16R_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A(this);
}

SwiftMtParser_MT321Parser::Fld_16R_AContext* SwiftMtParser_MT321Parser::fld_16R_A() {
  Fld_16R_AContext *_localctx = _tracker.createInstance<Fld_16R_AContext>(_ctx, getState());
  enterRule(_localctx, 40, SwiftMtParser_MT321Parser::RuleFld_16R_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(349);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(351); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(350);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(353); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_20C_AContext::Fld_20C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_20C_A_CContext* SwiftMtParser_MT321Parser::Fld_20C_AContext::fld_20C_A_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_20C_A_CContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_20C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_20C_A;
}

void SwiftMtParser_MT321Parser::Fld_20C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A(this);
}

void SwiftMtParser_MT321Parser::Fld_20C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A(this);
}

SwiftMtParser_MT321Parser::Fld_20C_AContext* SwiftMtParser_MT321Parser::fld_20C_A() {
  Fld_20C_AContext *_localctx = _tracker.createInstance<Fld_20C_AContext>(_ctx, getState());
  enterRule(_localctx, 42, SwiftMtParser_MT321Parser::RuleFld_20C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(355);
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

SwiftMtParser_MT321Parser::Fld_23G_AContext::Fld_23G_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_23G_A_GContext* SwiftMtParser_MT321Parser::Fld_23G_AContext::fld_23G_A_G() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_23G_A_GContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_23G_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_23G_A;
}

void SwiftMtParser_MT321Parser::Fld_23G_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A(this);
}

void SwiftMtParser_MT321Parser::Fld_23G_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A(this);
}

SwiftMtParser_MT321Parser::Fld_23G_AContext* SwiftMtParser_MT321Parser::fld_23G_A() {
  Fld_23G_AContext *_localctx = _tracker.createInstance<Fld_23G_AContext>(_ctx, getState());
  enterRule(_localctx, 44, SwiftMtParser_MT321Parser::RuleFld_23G_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    fld_23G_A_G();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_22H_AContext::Fld_22H_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_22H_A_HContext* SwiftMtParser_MT321Parser::Fld_22H_AContext::fld_22H_A_H() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_22H_A_HContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_22H_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_22H_A;
}

void SwiftMtParser_MT321Parser::Fld_22H_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_A(this);
}

void SwiftMtParser_MT321Parser::Fld_22H_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_A(this);
}

SwiftMtParser_MT321Parser::Fld_22H_AContext* SwiftMtParser_MT321Parser::fld_22H_A() {
  Fld_22H_AContext *_localctx = _tracker.createInstance<Fld_22H_AContext>(_ctx, getState());
  enterRule(_localctx, 46, SwiftMtParser_MT321Parser::RuleFld_22H_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(359);
    fld_22H_A_H();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_99B_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_99B_AContext::Fld_99B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_99B_A_BContext* SwiftMtParser_MT321Parser::Fld_99B_AContext::fld_99B_A_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_99B_A_BContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_99B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_99B_A;
}

void SwiftMtParser_MT321Parser::Fld_99B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_99B_A(this);
}

void SwiftMtParser_MT321Parser::Fld_99B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_99B_A(this);
}

SwiftMtParser_MT321Parser::Fld_99B_AContext* SwiftMtParser_MT321Parser::fld_99B_A() {
  Fld_99B_AContext *_localctx = _tracker.createInstance<Fld_99B_AContext>(_ctx, getState());
  enterRule(_localctx, 48, SwiftMtParser_MT321Parser::RuleFld_99B_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(361);
    fld_99B_A_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_A1Context::Fld_16R_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_A1;
}

void SwiftMtParser_MT321Parser::Fld_16R_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A1(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A1(this);
}

SwiftMtParser_MT321Parser::Fld_16R_A1Context* SwiftMtParser_MT321Parser::fld_16R_A1() {
  Fld_16R_A1Context *_localctx = _tracker.createInstance<Fld_16R_A1Context>(_ctx, getState());
  enterRule(_localctx, 50, SwiftMtParser_MT321Parser::RuleFld_16R_A1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(364);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(366); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(365);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(368); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_13a_A1Context::Fld_13a_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_13a_A1_AContext* SwiftMtParser_MT321Parser::Fld_13a_A1Context::fld_13a_A1_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_13a_A1_AContext>(0);
}

SwiftMtParser_MT321Parser::Fld_13a_A1_BContext* SwiftMtParser_MT321Parser::Fld_13a_A1Context::fld_13a_A1_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_13a_A1_BContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_13a_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_13a_A1;
}

void SwiftMtParser_MT321Parser::Fld_13a_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1(this);
}

void SwiftMtParser_MT321Parser::Fld_13a_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1(this);
}

SwiftMtParser_MT321Parser::Fld_13a_A1Context* SwiftMtParser_MT321Parser::fld_13a_A1() {
  Fld_13a_A1Context *_localctx = _tracker.createInstance<Fld_13a_A1Context>(_ctx, getState());
  enterRule(_localctx, 52, SwiftMtParser_MT321Parser::RuleFld_13a_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(372);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(370);
      fld_13a_A1_A();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(371);
      fld_13a_A1_B();
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

//----------------- Fld_20C_A1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_20C_A1Context::Fld_20C_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_20C_A1_CContext* SwiftMtParser_MT321Parser::Fld_20C_A1Context::fld_20C_A1_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_20C_A1_CContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_20C_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_20C_A1;
}

void SwiftMtParser_MT321Parser::Fld_20C_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1(this);
}

void SwiftMtParser_MT321Parser::Fld_20C_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1(this);
}

SwiftMtParser_MT321Parser::Fld_20C_A1Context* SwiftMtParser_MT321Parser::fld_20C_A1() {
  Fld_20C_A1Context *_localctx = _tracker.createInstance<Fld_20C_A1Context>(_ctx, getState());
  enterRule(_localctx, 54, SwiftMtParser_MT321Parser::RuleFld_20C_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
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

SwiftMtParser_MT321Parser::Fld_16S_A1Context::Fld_16S_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_A1;
}

void SwiftMtParser_MT321Parser::Fld_16S_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A1(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A1(this);
}

SwiftMtParser_MT321Parser::Fld_16S_A1Context* SwiftMtParser_MT321Parser::fld_16S_A1() {
  Fld_16S_A1Context *_localctx = _tracker.createInstance<Fld_16S_A1Context>(_ctx, getState());
  enterRule(_localctx, 56, SwiftMtParser_MT321Parser::RuleFld_16S_A1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(376);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(377);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(379); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(378);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(381); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16S_AContext::Fld_16S_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_A;
}

void SwiftMtParser_MT321Parser::Fld_16S_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A(this);
}

SwiftMtParser_MT321Parser::Fld_16S_AContext* SwiftMtParser_MT321Parser::fld_16S_A() {
  Fld_16S_AContext *_localctx = _tracker.createInstance<Fld_16S_AContext>(_ctx, getState());
  enterRule(_localctx, 58, SwiftMtParser_MT321Parser::RuleFld_16S_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(383);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(384);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(386); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(385);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(388); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_BContext::Fld_16R_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_B;
}

void SwiftMtParser_MT321Parser::Fld_16R_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B(this);
}

SwiftMtParser_MT321Parser::Fld_16R_BContext* SwiftMtParser_MT321Parser::fld_16R_B() {
  Fld_16R_BContext *_localctx = _tracker.createInstance<Fld_16R_BContext>(_ctx, getState());
  enterRule(_localctx, 60, SwiftMtParser_MT321Parser::RuleFld_16R_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(390);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(391);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(393); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(392);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(395); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_20C_BContext::Fld_20C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_20C_B_CContext* SwiftMtParser_MT321Parser::Fld_20C_BContext::fld_20C_B_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_20C_B_CContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_20C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_20C_B;
}

void SwiftMtParser_MT321Parser::Fld_20C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B(this);
}

void SwiftMtParser_MT321Parser::Fld_20C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B(this);
}

SwiftMtParser_MT321Parser::Fld_20C_BContext* SwiftMtParser_MT321Parser::fld_20C_B() {
  Fld_20C_BContext *_localctx = _tracker.createInstance<Fld_20C_BContext>(_ctx, getState());
  enterRule(_localctx, 62, SwiftMtParser_MT321Parser::RuleFld_20C_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(397);
    fld_20C_B_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_22H_BContext::Fld_22H_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_22H_B_HContext* SwiftMtParser_MT321Parser::Fld_22H_BContext::fld_22H_B_H() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_22H_B_HContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_22H_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_22H_B;
}

void SwiftMtParser_MT321Parser::Fld_22H_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B(this);
}

void SwiftMtParser_MT321Parser::Fld_22H_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B(this);
}

SwiftMtParser_MT321Parser::Fld_22H_BContext* SwiftMtParser_MT321Parser::fld_22H_B() {
  Fld_22H_BContext *_localctx = _tracker.createInstance<Fld_22H_BContext>(_ctx, getState());
  enterRule(_localctx, 64, SwiftMtParser_MT321Parser::RuleFld_22H_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    fld_22H_B_H();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_98A_BContext::Fld_98A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_98A_B_AContext* SwiftMtParser_MT321Parser::Fld_98A_BContext::fld_98A_B_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_98A_B_AContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_98A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_98A_B;
}

void SwiftMtParser_MT321Parser::Fld_98A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B(this);
}

void SwiftMtParser_MT321Parser::Fld_98A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B(this);
}

SwiftMtParser_MT321Parser::Fld_98A_BContext* SwiftMtParser_MT321Parser::fld_98A_B() {
  Fld_98A_BContext *_localctx = _tracker.createInstance<Fld_98A_BContext>(_ctx, getState());
  enterRule(_localctx, 66, SwiftMtParser_MT321Parser::RuleFld_98A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(401);
    fld_98A_B_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_19A_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_19A_BContext::Fld_19A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_19A_B_AContext* SwiftMtParser_MT321Parser::Fld_19A_BContext::fld_19A_B_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_19A_B_AContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_19A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_19A_B;
}

void SwiftMtParser_MT321Parser::Fld_19A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_19A_B(this);
}

void SwiftMtParser_MT321Parser::Fld_19A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_19A_B(this);
}

SwiftMtParser_MT321Parser::Fld_19A_BContext* SwiftMtParser_MT321Parser::fld_19A_B() {
  Fld_19A_BContext *_localctx = _tracker.createInstance<Fld_19A_BContext>(_ctx, getState());
  enterRule(_localctx, 68, SwiftMtParser_MT321Parser::RuleFld_19A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(403);
    fld_19A_B_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_92A_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_92A_BContext::Fld_92A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_92A_B_AContext* SwiftMtParser_MT321Parser::Fld_92A_BContext::fld_92A_B_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_92A_B_AContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_92A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_92A_B;
}

void SwiftMtParser_MT321Parser::Fld_92A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_92A_B(this);
}

void SwiftMtParser_MT321Parser::Fld_92A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_92A_B(this);
}

SwiftMtParser_MT321Parser::Fld_92A_BContext* SwiftMtParser_MT321Parser::fld_92A_B() {
  Fld_92A_BContext *_localctx = _tracker.createInstance<Fld_92A_BContext>(_ctx, getState());
  enterRule(_localctx, 70, SwiftMtParser_MT321Parser::RuleFld_92A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    fld_92A_B_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_99B_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_99B_BContext::Fld_99B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_99B_B_BContext* SwiftMtParser_MT321Parser::Fld_99B_BContext::fld_99B_B_B() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_99B_B_BContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_99B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_99B_B;
}

void SwiftMtParser_MT321Parser::Fld_99B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_99B_B(this);
}

void SwiftMtParser_MT321Parser::Fld_99B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_99B_B(this);
}

SwiftMtParser_MT321Parser::Fld_99B_BContext* SwiftMtParser_MT321Parser::fld_99B_B() {
  Fld_99B_BContext *_localctx = _tracker.createInstance<Fld_99B_BContext>(_ctx, getState());
  enterRule(_localctx, 72, SwiftMtParser_MT321Parser::RuleFld_99B_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(407);
    fld_99B_B_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_94C_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_94C_BContext::Fld_94C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_94C_B_CContext* SwiftMtParser_MT321Parser::Fld_94C_BContext::fld_94C_B_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_94C_B_CContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_94C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_94C_B;
}

void SwiftMtParser_MT321Parser::Fld_94C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94C_B(this);
}

void SwiftMtParser_MT321Parser::Fld_94C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94C_B(this);
}

SwiftMtParser_MT321Parser::Fld_94C_BContext* SwiftMtParser_MT321Parser::fld_94C_B() {
  Fld_94C_BContext *_localctx = _tracker.createInstance<Fld_94C_BContext>(_ctx, getState());
  enterRule(_localctx, 74, SwiftMtParser_MT321Parser::RuleFld_94C_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    fld_94C_B_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_B1Context::Fld_16R_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_B1;
}

void SwiftMtParser_MT321Parser::Fld_16R_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B1(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B1(this);
}

SwiftMtParser_MT321Parser::Fld_16R_B1Context* SwiftMtParser_MT321Parser::fld_16R_B1() {
  Fld_16R_B1Context *_localctx = _tracker.createInstance<Fld_16R_B1Context>(_ctx, getState());
  enterRule(_localctx, 76, SwiftMtParser_MT321Parser::RuleFld_16R_B1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(411);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(412);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(414); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(413);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(416); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B1Context::Fld_95a_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_95a_B1_PContext* SwiftMtParser_MT321Parser::Fld_95a_B1Context::fld_95a_B1_P() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B1_PContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B1_QContext* SwiftMtParser_MT321Parser::Fld_95a_B1Context::fld_95a_B1_Q() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B1_QContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B1_RContext* SwiftMtParser_MT321Parser::Fld_95a_B1Context::fld_95a_B1_R() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B1_RContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B1;
}

void SwiftMtParser_MT321Parser::Fld_95a_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B1Context* SwiftMtParser_MT321Parser::fld_95a_B1() {
  Fld_95a_B1Context *_localctx = _tracker.createInstance<Fld_95a_B1Context>(_ctx, getState());
  enterRule(_localctx, 78, SwiftMtParser_MT321Parser::RuleFld_95a_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(421);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(418);
      fld_95a_B1_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(419);
      fld_95a_B1_Q();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(420);
      fld_95a_B1_R();
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

//----------------- Fld_16S_B1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16S_B1Context::Fld_16S_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_B1;
}

void SwiftMtParser_MT321Parser::Fld_16S_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B1(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B1(this);
}

SwiftMtParser_MT321Parser::Fld_16S_B1Context* SwiftMtParser_MT321Parser::fld_16S_B1() {
  Fld_16S_B1Context *_localctx = _tracker.createInstance<Fld_16S_B1Context>(_ctx, getState());
  enterRule(_localctx, 80, SwiftMtParser_MT321Parser::RuleFld_16S_B1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(423);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(424);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(426); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(425);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(428); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B2Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_B2Context::Fld_16R_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_B2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_B2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_B2;
}

void SwiftMtParser_MT321Parser::Fld_16R_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B2(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B2(this);
}

SwiftMtParser_MT321Parser::Fld_16R_B2Context* SwiftMtParser_MT321Parser::fld_16R_B2() {
  Fld_16R_B2Context *_localctx = _tracker.createInstance<Fld_16R_B2Context>(_ctx, getState());
  enterRule(_localctx, 82, SwiftMtParser_MT321Parser::RuleFld_16R_B2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(430);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(431);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(433); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(432);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(435); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B2Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B2Context::Fld_95a_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_95a_B2_PContext* SwiftMtParser_MT321Parser::Fld_95a_B2Context::fld_95a_B2_P() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B2_PContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B2_QContext* SwiftMtParser_MT321Parser::Fld_95a_B2Context::fld_95a_B2_Q() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B2_QContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B2_RContext* SwiftMtParser_MT321Parser::Fld_95a_B2Context::fld_95a_B2_R() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B2_RContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B2;
}

void SwiftMtParser_MT321Parser::Fld_95a_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B2(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B2(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B2Context* SwiftMtParser_MT321Parser::fld_95a_B2() {
  Fld_95a_B2Context *_localctx = _tracker.createInstance<Fld_95a_B2Context>(_ctx, getState());
  enterRule(_localctx, 84, SwiftMtParser_MT321Parser::RuleFld_95a_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(440);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(437);
      fld_95a_B2_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(438);
      fld_95a_B2_Q();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(439);
      fld_95a_B2_R();
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

//----------------- Fld_97A_B2Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_97A_B2Context::Fld_97A_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_97A_B2_AContext* SwiftMtParser_MT321Parser::Fld_97A_B2Context::fld_97A_B2_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_97A_B2_AContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_97A_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_97A_B2;
}

void SwiftMtParser_MT321Parser::Fld_97A_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B2(this);
}

void SwiftMtParser_MT321Parser::Fld_97A_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B2(this);
}

SwiftMtParser_MT321Parser::Fld_97A_B2Context* SwiftMtParser_MT321Parser::fld_97A_B2() {
  Fld_97A_B2Context *_localctx = _tracker.createInstance<Fld_97A_B2Context>(_ctx, getState());
  enterRule(_localctx, 86, SwiftMtParser_MT321Parser::RuleFld_97A_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(442);
    fld_97A_B2_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_B2Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16S_B2Context::Fld_16S_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_B2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_B2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_B2;
}

void SwiftMtParser_MT321Parser::Fld_16S_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B2(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B2(this);
}

SwiftMtParser_MT321Parser::Fld_16S_B2Context* SwiftMtParser_MT321Parser::fld_16S_B2() {
  Fld_16S_B2Context *_localctx = _tracker.createInstance<Fld_16S_B2Context>(_ctx, getState());
  enterRule(_localctx, 88, SwiftMtParser_MT321Parser::RuleFld_16S_B2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(444);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(445);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(447); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(446);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(449); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B3Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_B3Context::Fld_16R_B3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_B3Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_B3Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_B3Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_B3;
}

void SwiftMtParser_MT321Parser::Fld_16R_B3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B3(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_B3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B3(this);
}

SwiftMtParser_MT321Parser::Fld_16R_B3Context* SwiftMtParser_MT321Parser::fld_16R_B3() {
  Fld_16R_B3Context *_localctx = _tracker.createInstance<Fld_16R_B3Context>(_ctx, getState());
  enterRule(_localctx, 90, SwiftMtParser_MT321Parser::RuleFld_16R_B3);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(451);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(452);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(454); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(453);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(456); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B3Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B3Context::Fld_95a_B3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_95a_B3_PContext* SwiftMtParser_MT321Parser::Fld_95a_B3Context::fld_95a_B3_P() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B3_PContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B3_QContext* SwiftMtParser_MT321Parser::Fld_95a_B3Context::fld_95a_B3_Q() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B3_QContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_B3_RContext* SwiftMtParser_MT321Parser::Fld_95a_B3Context::fld_95a_B3_R() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_B3_RContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B3Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B3;
}

void SwiftMtParser_MT321Parser::Fld_95a_B3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B3(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B3(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B3Context* SwiftMtParser_MT321Parser::fld_95a_B3() {
  Fld_95a_B3Context *_localctx = _tracker.createInstance<Fld_95a_B3Context>(_ctx, getState());
  enterRule(_localctx, 92, SwiftMtParser_MT321Parser::RuleFld_95a_B3);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(461);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(458);
      fld_95a_B3_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(459);
      fld_95a_B3_Q();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(460);
      fld_95a_B3_R();
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

//----------------- Fld_16S_B3Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16S_B3Context::Fld_16S_B3Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_B3Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_B3Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_B3Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_B3;
}

void SwiftMtParser_MT321Parser::Fld_16S_B3Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B3(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_B3Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B3(this);
}

SwiftMtParser_MT321Parser::Fld_16S_B3Context* SwiftMtParser_MT321Parser::fld_16S_B3() {
  Fld_16S_B3Context *_localctx = _tracker.createInstance<Fld_16S_B3Context>(_ctx, getState());
  enterRule(_localctx, 94, SwiftMtParser_MT321Parser::RuleFld_16S_B3);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(463);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(464);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(466); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(465);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(468); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16S_BContext::Fld_16S_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_B;
}

void SwiftMtParser_MT321Parser::Fld_16S_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B(this);
}

SwiftMtParser_MT321Parser::Fld_16S_BContext* SwiftMtParser_MT321Parser::fld_16S_B() {
  Fld_16S_BContext *_localctx = _tracker.createInstance<Fld_16S_BContext>(_ctx, getState());
  enterRule(_localctx, 96, SwiftMtParser_MT321Parser::RuleFld_16S_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(470);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(471);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(473); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(472);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(475); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_CContext::Fld_16R_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_C;
}

void SwiftMtParser_MT321Parser::Fld_16R_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_C(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_C(this);
}

SwiftMtParser_MT321Parser::Fld_16R_CContext* SwiftMtParser_MT321Parser::fld_16R_C() {
  Fld_16R_CContext *_localctx = _tracker.createInstance<Fld_16R_CContext>(_ctx, getState());
  enterRule(_localctx, 98, SwiftMtParser_MT321Parser::RuleFld_16R_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(477);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(478);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(480); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(479);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(482); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_22H_CContext::Fld_22H_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_22H_C_HContext* SwiftMtParser_MT321Parser::Fld_22H_CContext::fld_22H_C_H() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_22H_C_HContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_22H_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_22H_C;
}

void SwiftMtParser_MT321Parser::Fld_22H_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_C(this);
}

void SwiftMtParser_MT321Parser::Fld_22H_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_C(this);
}

SwiftMtParser_MT321Parser::Fld_22H_CContext* SwiftMtParser_MT321Parser::fld_22H_C() {
  Fld_22H_CContext *_localctx = _tracker.createInstance<Fld_22H_CContext>(_ctx, getState());
  enterRule(_localctx, 100, SwiftMtParser_MT321Parser::RuleFld_22H_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(484);
    fld_22H_C_H();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_C1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16R_C1Context::Fld_16R_C1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16R_C1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16R_C1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16R_C1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16R_C1;
}

void SwiftMtParser_MT321Parser::Fld_16R_C1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_C1(this);
}

void SwiftMtParser_MT321Parser::Fld_16R_C1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_C1(this);
}

SwiftMtParser_MT321Parser::Fld_16R_C1Context* SwiftMtParser_MT321Parser::fld_16R_C1() {
  Fld_16R_C1Context *_localctx = _tracker.createInstance<Fld_16R_C1Context>(_ctx, getState());
  enterRule(_localctx, 102, SwiftMtParser_MT321Parser::RuleFld_16R_C1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(487);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(489); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(488);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(491); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_C1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_C1Context::Fld_95a_C1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_95a_C1_PContext* SwiftMtParser_MT321Parser::Fld_95a_C1Context::fld_95a_C1_P() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_C1_PContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_C1_QContext* SwiftMtParser_MT321Parser::Fld_95a_C1Context::fld_95a_C1_Q() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_C1_QContext>(0);
}

SwiftMtParser_MT321Parser::Fld_95a_C1_RContext* SwiftMtParser_MT321Parser::Fld_95a_C1Context::fld_95a_C1_R() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_95a_C1_RContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_C1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_C1;
}

void SwiftMtParser_MT321Parser::Fld_95a_C1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C1(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_C1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C1(this);
}

SwiftMtParser_MT321Parser::Fld_95a_C1Context* SwiftMtParser_MT321Parser::fld_95a_C1() {
  Fld_95a_C1Context *_localctx = _tracker.createInstance<Fld_95a_C1Context>(_ctx, getState());
  enterRule(_localctx, 104, SwiftMtParser_MT321Parser::RuleFld_95a_C1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(496);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(493);
      fld_95a_C1_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(494);
      fld_95a_C1_Q();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(495);
      fld_95a_C1_R();
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

//----------------- Fld_97A_C1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_97A_C1Context::Fld_97A_C1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_97A_C1_AContext* SwiftMtParser_MT321Parser::Fld_97A_C1Context::fld_97A_C1_A() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_97A_C1_AContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_97A_C1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_97A_C1;
}

void SwiftMtParser_MT321Parser::Fld_97A_C1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_C1(this);
}

void SwiftMtParser_MT321Parser::Fld_97A_C1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_C1(this);
}

SwiftMtParser_MT321Parser::Fld_97A_C1Context* SwiftMtParser_MT321Parser::fld_97A_C1() {
  Fld_97A_C1Context *_localctx = _tracker.createInstance<Fld_97A_C1Context>(_ctx, getState());
  enterRule(_localctx, 106, SwiftMtParser_MT321Parser::RuleFld_97A_C1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(498);
    fld_97A_C1_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70C_C1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_70C_C1Context::Fld_70C_C1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT321Parser::Fld_70C_C1_CContext* SwiftMtParser_MT321Parser::Fld_70C_C1Context::fld_70C_C1_C() {
  return getRuleContext<SwiftMtParser_MT321Parser::Fld_70C_C1_CContext>(0);
}


size_t SwiftMtParser_MT321Parser::Fld_70C_C1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_70C_C1;
}

void SwiftMtParser_MT321Parser::Fld_70C_C1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70C_C1(this);
}

void SwiftMtParser_MT321Parser::Fld_70C_C1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70C_C1(this);
}

SwiftMtParser_MT321Parser::Fld_70C_C1Context* SwiftMtParser_MT321Parser::fld_70C_C1() {
  Fld_70C_C1Context *_localctx = _tracker.createInstance<Fld_70C_C1Context>(_ctx, getState());
  enterRule(_localctx, 108, SwiftMtParser_MT321Parser::RuleFld_70C_C1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    fld_70C_C1_C();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_C1Context ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16S_C1Context::Fld_16S_C1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_C1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_C1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_C1Context::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_C1;
}

void SwiftMtParser_MT321Parser::Fld_16S_C1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_C1(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_C1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_C1(this);
}

SwiftMtParser_MT321Parser::Fld_16S_C1Context* SwiftMtParser_MT321Parser::fld_16S_C1() {
  Fld_16S_C1Context *_localctx = _tracker.createInstance<Fld_16S_C1Context>(_ctx, getState());
  enterRule(_localctx, 110, SwiftMtParser_MT321Parser::RuleFld_16S_C1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(503);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(505); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(504);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(507); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_16S_CContext::Fld_16S_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_16S_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_16S_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_16S_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_16S_C;
}

void SwiftMtParser_MT321Parser::Fld_16S_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_C(this);
}

void SwiftMtParser_MT321Parser::Fld_16S_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_C(this);
}

SwiftMtParser_MT321Parser::Fld_16S_CContext* SwiftMtParser_MT321Parser::fld_16S_C() {
  Fld_16S_CContext *_localctx = _tracker.createInstance<Fld_16S_CContext>(_ctx, getState());
  enterRule(_localctx, 112, SwiftMtParser_MT321Parser::RuleFld_16S_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(510);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(512); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(511);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
      setState(514); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
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

SwiftMtParser_MT321Parser::Fld_20C_A_CContext::Fld_20C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_20C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_20C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_20C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_20C_A_C;
}

void SwiftMtParser_MT321Parser::Fld_20C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A_C(this);
}

void SwiftMtParser_MT321Parser::Fld_20C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A_C(this);
}

SwiftMtParser_MT321Parser::Fld_20C_A_CContext* SwiftMtParser_MT321Parser::fld_20C_A_C() {
  Fld_20C_A_CContext *_localctx = _tracker.createInstance<Fld_20C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 114, SwiftMtParser_MT321Parser::RuleFld_20C_A_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(517);
    match(SwiftMtParser_MT321Parser::T__2);
    setState(519); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(518);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(521); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_A_GContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_23G_A_GContext::Fld_23G_A_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_23G_A_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_23G_A_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_23G_A_GContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_23G_A_G;
}

void SwiftMtParser_MT321Parser::Fld_23G_A_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A_G(this);
}

void SwiftMtParser_MT321Parser::Fld_23G_A_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A_G(this);
}

SwiftMtParser_MT321Parser::Fld_23G_A_GContext* SwiftMtParser_MT321Parser::fld_23G_A_G() {
  Fld_23G_A_GContext *_localctx = _tracker.createInstance<Fld_23G_A_GContext>(_ctx, getState());
  enterRule(_localctx, 116, SwiftMtParser_MT321Parser::RuleFld_23G_A_G);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(524);
    match(SwiftMtParser_MT321Parser::T__3);
    setState(526); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(525);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(528); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_A_HContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_22H_A_HContext::Fld_22H_A_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_22H_A_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_22H_A_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_22H_A_HContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_22H_A_H;
}

void SwiftMtParser_MT321Parser::Fld_22H_A_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_A_H(this);
}

void SwiftMtParser_MT321Parser::Fld_22H_A_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_A_H(this);
}

SwiftMtParser_MT321Parser::Fld_22H_A_HContext* SwiftMtParser_MT321Parser::fld_22H_A_H() {
  Fld_22H_A_HContext *_localctx = _tracker.createInstance<Fld_22H_A_HContext>(_ctx, getState());
  enterRule(_localctx, 118, SwiftMtParser_MT321Parser::RuleFld_22H_A_H);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(531);
    match(SwiftMtParser_MT321Parser::T__4);
    setState(533); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(532);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(535); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_99B_A_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_99B_A_BContext::Fld_99B_A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_99B_A_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_99B_A_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_99B_A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_99B_A_B;
}

void SwiftMtParser_MT321Parser::Fld_99B_A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_99B_A_B(this);
}

void SwiftMtParser_MT321Parser::Fld_99B_A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_99B_A_B(this);
}

SwiftMtParser_MT321Parser::Fld_99B_A_BContext* SwiftMtParser_MT321Parser::fld_99B_A_B() {
  Fld_99B_A_BContext *_localctx = _tracker.createInstance<Fld_99B_A_BContext>(_ctx, getState());
  enterRule(_localctx, 120, SwiftMtParser_MT321Parser::RuleFld_99B_A_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(538);
    match(SwiftMtParser_MT321Parser::T__5);
    setState(540); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(539);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(542); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_13a_A1_AContext::Fld_13a_A1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_13a_A1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_13a_A1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_13a_A1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_13a_A1_A;
}

void SwiftMtParser_MT321Parser::Fld_13a_A1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_A(this);
}

void SwiftMtParser_MT321Parser::Fld_13a_A1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_A(this);
}

SwiftMtParser_MT321Parser::Fld_13a_A1_AContext* SwiftMtParser_MT321Parser::fld_13a_A1_A() {
  Fld_13a_A1_AContext *_localctx = _tracker.createInstance<Fld_13a_A1_AContext>(_ctx, getState());
  enterRule(_localctx, 122, SwiftMtParser_MT321Parser::RuleFld_13a_A1_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(545);
    match(SwiftMtParser_MT321Parser::T__6);
    setState(547); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(546);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(549); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_13a_A1_BContext::Fld_13a_A1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_13a_A1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_13a_A1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_13a_A1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_13a_A1_B;
}

void SwiftMtParser_MT321Parser::Fld_13a_A1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_B(this);
}

void SwiftMtParser_MT321Parser::Fld_13a_A1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_B(this);
}

SwiftMtParser_MT321Parser::Fld_13a_A1_BContext* SwiftMtParser_MT321Parser::fld_13a_A1_B() {
  Fld_13a_A1_BContext *_localctx = _tracker.createInstance<Fld_13a_A1_BContext>(_ctx, getState());
  enterRule(_localctx, 124, SwiftMtParser_MT321Parser::RuleFld_13a_A1_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(552);
    match(SwiftMtParser_MT321Parser::T__7);
    setState(554); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(553);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(556); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_20C_A1_CContext::Fld_20C_A1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_20C_A1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_20C_A1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_20C_A1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_20C_A1_C;
}

void SwiftMtParser_MT321Parser::Fld_20C_A1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1_C(this);
}

void SwiftMtParser_MT321Parser::Fld_20C_A1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1_C(this);
}

SwiftMtParser_MT321Parser::Fld_20C_A1_CContext* SwiftMtParser_MT321Parser::fld_20C_A1_C() {
  Fld_20C_A1_CContext *_localctx = _tracker.createInstance<Fld_20C_A1_CContext>(_ctx, getState());
  enterRule(_localctx, 126, SwiftMtParser_MT321Parser::RuleFld_20C_A1_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(559);
    match(SwiftMtParser_MT321Parser::T__2);
    setState(561); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(560);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(563); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_20C_B_CContext::Fld_20C_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_20C_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_20C_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_20C_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_20C_B_C;
}

void SwiftMtParser_MT321Parser::Fld_20C_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B_C(this);
}

void SwiftMtParser_MT321Parser::Fld_20C_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B_C(this);
}

SwiftMtParser_MT321Parser::Fld_20C_B_CContext* SwiftMtParser_MT321Parser::fld_20C_B_C() {
  Fld_20C_B_CContext *_localctx = _tracker.createInstance<Fld_20C_B_CContext>(_ctx, getState());
  enterRule(_localctx, 128, SwiftMtParser_MT321Parser::RuleFld_20C_B_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(566);
    match(SwiftMtParser_MT321Parser::T__2);
    setState(568); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(567);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(570); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_B_HContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_22H_B_HContext::Fld_22H_B_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_22H_B_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_22H_B_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_22H_B_HContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_22H_B_H;
}

void SwiftMtParser_MT321Parser::Fld_22H_B_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_B_H(this);
}

void SwiftMtParser_MT321Parser::Fld_22H_B_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_B_H(this);
}

SwiftMtParser_MT321Parser::Fld_22H_B_HContext* SwiftMtParser_MT321Parser::fld_22H_B_H() {
  Fld_22H_B_HContext *_localctx = _tracker.createInstance<Fld_22H_B_HContext>(_ctx, getState());
  enterRule(_localctx, 130, SwiftMtParser_MT321Parser::RuleFld_22H_B_H);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(573);
    match(SwiftMtParser_MT321Parser::T__4);
    setState(575); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(574);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(577); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_98A_B_AContext::Fld_98A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_98A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_98A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_98A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_98A_B_A;
}

void SwiftMtParser_MT321Parser::Fld_98A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B_A(this);
}

void SwiftMtParser_MT321Parser::Fld_98A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B_A(this);
}

SwiftMtParser_MT321Parser::Fld_98A_B_AContext* SwiftMtParser_MT321Parser::fld_98A_B_A() {
  Fld_98A_B_AContext *_localctx = _tracker.createInstance<Fld_98A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 132, SwiftMtParser_MT321Parser::RuleFld_98A_B_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(580);
    match(SwiftMtParser_MT321Parser::T__8);
    setState(582); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(581);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(584); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_19A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_19A_B_AContext::Fld_19A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_19A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_19A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_19A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_19A_B_A;
}

void SwiftMtParser_MT321Parser::Fld_19A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_19A_B_A(this);
}

void SwiftMtParser_MT321Parser::Fld_19A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_19A_B_A(this);
}

SwiftMtParser_MT321Parser::Fld_19A_B_AContext* SwiftMtParser_MT321Parser::fld_19A_B_A() {
  Fld_19A_B_AContext *_localctx = _tracker.createInstance<Fld_19A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 134, SwiftMtParser_MT321Parser::RuleFld_19A_B_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(587);
    match(SwiftMtParser_MT321Parser::T__9);
    setState(589); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(588);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(591); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_92A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_92A_B_AContext::Fld_92A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_92A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_92A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_92A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_92A_B_A;
}

void SwiftMtParser_MT321Parser::Fld_92A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_92A_B_A(this);
}

void SwiftMtParser_MT321Parser::Fld_92A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_92A_B_A(this);
}

SwiftMtParser_MT321Parser::Fld_92A_B_AContext* SwiftMtParser_MT321Parser::fld_92A_B_A() {
  Fld_92A_B_AContext *_localctx = _tracker.createInstance<Fld_92A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 136, SwiftMtParser_MT321Parser::RuleFld_92A_B_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(594);
    match(SwiftMtParser_MT321Parser::T__10);
    setState(596); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(595);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(598); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_99B_B_BContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_99B_B_BContext::Fld_99B_B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_99B_B_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_99B_B_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_99B_B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_99B_B_B;
}

void SwiftMtParser_MT321Parser::Fld_99B_B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_99B_B_B(this);
}

void SwiftMtParser_MT321Parser::Fld_99B_B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_99B_B_B(this);
}

SwiftMtParser_MT321Parser::Fld_99B_B_BContext* SwiftMtParser_MT321Parser::fld_99B_B_B() {
  Fld_99B_B_BContext *_localctx = _tracker.createInstance<Fld_99B_B_BContext>(_ctx, getState());
  enterRule(_localctx, 138, SwiftMtParser_MT321Parser::RuleFld_99B_B_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(601);
    match(SwiftMtParser_MT321Parser::T__5);
    setState(603); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(602);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(605); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_94C_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_94C_B_CContext::Fld_94C_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_94C_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_94C_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_94C_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_94C_B_C;
}

void SwiftMtParser_MT321Parser::Fld_94C_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94C_B_C(this);
}

void SwiftMtParser_MT321Parser::Fld_94C_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94C_B_C(this);
}

SwiftMtParser_MT321Parser::Fld_94C_B_CContext* SwiftMtParser_MT321Parser::fld_94C_B_C() {
  Fld_94C_B_CContext *_localctx = _tracker.createInstance<Fld_94C_B_CContext>(_ctx, getState());
  enterRule(_localctx, 140, SwiftMtParser_MT321Parser::RuleFld_94C_B_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(608);
    match(SwiftMtParser_MT321Parser::T__11);
    setState(610); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(609);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(612); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_PContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B1_PContext::Fld_95a_B1_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B1_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B1_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B1_PContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B1_P;
}

void SwiftMtParser_MT321Parser::Fld_95a_B1_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_P(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B1_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_P(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B1_PContext* SwiftMtParser_MT321Parser::fld_95a_B1_P() {
  Fld_95a_B1_PContext *_localctx = _tracker.createInstance<Fld_95a_B1_PContext>(_ctx, getState());
  enterRule(_localctx, 142, SwiftMtParser_MT321Parser::RuleFld_95a_B1_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(615);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(617); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(616);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(619); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_QContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B1_QContext::Fld_95a_B1_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B1_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B1_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B1_QContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B1_Q;
}

void SwiftMtParser_MT321Parser::Fld_95a_B1_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_Q(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B1_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_Q(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B1_QContext* SwiftMtParser_MT321Parser::fld_95a_B1_Q() {
  Fld_95a_B1_QContext *_localctx = _tracker.createInstance<Fld_95a_B1_QContext>(_ctx, getState());
  enterRule(_localctx, 144, SwiftMtParser_MT321Parser::RuleFld_95a_B1_Q);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(622);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(624); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(623);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(626); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_RContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B1_RContext::Fld_95a_B1_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B1_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B1_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B1_RContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B1_R;
}

void SwiftMtParser_MT321Parser::Fld_95a_B1_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_R(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B1_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_R(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B1_RContext* SwiftMtParser_MT321Parser::fld_95a_B1_R() {
  Fld_95a_B1_RContext *_localctx = _tracker.createInstance<Fld_95a_B1_RContext>(_ctx, getState());
  enterRule(_localctx, 146, SwiftMtParser_MT321Parser::RuleFld_95a_B1_R);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(628);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(629);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(631); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(630);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(633); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B2_PContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B2_PContext::Fld_95a_B2_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B2_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B2_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B2_PContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B2_P;
}

void SwiftMtParser_MT321Parser::Fld_95a_B2_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B2_P(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B2_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B2_P(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B2_PContext* SwiftMtParser_MT321Parser::fld_95a_B2_P() {
  Fld_95a_B2_PContext *_localctx = _tracker.createInstance<Fld_95a_B2_PContext>(_ctx, getState());
  enterRule(_localctx, 148, SwiftMtParser_MT321Parser::RuleFld_95a_B2_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(636);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(638); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(637);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(640); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B2_QContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B2_QContext::Fld_95a_B2_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B2_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B2_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B2_QContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B2_Q;
}

void SwiftMtParser_MT321Parser::Fld_95a_B2_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B2_Q(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B2_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B2_Q(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B2_QContext* SwiftMtParser_MT321Parser::fld_95a_B2_Q() {
  Fld_95a_B2_QContext *_localctx = _tracker.createInstance<Fld_95a_B2_QContext>(_ctx, getState());
  enterRule(_localctx, 150, SwiftMtParser_MT321Parser::RuleFld_95a_B2_Q);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(642);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(643);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(645); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(644);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(647); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B2_RContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B2_RContext::Fld_95a_B2_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B2_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B2_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B2_RContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B2_R;
}

void SwiftMtParser_MT321Parser::Fld_95a_B2_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B2_R(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B2_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B2_R(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B2_RContext* SwiftMtParser_MT321Parser::fld_95a_B2_R() {
  Fld_95a_B2_RContext *_localctx = _tracker.createInstance<Fld_95a_B2_RContext>(_ctx, getState());
  enterRule(_localctx, 152, SwiftMtParser_MT321Parser::RuleFld_95a_B2_R);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(649);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(650);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(652); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(651);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(654); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_B2_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_97A_B2_AContext::Fld_97A_B2_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_97A_B2_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_97A_B2_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_97A_B2_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_97A_B2_A;
}

void SwiftMtParser_MT321Parser::Fld_97A_B2_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B2_A(this);
}

void SwiftMtParser_MT321Parser::Fld_97A_B2_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B2_A(this);
}

SwiftMtParser_MT321Parser::Fld_97A_B2_AContext* SwiftMtParser_MT321Parser::fld_97A_B2_A() {
  Fld_97A_B2_AContext *_localctx = _tracker.createInstance<Fld_97A_B2_AContext>(_ctx, getState());
  enterRule(_localctx, 154, SwiftMtParser_MT321Parser::RuleFld_97A_B2_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(656);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(657);
    match(SwiftMtParser_MT321Parser::T__15);
    setState(659); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(658);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(661); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B3_PContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B3_PContext::Fld_95a_B3_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B3_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B3_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B3_PContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B3_P;
}

void SwiftMtParser_MT321Parser::Fld_95a_B3_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B3_P(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B3_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B3_P(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B3_PContext* SwiftMtParser_MT321Parser::fld_95a_B3_P() {
  Fld_95a_B3_PContext *_localctx = _tracker.createInstance<Fld_95a_B3_PContext>(_ctx, getState());
  enterRule(_localctx, 156, SwiftMtParser_MT321Parser::RuleFld_95a_B3_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(664);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(666); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(665);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(668); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B3_QContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B3_QContext::Fld_95a_B3_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B3_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B3_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B3_QContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B3_Q;
}

void SwiftMtParser_MT321Parser::Fld_95a_B3_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B3_Q(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B3_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B3_Q(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B3_QContext* SwiftMtParser_MT321Parser::fld_95a_B3_Q() {
  Fld_95a_B3_QContext *_localctx = _tracker.createInstance<Fld_95a_B3_QContext>(_ctx, getState());
  enterRule(_localctx, 158, SwiftMtParser_MT321Parser::RuleFld_95a_B3_Q);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(670);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(671);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(673); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(672);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(675); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B3_RContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_B3_RContext::Fld_95a_B3_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_B3_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_B3_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_B3_RContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_B3_R;
}

void SwiftMtParser_MT321Parser::Fld_95a_B3_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B3_R(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_B3_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B3_R(this);
}

SwiftMtParser_MT321Parser::Fld_95a_B3_RContext* SwiftMtParser_MT321Parser::fld_95a_B3_R() {
  Fld_95a_B3_RContext *_localctx = _tracker.createInstance<Fld_95a_B3_RContext>(_ctx, getState());
  enterRule(_localctx, 160, SwiftMtParser_MT321Parser::RuleFld_95a_B3_R);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(677);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(678);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(680); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(679);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(682); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_C_HContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_22H_C_HContext::Fld_22H_C_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_22H_C_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_22H_C_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_22H_C_HContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_22H_C_H;
}

void SwiftMtParser_MT321Parser::Fld_22H_C_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_C_H(this);
}

void SwiftMtParser_MT321Parser::Fld_22H_C_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_C_H(this);
}

SwiftMtParser_MT321Parser::Fld_22H_C_HContext* SwiftMtParser_MT321Parser::fld_22H_C_H() {
  Fld_22H_C_HContext *_localctx = _tracker.createInstance<Fld_22H_C_HContext>(_ctx, getState());
  enterRule(_localctx, 162, SwiftMtParser_MT321Parser::RuleFld_22H_C_H);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(684);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(685);
    match(SwiftMtParser_MT321Parser::T__4);
    setState(687); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(686);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(689); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_C1_PContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_C1_PContext::Fld_95a_C1_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_C1_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_C1_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_C1_PContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_C1_P;
}

void SwiftMtParser_MT321Parser::Fld_95a_C1_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C1_P(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_C1_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C1_P(this);
}

SwiftMtParser_MT321Parser::Fld_95a_C1_PContext* SwiftMtParser_MT321Parser::fld_95a_C1_P() {
  Fld_95a_C1_PContext *_localctx = _tracker.createInstance<Fld_95a_C1_PContext>(_ctx, getState());
  enterRule(_localctx, 164, SwiftMtParser_MT321Parser::RuleFld_95a_C1_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(691);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(692);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(694); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(693);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(696); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_C1_QContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_C1_QContext::Fld_95a_C1_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_C1_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_C1_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_C1_QContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_C1_Q;
}

void SwiftMtParser_MT321Parser::Fld_95a_C1_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C1_Q(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_C1_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C1_Q(this);
}

SwiftMtParser_MT321Parser::Fld_95a_C1_QContext* SwiftMtParser_MT321Parser::fld_95a_C1_Q() {
  Fld_95a_C1_QContext *_localctx = _tracker.createInstance<Fld_95a_C1_QContext>(_ctx, getState());
  enterRule(_localctx, 166, SwiftMtParser_MT321Parser::RuleFld_95a_C1_Q);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(698);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(699);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(701); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(700);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(703); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_C1_RContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_95a_C1_RContext::Fld_95a_C1_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_95a_C1_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_95a_C1_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_95a_C1_RContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_95a_C1_R;
}

void SwiftMtParser_MT321Parser::Fld_95a_C1_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C1_R(this);
}

void SwiftMtParser_MT321Parser::Fld_95a_C1_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C1_R(this);
}

SwiftMtParser_MT321Parser::Fld_95a_C1_RContext* SwiftMtParser_MT321Parser::fld_95a_C1_R() {
  Fld_95a_C1_RContext *_localctx = _tracker.createInstance<Fld_95a_C1_RContext>(_ctx, getState());
  enterRule(_localctx, 168, SwiftMtParser_MT321Parser::RuleFld_95a_C1_R);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(705);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(706);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(708); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(707);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(710); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_C1_AContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_97A_C1_AContext::Fld_97A_C1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_97A_C1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_97A_C1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_97A_C1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_97A_C1_A;
}

void SwiftMtParser_MT321Parser::Fld_97A_C1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_C1_A(this);
}

void SwiftMtParser_MT321Parser::Fld_97A_C1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_C1_A(this);
}

SwiftMtParser_MT321Parser::Fld_97A_C1_AContext* SwiftMtParser_MT321Parser::fld_97A_C1_A() {
  Fld_97A_C1_AContext *_localctx = _tracker.createInstance<Fld_97A_C1_AContext>(_ctx, getState());
  enterRule(_localctx, 170, SwiftMtParser_MT321Parser::RuleFld_97A_C1_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(712);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(713);
    match(SwiftMtParser_MT321Parser::T__15);
    setState(715); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(714);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(717); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70C_C1_CContext ------------------------------------------------------------------

SwiftMtParser_MT321Parser::Fld_70C_C1_CContext::Fld_70C_C1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT321Parser::Fld_70C_C1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT321Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT321Parser::Fld_70C_C1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT321Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT321Parser::Fld_70C_C1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT321Parser::RuleFld_70C_C1_C;
}

void SwiftMtParser_MT321Parser::Fld_70C_C1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70C_C1_C(this);
}

void SwiftMtParser_MT321Parser::Fld_70C_C1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT321Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70C_C1_C(this);
}

SwiftMtParser_MT321Parser::Fld_70C_C1_CContext* SwiftMtParser_MT321Parser::fld_70C_C1_C() {
  Fld_70C_C1_CContext *_localctx = _tracker.createInstance<Fld_70C_C1_CContext>(_ctx, getState());
  enterRule(_localctx, 172, SwiftMtParser_MT321Parser::RuleFld_70C_C1_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(719);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(720);
    match(SwiftMtParser_MT321Parser::T__16);
    setState(722); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(721);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(724); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT321Parser::T__0)
      | (1ULL << SwiftMtParser_MT321Parser::T__1)
      | (1ULL << SwiftMtParser_MT321Parser::T__2)
      | (1ULL << SwiftMtParser_MT321Parser::T__3)
      | (1ULL << SwiftMtParser_MT321Parser::T__4)
      | (1ULL << SwiftMtParser_MT321Parser::T__5)
      | (1ULL << SwiftMtParser_MT321Parser::T__6)
      | (1ULL << SwiftMtParser_MT321Parser::T__7)
      | (1ULL << SwiftMtParser_MT321Parser::T__8)
      | (1ULL << SwiftMtParser_MT321Parser::T__9)
      | (1ULL << SwiftMtParser_MT321Parser::T__10)
      | (1ULL << SwiftMtParser_MT321Parser::T__11)
      | (1ULL << SwiftMtParser_MT321Parser::T__12)
      | (1ULL << SwiftMtParser_MT321Parser::T__13)
      | (1ULL << SwiftMtParser_MT321Parser::T__14)
      | (1ULL << SwiftMtParser_MT321Parser::T__15)
      | (1ULL << SwiftMtParser_MT321Parser::T__16)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT321Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT321Parser::MT_END)
      | (1ULL << SwiftMtParser_MT321Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT321Parser::COLON)
      | (1ULL << SwiftMtParser_MT321Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT321Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT321Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT321Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT321Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT321Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt", "seq_A", 
  "seq_A1", "seq_B", "seq_B1", "seq_B2", "seq_B3", "seq_C", "seq_C1", "fld_16R_A", 
  "fld_20C_A", "fld_23G_A", "fld_22H_A", "fld_99B_A", "fld_16R_A1", "fld_13a_A1", 
  "fld_20C_A1", "fld_16S_A1", "fld_16S_A", "fld_16R_B", "fld_20C_B", "fld_22H_B", 
  "fld_98A_B", "fld_19A_B", "fld_92A_B", "fld_99B_B", "fld_94C_B", "fld_16R_B1", 
  "fld_95a_B1", "fld_16S_B1", "fld_16R_B2", "fld_95a_B2", "fld_97A_B2", 
  "fld_16S_B2", "fld_16R_B3", "fld_95a_B3", "fld_16S_B3", "fld_16S_B", "fld_16R_C", 
  "fld_22H_C", "fld_16R_C1", "fld_95a_C1", "fld_97A_C1", "fld_70C_C1", "fld_16S_C1", 
  "fld_16S_C", "fld_20C_A_C", "fld_23G_A_G", "fld_22H_A_H", "fld_99B_A_B", 
  "fld_13a_A1_A", "fld_13a_A1_B", "fld_20C_A1_C", "fld_20C_B_C", "fld_22H_B_H", 
  "fld_98A_B_A", "fld_19A_B_A", "fld_92A_B_A", "fld_99B_B_B", "fld_94C_B_C", 
  "fld_95a_B1_P", "fld_95a_B1_Q", "fld_95a_B1_R", "fld_95a_B2_P", "fld_95a_B2_Q", 
  "fld_95a_B2_R", "fld_97A_B2_A", "fld_95a_B3_P", "fld_95a_B3_Q", "fld_95a_B3_R", 
  "fld_22H_C_H", "fld_95a_C1_P", "fld_95a_C1_Q", "fld_95a_C1_R", "fld_97A_C1_A", 
  "fld_70C_C1_C"
};

std::vector<std::string> SwiftMtParser_MT321Parser::_literalNames = {
  "", "'16R:'", "'16S:'", "'20C:'", "'23G:'", "'22H:'", "'99B:'", "'13A:'", 
  "'13B:'", "'98A:'", "'19A:'", "'92A:'", "'94C:'", "'95P:'", "'95Q:'", 
  "'95R:'", "'97A:'", "'70C:'", "'{1:'", "'{2:'", "'{3:'", "'{4:'", "'{5:'", 
  "'-}'", "'{'", "'}'", "':'"
};

std::vector<std::string> SwiftMtParser_MT321Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "TAG_BH", "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", "MT_END", "LBRACE", 
  "RBRACE", "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT321Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT321Parser::_tokenNames;

SwiftMtParser_MT321Parser::Initializer::Initializer() {
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
    0x3, 0x1e, 0x2d9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x46, 0x9, 0x46, 0x4, 0x47, 0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 
    0x4c, 0x4, 0x4d, 0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 
    0x4, 0x50, 0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 
    0x53, 0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
    0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0xb4, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 
    0xb8, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x6, 0x4, 0xc1, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0xc2, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0xca, 0xa, 0x6, 
    0xd, 0x6, 0xe, 0x6, 0xcb, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0xd7, 0xa, 0x9, 
    0xd, 0x9, 0xe, 0x9, 0xd8, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0xe2, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 
    0xe3, 0x3, 0xc, 0x6, 0xc, 0xe7, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xe8, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0xef, 0xa, 0xd, 0xd, 
    0xd, 0xe, 0xd, 0xf0, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 
    0xf7, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xf8, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 
    0xfd, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xfe, 0x3, 0xe, 0x7, 0xe, 0x102, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x105, 0xb, 0xe, 0x3, 0xe, 0x7, 0xe, 0x108, 
    0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x10b, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0x111, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0x119, 0xa, 0x10, 0xd, 0x10, 
    0xe, 0x10, 0x11a, 0x3, 0x10, 0x6, 0x10, 0x11e, 0xa, 0x10, 0xd, 0x10, 
    0xe, 0x10, 0x11f, 0x3, 0x10, 0x6, 0x10, 0x123, 0xa, 0x10, 0xd, 0x10, 
    0xe, 0x10, 0x124, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x129, 0xa, 0x10, 
    0x3, 0x10, 0x5, 0x10, 0x12c, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x131, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x13b, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0x142, 
    0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0x143, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x14b, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 
    0x14c, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x6, 0x15, 0x153, 
    0xa, 0x15, 0xd, 0x15, 0xe, 0x15, 0x154, 0x3, 0x15, 0x5, 0x15, 0x158, 
    0xa, 0x15, 0x3, 0x15, 0x5, 0x15, 0x15b, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0x162, 0xa, 0x16, 0xd, 0x16, 
    0xe, 0x16, 0x163, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x6, 
    0x1b, 0x171, 0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0x172, 0x3, 0x1c, 0x3, 
    0x1c, 0x5, 0x1c, 0x177, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x17e, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 
    0x17f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x6, 0x1f, 0x185, 0xa, 0x1f, 
    0xd, 0x1f, 0xe, 0x1f, 0x186, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x6, 0x20, 
    0x18c, 0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 0x18d, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x3, 0x28, 0x6, 0x28, 0x1a1, 0xa, 0x28, 0xd, 0x28, 0xe, 0x28, 
    0x1a2, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1a8, 0xa, 0x29, 
    0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x6, 0x2a, 0x1ad, 0xa, 0x2a, 0xd, 0x2a, 
    0xe, 0x2a, 0x1ae, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x6, 0x2b, 0x1b4, 
    0xa, 0x2b, 0xd, 0x2b, 0xe, 0x2b, 0x1b5, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x5, 0x2c, 0x1bb, 0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 
    0x3, 0x2e, 0x6, 0x2e, 0x1c2, 0xa, 0x2e, 0xd, 0x2e, 0xe, 0x2e, 0x1c3, 
    0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x6, 0x2f, 0x1c9, 0xa, 0x2f, 0xd, 0x2f, 
    0xe, 0x2f, 0x1ca, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x1d0, 
    0xa, 0x30, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x6, 0x31, 0x1d5, 0xa, 0x31, 
    0xd, 0x31, 0xe, 0x31, 0x1d6, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x6, 0x32, 
    0x1dc, 0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x1dd, 0x3, 0x33, 0x3, 0x33, 
    0x3, 0x33, 0x6, 0x33, 0x1e3, 0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 0x1e4, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 0x1ec, 
    0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 0x1ed, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x5, 0x36, 0x1f3, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x6, 0x39, 0x1fc, 0xa, 0x39, 0xd, 0x39, 
    0xe, 0x39, 0x1fd, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x203, 
    0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 0x204, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x6, 0x3b, 0x20a, 0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 0x20b, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x6, 0x3c, 0x211, 0xa, 0x3c, 0xd, 0x3c, 0xe, 0x3c, 
    0x212, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x6, 0x3d, 0x218, 0xa, 0x3d, 
    0xd, 0x3d, 0xe, 0x3d, 0x219, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x6, 0x3e, 
    0x21f, 0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x220, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x6, 0x3f, 0x226, 0xa, 0x3f, 0xd, 0x3f, 0xe, 0x3f, 0x227, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x6, 0x40, 0x22d, 0xa, 0x40, 0xd, 0x40, 
    0xe, 0x40, 0x22e, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x6, 0x41, 0x234, 
    0xa, 0x41, 0xd, 0x41, 0xe, 0x41, 0x235, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x6, 0x42, 0x23b, 0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 0x23c, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x242, 0xa, 0x43, 0xd, 0x43, 0xe, 0x43, 
    0x243, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x6, 0x44, 0x249, 0xa, 0x44, 
    0xd, 0x44, 0xe, 0x44, 0x24a, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x6, 0x45, 
    0x250, 0xa, 0x45, 0xd, 0x45, 0xe, 0x45, 0x251, 0x3, 0x46, 0x3, 0x46, 
    0x3, 0x46, 0x6, 0x46, 0x257, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x258, 
    0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x6, 0x47, 0x25e, 0xa, 0x47, 0xd, 0x47, 
    0xe, 0x47, 0x25f, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x6, 0x48, 0x265, 
    0xa, 0x48, 0xd, 0x48, 0xe, 0x48, 0x266, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 
    0x6, 0x49, 0x26c, 0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 0x26d, 0x3, 0x4a, 
    0x3, 0x4a, 0x3, 0x4a, 0x6, 0x4a, 0x273, 0xa, 0x4a, 0xd, 0x4a, 0xe, 0x4a, 
    0x274, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x6, 0x4b, 0x27a, 0xa, 0x4b, 
    0xd, 0x4b, 0xe, 0x4b, 0x27b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x6, 0x4c, 
    0x281, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x282, 0x3, 0x4d, 0x3, 0x4d, 
    0x3, 0x4d, 0x6, 0x4d, 0x288, 0xa, 0x4d, 0xd, 0x4d, 0xe, 0x4d, 0x289, 
    0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x6, 0x4e, 0x28f, 0xa, 0x4e, 0xd, 0x4e, 
    0xe, 0x4e, 0x290, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 0x6, 0x4f, 0x296, 
    0xa, 0x4f, 0xd, 0x4f, 0xe, 0x4f, 0x297, 0x3, 0x50, 0x3, 0x50, 0x3, 0x50, 
    0x6, 0x50, 0x29d, 0xa, 0x50, 0xd, 0x50, 0xe, 0x50, 0x29e, 0x3, 0x51, 
    0x3, 0x51, 0x3, 0x51, 0x6, 0x51, 0x2a4, 0xa, 0x51, 0xd, 0x51, 0xe, 0x51, 
    0x2a5, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x6, 0x52, 0x2ab, 0xa, 0x52, 
    0xd, 0x52, 0xe, 0x52, 0x2ac, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 0x6, 0x53, 
    0x2b2, 0xa, 0x53, 0xd, 0x53, 0xe, 0x53, 0x2b3, 0x3, 0x54, 0x3, 0x54, 
    0x3, 0x54, 0x6, 0x54, 0x2b9, 0xa, 0x54, 0xd, 0x54, 0xe, 0x54, 0x2ba, 
    0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x6, 0x55, 0x2c0, 0xa, 0x55, 0xd, 0x55, 
    0xe, 0x55, 0x2c1, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x6, 0x56, 0x2c7, 
    0xa, 0x56, 0xd, 0x56, 0xe, 0x56, 0x2c8, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
    0x6, 0x57, 0x2ce, 0xa, 0x57, 0xd, 0x57, 0xe, 0x57, 0x2cf, 0x3, 0x58, 
    0x3, 0x58, 0x3, 0x58, 0x6, 0x58, 0x2d5, 0xa, 0x58, 0xd, 0x58, 0xe, 0x58, 
    0x2d6, 0x3, 0x58, 0x2, 0x2, 0x59, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 
    0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 
    0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 
    0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 
    0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 
    0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 0x2, 0x5, 0x3, 0x2, 
    0x1b, 0x1b, 0x3, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1d, 0x2, 0x2d1, 
    0x2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x4, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x6, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xa, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xe, 0xd1, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x12, 0xda, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0x16, 0xe6, 0x3, 0x2, 0x2, 0x2, 0x18, 0xea, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xf4, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x115, 0x3, 0x2, 0x2, 0x2, 0x20, 0x134, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x138, 0x3, 0x2, 0x2, 0x2, 0x24, 0x13f, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x147, 0x3, 0x2, 0x2, 0x2, 0x28, 0x150, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x165, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x167, 0x3, 0x2, 0x2, 0x2, 0x30, 0x169, 0x3, 0x2, 0x2, 0x2, 0x32, 0x16b, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x36, 0x176, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x178, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x17a, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x181, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x188, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x18f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x191, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x193, 0x3, 0x2, 0x2, 0x2, 0x46, 0x195, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x197, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x199, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x19b, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1a7, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1b0, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1bc, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1c5, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1d1, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x1d8, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1e6, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1f2, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1f6, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x72, 0x1ff, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x206, 0x3, 0x2, 0x2, 0x2, 0x76, 0x20d, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x214, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x222, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x229, 0x3, 0x2, 0x2, 0x2, 0x80, 0x230, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x237, 0x3, 0x2, 0x2, 0x2, 0x84, 0x23e, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x245, 0x3, 0x2, 0x2, 0x2, 0x88, 0x24c, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x253, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x25a, 0x3, 0x2, 0x2, 
    0x2, 0x8e, 0x261, 0x3, 0x2, 0x2, 0x2, 0x90, 0x268, 0x3, 0x2, 0x2, 0x2, 
    0x92, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x94, 0x276, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x27d, 0x3, 0x2, 0x2, 0x2, 0x98, 0x284, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x28b, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x292, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x299, 0x3, 
    0x2, 0x2, 0x2, 0xa0, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x2a7, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0x2ae, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x2b5, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0x2bc, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x2c3, 0x3, 0x2, 0x2, 0x2, 
    0xac, 0x2ca, 0x3, 0x2, 0x2, 0x2, 0xae, 0x2d1, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb1, 0x5, 0x4, 0x3, 0x2, 0xb1, 0xb3, 0x5, 0x8, 0x5, 0x2, 0xb2, 0xb4, 
    0x5, 0xc, 0x7, 0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb7, 0x5, 0x18, 
    0xd, 0x2, 0xb6, 0xb8, 0x5, 0xe, 0x8, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xba, 0x7, 0x2, 0x2, 0x3, 0xba, 0x3, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0x7, 0x14, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x6, 0x4, 0x2, 0xbd, 0xbe, 
    0x7, 0x1b, 0x2, 0x2, 0xbe, 0x5, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0xa, 
    0x2, 0x2, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 
    0x2, 0xc3, 0x7, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x15, 0x2, 0x2, 
    0xc5, 0xc6, 0x5, 0xa, 0x6, 0x2, 0xc6, 0xc7, 0x7, 0x1b, 0x2, 0x2, 0xc7, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0xa, 0x2, 0x2, 0x2, 0xc9, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0xcd, 0xce, 0x7, 0x16, 0x2, 0x2, 0xce, 0xcf, 0x5, 0x10, 0x9, 
    0x2, 0xcf, 0xd0, 0x7, 0x1b, 0x2, 0x2, 0xd0, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xd2, 0x7, 0x18, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x10, 0x9, 0x2, 0xd3, 
    0xd4, 0x7, 0x1b, 0x2, 0x2, 0xd4, 0xf, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 
    0x5, 0x12, 0xa, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 
    0x2, 0x2, 0xd9, 0x11, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 0x1a, 0x2, 
    0x2, 0xdb, 0xdc, 0x5, 0x14, 0xb, 0x2, 0xdc, 0xdd, 0x7, 0x1c, 0x2, 0x2, 
    0xdd, 0xde, 0x5, 0x16, 0xc, 0x2, 0xde, 0xdf, 0x7, 0x1b, 0x2, 0x2, 0xdf, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0xa, 0x3, 0x2, 0x2, 0xe1, 0xe0, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0x15, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe7, 0xa, 0x2, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0x17, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xeb, 0x7, 0x17, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x1a, 0xe, 0x2, 0xec, 0xee, 
    0x5, 0x1e, 0x10, 0x2, 0xed, 0xef, 0x5, 0x26, 0x14, 0x2, 0xee, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 
    0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 
    0x2, 0x2, 0xf2, 0xf3, 0x7, 0x19, 0x2, 0x2, 0xf3, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0xf4, 0xf6, 0x5, 0x2a, 0x16, 0x2, 0xf5, 0xf7, 0x5, 0x2c, 0x17, 
    0x2, 0xf6, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfc, 0x5, 0x2e, 0x18, 0x2, 0xfb, 0xfd, 
    0x5, 0x30, 0x19, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0xff, 0x103, 0x3, 0x2, 0x2, 0x2, 0x100, 0x102, 0x5, 0x32, 
    0x1a, 0x2, 0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 0x102, 0x105, 0x3, 0x2, 
    0x2, 0x2, 0x103, 0x101, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 
    0x2, 0x2, 0x104, 0x109, 0x3, 0x2, 0x2, 0x2, 0x105, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x106, 0x108, 0x5, 0x1c, 0xf, 0x2, 0x107, 0x106, 0x3, 0x2, 
    0x2, 0x2, 0x108, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x5, 0x3c, 
    0x1f, 0x2, 0x10d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 0x5, 0x34, 
    0x1b, 0x2, 0x10f, 0x111, 0x5, 0x36, 0x1c, 0x2, 0x110, 0x10f, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 0x3, 0x2, 
    0x2, 0x2, 0x112, 0x113, 0x5, 0x38, 0x1d, 0x2, 0x113, 0x114, 0x5, 0x3a, 
    0x1e, 0x2, 0x114, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x115, 0x116, 0x5, 0x3e, 
    0x20, 0x2, 0x116, 0x118, 0x5, 0x40, 0x21, 0x2, 0x117, 0x119, 0x5, 0x42, 
    0x22, 0x2, 0x118, 0x117, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 
    0x2, 0x2, 0x11a, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x3, 0x2, 
    0x2, 0x2, 0x11b, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11e, 0x5, 0x44, 
    0x23, 0x2, 0x11d, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x3, 0x2, 
    0x2, 0x2, 0x11f, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x120, 0x3, 0x2, 
    0x2, 0x2, 0x120, 0x122, 0x3, 0x2, 0x2, 0x2, 0x121, 0x123, 0x5, 0x46, 
    0x24, 0x2, 0x122, 0x121, 0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x124, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x5, 0x48, 
    0x25, 0x2, 0x127, 0x129, 0x5, 0x4a, 0x26, 0x2, 0x128, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12b, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x12c, 0x5, 0x4c, 0x27, 0x2, 0x12b, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x12b, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x12e, 0x5, 0x20, 0x11, 0x2, 0x12e, 0x130, 0x5, 0x22, 
    0x12, 0x2, 0x12f, 0x131, 0x5, 0x24, 0x13, 0x2, 0x130, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 0x3, 0x2, 
    0x2, 0x2, 0x132, 0x133, 0x5, 0x62, 0x32, 0x2, 0x133, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x134, 0x135, 0x5, 0x4e, 0x28, 0x2, 0x135, 0x136, 0x5, 0x50, 
    0x29, 0x2, 0x136, 0x137, 0x5, 0x52, 0x2a, 0x2, 0x137, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x13a, 0x5, 0x54, 0x2b, 0x2, 0x139, 0x13b, 0x5, 0x56, 
    0x2c, 0x2, 0x13a, 0x139, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x5, 0x58, 
    0x2d, 0x2, 0x13d, 0x13e, 0x5, 0x5a, 0x2e, 0x2, 0x13e, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x13f, 0x141, 0x5, 0x5c, 0x2f, 0x2, 0x140, 0x142, 0x5, 0x5e, 
    0x30, 0x2, 0x141, 0x140, 0x3, 0x2, 0x2, 0x2, 0x142, 0x143, 0x3, 0x2, 
    0x2, 0x2, 0x143, 0x141, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x3, 0x2, 
    0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x5, 0x60, 
    0x31, 0x2, 0x146, 0x25, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x5, 0x64, 
    0x33, 0x2, 0x148, 0x14a, 0x5, 0x66, 0x34, 0x2, 0x149, 0x14b, 0x5, 0x28, 
    0x15, 0x2, 0x14a, 0x149, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x14c, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 0x3, 0x2, 
    0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x5, 0x72, 
    0x3a, 0x2, 0x14f, 0x27, 0x3, 0x2, 0x2, 0x2, 0x150, 0x152, 0x5, 0x68, 
    0x35, 0x2, 0x151, 0x153, 0x5, 0x6a, 0x36, 0x2, 0x152, 0x151, 0x3, 0x2, 
    0x2, 0x2, 0x153, 0x154, 0x3, 0x2, 0x2, 0x2, 0x154, 0x152, 0x3, 0x2, 
    0x2, 0x2, 0x154, 0x155, 0x3, 0x2, 0x2, 0x2, 0x155, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x158, 0x5, 0x6c, 0x37, 0x2, 0x157, 0x156, 0x3, 0x2, 
    0x2, 0x2, 0x157, 0x158, 0x3, 0x2, 0x2, 0x2, 0x158, 0x15a, 0x3, 0x2, 
    0x2, 0x2, 0x159, 0x15b, 0x5, 0x6e, 0x38, 0x2, 0x15a, 0x159, 0x3, 0x2, 
    0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x15c, 0x3, 0x2, 
    0x2, 0x2, 0x15c, 0x15d, 0x5, 0x70, 0x39, 0x2, 0x15d, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x15e, 0x15f, 0x7, 0x1d, 0x2, 0x2, 0x15f, 0x161, 0x7, 0x3, 
    0x2, 0x2, 0x160, 0x162, 0xa, 0x4, 0x2, 0x2, 0x161, 0x160, 0x3, 0x2, 
    0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x161, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x164, 0x3, 0x2, 0x2, 0x2, 0x164, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x165, 0x166, 0x5, 0x74, 0x3b, 0x2, 0x166, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x167, 0x168, 0x5, 0x76, 0x3c, 0x2, 0x168, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16a, 0x5, 0x78, 0x3d, 0x2, 0x16a, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x16b, 0x16c, 0x5, 0x7a, 0x3e, 0x2, 0x16c, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16e, 0x7, 0x1d, 0x2, 0x2, 0x16e, 0x170, 0x7, 0x3, 0x2, 
    0x2, 0x16f, 0x171, 0xa, 0x4, 0x2, 0x2, 0x170, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x171, 0x172, 0x3, 0x2, 0x2, 0x2, 0x172, 0x170, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x173, 0x3, 0x2, 0x2, 0x2, 0x173, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x174, 0x177, 0x5, 0x7c, 0x3f, 0x2, 0x175, 0x177, 0x5, 0x7e, 0x40, 0x2, 
    0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 0x175, 0x3, 0x2, 0x2, 0x2, 
    0x177, 0x37, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x5, 0x80, 0x41, 0x2, 
    0x179, 0x39, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x17b, 0x7, 0x1d, 0x2, 0x2, 
    0x17b, 0x17d, 0x7, 0x4, 0x2, 0x2, 0x17c, 0x17e, 0xa, 0x4, 0x2, 0x2, 
    0x17d, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 
    0x180, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x7, 0x1d, 0x2, 0x2, 
    0x182, 0x184, 0x7, 0x4, 0x2, 0x2, 0x183, 0x185, 0xa, 0x4, 0x2, 0x2, 
    0x184, 0x183, 0x3, 0x2, 0x2, 0x2, 0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 
    0x186, 0x184, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x3, 0x2, 0x2, 0x2, 
    0x187, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x7, 0x1d, 0x2, 0x2, 
    0x189, 0x18b, 0x7, 0x3, 0x2, 0x2, 0x18a, 0x18c, 0xa, 0x4, 0x2, 0x2, 
    0x18b, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 
    0x18d, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 
    0x18e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x190, 0x5, 0x82, 0x42, 0x2, 
    0x190, 0x41, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x5, 0x84, 0x43, 0x2, 
    0x192, 0x43, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x5, 0x86, 0x44, 0x2, 
    0x194, 0x45, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x5, 0x88, 0x45, 0x2, 
    0x196, 0x47, 0x3, 0x2, 0x2, 0x2, 0x197, 0x198, 0x5, 0x8a, 0x46, 0x2, 
    0x198, 0x49, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x5, 0x8c, 0x47, 0x2, 
    0x19a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x5, 0x8e, 0x48, 0x2, 
    0x19c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x7, 0x1d, 0x2, 0x2, 
    0x19e, 0x1a0, 0x7, 0x3, 0x2, 0x2, 0x19f, 0x1a1, 0xa, 0x4, 0x2, 0x2, 
    0x1a0, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 
    0x1a3, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x1a4, 0x1a8, 0x5, 0x90, 0x49, 0x2, 
    0x1a5, 0x1a8, 0x5, 0x92, 0x4a, 0x2, 0x1a6, 0x1a8, 0x5, 0x94, 0x4b, 0x2, 
    0x1a7, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x1a7, 0x1a5, 0x3, 0x2, 0x2, 0x2, 
    0x1a7, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1a9, 
    0x1aa, 0x7, 0x1d, 0x2, 0x2, 0x1aa, 0x1ac, 0x7, 0x4, 0x2, 0x2, 0x1ab, 
    0x1ad, 0xa, 0x4, 0x2, 0x2, 0x1ac, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 
    0x1ae, 0x3, 0x2, 0x2, 0x2, 0x1ae, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ae, 
    0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1b1, 
    0x7, 0x1d, 0x2, 0x2, 0x1b1, 0x1b3, 0x7, 0x3, 0x2, 0x2, 0x1b2, 0x1b4, 
    0xa, 0x4, 0x2, 0x2, 0x1b3, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 
    0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b5, 0x1b6, 
    0x3, 0x2, 0x2, 0x2, 0x1b6, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1bb, 0x5, 
    0x96, 0x4c, 0x2, 0x1b8, 0x1bb, 0x5, 0x98, 0x4d, 0x2, 0x1b9, 0x1bb, 0x5, 
    0x9a, 0x4e, 0x2, 0x1ba, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 
    0x2, 0x2, 0x2, 0x1ba, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x1bc, 0x1bd, 0x5, 0x9c, 0x4f, 0x2, 0x1bd, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x1be, 0x1bf, 0x7, 0x1d, 0x2, 0x2, 0x1bf, 0x1c1, 0x7, 0x4, 
    0x2, 0x2, 0x1c0, 0x1c2, 0xa, 0x4, 0x2, 0x2, 0x1c1, 0x1c0, 0x3, 0x2, 
    0x2, 0x2, 0x1c2, 0x1c3, 0x3, 0x2, 0x2, 0x2, 0x1c3, 0x1c1, 0x3, 0x2, 
    0x2, 0x2, 0x1c3, 0x1c4, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x1c5, 0x1c6, 0x7, 0x1d, 0x2, 0x2, 0x1c6, 0x1c8, 0x7, 0x3, 0x2, 
    0x2, 0x1c7, 0x1c9, 0xa, 0x4, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 
    0x2, 0x1c9, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 
    0x2, 0x1ca, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x1cc, 0x1d0, 0x5, 0x9e, 0x50, 0x2, 0x1cd, 0x1d0, 0x5, 0xa0, 0x51, 0x2, 
    0x1ce, 0x1d0, 0x5, 0xa2, 0x52, 0x2, 0x1cf, 0x1cc, 0x3, 0x2, 0x2, 0x2, 
    0x1cf, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 
    0x1d0, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x7, 0x1d, 0x2, 0x2, 
    0x1d2, 0x1d4, 0x7, 0x4, 0x2, 0x2, 0x1d3, 0x1d5, 0xa, 0x4, 0x2, 0x2, 
    0x1d4, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d5, 0x1d6, 0x3, 0x2, 0x2, 0x2, 
    0x1d6, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 0x3, 0x2, 0x2, 0x2, 
    0x1d7, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x7, 0x1d, 0x2, 0x2, 
    0x1d9, 0x1db, 0x7, 0x4, 0x2, 0x2, 0x1da, 0x1dc, 0xa, 0x4, 0x2, 0x2, 
    0x1db, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 
    0x1dd, 0x1db, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 
    0x1de, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x7, 0x1d, 0x2, 0x2, 
    0x1e0, 0x1e2, 0x7, 0x3, 0x2, 0x2, 0x1e1, 0x1e3, 0xa, 0x4, 0x2, 0x2, 
    0x1e2, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x3, 0x2, 0x2, 0x2, 
    0x1e4, 0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x3, 0x2, 0x2, 0x2, 
    0x1e5, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x5, 0xa4, 0x53, 0x2, 
    0x1e7, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x1d, 0x2, 0x2, 
    0x1e9, 0x1eb, 0x7, 0x3, 0x2, 0x2, 0x1ea, 0x1ec, 0xa, 0x4, 0x2, 0x2, 
    0x1eb, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 0x2, 0x2, 
    0x1ed, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 0x2, 0x2, 
    0x1ee, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f3, 0x5, 0xa6, 0x54, 0x2, 
    0x1f0, 0x1f3, 0x5, 0xa8, 0x55, 0x2, 0x1f1, 0x1f3, 0x5, 0xaa, 0x56, 0x2, 
    0x1f2, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x1f2, 0x1f0, 0x3, 0x2, 0x2, 0x2, 
    0x1f2, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1f4, 
    0x1f5, 0x5, 0xac, 0x57, 0x2, 0x1f5, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1f6, 
    0x1f7, 0x5, 0xae, 0x58, 0x2, 0x1f7, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1f8, 
    0x1f9, 0x7, 0x1d, 0x2, 0x2, 0x1f9, 0x1fb, 0x7, 0x4, 0x2, 0x2, 0x1fa, 
    0x1fc, 0xa, 0x4, 0x2, 0x2, 0x1fb, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 
    0x1fd, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 
    0x1fe, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x71, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 
    0x7, 0x1d, 0x2, 0x2, 0x200, 0x202, 0x7, 0x4, 0x2, 0x2, 0x201, 0x203, 
    0xa, 0x4, 0x2, 0x2, 0x202, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 
    0x3, 0x2, 0x2, 0x2, 0x204, 0x202, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 
    0x3, 0x2, 0x2, 0x2, 0x205, 0x73, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x7, 
    0x1d, 0x2, 0x2, 0x207, 0x209, 0x7, 0x5, 0x2, 0x2, 0x208, 0x20a, 0xa, 
    0x4, 0x2, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 
    0x2, 0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 
    0x2, 0x2, 0x2, 0x20c, 0x75, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 0x1d, 
    0x2, 0x2, 0x20e, 0x210, 0x7, 0x6, 0x2, 0x2, 0x20f, 0x211, 0xa, 0x4, 
    0x2, 0x2, 0x210, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 
    0x2, 0x2, 0x213, 0x77, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x7, 0x1d, 
    0x2, 0x2, 0x215, 0x217, 0x7, 0x7, 0x2, 0x2, 0x216, 0x218, 0xa, 0x4, 
    0x2, 0x2, 0x217, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x1d, 
    0x2, 0x2, 0x21c, 0x21e, 0x7, 0x8, 0x2, 0x2, 0x21d, 0x21f, 0xa, 0x4, 
    0x2, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 
    0x2, 0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x7, 0x1d, 
    0x2, 0x2, 0x223, 0x225, 0x7, 0x9, 0x2, 0x2, 0x224, 0x226, 0xa, 0x4, 
    0x2, 0x2, 0x225, 0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 
    0x2, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x3, 0x2, 
    0x2, 0x2, 0x228, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x1d, 
    0x2, 0x2, 0x22a, 0x22c, 0x7, 0xa, 0x2, 0x2, 0x22b, 0x22d, 0xa, 0x4, 
    0x2, 0x2, 0x22c, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 
    0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x3, 0x2, 
    0x2, 0x2, 0x22f, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x1d, 
    0x2, 0x2, 0x231, 0x233, 0x7, 0x5, 0x2, 0x2, 0x232, 0x234, 0xa, 0x4, 
    0x2, 0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x3, 0x2, 
    0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 
    0x2, 0x2, 0x236, 0x81, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x7, 0x1d, 
    0x2, 0x2, 0x238, 0x23a, 0x7, 0x5, 0x2, 0x2, 0x239, 0x23b, 0xa, 0x4, 
    0x2, 0x2, 0x23a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x83, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x1d, 
    0x2, 0x2, 0x23f, 0x241, 0x7, 0x7, 0x2, 0x2, 0x240, 0x242, 0xa, 0x4, 
    0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 
    0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x3, 0x2, 
    0x2, 0x2, 0x244, 0x85, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x7, 0x1d, 
    0x2, 0x2, 0x246, 0x248, 0x7, 0xb, 0x2, 0x2, 0x247, 0x249, 0xa, 0x4, 
    0x2, 0x2, 0x248, 0x247, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 0x2, 
    0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x3, 0x2, 
    0x2, 0x2, 0x24b, 0x87, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x7, 0x1d, 
    0x2, 0x2, 0x24d, 0x24f, 0x7, 0xc, 0x2, 0x2, 0x24e, 0x250, 0xa, 0x4, 
    0x2, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 
    0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 
    0x2, 0x2, 0x252, 0x89, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x7, 0x1d, 
    0x2, 0x2, 0x254, 0x256, 0x7, 0xd, 0x2, 0x2, 0x255, 0x257, 0xa, 0x4, 
    0x2, 0x2, 0x256, 0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 
    0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 
    0x2, 0x2, 0x259, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x1d, 
    0x2, 0x2, 0x25b, 0x25d, 0x7, 0x8, 0x2, 0x2, 0x25c, 0x25e, 0xa, 0x4, 
    0x2, 0x2, 0x25d, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 
    0x2, 0x2, 0x25f, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x260, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x7, 0x1d, 
    0x2, 0x2, 0x262, 0x264, 0x7, 0xe, 0x2, 0x2, 0x263, 0x265, 0xa, 0x4, 
    0x2, 0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x7, 0x1d, 
    0x2, 0x2, 0x269, 0x26b, 0x7, 0xf, 0x2, 0x2, 0x26a, 0x26c, 0xa, 0x4, 
    0x2, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 
    0x2, 0x2, 0x26d, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 
    0x2, 0x2, 0x26e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x7, 0x1d, 
    0x2, 0x2, 0x270, 0x272, 0x7, 0x10, 0x2, 0x2, 0x271, 0x273, 0xa, 0x4, 
    0x2, 0x2, 0x272, 0x271, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x275, 0x93, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x7, 0x1d, 
    0x2, 0x2, 0x277, 0x279, 0x7, 0x11, 0x2, 0x2, 0x278, 0x27a, 0xa, 0x4, 
    0x2, 0x2, 0x279, 0x278, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 
    0x2, 0x2, 0x27b, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 
    0x2, 0x2, 0x27c, 0x95, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x1d, 
    0x2, 0x2, 0x27e, 0x280, 0x7, 0xf, 0x2, 0x2, 0x27f, 0x281, 0xa, 0x4, 
    0x2, 0x2, 0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x3, 0x2, 
    0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x97, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x7, 0x1d, 
    0x2, 0x2, 0x285, 0x287, 0x7, 0x10, 0x2, 0x2, 0x286, 0x288, 0xa, 0x4, 
    0x2, 0x2, 0x287, 0x286, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 0x3, 0x2, 
    0x2, 0x2, 0x289, 0x287, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x3, 0x2, 
    0x2, 0x2, 0x28a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x7, 0x1d, 
    0x2, 0x2, 0x28c, 0x28e, 0x7, 0x11, 0x2, 0x2, 0x28d, 0x28f, 0xa, 0x4, 
    0x2, 0x2, 0x28e, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x290, 0x3, 0x2, 
    0x2, 0x2, 0x290, 0x28e, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x3, 0x2, 
    0x2, 0x2, 0x291, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 0x7, 0x1d, 
    0x2, 0x2, 0x293, 0x295, 0x7, 0x12, 0x2, 0x2, 0x294, 0x296, 0xa, 0x4, 
    0x2, 0x2, 0x295, 0x294, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 0x3, 0x2, 
    0x2, 0x2, 0x297, 0x295, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 0x3, 0x2, 
    0x2, 0x2, 0x298, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x7, 0x1d, 
    0x2, 0x2, 0x29a, 0x29c, 0x7, 0xf, 0x2, 0x2, 0x29b, 0x29d, 0xa, 0x4, 
    0x2, 0x2, 0x29c, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x3, 0x2, 
    0x2, 0x2, 0x29e, 0x29c, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x3, 0x2, 
    0x2, 0x2, 0x29f, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x7, 0x1d, 
    0x2, 0x2, 0x2a1, 0x2a3, 0x7, 0x10, 0x2, 0x2, 0x2a2, 0x2a4, 0xa, 0x4, 
    0x2, 0x2, 0x2a3, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 0x3, 0x2, 
    0x2, 0x2, 0x2a5, 0x2a3, 0x3, 0x2, 0x2, 0x2, 0x2a5, 0x2a6, 0x3, 0x2, 
    0x2, 0x2, 0x2a6, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 0x7, 0x1d, 
    0x2, 0x2, 0x2a8, 0x2aa, 0x7, 0x11, 0x2, 0x2, 0x2a9, 0x2ab, 0xa, 0x4, 
    0x2, 0x2, 0x2aa, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x2ab, 0x2ac, 0x3, 0x2, 
    0x2, 0x2, 0x2ac, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ac, 0x2ad, 0x3, 0x2, 
    0x2, 0x2, 0x2ad, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0x7, 0x1d, 
    0x2, 0x2, 0x2af, 0x2b1, 0x7, 0x7, 0x2, 0x2, 0x2b0, 0x2b2, 0xa, 0x4, 
    0x2, 0x2, 0x2b1, 0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x3, 0x2, 
    0x2, 0x2, 0x2b3, 0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2b3, 0x2b4, 0x3, 0x2, 
    0x2, 0x2, 0x2b4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x7, 0x1d, 
    0x2, 0x2, 0x2b6, 0x2b8, 0x7, 0xf, 0x2, 0x2, 0x2b7, 0x2b9, 0xa, 0x4, 
    0x2, 0x2, 0x2b8, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x2b9, 0x2ba, 0x3, 0x2, 
    0x2, 0x2, 0x2ba, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2bb, 0x3, 0x2, 
    0x2, 0x2, 0x2bb, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x7, 0x1d, 
    0x2, 0x2, 0x2bd, 0x2bf, 0x7, 0x10, 0x2, 0x2, 0x2be, 0x2c0, 0xa, 0x4, 
    0x2, 0x2, 0x2bf, 0x2be, 0x3, 0x2, 0x2, 0x2, 0x2c0, 0x2c1, 0x3, 0x2, 
    0x2, 0x2, 0x2c1, 0x2bf, 0x3, 0x2, 0x2, 0x2, 0x2c1, 0x2c2, 0x3, 0x2, 
    0x2, 0x2, 0x2c2, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x7, 0x1d, 
    0x2, 0x2, 0x2c4, 0x2c6, 0x7, 0x11, 0x2, 0x2, 0x2c5, 0x2c7, 0xa, 0x4, 
    0x2, 0x2, 0x2c6, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c7, 0x2c8, 0x3, 0x2, 
    0x2, 0x2, 0x2c8, 0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x3, 0x2, 
    0x2, 0x2, 0x2c9, 0xab, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0x7, 0x1d, 
    0x2, 0x2, 0x2cb, 0x2cd, 0x7, 0x12, 0x2, 0x2, 0x2cc, 0x2ce, 0xa, 0x4, 
    0x2, 0x2, 0x2cd, 0x2cc, 0x3, 0x2, 0x2, 0x2, 0x2ce, 0x2cf, 0x3, 0x2, 
    0x2, 0x2, 0x2cf, 0x2cd, 0x3, 0x2, 0x2, 0x2, 0x2cf, 0x2d0, 0x3, 0x2, 
    0x2, 0x2, 0x2d0, 0xad, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x7, 0x1d, 
    0x2, 0x2, 0x2d2, 0x2d4, 0x7, 0x13, 0x2, 0x2, 0x2d3, 0x2d5, 0xa, 0x4, 
    0x2, 0x2, 0x2d4, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x2d5, 0x2d6, 0x3, 0x2, 
    0x2, 0x2, 0x2d6, 0x2d4, 0x3, 0x2, 0x2, 0x2, 0x2d6, 0x2d7, 0x3, 0x2, 
    0x2, 0x2, 0x2d7, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x4e, 0xb3, 0xb7, 0xc2, 0xcb, 
    0xd8, 0xe3, 0xe8, 0xf0, 0xf8, 0xfe, 0x103, 0x109, 0x110, 0x11a, 0x11f, 
    0x124, 0x128, 0x12b, 0x130, 0x13a, 0x143, 0x14c, 0x154, 0x157, 0x15a, 
    0x163, 0x172, 0x176, 0x17f, 0x186, 0x18d, 0x1a2, 0x1a7, 0x1ae, 0x1b5, 
    0x1ba, 0x1c3, 0x1ca, 0x1cf, 0x1d6, 0x1dd, 0x1e4, 0x1ed, 0x1f2, 0x1fd, 
    0x204, 0x20b, 0x212, 0x219, 0x220, 0x227, 0x22e, 0x235, 0x23c, 0x243, 
    0x24a, 0x251, 0x258, 0x25f, 0x266, 0x26d, 0x274, 0x27b, 0x282, 0x289, 
    0x290, 0x297, 0x29e, 0x2a5, 0x2ac, 0x2b3, 0x2ba, 0x2c1, 0x2c8, 0x2cf, 
    0x2d6, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT321Parser::Initializer SwiftMtParser_MT321Parser::_init;
