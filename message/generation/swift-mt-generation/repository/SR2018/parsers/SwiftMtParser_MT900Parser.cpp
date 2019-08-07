
// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT900.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT900Listener.h"

#include "SwiftMtParser_MT900Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
using namespace antlr4;

SwiftMtParser_MT900Parser::SwiftMtParser_MT900Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT900Parser::~SwiftMtParser_MT900Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT900Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT900.g4";
}

const std::vector<std::string>& SwiftMtParser_MT900Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT900Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT900Parser::BhContext* SwiftMtParser_MT900Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT900Parser::BhContext>(0);
}

SwiftMtParser_MT900Parser::AhContext* SwiftMtParser_MT900Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT900Parser::AhContext>(0);
}

SwiftMtParser_MT900Parser::MtContext* SwiftMtParser_MT900Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT900Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT900Parser::EOF, 0);
}

SwiftMtParser_MT900Parser::UhContext* SwiftMtParser_MT900Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT900Parser::UhContext>(0);
}

SwiftMtParser_MT900Parser::TrContext* SwiftMtParser_MT900Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT900Parser::TrContext>(0);
}


size_t SwiftMtParser_MT900Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleMessage;
}

void SwiftMtParser_MT900Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT900Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT900Parser::MessageContext* SwiftMtParser_MT900Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT900Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(24);
    bh();
    setState(25);
    ah();
    setState(27);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT900Parser::TAG_UH) {
      setState(26);
      uh();
    }
    setState(29);
    mt();
    setState(31);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT900Parser::TAG_TR) {
      setState(30);
      tr();
    }
    setState(33);
    match(SwiftMtParser_MT900Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT900Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT900Parser::TAG_BH, 0);
}

SwiftMtParser_MT900Parser::Bh_contentContext* SwiftMtParser_MT900Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT900Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT900Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleBh;
}

void SwiftMtParser_MT900Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT900Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT900Parser::BhContext* SwiftMtParser_MT900Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT900Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(SwiftMtParser_MT900Parser::TAG_BH);
    setState(36);
    bh_content();
    setState(37);
    match(SwiftMtParser_MT900Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT900Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT900Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, i);
}


size_t SwiftMtParser_MT900Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleBh_content;
}

void SwiftMtParser_MT900Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT900Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT900Parser::Bh_contentContext* SwiftMtParser_MT900Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT900Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(39);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT900Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(42); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT900Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT900Parser::MT_END)
      | (1ULL << SwiftMtParser_MT900Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT900Parser::COLON)
      | (1ULL << SwiftMtParser_MT900Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT900Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT900Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT900Parser::TAG_AH, 0);
}

SwiftMtParser_MT900Parser::Ah_contentContext* SwiftMtParser_MT900Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT900Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT900Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleAh;
}

void SwiftMtParser_MT900Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT900Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT900Parser::AhContext* SwiftMtParser_MT900Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT900Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(SwiftMtParser_MT900Parser::TAG_AH);
    setState(45);
    ah_content();
    setState(46);
    match(SwiftMtParser_MT900Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT900Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT900Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, i);
}


size_t SwiftMtParser_MT900Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleAh_content;
}

void SwiftMtParser_MT900Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT900Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT900Parser::Ah_contentContext* SwiftMtParser_MT900Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT900Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(49); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(48);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT900Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(51); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT900Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT900Parser::MT_END)
      | (1ULL << SwiftMtParser_MT900Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT900Parser::COLON)
      | (1ULL << SwiftMtParser_MT900Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT900Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT900Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT900Parser::TAG_UH, 0);
}

SwiftMtParser_MT900Parser::Sys_blockContext* SwiftMtParser_MT900Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT900Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT900Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleUh;
}

void SwiftMtParser_MT900Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT900Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT900Parser::UhContext* SwiftMtParser_MT900Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT900Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(SwiftMtParser_MT900Parser::TAG_UH);
    setState(54);
    sys_block();
    setState(55);
    match(SwiftMtParser_MT900Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT900Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT900Parser::TAG_TR, 0);
}

SwiftMtParser_MT900Parser::Sys_blockContext* SwiftMtParser_MT900Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT900Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT900Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleTr;
}

void SwiftMtParser_MT900Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT900Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT900Parser::TrContext* SwiftMtParser_MT900Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT900Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(SwiftMtParser_MT900Parser::TAG_TR);
    setState(58);
    sys_block();
    setState(59);
    match(SwiftMtParser_MT900Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT900Parser::Sys_elementContext *> SwiftMtParser_MT900Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT900Parser::Sys_elementContext>();
}

SwiftMtParser_MT900Parser::Sys_elementContext* SwiftMtParser_MT900Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT900Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT900Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleSys_block;
}

void SwiftMtParser_MT900Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT900Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT900Parser::Sys_blockContext* SwiftMtParser_MT900Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT900Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(61);
      sys_element();
      setState(64); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT900Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT900Parser::LBRACE, 0);
}

SwiftMtParser_MT900Parser::Sys_element_keyContext* SwiftMtParser_MT900Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT900Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT900Parser::COLON, 0);
}

SwiftMtParser_MT900Parser::Sys_element_contentContext* SwiftMtParser_MT900Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT900Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT900Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleSys_element;
}

void SwiftMtParser_MT900Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT900Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT900Parser::Sys_elementContext* SwiftMtParser_MT900Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT900Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(SwiftMtParser_MT900Parser::LBRACE);
    setState(67);
    sys_element_key();
    setState(68);
    match(SwiftMtParser_MT900Parser::COLON);
    setState(69);
    sys_element_content();
    setState(70);
    match(SwiftMtParser_MT900Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT900Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT900Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT900Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT900Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT900Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, i);
}


size_t SwiftMtParser_MT900Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleSys_element_key;
}

void SwiftMtParser_MT900Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT900Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT900Parser::Sys_element_keyContext* SwiftMtParser_MT900Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT900Parser::RuleSys_element_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(72);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT900Parser::RBRACE

      || _la == SwiftMtParser_MT900Parser::COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(75); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT900Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT900Parser::MT_END)
      | (1ULL << SwiftMtParser_MT900Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT900Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT900Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT900Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT900Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT900Parser::RBRACE, i);
}


size_t SwiftMtParser_MT900Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleSys_element_content;
}

void SwiftMtParser_MT900Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT900Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT900Parser::Sys_element_contentContext* SwiftMtParser_MT900Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT900Parser::RuleSys_element_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(77);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT900Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(80); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT900Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT900Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT900Parser::MT_END)
      | (1ULL << SwiftMtParser_MT900Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT900Parser::COLON)
      | (1ULL << SwiftMtParser_MT900Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT900Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT900Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT900Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT900Parser::TAG_MT, 0);
}

tree::TerminalNode* SwiftMtParser_MT900Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT900Parser::MT_END, 0);
}


size_t SwiftMtParser_MT900Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT900Parser::RuleMt;
}

void SwiftMtParser_MT900Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT900Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT900Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT900Parser::MtContext* SwiftMtParser_MT900Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT900Parser::RuleMt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(SwiftMtParser_MT900Parser::TAG_MT);
    setState(83);
    match(SwiftMtParser_MT900Parser::MT_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT900Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT900Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT900Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT900Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT900Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt"
};

std::vector<std::string> SwiftMtParser_MT900Parser::_literalNames = {
  "", "'{1:'", "'{2:'", "'{3:'", "'{4:'", "'{5:'", "'-}'", "'{'", "'}'", 
  "':'"
};

std::vector<std::string> SwiftMtParser_MT900Parser::_symbolicNames = {
  "", "TAG_BH", "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", "MT_END", "LBRACE", 
  "RBRACE", "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT900Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT900Parser::_tokenNames;

SwiftMtParser_MT900Parser::Initializer::Initializer() {
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
    0x3, 0xd, 0x58, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x5, 0x2, 0x1e, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x22, 0xa, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x4, 0x6, 0x4, 0x2b, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x2c, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0x34, 0xa, 0x6, 0xd, 0x6, 
    0xe, 0x6, 0x35, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0x41, 0xa, 0x9, 0xd, 0x9, 
    0xe, 0x9, 0x42, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xb, 0x6, 0xb, 0x4c, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x4d, 0x3, 
    0xc, 0x6, 0xc, 0x51, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x52, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x2, 0x2, 0xe, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
    0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x2, 0x4, 0x3, 0x2, 0xa, 0xa, 0x3, 
    0x2, 0xa, 0xb, 0x2, 0x52, 0x2, 0x1a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x2e, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x33, 0x3, 0x2, 0x2, 0x2, 0xc, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x40, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x44, 0x3, 0x2, 0x2, 0x2, 0x14, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x54, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x1b, 0x5, 
    0x4, 0x3, 0x2, 0x1b, 0x1d, 0x5, 0x8, 0x5, 0x2, 0x1c, 0x1e, 0x5, 0xc, 
    0x7, 0x2, 0x1d, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x2, 
    0x2, 0x1e, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x21, 0x5, 0x18, 0xd, 0x2, 
    0x20, 0x22, 0x5, 0xe, 0x8, 0x2, 0x21, 0x20, 0x3, 0x2, 0x2, 0x2, 0x21, 
    0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 
    0x7, 0x2, 0x2, 0x3, 0x24, 0x3, 0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 
    0x3, 0x2, 0x2, 0x26, 0x27, 0x5, 0x6, 0x4, 0x2, 0x27, 0x28, 0x7, 0xa, 
    0x2, 0x2, 0x28, 0x5, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2b, 0xa, 0x2, 0x2, 
    0x2, 0x2a, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x4, 0x2, 0x2, 0x2f, 0x30, 
    0x5, 0xa, 0x6, 0x2, 0x30, 0x31, 0x7, 0xa, 0x2, 0x2, 0x31, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x34, 0xa, 0x2, 0x2, 0x2, 0x33, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x35, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x37, 0x38, 0x7, 0x5, 0x2, 0x2, 0x38, 0x39, 0x5, 0x10, 0x9, 0x2, 0x39, 
    0x3a, 0x7, 0xa, 0x2, 0x2, 0x3a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 
    0x7, 0x7, 0x2, 0x2, 0x3c, 0x3d, 0x5, 0x10, 0x9, 0x2, 0x3d, 0x3e, 0x7, 
    0xa, 0x2, 0x2, 0x3e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x41, 0x5, 0x12, 
    0xa, 0x2, 0x40, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x11, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0x9, 0x2, 0x2, 0x45, 
    0x46, 0x5, 0x14, 0xb, 0x2, 0x46, 0x47, 0x7, 0xb, 0x2, 0x2, 0x47, 0x48, 
    0x5, 0x16, 0xc, 0x2, 0x48, 0x49, 0x7, 0xa, 0x2, 0x2, 0x49, 0x13, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x4c, 0xa, 0x3, 0x2, 0x2, 0x4b, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x4f, 0x51, 0xa, 0x2, 0x2, 0x2, 0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 
    0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x17, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x7, 
    0x6, 0x2, 0x2, 0x55, 0x56, 0x7, 0x8, 0x2, 0x2, 0x56, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x1d, 0x21, 0x2c, 0x35, 0x42, 0x4d, 0x52, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT900Parser::Initializer SwiftMtParser_MT900Parser::_init;
