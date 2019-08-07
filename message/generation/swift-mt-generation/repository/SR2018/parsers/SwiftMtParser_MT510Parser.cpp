
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT510Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT510.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT510Listener.h"

#include "SwiftMtParser_MT510Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
using namespace antlr4;

SwiftMtParser_MT510Parser::SwiftMtParser_MT510Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT510Parser::~SwiftMtParser_MT510Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT510Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT510.g4";
}

const std::vector<std::string>& SwiftMtParser_MT510Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT510Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::BhContext* SwiftMtParser_MT510Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT510Parser::BhContext>(0);
}

SwiftMtParser_MT510Parser::AhContext* SwiftMtParser_MT510Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT510Parser::AhContext>(0);
}

SwiftMtParser_MT510Parser::MtContext* SwiftMtParser_MT510Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT510Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT510Parser::EOF, 0);
}

SwiftMtParser_MT510Parser::UhContext* SwiftMtParser_MT510Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT510Parser::UhContext>(0);
}

SwiftMtParser_MT510Parser::TrContext* SwiftMtParser_MT510Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT510Parser::TrContext>(0);
}


size_t SwiftMtParser_MT510Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleMessage;
}

void SwiftMtParser_MT510Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT510Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT510Parser::MessageContext* SwiftMtParser_MT510Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT510Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    bh();
    setState(151);
    ah();
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT510Parser::TAG_UH) {
      setState(152);
      uh();
    }
    setState(155);
    mt();
    setState(157);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT510Parser::TAG_TR) {
      setState(156);
      tr();
    }
    setState(159);
    match(SwiftMtParser_MT510Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT510Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT510Parser::TAG_BH, 0);
}

SwiftMtParser_MT510Parser::Bh_contentContext* SwiftMtParser_MT510Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT510Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT510Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleBh;
}

void SwiftMtParser_MT510Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT510Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT510Parser::BhContext* SwiftMtParser_MT510Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT510Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161);
    match(SwiftMtParser_MT510Parser::TAG_BH);
    setState(162);
    bh_content();
    setState(163);
    match(SwiftMtParser_MT510Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT510Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, i);
}


size_t SwiftMtParser_MT510Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleBh_content;
}

void SwiftMtParser_MT510Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT510Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT510Parser::Bh_contentContext* SwiftMtParser_MT510Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT510Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(165);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(168); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT510Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT510Parser::TAG_AH, 0);
}

SwiftMtParser_MT510Parser::Ah_contentContext* SwiftMtParser_MT510Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT510Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT510Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleAh;
}

void SwiftMtParser_MT510Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT510Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT510Parser::AhContext* SwiftMtParser_MT510Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT510Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    match(SwiftMtParser_MT510Parser::TAG_AH);
    setState(171);
    ah_content();
    setState(172);
    match(SwiftMtParser_MT510Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT510Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, i);
}


size_t SwiftMtParser_MT510Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleAh_content;
}

void SwiftMtParser_MT510Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT510Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT510Parser::Ah_contentContext* SwiftMtParser_MT510Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT510Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(174);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(177); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT510Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT510Parser::TAG_UH, 0);
}

SwiftMtParser_MT510Parser::Sys_blockContext* SwiftMtParser_MT510Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT510Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT510Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleUh;
}

void SwiftMtParser_MT510Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT510Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT510Parser::UhContext* SwiftMtParser_MT510Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT510Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(SwiftMtParser_MT510Parser::TAG_UH);
    setState(180);
    sys_block();
    setState(181);
    match(SwiftMtParser_MT510Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT510Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT510Parser::TAG_TR, 0);
}

SwiftMtParser_MT510Parser::Sys_blockContext* SwiftMtParser_MT510Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT510Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT510Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleTr;
}

void SwiftMtParser_MT510Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT510Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT510Parser::TrContext* SwiftMtParser_MT510Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT510Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    match(SwiftMtParser_MT510Parser::TAG_TR);
    setState(184);
    sys_block();
    setState(185);
    match(SwiftMtParser_MT510Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT510Parser::Sys_elementContext *> SwiftMtParser_MT510Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Sys_elementContext>();
}

SwiftMtParser_MT510Parser::Sys_elementContext* SwiftMtParser_MT510Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT510Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSys_block;
}

void SwiftMtParser_MT510Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT510Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT510Parser::Sys_blockContext* SwiftMtParser_MT510Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT510Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(187);
      sys_element();
      setState(190); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT510Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT510Parser::LBRACE, 0);
}

SwiftMtParser_MT510Parser::Sys_element_keyContext* SwiftMtParser_MT510Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT510Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT510Parser::COLON, 0);
}

SwiftMtParser_MT510Parser::Sys_element_contentContext* SwiftMtParser_MT510Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT510Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT510Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSys_element;
}

void SwiftMtParser_MT510Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT510Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT510Parser::Sys_elementContext* SwiftMtParser_MT510Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT510Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(SwiftMtParser_MT510Parser::LBRACE);
    setState(193);
    sys_element_key();
    setState(194);
    match(SwiftMtParser_MT510Parser::COLON);
    setState(195);
    sys_element_content();
    setState(196);
    match(SwiftMtParser_MT510Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT510Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT510Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, i);
}


size_t SwiftMtParser_MT510Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSys_element_key;
}

void SwiftMtParser_MT510Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT510Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT510Parser::Sys_element_keyContext* SwiftMtParser_MT510Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT510Parser::RuleSys_element_key);
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
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::RBRACE

      || _la == SwiftMtParser_MT510Parser::COLON)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT510Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::RBRACE, i);
}


size_t SwiftMtParser_MT510Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSys_element_content;
}

void SwiftMtParser_MT510Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT510Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT510Parser::Sys_element_contentContext* SwiftMtParser_MT510Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT510Parser::RuleSys_element_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(203);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(206); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT510Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT510Parser::TAG_MT, 0);
}

SwiftMtParser_MT510Parser::Seq_AContext* SwiftMtParser_MT510Parser::MtContext::seq_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Seq_AContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT510Parser::MT_END, 0);
}

SwiftMtParser_MT510Parser::Seq_BContext* SwiftMtParser_MT510Parser::MtContext::seq_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Seq_BContext>(0);
}

SwiftMtParser_MT510Parser::Seq_CContext* SwiftMtParser_MT510Parser::MtContext::seq_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Seq_CContext>(0);
}


size_t SwiftMtParser_MT510Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleMt;
}

void SwiftMtParser_MT510Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT510Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT510Parser::MtContext* SwiftMtParser_MT510Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT510Parser::RuleMt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(SwiftMtParser_MT510Parser::TAG_MT);
    setState(209);
    seq_A();
    setState(211);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(210);
      seq_B();
      break;
    }

    }
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT510Parser::START_OF_FIELD) {
      setState(213);
      seq_C();
    }
    setState(216);
    match(SwiftMtParser_MT510Parser::MT_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Seq_AContext::Seq_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_16R_AContext* SwiftMtParser_MT510Parser::Seq_AContext::fld_16R_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16R_AContext>(0);
}

SwiftMtParser_MT510Parser::Fld_20C_AContext* SwiftMtParser_MT510Parser::Seq_AContext::fld_20C_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_20C_AContext>(0);
}

SwiftMtParser_MT510Parser::Fld_23G_AContext* SwiftMtParser_MT510Parser::Seq_AContext::fld_23G_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_23G_AContext>(0);
}

SwiftMtParser_MT510Parser::Fld_16S_AContext* SwiftMtParser_MT510Parser::Seq_AContext::fld_16S_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16S_AContext>(0);
}

SwiftMtParser_MT510Parser::Fld_98a_AContext* SwiftMtParser_MT510Parser::Seq_AContext::fld_98a_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_98a_AContext>(0);
}

std::vector<SwiftMtParser_MT510Parser::Seq_A1Context *> SwiftMtParser_MT510Parser::Seq_AContext::seq_A1() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Seq_A1Context>();
}

SwiftMtParser_MT510Parser::Seq_A1Context* SwiftMtParser_MT510Parser::Seq_AContext::seq_A1(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Seq_A1Context>(i);
}

std::vector<SwiftMtParser_MT510Parser::Seq_A2Context *> SwiftMtParser_MT510Parser::Seq_AContext::seq_A2() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Seq_A2Context>();
}

SwiftMtParser_MT510Parser::Seq_A2Context* SwiftMtParser_MT510Parser::Seq_AContext::seq_A2(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Seq_A2Context>(i);
}


size_t SwiftMtParser_MT510Parser::Seq_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSeq_A;
}

void SwiftMtParser_MT510Parser::Seq_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A(this);
}

void SwiftMtParser_MT510Parser::Seq_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A(this);
}

SwiftMtParser_MT510Parser::Seq_AContext* SwiftMtParser_MT510Parser::seq_A() {
  Seq_AContext *_localctx = _tracker.createInstance<Seq_AContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtParser_MT510Parser::RuleSeq_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(218);
    fld_16R_A();
    setState(219);
    fld_20C_A();
    setState(220);
    fld_23G_A();
    setState(222);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(221);
      fld_98a_A();
      break;
    }

    }
    setState(225); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(224);
              seq_A1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(227); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(230); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(229);
              seq_A2();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(232); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
    setState(234);
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

SwiftMtParser_MT510Parser::Seq_A1Context::Seq_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_16R_A1Context* SwiftMtParser_MT510Parser::Seq_A1Context::fld_16R_A1() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16R_A1Context>(0);
}

SwiftMtParser_MT510Parser::Fld_20C_A1Context* SwiftMtParser_MT510Parser::Seq_A1Context::fld_20C_A1() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_20C_A1Context>(0);
}

SwiftMtParser_MT510Parser::Fld_16S_A1Context* SwiftMtParser_MT510Parser::Seq_A1Context::fld_16S_A1() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16S_A1Context>(0);
}

SwiftMtParser_MT510Parser::Fld_13a_A1Context* SwiftMtParser_MT510Parser::Seq_A1Context::fld_13a_A1() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_13a_A1Context>(0);
}


size_t SwiftMtParser_MT510Parser::Seq_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSeq_A1;
}

void SwiftMtParser_MT510Parser::Seq_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A1(this);
}

void SwiftMtParser_MT510Parser::Seq_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A1(this);
}

SwiftMtParser_MT510Parser::Seq_A1Context* SwiftMtParser_MT510Parser::seq_A1() {
  Seq_A1Context *_localctx = _tracker.createInstance<Seq_A1Context>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtParser_MT510Parser::RuleSeq_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(236);
    fld_16R_A1();
    setState(238);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(237);
      fld_13a_A1();
      break;
    }

    }
    setState(240);
    fld_20C_A1();
    setState(241);
    fld_16S_A1();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_A2Context ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Seq_A2Context::Seq_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_16R_A2Context* SwiftMtParser_MT510Parser::Seq_A2Context::fld_16R_A2() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16R_A2Context>(0);
}

SwiftMtParser_MT510Parser::Fld_25D_A2Context* SwiftMtParser_MT510Parser::Seq_A2Context::fld_25D_A2() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_25D_A2Context>(0);
}

SwiftMtParser_MT510Parser::Fld_16S_A2Context* SwiftMtParser_MT510Parser::Seq_A2Context::fld_16S_A2() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16S_A2Context>(0);
}

std::vector<SwiftMtParser_MT510Parser::Seq_A2aContext *> SwiftMtParser_MT510Parser::Seq_A2Context::seq_A2a() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Seq_A2aContext>();
}

SwiftMtParser_MT510Parser::Seq_A2aContext* SwiftMtParser_MT510Parser::Seq_A2Context::seq_A2a(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Seq_A2aContext>(i);
}


size_t SwiftMtParser_MT510Parser::Seq_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSeq_A2;
}

void SwiftMtParser_MT510Parser::Seq_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A2(this);
}

void SwiftMtParser_MT510Parser::Seq_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A2(this);
}

SwiftMtParser_MT510Parser::Seq_A2Context* SwiftMtParser_MT510Parser::seq_A2() {
  Seq_A2Context *_localctx = _tracker.createInstance<Seq_A2Context>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtParser_MT510Parser::RuleSeq_A2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(243);
    fld_16R_A2();
    setState(244);
    fld_25D_A2();
    setState(248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(245);
        seq_A2a(); 
      }
      setState(250);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
    setState(251);
    fld_16S_A2();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_A2aContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Seq_A2aContext::Seq_A2aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_16R_A2aContext* SwiftMtParser_MT510Parser::Seq_A2aContext::fld_16R_A2a() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16R_A2aContext>(0);
}

SwiftMtParser_MT510Parser::Fld_24B_A2aContext* SwiftMtParser_MT510Parser::Seq_A2aContext::fld_24B_A2a() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_24B_A2aContext>(0);
}

SwiftMtParser_MT510Parser::Fld_16S_A2aContext* SwiftMtParser_MT510Parser::Seq_A2aContext::fld_16S_A2a() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16S_A2aContext>(0);
}

SwiftMtParser_MT510Parser::Fld_70D_A2aContext* SwiftMtParser_MT510Parser::Seq_A2aContext::fld_70D_A2a() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_70D_A2aContext>(0);
}


size_t SwiftMtParser_MT510Parser::Seq_A2aContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSeq_A2a;
}

void SwiftMtParser_MT510Parser::Seq_A2aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A2a(this);
}

void SwiftMtParser_MT510Parser::Seq_A2aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A2a(this);
}

SwiftMtParser_MT510Parser::Seq_A2aContext* SwiftMtParser_MT510Parser::seq_A2a() {
  Seq_A2aContext *_localctx = _tracker.createInstance<Seq_A2aContext>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtParser_MT510Parser::RuleSeq_A2a);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(253);
    fld_16R_A2a();
    setState(254);
    fld_24B_A2a();
    setState(256);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(255);
      fld_70D_A2a();
      break;
    }

    }
    setState(258);
    fld_16S_A2a();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Seq_BContext::Seq_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_16R_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_16R_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16R_BContext>(0);
}

SwiftMtParser_MT510Parser::Fld_16S_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_16S_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16S_BContext>(0);
}

std::vector<SwiftMtParser_MT510Parser::Fld_20D_BContext *> SwiftMtParser_MT510Parser::Seq_BContext::fld_20D_B() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Fld_20D_BContext>();
}

SwiftMtParser_MT510Parser::Fld_20D_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_20D_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_20D_BContext>(i);
}

std::vector<SwiftMtParser_MT510Parser::Fld_95a_BContext *> SwiftMtParser_MT510Parser::Seq_BContext::fld_95a_B() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Fld_95a_BContext>();
}

SwiftMtParser_MT510Parser::Fld_95a_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_95a_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_BContext>(i);
}

std::vector<SwiftMtParser_MT510Parser::Fld_94a_BContext *> SwiftMtParser_MT510Parser::Seq_BContext::fld_94a_B() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Fld_94a_BContext>();
}

SwiftMtParser_MT510Parser::Fld_94a_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_94a_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_94a_BContext>(i);
}

std::vector<SwiftMtParser_MT510Parser::Fld_13B_BContext *> SwiftMtParser_MT510Parser::Seq_BContext::fld_13B_B() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Fld_13B_BContext>();
}

SwiftMtParser_MT510Parser::Fld_13B_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_13B_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_13B_BContext>(i);
}

std::vector<SwiftMtParser_MT510Parser::Fld_98a_BContext *> SwiftMtParser_MT510Parser::Seq_BContext::fld_98a_B() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Fld_98a_BContext>();
}

SwiftMtParser_MT510Parser::Fld_98a_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_98a_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_98a_BContext>(i);
}

SwiftMtParser_MT510Parser::Fld_35B_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_35B_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_35B_BContext>(0);
}

SwiftMtParser_MT510Parser::Fld_36B_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_36B_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_36B_BContext>(0);
}

SwiftMtParser_MT510Parser::Fld_97A_BContext* SwiftMtParser_MT510Parser::Seq_BContext::fld_97A_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_97A_BContext>(0);
}


size_t SwiftMtParser_MT510Parser::Seq_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSeq_B;
}

void SwiftMtParser_MT510Parser::Seq_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B(this);
}

void SwiftMtParser_MT510Parser::Seq_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B(this);
}

SwiftMtParser_MT510Parser::Seq_BContext* SwiftMtParser_MT510Parser::seq_B() {
  Seq_BContext *_localctx = _tracker.createInstance<Seq_BContext>(_ctx, getState());
  enterRule(_localctx, 32, SwiftMtParser_MT510Parser::RuleSeq_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(260);
    fld_16R_B();
    setState(264);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(261);
        fld_20D_B(); 
      }
      setState(266);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
    setState(270);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(267);
        fld_95a_B(); 
      }
      setState(272);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
    setState(276);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(273);
        fld_94a_B(); 
      }
      setState(278);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
    setState(282);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(279);
        fld_13B_B(); 
      }
      setState(284);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(288);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(285);
        fld_98a_B(); 
      }
      setState(290);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
    setState(292);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(291);
      fld_35B_B();
      break;
    }

    }
    setState(295);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(294);
      fld_36B_B();
      break;
    }

    }
    setState(298);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(297);
      fld_97A_B();
      break;
    }

    }
    setState(300);
    fld_16S_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_CContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Seq_CContext::Seq_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_16R_CContext* SwiftMtParser_MT510Parser::Seq_CContext::fld_16R_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16R_CContext>(0);
}

SwiftMtParser_MT510Parser::Fld_16S_CContext* SwiftMtParser_MT510Parser::Seq_CContext::fld_16S_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_16S_CContext>(0);
}

std::vector<SwiftMtParser_MT510Parser::Fld_95a_CContext *> SwiftMtParser_MT510Parser::Seq_CContext::fld_95a_C() {
  return getRuleContexts<SwiftMtParser_MT510Parser::Fld_95a_CContext>();
}

SwiftMtParser_MT510Parser::Fld_95a_CContext* SwiftMtParser_MT510Parser::Seq_CContext::fld_95a_C(size_t i) {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_CContext>(i);
}


size_t SwiftMtParser_MT510Parser::Seq_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleSeq_C;
}

void SwiftMtParser_MT510Parser::Seq_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_C(this);
}

void SwiftMtParser_MT510Parser::Seq_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_C(this);
}

SwiftMtParser_MT510Parser::Seq_CContext* SwiftMtParser_MT510Parser::seq_C() {
  Seq_CContext *_localctx = _tracker.createInstance<Seq_CContext>(_ctx, getState());
  enterRule(_localctx, 34, SwiftMtParser_MT510Parser::RuleSeq_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(302);
    fld_16R_C();
    setState(306);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(303);
        fld_95a_C(); 
      }
      setState(308);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
    }
    setState(309);
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

SwiftMtParser_MT510Parser::Fld_16R_AContext::Fld_16R_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16R_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16R_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16R_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16R_A;
}

void SwiftMtParser_MT510Parser::Fld_16R_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A(this);
}

void SwiftMtParser_MT510Parser::Fld_16R_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A(this);
}

SwiftMtParser_MT510Parser::Fld_16R_AContext* SwiftMtParser_MT510Parser::fld_16R_A() {
  Fld_16R_AContext *_localctx = _tracker.createInstance<Fld_16R_AContext>(_ctx, getState());
  enterRule(_localctx, 36, SwiftMtParser_MT510Parser::RuleFld_16R_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(311);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(312);
    match(SwiftMtParser_MT510Parser::T__0);
    setState(314); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(313);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(316); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_20C_AContext::Fld_20C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_20C_A_CContext* SwiftMtParser_MT510Parser::Fld_20C_AContext::fld_20C_A_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_20C_A_CContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_20C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_20C_A;
}

void SwiftMtParser_MT510Parser::Fld_20C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A(this);
}

void SwiftMtParser_MT510Parser::Fld_20C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A(this);
}

SwiftMtParser_MT510Parser::Fld_20C_AContext* SwiftMtParser_MT510Parser::fld_20C_A() {
  Fld_20C_AContext *_localctx = _tracker.createInstance<Fld_20C_AContext>(_ctx, getState());
  enterRule(_localctx, 38, SwiftMtParser_MT510Parser::RuleFld_20C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
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

SwiftMtParser_MT510Parser::Fld_23G_AContext::Fld_23G_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_23G_A_GContext* SwiftMtParser_MT510Parser::Fld_23G_AContext::fld_23G_A_G() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_23G_A_GContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_23G_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_23G_A;
}

void SwiftMtParser_MT510Parser::Fld_23G_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A(this);
}

void SwiftMtParser_MT510Parser::Fld_23G_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A(this);
}

SwiftMtParser_MT510Parser::Fld_23G_AContext* SwiftMtParser_MT510Parser::fld_23G_A() {
  Fld_23G_AContext *_localctx = _tracker.createInstance<Fld_23G_AContext>(_ctx, getState());
  enterRule(_localctx, 40, SwiftMtParser_MT510Parser::RuleFld_23G_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(320);
    fld_23G_A_G();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_98a_AContext::Fld_98a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_98a_A_AContext* SwiftMtParser_MT510Parser::Fld_98a_AContext::fld_98a_A_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_98a_A_AContext>(0);
}

SwiftMtParser_MT510Parser::Fld_98a_A_CContext* SwiftMtParser_MT510Parser::Fld_98a_AContext::fld_98a_A_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_98a_A_CContext>(0);
}

SwiftMtParser_MT510Parser::Fld_98a_A_EContext* SwiftMtParser_MT510Parser::Fld_98a_AContext::fld_98a_A_E() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_98a_A_EContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_98a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_98a_A;
}

void SwiftMtParser_MT510Parser::Fld_98a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A(this);
}

void SwiftMtParser_MT510Parser::Fld_98a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A(this);
}

SwiftMtParser_MT510Parser::Fld_98a_AContext* SwiftMtParser_MT510Parser::fld_98a_A() {
  Fld_98a_AContext *_localctx = _tracker.createInstance<Fld_98a_AContext>(_ctx, getState());
  enterRule(_localctx, 42, SwiftMtParser_MT510Parser::RuleFld_98a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(325);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(322);
      fld_98a_A_A();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(323);
      fld_98a_A_C();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(324);
      fld_98a_A_E();
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

SwiftMtParser_MT510Parser::Fld_16R_A1Context::Fld_16R_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16R_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16R_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16R_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16R_A1;
}

void SwiftMtParser_MT510Parser::Fld_16R_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A1(this);
}

void SwiftMtParser_MT510Parser::Fld_16R_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A1(this);
}

SwiftMtParser_MT510Parser::Fld_16R_A1Context* SwiftMtParser_MT510Parser::fld_16R_A1() {
  Fld_16R_A1Context *_localctx = _tracker.createInstance<Fld_16R_A1Context>(_ctx, getState());
  enterRule(_localctx, 44, SwiftMtParser_MT510Parser::RuleFld_16R_A1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(327);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(328);
    match(SwiftMtParser_MT510Parser::T__0);
    setState(330); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(329);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(332); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1Context ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_13a_A1Context::Fld_13a_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_13a_A1_AContext* SwiftMtParser_MT510Parser::Fld_13a_A1Context::fld_13a_A1_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_13a_A1_AContext>(0);
}

SwiftMtParser_MT510Parser::Fld_13a_A1_BContext* SwiftMtParser_MT510Parser::Fld_13a_A1Context::fld_13a_A1_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_13a_A1_BContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_13a_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_13a_A1;
}

void SwiftMtParser_MT510Parser::Fld_13a_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1(this);
}

void SwiftMtParser_MT510Parser::Fld_13a_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1(this);
}

SwiftMtParser_MT510Parser::Fld_13a_A1Context* SwiftMtParser_MT510Parser::fld_13a_A1() {
  Fld_13a_A1Context *_localctx = _tracker.createInstance<Fld_13a_A1Context>(_ctx, getState());
  enterRule(_localctx, 46, SwiftMtParser_MT510Parser::RuleFld_13a_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(334);
      fld_13a_A1_A();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(335);
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

SwiftMtParser_MT510Parser::Fld_20C_A1Context::Fld_20C_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_20C_A1_CContext* SwiftMtParser_MT510Parser::Fld_20C_A1Context::fld_20C_A1_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_20C_A1_CContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_20C_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_20C_A1;
}

void SwiftMtParser_MT510Parser::Fld_20C_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1(this);
}

void SwiftMtParser_MT510Parser::Fld_20C_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1(this);
}

SwiftMtParser_MT510Parser::Fld_20C_A1Context* SwiftMtParser_MT510Parser::fld_20C_A1() {
  Fld_20C_A1Context *_localctx = _tracker.createInstance<Fld_20C_A1Context>(_ctx, getState());
  enterRule(_localctx, 48, SwiftMtParser_MT510Parser::RuleFld_20C_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
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

SwiftMtParser_MT510Parser::Fld_16S_A1Context::Fld_16S_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16S_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16S_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16S_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16S_A1;
}

void SwiftMtParser_MT510Parser::Fld_16S_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A1(this);
}

void SwiftMtParser_MT510Parser::Fld_16S_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A1(this);
}

SwiftMtParser_MT510Parser::Fld_16S_A1Context* SwiftMtParser_MT510Parser::fld_16S_A1() {
  Fld_16S_A1Context *_localctx = _tracker.createInstance<Fld_16S_A1Context>(_ctx, getState());
  enterRule(_localctx, 50, SwiftMtParser_MT510Parser::RuleFld_16S_A1);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(341);
    match(SwiftMtParser_MT510Parser::T__1);
    setState(343); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(342);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(345); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A2Context ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16R_A2Context::Fld_16R_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16R_A2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16R_A2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16R_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16R_A2;
}

void SwiftMtParser_MT510Parser::Fld_16R_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A2(this);
}

void SwiftMtParser_MT510Parser::Fld_16R_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A2(this);
}

SwiftMtParser_MT510Parser::Fld_16R_A2Context* SwiftMtParser_MT510Parser::fld_16R_A2() {
  Fld_16R_A2Context *_localctx = _tracker.createInstance<Fld_16R_A2Context>(_ctx, getState());
  enterRule(_localctx, 52, SwiftMtParser_MT510Parser::RuleFld_16R_A2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(347);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(348);
    match(SwiftMtParser_MT510Parser::T__0);
    setState(350); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(349);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(352); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_25D_A2Context ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_25D_A2Context::Fld_25D_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_25D_A2_DContext* SwiftMtParser_MT510Parser::Fld_25D_A2Context::fld_25D_A2_D() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_25D_A2_DContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_25D_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_25D_A2;
}

void SwiftMtParser_MT510Parser::Fld_25D_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_25D_A2(this);
}

void SwiftMtParser_MT510Parser::Fld_25D_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_25D_A2(this);
}

SwiftMtParser_MT510Parser::Fld_25D_A2Context* SwiftMtParser_MT510Parser::fld_25D_A2() {
  Fld_25D_A2Context *_localctx = _tracker.createInstance<Fld_25D_A2Context>(_ctx, getState());
  enterRule(_localctx, 54, SwiftMtParser_MT510Parser::RuleFld_25D_A2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(354);
    fld_25D_A2_D();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A2aContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16R_A2aContext::Fld_16R_A2aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16R_A2aContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16R_A2aContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16R_A2aContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16R_A2a;
}

void SwiftMtParser_MT510Parser::Fld_16R_A2aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A2a(this);
}

void SwiftMtParser_MT510Parser::Fld_16R_A2aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A2a(this);
}

SwiftMtParser_MT510Parser::Fld_16R_A2aContext* SwiftMtParser_MT510Parser::fld_16R_A2a() {
  Fld_16R_A2aContext *_localctx = _tracker.createInstance<Fld_16R_A2aContext>(_ctx, getState());
  enterRule(_localctx, 56, SwiftMtParser_MT510Parser::RuleFld_16R_A2a);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(357);
    match(SwiftMtParser_MT510Parser::T__0);
    setState(359); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(358);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(361); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_24B_A2aContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_24B_A2aContext::Fld_24B_A2aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext* SwiftMtParser_MT510Parser::Fld_24B_A2aContext::fld_24B_A2a_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_24B_A2aContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_24B_A2a;
}

void SwiftMtParser_MT510Parser::Fld_24B_A2aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_24B_A2a(this);
}

void SwiftMtParser_MT510Parser::Fld_24B_A2aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_24B_A2a(this);
}

SwiftMtParser_MT510Parser::Fld_24B_A2aContext* SwiftMtParser_MT510Parser::fld_24B_A2a() {
  Fld_24B_A2aContext *_localctx = _tracker.createInstance<Fld_24B_A2aContext>(_ctx, getState());
  enterRule(_localctx, 58, SwiftMtParser_MT510Parser::RuleFld_24B_A2a);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    fld_24B_A2a_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70D_A2aContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_70D_A2aContext::Fld_70D_A2aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext* SwiftMtParser_MT510Parser::Fld_70D_A2aContext::fld_70D_A2a_D() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_70D_A2aContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_70D_A2a;
}

void SwiftMtParser_MT510Parser::Fld_70D_A2aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70D_A2a(this);
}

void SwiftMtParser_MT510Parser::Fld_70D_A2aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70D_A2a(this);
}

SwiftMtParser_MT510Parser::Fld_70D_A2aContext* SwiftMtParser_MT510Parser::fld_70D_A2a() {
  Fld_70D_A2aContext *_localctx = _tracker.createInstance<Fld_70D_A2aContext>(_ctx, getState());
  enterRule(_localctx, 60, SwiftMtParser_MT510Parser::RuleFld_70D_A2a);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(365);
    fld_70D_A2a_D();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_A2aContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16S_A2aContext::Fld_16S_A2aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16S_A2aContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16S_A2aContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16S_A2aContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16S_A2a;
}

void SwiftMtParser_MT510Parser::Fld_16S_A2aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A2a(this);
}

void SwiftMtParser_MT510Parser::Fld_16S_A2aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A2a(this);
}

SwiftMtParser_MT510Parser::Fld_16S_A2aContext* SwiftMtParser_MT510Parser::fld_16S_A2a() {
  Fld_16S_A2aContext *_localctx = _tracker.createInstance<Fld_16S_A2aContext>(_ctx, getState());
  enterRule(_localctx, 62, SwiftMtParser_MT510Parser::RuleFld_16S_A2a);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(367);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(368);
    match(SwiftMtParser_MT510Parser::T__1);
    setState(370); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(369);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(372); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_A2Context ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16S_A2Context::Fld_16S_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16S_A2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16S_A2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16S_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16S_A2;
}

void SwiftMtParser_MT510Parser::Fld_16S_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A2(this);
}

void SwiftMtParser_MT510Parser::Fld_16S_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A2(this);
}

SwiftMtParser_MT510Parser::Fld_16S_A2Context* SwiftMtParser_MT510Parser::fld_16S_A2() {
  Fld_16S_A2Context *_localctx = _tracker.createInstance<Fld_16S_A2Context>(_ctx, getState());
  enterRule(_localctx, 64, SwiftMtParser_MT510Parser::RuleFld_16S_A2);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(375);
    match(SwiftMtParser_MT510Parser::T__1);
    setState(377); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(376);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(379); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16S_AContext::Fld_16S_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16S_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16S_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16S_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16S_A;
}

void SwiftMtParser_MT510Parser::Fld_16S_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A(this);
}

void SwiftMtParser_MT510Parser::Fld_16S_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A(this);
}

SwiftMtParser_MT510Parser::Fld_16S_AContext* SwiftMtParser_MT510Parser::fld_16S_A() {
  Fld_16S_AContext *_localctx = _tracker.createInstance<Fld_16S_AContext>(_ctx, getState());
  enterRule(_localctx, 66, SwiftMtParser_MT510Parser::RuleFld_16S_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(381);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(382);
    match(SwiftMtParser_MT510Parser::T__1);
    setState(384); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(383);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      setState(386); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 33, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16R_BContext::Fld_16R_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16R_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16R_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16R_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16R_B;
}

void SwiftMtParser_MT510Parser::Fld_16R_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B(this);
}

void SwiftMtParser_MT510Parser::Fld_16R_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B(this);
}

SwiftMtParser_MT510Parser::Fld_16R_BContext* SwiftMtParser_MT510Parser::fld_16R_B() {
  Fld_16R_BContext *_localctx = _tracker.createInstance<Fld_16R_BContext>(_ctx, getState());
  enterRule(_localctx, 68, SwiftMtParser_MT510Parser::RuleFld_16R_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(388);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(389);
    match(SwiftMtParser_MT510Parser::T__0);
    setState(391); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(390);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20D_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_20D_BContext::Fld_20D_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_20D_B_DContext* SwiftMtParser_MT510Parser::Fld_20D_BContext::fld_20D_B_D() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_20D_B_DContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_20D_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_20D_B;
}

void SwiftMtParser_MT510Parser::Fld_20D_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20D_B(this);
}

void SwiftMtParser_MT510Parser::Fld_20D_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20D_B(this);
}

SwiftMtParser_MT510Parser::Fld_20D_BContext* SwiftMtParser_MT510Parser::fld_20D_B() {
  Fld_20D_BContext *_localctx = _tracker.createInstance<Fld_20D_BContext>(_ctx, getState());
  enterRule(_localctx, 70, SwiftMtParser_MT510Parser::RuleFld_20D_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
    fld_20D_B_D();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_BContext::Fld_95a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_95a_B_PContext* SwiftMtParser_MT510Parser::Fld_95a_BContext::fld_95a_B_P() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_B_PContext>(0);
}

SwiftMtParser_MT510Parser::Fld_95a_B_RContext* SwiftMtParser_MT510Parser::Fld_95a_BContext::fld_95a_B_R() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_B_RContext>(0);
}

SwiftMtParser_MT510Parser::Fld_95a_B_SContext* SwiftMtParser_MT510Parser::Fld_95a_BContext::fld_95a_B_S() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_B_SContext>(0);
}

SwiftMtParser_MT510Parser::Fld_95a_B_UContext* SwiftMtParser_MT510Parser::Fld_95a_BContext::fld_95a_B_U() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_B_UContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_B;
}

void SwiftMtParser_MT510Parser::Fld_95a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B(this);
}

SwiftMtParser_MT510Parser::Fld_95a_BContext* SwiftMtParser_MT510Parser::fld_95a_B() {
  Fld_95a_BContext *_localctx = _tracker.createInstance<Fld_95a_BContext>(_ctx, getState());
  enterRule(_localctx, 72, SwiftMtParser_MT510Parser::RuleFld_95a_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(401);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(397);
      fld_95a_B_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(398);
      fld_95a_B_R();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(399);
      fld_95a_B_S();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(400);
      fld_95a_B_U();
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

//----------------- Fld_94a_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_94a_BContext::Fld_94a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_94a_B_CContext* SwiftMtParser_MT510Parser::Fld_94a_BContext::fld_94a_B_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_94a_B_CContext>(0);
}

SwiftMtParser_MT510Parser::Fld_94a_B_DContext* SwiftMtParser_MT510Parser::Fld_94a_BContext::fld_94a_B_D() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_94a_B_DContext>(0);
}

SwiftMtParser_MT510Parser::Fld_94a_B_GContext* SwiftMtParser_MT510Parser::Fld_94a_BContext::fld_94a_B_G() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_94a_B_GContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_94a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_94a_B;
}

void SwiftMtParser_MT510Parser::Fld_94a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94a_B(this);
}

void SwiftMtParser_MT510Parser::Fld_94a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94a_B(this);
}

SwiftMtParser_MT510Parser::Fld_94a_BContext* SwiftMtParser_MT510Parser::fld_94a_B() {
  Fld_94a_BContext *_localctx = _tracker.createInstance<Fld_94a_BContext>(_ctx, getState());
  enterRule(_localctx, 74, SwiftMtParser_MT510Parser::RuleFld_94a_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(406);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(403);
      fld_94a_B_C();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(404);
      fld_94a_B_D();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(405);
      fld_94a_B_G();
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

//----------------- Fld_13B_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_13B_BContext::Fld_13B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_13B_B_BContext* SwiftMtParser_MT510Parser::Fld_13B_BContext::fld_13B_B_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_13B_B_BContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_13B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_13B_B;
}

void SwiftMtParser_MT510Parser::Fld_13B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13B_B(this);
}

void SwiftMtParser_MT510Parser::Fld_13B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13B_B(this);
}

SwiftMtParser_MT510Parser::Fld_13B_BContext* SwiftMtParser_MT510Parser::fld_13B_B() {
  Fld_13B_BContext *_localctx = _tracker.createInstance<Fld_13B_BContext>(_ctx, getState());
  enterRule(_localctx, 76, SwiftMtParser_MT510Parser::RuleFld_13B_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(408);
    fld_13B_B_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_98a_BContext::Fld_98a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_98a_B_AContext* SwiftMtParser_MT510Parser::Fld_98a_BContext::fld_98a_B_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_98a_B_AContext>(0);
}

SwiftMtParser_MT510Parser::Fld_98a_B_CContext* SwiftMtParser_MT510Parser::Fld_98a_BContext::fld_98a_B_C() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_98a_B_CContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_98a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_98a_B;
}

void SwiftMtParser_MT510Parser::Fld_98a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B(this);
}

void SwiftMtParser_MT510Parser::Fld_98a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B(this);
}

SwiftMtParser_MT510Parser::Fld_98a_BContext* SwiftMtParser_MT510Parser::fld_98a_B() {
  Fld_98a_BContext *_localctx = _tracker.createInstance<Fld_98a_BContext>(_ctx, getState());
  enterRule(_localctx, 78, SwiftMtParser_MT510Parser::RuleFld_98a_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(412);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(410);
      fld_98a_B_A();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(411);
      fld_98a_B_C();
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

//----------------- Fld_35B_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_35B_BContext::Fld_35B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_35B_B_BContext* SwiftMtParser_MT510Parser::Fld_35B_BContext::fld_35B_B_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_35B_B_BContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_35B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_35B_B;
}

void SwiftMtParser_MT510Parser::Fld_35B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_35B_B(this);
}

void SwiftMtParser_MT510Parser::Fld_35B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_35B_B(this);
}

SwiftMtParser_MT510Parser::Fld_35B_BContext* SwiftMtParser_MT510Parser::fld_35B_B() {
  Fld_35B_BContext *_localctx = _tracker.createInstance<Fld_35B_BContext>(_ctx, getState());
  enterRule(_localctx, 80, SwiftMtParser_MT510Parser::RuleFld_35B_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(414);
    fld_35B_B_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_36B_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_36B_BContext::Fld_36B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_36B_B_BContext* SwiftMtParser_MT510Parser::Fld_36B_BContext::fld_36B_B_B() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_36B_B_BContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_36B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_36B_B;
}

void SwiftMtParser_MT510Parser::Fld_36B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_36B_B(this);
}

void SwiftMtParser_MT510Parser::Fld_36B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_36B_B(this);
}

SwiftMtParser_MT510Parser::Fld_36B_BContext* SwiftMtParser_MT510Parser::fld_36B_B() {
  Fld_36B_BContext *_localctx = _tracker.createInstance<Fld_36B_BContext>(_ctx, getState());
  enterRule(_localctx, 82, SwiftMtParser_MT510Parser::RuleFld_36B_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(416);
    fld_36B_B_B();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_97A_BContext::Fld_97A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_97A_B_AContext* SwiftMtParser_MT510Parser::Fld_97A_BContext::fld_97A_B_A() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_97A_B_AContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_97A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_97A_B;
}

void SwiftMtParser_MT510Parser::Fld_97A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B(this);
}

void SwiftMtParser_MT510Parser::Fld_97A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B(this);
}

SwiftMtParser_MT510Parser::Fld_97A_BContext* SwiftMtParser_MT510Parser::fld_97A_B() {
  Fld_97A_BContext *_localctx = _tracker.createInstance<Fld_97A_BContext>(_ctx, getState());
  enterRule(_localctx, 84, SwiftMtParser_MT510Parser::RuleFld_97A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    fld_97A_B_A();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16S_BContext::Fld_16S_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16S_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16S_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16S_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16S_B;
}

void SwiftMtParser_MT510Parser::Fld_16S_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B(this);
}

void SwiftMtParser_MT510Parser::Fld_16S_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B(this);
}

SwiftMtParser_MT510Parser::Fld_16S_BContext* SwiftMtParser_MT510Parser::fld_16S_B() {
  Fld_16S_BContext *_localctx = _tracker.createInstance<Fld_16S_BContext>(_ctx, getState());
  enterRule(_localctx, 86, SwiftMtParser_MT510Parser::RuleFld_16S_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(421);
    match(SwiftMtParser_MT510Parser::T__1);
    setState(423); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(422);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      setState(425); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
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

SwiftMtParser_MT510Parser::Fld_16R_CContext::Fld_16R_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16R_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16R_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16R_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16R_C;
}

void SwiftMtParser_MT510Parser::Fld_16R_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_C(this);
}

void SwiftMtParser_MT510Parser::Fld_16R_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_C(this);
}

SwiftMtParser_MT510Parser::Fld_16R_CContext* SwiftMtParser_MT510Parser::fld_16R_C() {
  Fld_16R_CContext *_localctx = _tracker.createInstance<Fld_16R_CContext>(_ctx, getState());
  enterRule(_localctx, 88, SwiftMtParser_MT510Parser::RuleFld_16R_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(428);
    match(SwiftMtParser_MT510Parser::T__0);
    setState(430); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(429);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_CContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_CContext::Fld_95a_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT510Parser::Fld_95a_C_PContext* SwiftMtParser_MT510Parser::Fld_95a_CContext::fld_95a_C_P() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_C_PContext>(0);
}

SwiftMtParser_MT510Parser::Fld_95a_C_QContext* SwiftMtParser_MT510Parser::Fld_95a_CContext::fld_95a_C_Q() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_C_QContext>(0);
}

SwiftMtParser_MT510Parser::Fld_95a_C_RContext* SwiftMtParser_MT510Parser::Fld_95a_CContext::fld_95a_C_R() {
  return getRuleContext<SwiftMtParser_MT510Parser::Fld_95a_C_RContext>(0);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_C;
}

void SwiftMtParser_MT510Parser::Fld_95a_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C(this);
}

SwiftMtParser_MT510Parser::Fld_95a_CContext* SwiftMtParser_MT510Parser::fld_95a_C() {
  Fld_95a_CContext *_localctx = _tracker.createInstance<Fld_95a_CContext>(_ctx, getState());
  enterRule(_localctx, 90, SwiftMtParser_MT510Parser::RuleFld_95a_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(437);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(434);
      fld_95a_C_P();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(435);
      fld_95a_C_Q();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(436);
      fld_95a_C_R();
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

//----------------- Fld_16S_CContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_16S_CContext::Fld_16S_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_16S_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_16S_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_16S_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_16S_C;
}

void SwiftMtParser_MT510Parser::Fld_16S_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_C(this);
}

void SwiftMtParser_MT510Parser::Fld_16S_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_C(this);
}

SwiftMtParser_MT510Parser::Fld_16S_CContext* SwiftMtParser_MT510Parser::fld_16S_C() {
  Fld_16S_CContext *_localctx = _tracker.createInstance<Fld_16S_CContext>(_ctx, getState());
  enterRule(_localctx, 92, SwiftMtParser_MT510Parser::RuleFld_16S_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(439);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(440);
    match(SwiftMtParser_MT510Parser::T__1);
    setState(442); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(441);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      setState(444); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
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

SwiftMtParser_MT510Parser::Fld_20C_A_CContext::Fld_20C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_20C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_20C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_20C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_20C_A_C;
}

void SwiftMtParser_MT510Parser::Fld_20C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A_C(this);
}

void SwiftMtParser_MT510Parser::Fld_20C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A_C(this);
}

SwiftMtParser_MT510Parser::Fld_20C_A_CContext* SwiftMtParser_MT510Parser::fld_20C_A_C() {
  Fld_20C_A_CContext *_localctx = _tracker.createInstance<Fld_20C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 94, SwiftMtParser_MT510Parser::RuleFld_20C_A_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(446);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(447);
    match(SwiftMtParser_MT510Parser::T__2);
    setState(449); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(448);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(451); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_A_GContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_23G_A_GContext::Fld_23G_A_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_23G_A_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_23G_A_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_23G_A_GContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_23G_A_G;
}

void SwiftMtParser_MT510Parser::Fld_23G_A_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A_G(this);
}

void SwiftMtParser_MT510Parser::Fld_23G_A_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A_G(this);
}

SwiftMtParser_MT510Parser::Fld_23G_A_GContext* SwiftMtParser_MT510Parser::fld_23G_A_G() {
  Fld_23G_A_GContext *_localctx = _tracker.createInstance<Fld_23G_A_GContext>(_ctx, getState());
  enterRule(_localctx, 96, SwiftMtParser_MT510Parser::RuleFld_23G_A_G);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(453);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(454);
    match(SwiftMtParser_MT510Parser::T__3);
    setState(456); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(455);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(458); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_98a_A_AContext::Fld_98a_A_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_98a_A_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_98a_A_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_98a_A_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_98a_A_A;
}

void SwiftMtParser_MT510Parser::Fld_98a_A_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_A(this);
}

void SwiftMtParser_MT510Parser::Fld_98a_A_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_A(this);
}

SwiftMtParser_MT510Parser::Fld_98a_A_AContext* SwiftMtParser_MT510Parser::fld_98a_A_A() {
  Fld_98a_A_AContext *_localctx = _tracker.createInstance<Fld_98a_A_AContext>(_ctx, getState());
  enterRule(_localctx, 98, SwiftMtParser_MT510Parser::RuleFld_98a_A_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(460);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(461);
    match(SwiftMtParser_MT510Parser::T__4);
    setState(463); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(462);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(465); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_CContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_98a_A_CContext::Fld_98a_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_98a_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_98a_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_98a_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_98a_A_C;
}

void SwiftMtParser_MT510Parser::Fld_98a_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_C(this);
}

void SwiftMtParser_MT510Parser::Fld_98a_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_C(this);
}

SwiftMtParser_MT510Parser::Fld_98a_A_CContext* SwiftMtParser_MT510Parser::fld_98a_A_C() {
  Fld_98a_A_CContext *_localctx = _tracker.createInstance<Fld_98a_A_CContext>(_ctx, getState());
  enterRule(_localctx, 100, SwiftMtParser_MT510Parser::RuleFld_98a_A_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(468);
    match(SwiftMtParser_MT510Parser::T__5);
    setState(470); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(469);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(472); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_EContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_98a_A_EContext::Fld_98a_A_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_98a_A_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_98a_A_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_98a_A_EContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_98a_A_E;
}

void SwiftMtParser_MT510Parser::Fld_98a_A_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_E(this);
}

void SwiftMtParser_MT510Parser::Fld_98a_A_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_E(this);
}

SwiftMtParser_MT510Parser::Fld_98a_A_EContext* SwiftMtParser_MT510Parser::fld_98a_A_E() {
  Fld_98a_A_EContext *_localctx = _tracker.createInstance<Fld_98a_A_EContext>(_ctx, getState());
  enterRule(_localctx, 102, SwiftMtParser_MT510Parser::RuleFld_98a_A_E);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(474);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(475);
    match(SwiftMtParser_MT510Parser::T__6);
    setState(477); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(476);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(479); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_13a_A1_AContext::Fld_13a_A1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_13a_A1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_13a_A1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_13a_A1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_13a_A1_A;
}

void SwiftMtParser_MT510Parser::Fld_13a_A1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_A(this);
}

void SwiftMtParser_MT510Parser::Fld_13a_A1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_A(this);
}

SwiftMtParser_MT510Parser::Fld_13a_A1_AContext* SwiftMtParser_MT510Parser::fld_13a_A1_A() {
  Fld_13a_A1_AContext *_localctx = _tracker.createInstance<Fld_13a_A1_AContext>(_ctx, getState());
  enterRule(_localctx, 104, SwiftMtParser_MT510Parser::RuleFld_13a_A1_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(481);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(482);
    match(SwiftMtParser_MT510Parser::T__7);
    setState(484); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(483);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(486); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_13a_A1_BContext::Fld_13a_A1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_13a_A1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_13a_A1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_13a_A1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_13a_A1_B;
}

void SwiftMtParser_MT510Parser::Fld_13a_A1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_B(this);
}

void SwiftMtParser_MT510Parser::Fld_13a_A1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_B(this);
}

SwiftMtParser_MT510Parser::Fld_13a_A1_BContext* SwiftMtParser_MT510Parser::fld_13a_A1_B() {
  Fld_13a_A1_BContext *_localctx = _tracker.createInstance<Fld_13a_A1_BContext>(_ctx, getState());
  enterRule(_localctx, 106, SwiftMtParser_MT510Parser::RuleFld_13a_A1_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(488);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(489);
    match(SwiftMtParser_MT510Parser::T__8);
    setState(491); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(490);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(493); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1_CContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_20C_A1_CContext::Fld_20C_A1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_20C_A1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_20C_A1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_20C_A1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_20C_A1_C;
}

void SwiftMtParser_MT510Parser::Fld_20C_A1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1_C(this);
}

void SwiftMtParser_MT510Parser::Fld_20C_A1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1_C(this);
}

SwiftMtParser_MT510Parser::Fld_20C_A1_CContext* SwiftMtParser_MT510Parser::fld_20C_A1_C() {
  Fld_20C_A1_CContext *_localctx = _tracker.createInstance<Fld_20C_A1_CContext>(_ctx, getState());
  enterRule(_localctx, 108, SwiftMtParser_MT510Parser::RuleFld_20C_A1_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(495);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(496);
    match(SwiftMtParser_MT510Parser::T__2);
    setState(498); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(497);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(500); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_25D_A2_DContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_25D_A2_DContext::Fld_25D_A2_DContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_25D_A2_DContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_25D_A2_DContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_25D_A2_DContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_25D_A2_D;
}

void SwiftMtParser_MT510Parser::Fld_25D_A2_DContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_25D_A2_D(this);
}

void SwiftMtParser_MT510Parser::Fld_25D_A2_DContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_25D_A2_D(this);
}

SwiftMtParser_MT510Parser::Fld_25D_A2_DContext* SwiftMtParser_MT510Parser::fld_25D_A2_D() {
  Fld_25D_A2_DContext *_localctx = _tracker.createInstance<Fld_25D_A2_DContext>(_ctx, getState());
  enterRule(_localctx, 110, SwiftMtParser_MT510Parser::RuleFld_25D_A2_D);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(503);
    match(SwiftMtParser_MT510Parser::T__9);
    setState(505); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(504);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_24B_A2a_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext::Fld_24B_A2a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_24B_A2a_B;
}

void SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_24B_A2a_B(this);
}

void SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_24B_A2a_B(this);
}

SwiftMtParser_MT510Parser::Fld_24B_A2a_BContext* SwiftMtParser_MT510Parser::fld_24B_A2a_B() {
  Fld_24B_A2a_BContext *_localctx = _tracker.createInstance<Fld_24B_A2a_BContext>(_ctx, getState());
  enterRule(_localctx, 112, SwiftMtParser_MT510Parser::RuleFld_24B_A2a_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(509);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(510);
    match(SwiftMtParser_MT510Parser::T__10);
    setState(512); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(511);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(514); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70D_A2a_DContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext::Fld_70D_A2a_DContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_70D_A2a_D;
}

void SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70D_A2a_D(this);
}

void SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70D_A2a_D(this);
}

SwiftMtParser_MT510Parser::Fld_70D_A2a_DContext* SwiftMtParser_MT510Parser::fld_70D_A2a_D() {
  Fld_70D_A2a_DContext *_localctx = _tracker.createInstance<Fld_70D_A2a_DContext>(_ctx, getState());
  enterRule(_localctx, 114, SwiftMtParser_MT510Parser::RuleFld_70D_A2a_D);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(516);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(517);
    match(SwiftMtParser_MT510Parser::T__11);
    setState(519); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(518);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20D_B_DContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_20D_B_DContext::Fld_20D_B_DContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_20D_B_DContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_20D_B_DContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_20D_B_DContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_20D_B_D;
}

void SwiftMtParser_MT510Parser::Fld_20D_B_DContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20D_B_D(this);
}

void SwiftMtParser_MT510Parser::Fld_20D_B_DContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20D_B_D(this);
}

SwiftMtParser_MT510Parser::Fld_20D_B_DContext* SwiftMtParser_MT510Parser::fld_20D_B_D() {
  Fld_20D_B_DContext *_localctx = _tracker.createInstance<Fld_20D_B_DContext>(_ctx, getState());
  enterRule(_localctx, 116, SwiftMtParser_MT510Parser::RuleFld_20D_B_D);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(523);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(524);
    match(SwiftMtParser_MT510Parser::T__12);
    setState(526); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(525);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B_PContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_B_PContext::Fld_95a_B_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_95a_B_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_95a_B_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_B_PContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_B_P;
}

void SwiftMtParser_MT510Parser::Fld_95a_B_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B_P(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_B_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B_P(this);
}

SwiftMtParser_MT510Parser::Fld_95a_B_PContext* SwiftMtParser_MT510Parser::fld_95a_B_P() {
  Fld_95a_B_PContext *_localctx = _tracker.createInstance<Fld_95a_B_PContext>(_ctx, getState());
  enterRule(_localctx, 118, SwiftMtParser_MT510Parser::RuleFld_95a_B_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(530);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(531);
    match(SwiftMtParser_MT510Parser::T__13);
    setState(533); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(532);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B_RContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_B_RContext::Fld_95a_B_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_95a_B_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_95a_B_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_B_RContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_B_R;
}

void SwiftMtParser_MT510Parser::Fld_95a_B_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B_R(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_B_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B_R(this);
}

SwiftMtParser_MT510Parser::Fld_95a_B_RContext* SwiftMtParser_MT510Parser::fld_95a_B_R() {
  Fld_95a_B_RContext *_localctx = _tracker.createInstance<Fld_95a_B_RContext>(_ctx, getState());
  enterRule(_localctx, 120, SwiftMtParser_MT510Parser::RuleFld_95a_B_R);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(537);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(538);
    match(SwiftMtParser_MT510Parser::T__14);
    setState(540); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(539);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B_SContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_B_SContext::Fld_95a_B_SContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_95a_B_SContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_95a_B_SContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_B_SContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_B_S;
}

void SwiftMtParser_MT510Parser::Fld_95a_B_SContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B_S(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_B_SContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B_S(this);
}

SwiftMtParser_MT510Parser::Fld_95a_B_SContext* SwiftMtParser_MT510Parser::fld_95a_B_S() {
  Fld_95a_B_SContext *_localctx = _tracker.createInstance<Fld_95a_B_SContext>(_ctx, getState());
  enterRule(_localctx, 122, SwiftMtParser_MT510Parser::RuleFld_95a_B_S);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(544);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(545);
    match(SwiftMtParser_MT510Parser::T__15);
    setState(547); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(546);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B_UContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_B_UContext::Fld_95a_B_UContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_95a_B_UContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_95a_B_UContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_B_UContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_B_U;
}

void SwiftMtParser_MT510Parser::Fld_95a_B_UContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B_U(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_B_UContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B_U(this);
}

SwiftMtParser_MT510Parser::Fld_95a_B_UContext* SwiftMtParser_MT510Parser::fld_95a_B_U() {
  Fld_95a_B_UContext *_localctx = _tracker.createInstance<Fld_95a_B_UContext>(_ctx, getState());
  enterRule(_localctx, 124, SwiftMtParser_MT510Parser::RuleFld_95a_B_U);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(551);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(552);
    match(SwiftMtParser_MT510Parser::T__16);
    setState(554); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(553);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_94a_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_94a_B_CContext::Fld_94a_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_94a_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_94a_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_94a_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_94a_B_C;
}

void SwiftMtParser_MT510Parser::Fld_94a_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94a_B_C(this);
}

void SwiftMtParser_MT510Parser::Fld_94a_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94a_B_C(this);
}

SwiftMtParser_MT510Parser::Fld_94a_B_CContext* SwiftMtParser_MT510Parser::fld_94a_B_C() {
  Fld_94a_B_CContext *_localctx = _tracker.createInstance<Fld_94a_B_CContext>(_ctx, getState());
  enterRule(_localctx, 126, SwiftMtParser_MT510Parser::RuleFld_94a_B_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(559);
    match(SwiftMtParser_MT510Parser::T__17);
    setState(561); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(560);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_94a_B_DContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_94a_B_DContext::Fld_94a_B_DContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_94a_B_DContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_94a_B_DContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_94a_B_DContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_94a_B_D;
}

void SwiftMtParser_MT510Parser::Fld_94a_B_DContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94a_B_D(this);
}

void SwiftMtParser_MT510Parser::Fld_94a_B_DContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94a_B_D(this);
}

SwiftMtParser_MT510Parser::Fld_94a_B_DContext* SwiftMtParser_MT510Parser::fld_94a_B_D() {
  Fld_94a_B_DContext *_localctx = _tracker.createInstance<Fld_94a_B_DContext>(_ctx, getState());
  enterRule(_localctx, 128, SwiftMtParser_MT510Parser::RuleFld_94a_B_D);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(565);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(566);
    match(SwiftMtParser_MT510Parser::T__18);
    setState(568); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(567);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_94a_B_GContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_94a_B_GContext::Fld_94a_B_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_94a_B_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_94a_B_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_94a_B_GContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_94a_B_G;
}

void SwiftMtParser_MT510Parser::Fld_94a_B_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94a_B_G(this);
}

void SwiftMtParser_MT510Parser::Fld_94a_B_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94a_B_G(this);
}

SwiftMtParser_MT510Parser::Fld_94a_B_GContext* SwiftMtParser_MT510Parser::fld_94a_B_G() {
  Fld_94a_B_GContext *_localctx = _tracker.createInstance<Fld_94a_B_GContext>(_ctx, getState());
  enterRule(_localctx, 130, SwiftMtParser_MT510Parser::RuleFld_94a_B_G);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(572);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(573);
    match(SwiftMtParser_MT510Parser::T__19);
    setState(575); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(574);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13B_B_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_13B_B_BContext::Fld_13B_B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_13B_B_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_13B_B_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_13B_B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_13B_B_B;
}

void SwiftMtParser_MT510Parser::Fld_13B_B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13B_B_B(this);
}

void SwiftMtParser_MT510Parser::Fld_13B_B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13B_B_B(this);
}

SwiftMtParser_MT510Parser::Fld_13B_B_BContext* SwiftMtParser_MT510Parser::fld_13B_B_B() {
  Fld_13B_B_BContext *_localctx = _tracker.createInstance<Fld_13B_B_BContext>(_ctx, getState());
  enterRule(_localctx, 132, SwiftMtParser_MT510Parser::RuleFld_13B_B_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(579);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(580);
    match(SwiftMtParser_MT510Parser::T__8);
    setState(582); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(581);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_98a_B_AContext::Fld_98a_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_98a_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_98a_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_98a_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_98a_B_A;
}

void SwiftMtParser_MT510Parser::Fld_98a_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B_A(this);
}

void SwiftMtParser_MT510Parser::Fld_98a_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B_A(this);
}

SwiftMtParser_MT510Parser::Fld_98a_B_AContext* SwiftMtParser_MT510Parser::fld_98a_B_A() {
  Fld_98a_B_AContext *_localctx = _tracker.createInstance<Fld_98a_B_AContext>(_ctx, getState());
  enterRule(_localctx, 134, SwiftMtParser_MT510Parser::RuleFld_98a_B_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(586);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(587);
    match(SwiftMtParser_MT510Parser::T__4);
    setState(589); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(588);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_98a_B_CContext::Fld_98a_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_98a_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_98a_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_98a_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_98a_B_C;
}

void SwiftMtParser_MT510Parser::Fld_98a_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B_C(this);
}

void SwiftMtParser_MT510Parser::Fld_98a_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B_C(this);
}

SwiftMtParser_MT510Parser::Fld_98a_B_CContext* SwiftMtParser_MT510Parser::fld_98a_B_C() {
  Fld_98a_B_CContext *_localctx = _tracker.createInstance<Fld_98a_B_CContext>(_ctx, getState());
  enterRule(_localctx, 136, SwiftMtParser_MT510Parser::RuleFld_98a_B_C);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(593);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(594);
    match(SwiftMtParser_MT510Parser::T__5);
    setState(596); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(595);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_35B_B_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_35B_B_BContext::Fld_35B_B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_35B_B_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_35B_B_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_35B_B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_35B_B_B;
}

void SwiftMtParser_MT510Parser::Fld_35B_B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_35B_B_B(this);
}

void SwiftMtParser_MT510Parser::Fld_35B_B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_35B_B_B(this);
}

SwiftMtParser_MT510Parser::Fld_35B_B_BContext* SwiftMtParser_MT510Parser::fld_35B_B_B() {
  Fld_35B_B_BContext *_localctx = _tracker.createInstance<Fld_35B_B_BContext>(_ctx, getState());
  enterRule(_localctx, 138, SwiftMtParser_MT510Parser::RuleFld_35B_B_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(600);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(601);
    match(SwiftMtParser_MT510Parser::T__20);
    setState(603); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(602);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_36B_B_BContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_36B_B_BContext::Fld_36B_B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_36B_B_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_36B_B_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_36B_B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_36B_B_B;
}

void SwiftMtParser_MT510Parser::Fld_36B_B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_36B_B_B(this);
}

void SwiftMtParser_MT510Parser::Fld_36B_B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_36B_B_B(this);
}

SwiftMtParser_MT510Parser::Fld_36B_B_BContext* SwiftMtParser_MT510Parser::fld_36B_B_B() {
  Fld_36B_B_BContext *_localctx = _tracker.createInstance<Fld_36B_B_BContext>(_ctx, getState());
  enterRule(_localctx, 140, SwiftMtParser_MT510Parser::RuleFld_36B_B_B);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(607);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(608);
    match(SwiftMtParser_MT510Parser::T__21);
    setState(610); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(609);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_97A_B_AContext::Fld_97A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_97A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_97A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_97A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_97A_B_A;
}

void SwiftMtParser_MT510Parser::Fld_97A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B_A(this);
}

void SwiftMtParser_MT510Parser::Fld_97A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B_A(this);
}

SwiftMtParser_MT510Parser::Fld_97A_B_AContext* SwiftMtParser_MT510Parser::fld_97A_B_A() {
  Fld_97A_B_AContext *_localctx = _tracker.createInstance<Fld_97A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 142, SwiftMtParser_MT510Parser::RuleFld_97A_B_A);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(614);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(615);
    match(SwiftMtParser_MT510Parser::T__22);
    setState(617); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(616);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_C_PContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_C_PContext::Fld_95a_C_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_95a_C_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_95a_C_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_C_PContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_C_P;
}

void SwiftMtParser_MT510Parser::Fld_95a_C_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C_P(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_C_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C_P(this);
}

SwiftMtParser_MT510Parser::Fld_95a_C_PContext* SwiftMtParser_MT510Parser::fld_95a_C_P() {
  Fld_95a_C_PContext *_localctx = _tracker.createInstance<Fld_95a_C_PContext>(_ctx, getState());
  enterRule(_localctx, 144, SwiftMtParser_MT510Parser::RuleFld_95a_C_P);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(621);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(622);
    match(SwiftMtParser_MT510Parser::T__13);
    setState(624); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(623);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_C_QContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_C_QContext::Fld_95a_C_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_95a_C_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_95a_C_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_C_QContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_C_Q;
}

void SwiftMtParser_MT510Parser::Fld_95a_C_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C_Q(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_C_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C_Q(this);
}

SwiftMtParser_MT510Parser::Fld_95a_C_QContext* SwiftMtParser_MT510Parser::fld_95a_C_Q() {
  Fld_95a_C_QContext *_localctx = _tracker.createInstance<Fld_95a_C_QContext>(_ctx, getState());
  enterRule(_localctx, 146, SwiftMtParser_MT510Parser::RuleFld_95a_C_Q);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(628);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(629);
    match(SwiftMtParser_MT510Parser::T__23);
    setState(631); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(630);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_C_RContext ------------------------------------------------------------------

SwiftMtParser_MT510Parser::Fld_95a_C_RContext::Fld_95a_C_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT510Parser::Fld_95a_C_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT510Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT510Parser::Fld_95a_C_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT510Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT510Parser::Fld_95a_C_RContext::getRuleIndex() const {
  return SwiftMtParser_MT510Parser::RuleFld_95a_C_R;
}

void SwiftMtParser_MT510Parser::Fld_95a_C_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_C_R(this);
}

void SwiftMtParser_MT510Parser::Fld_95a_C_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT510Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_C_R(this);
}

SwiftMtParser_MT510Parser::Fld_95a_C_RContext* SwiftMtParser_MT510Parser::fld_95a_C_R() {
  Fld_95a_C_RContext *_localctx = _tracker.createInstance<Fld_95a_C_RContext>(_ctx, getState());
  enterRule(_localctx, 148, SwiftMtParser_MT510Parser::RuleFld_95a_C_R);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(635);
    match(SwiftMtParser_MT510Parser::START_OF_FIELD);
    setState(636);
    match(SwiftMtParser_MT510Parser::T__14);
    setState(638); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(637);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT510Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT510Parser::T__0)
      | (1ULL << SwiftMtParser_MT510Parser::T__1)
      | (1ULL << SwiftMtParser_MT510Parser::T__2)
      | (1ULL << SwiftMtParser_MT510Parser::T__3)
      | (1ULL << SwiftMtParser_MT510Parser::T__4)
      | (1ULL << SwiftMtParser_MT510Parser::T__5)
      | (1ULL << SwiftMtParser_MT510Parser::T__6)
      | (1ULL << SwiftMtParser_MT510Parser::T__7)
      | (1ULL << SwiftMtParser_MT510Parser::T__8)
      | (1ULL << SwiftMtParser_MT510Parser::T__9)
      | (1ULL << SwiftMtParser_MT510Parser::T__10)
      | (1ULL << SwiftMtParser_MT510Parser::T__11)
      | (1ULL << SwiftMtParser_MT510Parser::T__12)
      | (1ULL << SwiftMtParser_MT510Parser::T__13)
      | (1ULL << SwiftMtParser_MT510Parser::T__14)
      | (1ULL << SwiftMtParser_MT510Parser::T__15)
      | (1ULL << SwiftMtParser_MT510Parser::T__16)
      | (1ULL << SwiftMtParser_MT510Parser::T__17)
      | (1ULL << SwiftMtParser_MT510Parser::T__18)
      | (1ULL << SwiftMtParser_MT510Parser::T__19)
      | (1ULL << SwiftMtParser_MT510Parser::T__20)
      | (1ULL << SwiftMtParser_MT510Parser::T__21)
      | (1ULL << SwiftMtParser_MT510Parser::T__22)
      | (1ULL << SwiftMtParser_MT510Parser::T__23)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT510Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT510Parser::MT_END)
      | (1ULL << SwiftMtParser_MT510Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT510Parser::COLON)
      | (1ULL << SwiftMtParser_MT510Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT510Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT510Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT510Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT510Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT510Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt", "seq_A", 
  "seq_A1", "seq_A2", "seq_A2a", "seq_B", "seq_C", "fld_16R_A", "fld_20C_A", 
  "fld_23G_A", "fld_98a_A", "fld_16R_A1", "fld_13a_A1", "fld_20C_A1", "fld_16S_A1", 
  "fld_16R_A2", "fld_25D_A2", "fld_16R_A2a", "fld_24B_A2a", "fld_70D_A2a", 
  "fld_16S_A2a", "fld_16S_A2", "fld_16S_A", "fld_16R_B", "fld_20D_B", "fld_95a_B", 
  "fld_94a_B", "fld_13B_B", "fld_98a_B", "fld_35B_B", "fld_36B_B", "fld_97A_B", 
  "fld_16S_B", "fld_16R_C", "fld_95a_C", "fld_16S_C", "fld_20C_A_C", "fld_23G_A_G", 
  "fld_98a_A_A", "fld_98a_A_C", "fld_98a_A_E", "fld_13a_A1_A", "fld_13a_A1_B", 
  "fld_20C_A1_C", "fld_25D_A2_D", "fld_24B_A2a_B", "fld_70D_A2a_D", "fld_20D_B_D", 
  "fld_95a_B_P", "fld_95a_B_R", "fld_95a_B_S", "fld_95a_B_U", "fld_94a_B_C", 
  "fld_94a_B_D", "fld_94a_B_G", "fld_13B_B_B", "fld_98a_B_A", "fld_98a_B_C", 
  "fld_35B_B_B", "fld_36B_B_B", "fld_97A_B_A", "fld_95a_C_P", "fld_95a_C_Q", 
  "fld_95a_C_R"
};

std::vector<std::string> SwiftMtParser_MT510Parser::_literalNames = {
  "", "'16R:'", "'16S:'", "'20C:'", "'23G:'", "'98A:'", "'98C:'", "'98E:'", 
  "'13A:'", "'13B:'", "'25D:'", "'24B:'", "'70D:'", "'20D:'", "'95P:'", 
  "'95R:'", "'95S:'", "'95U:'", "'94C:'", "'94D:'", "'94G:'", "'35B:'", 
  "'36B:'", "'97A:'", "'95Q:'", "'{1:'", "'{2:'", "'{3:'", "'{4:'", "'{5:'", 
  "'-}'", "'{'", "'}'", "':'"
};

std::vector<std::string> SwiftMtParser_MT510Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "TAG_BH", "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", 
  "MT_END", "LBRACE", "RBRACE", "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT510Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT510Parser::_tokenNames;

SwiftMtParser_MT510Parser::Initializer::Initializer() {
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
    0x3, 0x25, 0x285, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x9c, 0xa, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x5, 0x2, 0xa0, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x6, 0x4, 0xa9, 0xa, 0x4, 0xd, 0x4, 
    0xe, 0x4, 0xaa, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 
    0x6, 0xb2, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0xb3, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 
    0x9, 0xbf, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0xc0, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0xca, 0xa, 0xb, 
    0xd, 0xb, 0xe, 0xb, 0xcb, 0x3, 0xc, 0x6, 0xc, 0xcf, 0xa, 0xc, 0xd, 0xc, 
    0xe, 0xc, 0xd0, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xd6, 0xa, 0xd, 
    0x3, 0xd, 0x5, 0xd, 0xd9, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xe1, 0xa, 0xe, 0x3, 0xe, 0x6, 0xe, 
    0xe4, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xe5, 0x3, 0xe, 0x6, 0xe, 0xe9, 
    0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xea, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x5, 0xf, 0xf1, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xf9, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 
    0xfc, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x5, 0x11, 0x103, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x109, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x10c, 0xb, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x10f, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x112, 
    0xb, 0x12, 0x3, 0x12, 0x7, 0x12, 0x115, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0x118, 0xb, 0x12, 0x3, 0x12, 0x7, 0x12, 0x11b, 0xa, 0x12, 0xc, 0x12, 
    0xe, 0x12, 0x11e, 0xb, 0x12, 0x3, 0x12, 0x7, 0x12, 0x121, 0xa, 0x12, 
    0xc, 0x12, 0xe, 0x12, 0x124, 0xb, 0x12, 0x3, 0x12, 0x5, 0x12, 0x127, 
    0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 0x12a, 0xa, 0x12, 0x3, 0x12, 0x5, 0x12, 
    0x12d, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 
    0x133, 0xa, 0x13, 0xc, 0x13, 0xe, 0x13, 0x136, 0xb, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x13d, 0xa, 0x14, 
    0xd, 0x14, 0xe, 0x14, 0x13e, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0x148, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 0x14d, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 
    0x14e, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x153, 0xa, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x6, 0x1b, 0x15a, 0xa, 0x1b, 
    0xd, 0x1b, 0xe, 0x1b, 0x15b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x6, 0x1c, 
    0x161, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x162, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x6, 0x1e, 0x16a, 0xa, 0x1e, 0xd, 0x1e, 
    0xe, 0x1e, 0x16b, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 
    0x3, 0x21, 0x3, 0x21, 0x6, 0x21, 0x175, 0xa, 0x21, 0xd, 0x21, 0xe, 0x21, 
    0x176, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x6, 0x22, 0x17c, 0xa, 0x22, 
    0xd, 0x22, 0xe, 0x22, 0x17d, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x6, 0x23, 
    0x183, 0xa, 0x23, 0xd, 0x23, 0xe, 0x23, 0x184, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x6, 0x24, 0x18a, 0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x18b, 
    0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x5, 
    0x26, 0x194, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 
    0x199, 0xa, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 
    0x19f, 0xa, 0x29, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x6, 0x2d, 0x1aa, 0xa, 0x2d, 
    0xd, 0x2d, 0xe, 0x2d, 0x1ab, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x6, 0x2e, 
    0x1b1, 0xa, 0x2e, 0xd, 0x2e, 0xe, 0x2e, 0x1b2, 0x3, 0x2f, 0x3, 0x2f, 
    0x3, 0x2f, 0x5, 0x2f, 0x1b8, 0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x6, 0x30, 0x1bd, 0xa, 0x30, 0xd, 0x30, 0xe, 0x30, 0x1be, 0x3, 0x31, 
    0x3, 0x31, 0x3, 0x31, 0x6, 0x31, 0x1c4, 0xa, 0x31, 0xd, 0x31, 0xe, 0x31, 
    0x1c5, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x6, 0x32, 0x1cb, 0xa, 0x32, 
    0xd, 0x32, 0xe, 0x32, 0x1cc, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 
    0x1d2, 0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 0x1d3, 0x3, 0x34, 0x3, 0x34, 
    0x3, 0x34, 0x6, 0x34, 0x1d9, 0xa, 0x34, 0xd, 0x34, 0xe, 0x34, 0x1da, 
    0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 0x1e0, 0xa, 0x35, 0xd, 0x35, 
    0xe, 0x35, 0x1e1, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x6, 0x36, 0x1e7, 
    0xa, 0x36, 0xd, 0x36, 0xe, 0x36, 0x1e8, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 
    0x6, 0x37, 0x1ee, 0xa, 0x37, 0xd, 0x37, 0xe, 0x37, 0x1ef, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x6, 0x38, 0x1f5, 0xa, 0x38, 0xd, 0x38, 0xe, 0x38, 
    0x1f6, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x6, 0x39, 0x1fc, 0xa, 0x39, 
    0xd, 0x39, 0xe, 0x39, 0x1fd, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 
    0x203, 0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 0x204, 0x3, 0x3b, 0x3, 0x3b, 
    0x3, 0x3b, 0x6, 0x3b, 0x20a, 0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 0x20b, 
    0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x6, 0x3c, 0x211, 0xa, 0x3c, 0xd, 0x3c, 
    0xe, 0x3c, 0x212, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x6, 0x3d, 0x218, 
    0xa, 0x3d, 0xd, 0x3d, 0xe, 0x3d, 0x219, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 
    0x6, 0x3e, 0x21f, 0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x220, 0x3, 0x3f, 
    0x3, 0x3f, 0x3, 0x3f, 0x6, 0x3f, 0x226, 0xa, 0x3f, 0xd, 0x3f, 0xe, 0x3f, 
    0x227, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x6, 0x40, 0x22d, 0xa, 0x40, 
    0xd, 0x40, 0xe, 0x40, 0x22e, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x6, 0x41, 
    0x234, 0xa, 0x41, 0xd, 0x41, 0xe, 0x41, 0x235, 0x3, 0x42, 0x3, 0x42, 
    0x3, 0x42, 0x6, 0x42, 0x23b, 0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 0x23c, 
    0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x242, 0xa, 0x43, 0xd, 0x43, 
    0xe, 0x43, 0x243, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x6, 0x44, 0x249, 
    0xa, 0x44, 0xd, 0x44, 0xe, 0x44, 0x24a, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 
    0x6, 0x45, 0x250, 0xa, 0x45, 0xd, 0x45, 0xe, 0x45, 0x251, 0x3, 0x46, 
    0x3, 0x46, 0x3, 0x46, 0x6, 0x46, 0x257, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 
    0x258, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x6, 0x47, 0x25e, 0xa, 0x47, 
    0xd, 0x47, 0xe, 0x47, 0x25f, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x6, 0x48, 
    0x265, 0xa, 0x48, 0xd, 0x48, 0xe, 0x48, 0x266, 0x3, 0x49, 0x3, 0x49, 
    0x3, 0x49, 0x6, 0x49, 0x26c, 0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 0x26d, 
    0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x6, 0x4a, 0x273, 0xa, 0x4a, 0xd, 0x4a, 
    0xe, 0x4a, 0x274, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x6, 0x4b, 0x27a, 
    0xa, 0x4b, 0xd, 0x4b, 0xe, 0x4b, 0x27b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 0x4c, 
    0x6, 0x4c, 0x281, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x282, 0x3, 0x4c, 
    0x2, 0x2, 0x4d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 
    0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 
    0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 
    0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 
    0x8e, 0x90, 0x92, 0x94, 0x96, 0x2, 0x5, 0x3, 0x2, 0x22, 0x22, 0x3, 0x2, 
    0x22, 0x23, 0x3, 0x2, 0x24, 0x24, 0x2, 0x284, 0x2, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x8, 
    0xac, 0x3, 0x2, 0x2, 0x2, 0xa, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb5, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0xb9, 0x3, 0x2, 0x2, 0x2, 0x10, 0xbe, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0xc2, 0x3, 0x2, 0x2, 0x2, 0x14, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xce, 0x3, 0x2, 0x2, 0x2, 0x18, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xee, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x20, 0xff, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x106, 0x3, 0x2, 0x2, 0x2, 0x24, 0x130, 0x3, 0x2, 0x2, 0x2, 0x26, 0x139, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0x140, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x142, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0x147, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0x152, 0x3, 0x2, 0x2, 0x2, 0x32, 0x154, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x156, 0x3, 0x2, 0x2, 0x2, 0x36, 0x15d, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x164, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x166, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x16d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x40, 0x171, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x178, 0x3, 0x2, 0x2, 0x2, 0x44, 0x17f, 0x3, 
    0x2, 0x2, 0x2, 0x46, 0x186, 0x3, 0x2, 0x2, 0x2, 0x48, 0x18d, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x193, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x198, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x50, 0x19e, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x56, 
    0x1a4, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1ad, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1b9, 0x3, 
    0x2, 0x2, 0x2, 0x60, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1c7, 0x3, 0x2, 
    0x2, 0x2, 0x64, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1d5, 0x3, 0x2, 0x2, 
    0x2, 0x68, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1e3, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x70, 
    0x1f8, 0x3, 0x2, 0x2, 0x2, 0x72, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x74, 0x206, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x78, 0x214, 0x3, 
    0x2, 0x2, 0x2, 0x7a, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x222, 0x3, 0x2, 
    0x2, 0x2, 0x7e, 0x229, 0x3, 0x2, 0x2, 0x2, 0x80, 0x230, 0x3, 0x2, 0x2, 
    0x2, 0x82, 0x237, 0x3, 0x2, 0x2, 0x2, 0x84, 0x23e, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x245, 0x3, 0x2, 0x2, 0x2, 0x88, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x8a, 
    0x253, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x261, 
    0x3, 0x2, 0x2, 0x2, 0x90, 0x268, 0x3, 0x2, 0x2, 0x2, 0x92, 0x26f, 0x3, 
    0x2, 0x2, 0x2, 0x94, 0x276, 0x3, 0x2, 0x2, 0x2, 0x96, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x98, 0x99, 0x5, 0x4, 0x3, 0x2, 0x99, 0x9b, 0x5, 0x8, 0x5, 
    0x2, 0x9a, 0x9c, 0x5, 0xc, 0x7, 0x2, 0x9b, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 
    0x9f, 0x5, 0x18, 0xd, 0x2, 0x9e, 0xa0, 0x5, 0xe, 0x8, 0x2, 0x9f, 0x9e, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x2, 0x2, 0x3, 0xa2, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0xa3, 0xa4, 0x7, 0x1b, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x6, 0x4, 
    0x2, 0xa5, 0xa6, 0x7, 0x22, 0x2, 0x2, 0xa6, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0xa7, 0xa9, 0xa, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 
    0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 
    0x3, 0x2, 0x2, 0x2, 0xab, 0x7, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x7, 
    0x1c, 0x2, 0x2, 0xad, 0xae, 0x5, 0xa, 0x6, 0x2, 0xae, 0xaf, 0x7, 0x22, 
    0x2, 0x2, 0xaf, 0x9, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb2, 0xa, 0x2, 0x2, 
    0x2, 0xb1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0x1d, 0x2, 0x2, 0xb6, 0xb7, 
    0x5, 0x10, 0x9, 0x2, 0xb7, 0xb8, 0x7, 0x22, 0x2, 0x2, 0xb8, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x1f, 0x2, 0x2, 0xba, 0xbb, 0x5, 0x10, 
    0x9, 0x2, 0xbb, 0xbc, 0x7, 0x22, 0x2, 0x2, 0xbc, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0xbd, 0xbf, 0x5, 0x12, 0xa, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0x11, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 
    0x7, 0x21, 0x2, 0x2, 0xc3, 0xc4, 0x5, 0x14, 0xb, 0x2, 0xc4, 0xc5, 0x7, 
    0x23, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x16, 0xc, 0x2, 0xc6, 0xc7, 0x7, 0x22, 
    0x2, 0x2, 0xc7, 0x13, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0xa, 0x3, 0x2, 
    0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0xa, 0x2, 0x2, 0x2, 0xce, 0xcd, 
    0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 
    0x2, 0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xd2, 0xd3, 0x7, 0x1e, 0x2, 0x2, 0xd3, 0xd5, 0x5, 0x1a, 0xe, 
    0x2, 0xd4, 0xd6, 0x5, 0x22, 0x12, 0x2, 0xd5, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xd9, 0x5, 0x24, 0x13, 0x2, 0xd8, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x7, 
    0x20, 0x2, 0x2, 0xdb, 0x19, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x26, 
    0x14, 0x2, 0xdd, 0xde, 0x5, 0x28, 0x15, 0x2, 0xde, 0xe0, 0x5, 0x2a, 
    0x16, 0x2, 0xdf, 0xe1, 0x5, 0x2c, 0x17, 0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 
    0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe3, 0x3, 0x2, 0x2, 0x2, 
    0xe2, 0xe4, 0x5, 0x1c, 0xf, 0x2, 0xe3, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 0x5, 
    0x1e, 0x10, 0x2, 0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 
    0x2, 0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x5, 0x44, 0x23, 0x2, 
    0xed, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xee, 0xf0, 0x5, 0x2e, 0x18, 0x2, 0xef, 
    0xf1, 0x5, 0x30, 0x19, 0x2, 0xf0, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x5, 
    0x32, 0x1a, 0x2, 0xf3, 0xf4, 0x5, 0x34, 0x1b, 0x2, 0xf4, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xf5, 0xf6, 0x5, 0x36, 0x1c, 0x2, 0xf6, 0xfa, 0x5, 0x38, 
    0x1d, 0x2, 0xf7, 0xf9, 0x5, 0x20, 0x11, 0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfc, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x5, 0x42, 0x22, 0x2, 0xfe, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0xff, 0x100, 0x5, 0x3a, 0x1e, 0x2, 0x100, 0x102, 
    0x5, 0x3c, 0x1f, 0x2, 0x101, 0x103, 0x5, 0x3e, 0x20, 0x2, 0x102, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x5, 0x40, 0x21, 0x2, 0x105, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x106, 0x10a, 0x5, 0x46, 0x24, 0x2, 0x107, 0x109, 
    0x5, 0x48, 0x25, 0x2, 0x108, 0x107, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x108, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x10b, 
    0x3, 0x2, 0x2, 0x2, 0x10b, 0x110, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 0x5, 0x4a, 0x26, 0x2, 0x10e, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x115, 
    0x5, 0x4c, 0x27, 0x2, 0x114, 0x113, 0x3, 0x2, 0x2, 0x2, 0x115, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 
    0x3, 0x2, 0x2, 0x2, 0x117, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 0x5, 0x4e, 0x28, 0x2, 0x11a, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11c, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x121, 
    0x5, 0x50, 0x29, 0x2, 0x120, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x121, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x123, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x126, 0x3, 0x2, 0x2, 0x2, 0x124, 0x122, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x127, 0x5, 0x52, 0x2a, 0x2, 0x126, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x129, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 0x5, 0x54, 0x2b, 0x2, 0x129, 0x128, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x12d, 0x5, 0x56, 0x2c, 0x2, 0x12c, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x5, 0x58, 0x2d, 0x2, 0x12f, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0x134, 0x5, 0x5a, 0x2e, 0x2, 0x131, 0x133, 
    0x5, 0x5c, 0x2f, 0x2, 0x132, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x136, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x132, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x137, 0x3, 0x2, 0x2, 0x2, 0x136, 0x134, 
    0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 0x5, 0x5e, 0x30, 0x2, 0x138, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x24, 0x2, 0x2, 0x13a, 0x13c, 
    0x7, 0x3, 0x2, 0x2, 0x13b, 0x13d, 0xa, 0x4, 0x2, 0x2, 0x13c, 0x13b, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13c, 
    0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x140, 0x141, 0x5, 0x60, 0x31, 0x2, 0x141, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x142, 0x143, 0x5, 0x62, 0x32, 0x2, 0x143, 0x2b, 0x3, 
    0x2, 0x2, 0x2, 0x144, 0x148, 0x5, 0x64, 0x33, 0x2, 0x145, 0x148, 0x5, 
    0x66, 0x34, 0x2, 0x146, 0x148, 0x5, 0x68, 0x35, 0x2, 0x147, 0x144, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x148, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x7, 0x24, 
    0x2, 0x2, 0x14a, 0x14c, 0x7, 0x3, 0x2, 0x2, 0x14b, 0x14d, 0xa, 0x4, 
    0x2, 0x2, 0x14c, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14e, 0x3, 0x2, 
    0x2, 0x2, 0x14e, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x150, 0x153, 0x5, 0x6a, 
    0x36, 0x2, 0x151, 0x153, 0x5, 0x6c, 0x37, 0x2, 0x152, 0x150, 0x3, 0x2, 
    0x2, 0x2, 0x152, 0x151, 0x3, 0x2, 0x2, 0x2, 0x153, 0x31, 0x3, 0x2, 0x2, 
    0x2, 0x154, 0x155, 0x5, 0x6e, 0x38, 0x2, 0x155, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x156, 0x157, 0x7, 0x24, 0x2, 0x2, 0x157, 0x159, 0x7, 0x4, 0x2, 
    0x2, 0x158, 0x15a, 0xa, 0x4, 0x2, 0x2, 0x159, 0x158, 0x3, 0x2, 0x2, 
    0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 
    0x2, 0x15b, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x35, 0x3, 0x2, 0x2, 0x2, 
    0x15d, 0x15e, 0x7, 0x24, 0x2, 0x2, 0x15e, 0x160, 0x7, 0x3, 0x2, 0x2, 
    0x15f, 0x161, 0xa, 0x4, 0x2, 0x2, 0x160, 0x15f, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x37, 0x3, 0x2, 0x2, 0x2, 0x164, 
    0x165, 0x5, 0x70, 0x39, 0x2, 0x165, 0x39, 0x3, 0x2, 0x2, 0x2, 0x166, 
    0x167, 0x7, 0x24, 0x2, 0x2, 0x167, 0x169, 0x7, 0x3, 0x2, 0x2, 0x168, 
    0x16a, 0xa, 0x4, 0x2, 0x2, 0x169, 0x168, 0x3, 0x2, 0x2, 0x2, 0x16a, 
    0x16b, 0x3, 0x2, 0x2, 0x2, 0x16b, 0x169, 0x3, 0x2, 0x2, 0x2, 0x16b, 
    0x16c, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 
    0x5, 0x72, 0x3a, 0x2, 0x16e, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 
    0x5, 0x74, 0x3b, 0x2, 0x170, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 
    0x7, 0x24, 0x2, 0x2, 0x172, 0x174, 0x7, 0x4, 0x2, 0x2, 0x173, 0x175, 
    0xa, 0x4, 0x2, 0x2, 0x174, 0x173, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 
    0x3, 0x2, 0x2, 0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 0x177, 
    0x3, 0x2, 0x2, 0x2, 0x177, 0x41, 0x3, 0x2, 0x2, 0x2, 0x178, 0x179, 0x7, 
    0x24, 0x2, 0x2, 0x179, 0x17b, 0x7, 0x4, 0x2, 0x2, 0x17a, 0x17c, 0xa, 
    0x4, 0x2, 0x2, 0x17b, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x17d, 0x3, 
    0x2, 0x2, 0x2, 0x17d, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x17e, 0x3, 
    0x2, 0x2, 0x2, 0x17e, 0x43, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x7, 0x24, 
    0x2, 0x2, 0x180, 0x182, 0x7, 0x4, 0x2, 0x2, 0x181, 0x183, 0xa, 0x4, 
    0x2, 0x2, 0x182, 0x181, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 0x2, 
    0x2, 0x2, 0x184, 0x182, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x3, 0x2, 
    0x2, 0x2, 0x185, 0x45, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x7, 0x24, 
    0x2, 0x2, 0x187, 0x189, 0x7, 0x3, 0x2, 0x2, 0x188, 0x18a, 0xa, 0x4, 
    0x2, 0x2, 0x189, 0x188, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x18b, 0x3, 0x2, 
    0x2, 0x2, 0x18b, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x18c, 0x3, 0x2, 
    0x2, 0x2, 0x18c, 0x47, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 0x5, 0x76, 
    0x3c, 0x2, 0x18e, 0x49, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x194, 0x5, 0x78, 
    0x3d, 0x2, 0x190, 0x194, 0x5, 0x7a, 0x3e, 0x2, 0x191, 0x194, 0x5, 0x7c, 
    0x3f, 0x2, 0x192, 0x194, 0x5, 0x7e, 0x40, 0x2, 0x193, 0x18f, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x190, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 
    0x2, 0x2, 0x193, 0x192, 0x3, 0x2, 0x2, 0x2, 0x194, 0x4b, 0x3, 0x2, 0x2, 
    0x2, 0x195, 0x199, 0x5, 0x80, 0x41, 0x2, 0x196, 0x199, 0x5, 0x82, 0x42, 
    0x2, 0x197, 0x199, 0x5, 0x84, 0x43, 0x2, 0x198, 0x195, 0x3, 0x2, 0x2, 
    0x2, 0x198, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x197, 0x3, 0x2, 0x2, 
    0x2, 0x199, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19b, 0x5, 0x86, 0x44, 
    0x2, 0x19b, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19f, 0x5, 0x88, 0x45, 
    0x2, 0x19d, 0x19f, 0x5, 0x8a, 0x46, 0x2, 0x19e, 0x19c, 0x3, 0x2, 0x2, 
    0x2, 0x19e, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19f, 0x51, 0x3, 0x2, 0x2, 0x2, 
    0x1a0, 0x1a1, 0x5, 0x8c, 0x47, 0x2, 0x1a1, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x1a2, 0x1a3, 0x5, 0x8e, 0x48, 0x2, 0x1a3, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x1a4, 0x1a5, 0x5, 0x90, 0x49, 0x2, 0x1a5, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x1a6, 0x1a7, 0x7, 0x24, 0x2, 0x2, 0x1a7, 0x1a9, 0x7, 0x4, 0x2, 0x2, 
    0x1a8, 0x1aa, 0xa, 0x4, 0x2, 0x2, 0x1a9, 0x1a8, 0x3, 0x2, 0x2, 0x2, 
    0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1a9, 0x3, 0x2, 0x2, 0x2, 
    0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1ad, 
    0x1ae, 0x7, 0x24, 0x2, 0x2, 0x1ae, 0x1b0, 0x7, 0x3, 0x2, 0x2, 0x1af, 
    0x1b1, 0xa, 0x4, 0x2, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 
    0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
    0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b8, 
    0x5, 0x92, 0x4a, 0x2, 0x1b5, 0x1b8, 0x5, 0x94, 0x4b, 0x2, 0x1b6, 0x1b8, 
    0x5, 0x96, 0x4c, 0x2, 0x1b7, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 
    0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x7, 0x24, 0x2, 0x2, 0x1ba, 0x1bc, 0x7, 
    0x4, 0x2, 0x2, 0x1bb, 0x1bd, 0xa, 0x4, 0x2, 0x2, 0x1bc, 0x1bb, 0x3, 
    0x2, 0x2, 0x2, 0x1bd, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1be, 0x1bc, 0x3, 
    0x2, 0x2, 0x2, 0x1be, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x1bf, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x1c0, 0x1c1, 0x7, 0x24, 0x2, 0x2, 0x1c1, 0x1c3, 0x7, 0x5, 
    0x2, 0x2, 0x1c2, 0x1c4, 0xa, 0x4, 0x2, 0x2, 0x1c3, 0x1c2, 0x3, 0x2, 
    0x2, 0x2, 0x1c4, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c3, 0x3, 0x2, 
    0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x1c7, 0x1c8, 0x7, 0x24, 0x2, 0x2, 0x1c8, 0x1ca, 0x7, 0x6, 0x2, 
    0x2, 0x1c9, 0x1cb, 0xa, 0x4, 0x2, 0x2, 0x1ca, 0x1c9, 0x3, 0x2, 0x2, 
    0x2, 0x1cb, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1ca, 0x3, 0x2, 0x2, 
    0x2, 0x1cc, 0x1cd, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x1ce, 0x1cf, 0x7, 0x24, 0x2, 0x2, 0x1cf, 0x1d1, 0x7, 0x7, 0x2, 0x2, 
    0x1d0, 0x1d2, 0xa, 0x4, 0x2, 0x2, 0x1d1, 0x1d0, 0x3, 0x2, 0x2, 0x2, 
    0x1d2, 0x1d3, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d1, 0x3, 0x2, 0x2, 0x2, 
    0x1d3, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1d5, 
    0x1d6, 0x7, 0x24, 0x2, 0x2, 0x1d6, 0x1d8, 0x7, 0x8, 0x2, 0x2, 0x1d7, 
    0x1d9, 0xa, 0x4, 0x2, 0x2, 0x1d8, 0x1d7, 0x3, 0x2, 0x2, 0x2, 0x1d9, 
    0x1da, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x1da, 
    0x1db, 0x3, 0x2, 0x2, 0x2, 0x1db, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 
    0x7, 0x24, 0x2, 0x2, 0x1dd, 0x1df, 0x7, 0x9, 0x2, 0x2, 0x1de, 0x1e0, 
    0xa, 0x4, 0x2, 0x2, 0x1df, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x1e1, 
    0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 
    0x3, 0x2, 0x2, 0x2, 0x1e2, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x7, 
    0x24, 0x2, 0x2, 0x1e4, 0x1e6, 0x7, 0xa, 0x2, 0x2, 0x1e5, 0x1e7, 0xa, 
    0x4, 0x2, 0x2, 0x1e6, 0x1e5, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e8, 0x3, 
    0x2, 0x2, 0x2, 0x1e8, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x3, 
    0x2, 0x2, 0x2, 0x1e9, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1eb, 0x7, 0x24, 
    0x2, 0x2, 0x1eb, 0x1ed, 0x7, 0xb, 0x2, 0x2, 0x1ec, 0x1ee, 0xa, 0x4, 
    0x2, 0x2, 0x1ed, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x1ef, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x3, 0x2, 
    0x2, 0x2, 0x1f0, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0x24, 
    0x2, 0x2, 0x1f2, 0x1f4, 0x7, 0x5, 0x2, 0x2, 0x1f3, 0x1f5, 0xa, 0x4, 
    0x2, 0x2, 0x1f4, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x1f4, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x3, 0x2, 
    0x2, 0x2, 0x1f7, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x1f8, 0x1f9, 0x7, 0x24, 
    0x2, 0x2, 0x1f9, 0x1fb, 0x7, 0xc, 0x2, 0x2, 0x1fa, 0x1fc, 0xa, 0x4, 
    0x2, 0x2, 0x1fb, 0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fc, 0x1fd, 0x3, 0x2, 
    0x2, 0x2, 0x1fd, 0x1fb, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x3, 0x2, 
    0x2, 0x2, 0x1fe, 0x71, 0x3, 0x2, 0x2, 0x2, 0x1ff, 0x200, 0x7, 0x24, 
    0x2, 0x2, 0x200, 0x202, 0x7, 0xd, 0x2, 0x2, 0x201, 0x203, 0xa, 0x4, 
    0x2, 0x2, 0x202, 0x201, 0x3, 0x2, 0x2, 0x2, 0x203, 0x204, 0x3, 0x2, 
    0x2, 0x2, 0x204, 0x202, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x3, 0x2, 
    0x2, 0x2, 0x205, 0x73, 0x3, 0x2, 0x2, 0x2, 0x206, 0x207, 0x7, 0x24, 
    0x2, 0x2, 0x207, 0x209, 0x7, 0xe, 0x2, 0x2, 0x208, 0x20a, 0xa, 0x4, 
    0x2, 0x2, 0x209, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 
    0x2, 0x2, 0x20b, 0x209, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x3, 0x2, 
    0x2, 0x2, 0x20c, 0x75, 0x3, 0x2, 0x2, 0x2, 0x20d, 0x20e, 0x7, 0x24, 
    0x2, 0x2, 0x20e, 0x210, 0x7, 0xf, 0x2, 0x2, 0x20f, 0x211, 0xa, 0x4, 
    0x2, 0x2, 0x210, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 
    0x2, 0x2, 0x212, 0x210, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x3, 0x2, 
    0x2, 0x2, 0x213, 0x77, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x7, 0x24, 
    0x2, 0x2, 0x215, 0x217, 0x7, 0x10, 0x2, 0x2, 0x216, 0x218, 0xa, 0x4, 
    0x2, 0x2, 0x217, 0x216, 0x3, 0x2, 0x2, 0x2, 0x218, 0x219, 0x3, 0x2, 
    0x2, 0x2, 0x219, 0x217, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x3, 0x2, 
    0x2, 0x2, 0x21a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x21b, 0x21c, 0x7, 0x24, 
    0x2, 0x2, 0x21c, 0x21e, 0x7, 0x11, 0x2, 0x2, 0x21d, 0x21f, 0xa, 0x4, 
    0x2, 0x2, 0x21e, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21f, 0x220, 0x3, 0x2, 
    0x2, 0x2, 0x220, 0x21e, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x3, 0x2, 
    0x2, 0x2, 0x221, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x222, 0x223, 0x7, 0x24, 
    0x2, 0x2, 0x223, 0x225, 0x7, 0x12, 0x2, 0x2, 0x224, 0x226, 0xa, 0x4, 
    0x2, 0x2, 0x225, 0x224, 0x3, 0x2, 0x2, 0x2, 0x226, 0x227, 0x3, 0x2, 
    0x2, 0x2, 0x227, 0x225, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x3, 0x2, 
    0x2, 0x2, 0x228, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22a, 0x7, 0x24, 
    0x2, 0x2, 0x22a, 0x22c, 0x7, 0x13, 0x2, 0x2, 0x22b, 0x22d, 0xa, 0x4, 
    0x2, 0x2, 0x22c, 0x22b, 0x3, 0x2, 0x2, 0x2, 0x22d, 0x22e, 0x3, 0x2, 
    0x2, 0x2, 0x22e, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x3, 0x2, 
    0x2, 0x2, 0x22f, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 0x7, 0x24, 
    0x2, 0x2, 0x231, 0x233, 0x7, 0x14, 0x2, 0x2, 0x232, 0x234, 0xa, 0x4, 
    0x2, 0x2, 0x233, 0x232, 0x3, 0x2, 0x2, 0x2, 0x234, 0x235, 0x3, 0x2, 
    0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 
    0x2, 0x2, 0x236, 0x81, 0x3, 0x2, 0x2, 0x2, 0x237, 0x238, 0x7, 0x24, 
    0x2, 0x2, 0x238, 0x23a, 0x7, 0x15, 0x2, 0x2, 0x239, 0x23b, 0xa, 0x4, 
    0x2, 0x2, 0x23a, 0x239, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 
    0x2, 0x2, 0x23c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x83, 0x3, 0x2, 0x2, 0x2, 0x23e, 0x23f, 0x7, 0x24, 
    0x2, 0x2, 0x23f, 0x241, 0x7, 0x16, 0x2, 0x2, 0x240, 0x242, 0xa, 0x4, 
    0x2, 0x2, 0x241, 0x240, 0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 
    0x2, 0x2, 0x243, 0x241, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x3, 0x2, 
    0x2, 0x2, 0x244, 0x85, 0x3, 0x2, 0x2, 0x2, 0x245, 0x246, 0x7, 0x24, 
    0x2, 0x2, 0x246, 0x248, 0x7, 0xb, 0x2, 0x2, 0x247, 0x249, 0xa, 0x4, 
    0x2, 0x2, 0x248, 0x247, 0x3, 0x2, 0x2, 0x2, 0x249, 0x24a, 0x3, 0x2, 
    0x2, 0x2, 0x24a, 0x248, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x3, 0x2, 
    0x2, 0x2, 0x24b, 0x87, 0x3, 0x2, 0x2, 0x2, 0x24c, 0x24d, 0x7, 0x24, 
    0x2, 0x2, 0x24d, 0x24f, 0x7, 0x7, 0x2, 0x2, 0x24e, 0x250, 0xa, 0x4, 
    0x2, 0x2, 0x24f, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x250, 0x251, 0x3, 0x2, 
    0x2, 0x2, 0x251, 0x24f, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x3, 0x2, 
    0x2, 0x2, 0x252, 0x89, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x7, 0x24, 
    0x2, 0x2, 0x254, 0x256, 0x7, 0x8, 0x2, 0x2, 0x255, 0x257, 0xa, 0x4, 
    0x2, 0x2, 0x256, 0x255, 0x3, 0x2, 0x2, 0x2, 0x257, 0x258, 0x3, 0x2, 
    0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x3, 0x2, 
    0x2, 0x2, 0x259, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x7, 0x24, 
    0x2, 0x2, 0x25b, 0x25d, 0x7, 0x17, 0x2, 0x2, 0x25c, 0x25e, 0xa, 0x4, 
    0x2, 0x2, 0x25d, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x25e, 0x25f, 0x3, 0x2, 
    0x2, 0x2, 0x25f, 0x25d, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x3, 0x2, 
    0x2, 0x2, 0x260, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x7, 0x24, 
    0x2, 0x2, 0x262, 0x264, 0x7, 0x18, 0x2, 0x2, 0x263, 0x265, 0xa, 0x4, 
    0x2, 0x2, 0x264, 0x263, 0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x3, 0x2, 
    0x2, 0x2, 0x266, 0x264, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x3, 0x2, 
    0x2, 0x2, 0x267, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x7, 0x24, 
    0x2, 0x2, 0x269, 0x26b, 0x7, 0x19, 0x2, 0x2, 0x26a, 0x26c, 0xa, 0x4, 
    0x2, 0x2, 0x26b, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x26c, 0x26d, 0x3, 0x2, 
    0x2, 0x2, 0x26d, 0x26b, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x3, 0x2, 
    0x2, 0x2, 0x26e, 0x91, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x7, 0x24, 
    0x2, 0x2, 0x270, 0x272, 0x7, 0x10, 0x2, 0x2, 0x271, 0x273, 0xa, 0x4, 
    0x2, 0x2, 0x272, 0x271, 0x3, 0x2, 0x2, 0x2, 0x273, 0x274, 0x3, 0x2, 
    0x2, 0x2, 0x274, 0x272, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x3, 0x2, 
    0x2, 0x2, 0x275, 0x93, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x7, 0x24, 
    0x2, 0x2, 0x277, 0x279, 0x7, 0x1a, 0x2, 0x2, 0x278, 0x27a, 0xa, 0x4, 
    0x2, 0x2, 0x279, 0x278, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x27b, 0x3, 0x2, 
    0x2, 0x2, 0x27b, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x3, 0x2, 
    0x2, 0x2, 0x27c, 0x95, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x7, 0x24, 
    0x2, 0x2, 0x27e, 0x280, 0x7, 0x11, 0x2, 0x2, 0x27f, 0x281, 0xa, 0x4, 
    0x2, 0x2, 0x280, 0x27f, 0x3, 0x2, 0x2, 0x2, 0x281, 0x282, 0x3, 0x2, 
    0x2, 0x2, 0x282, 0x280, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x3, 0x2, 
    0x2, 0x2, 0x283, 0x97, 0x3, 0x2, 0x2, 0x2, 0x48, 0x9b, 0x9f, 0xaa, 0xb3, 
    0xc0, 0xcb, 0xd0, 0xd5, 0xd8, 0xe0, 0xe5, 0xea, 0xf0, 0xfa, 0x102, 0x10a, 
    0x110, 0x116, 0x11c, 0x122, 0x126, 0x129, 0x12c, 0x134, 0x13e, 0x147, 
    0x14e, 0x152, 0x15b, 0x162, 0x16b, 0x176, 0x17d, 0x184, 0x18b, 0x193, 
    0x198, 0x19e, 0x1ab, 0x1b2, 0x1b7, 0x1be, 0x1c5, 0x1cc, 0x1d3, 0x1da, 
    0x1e1, 0x1e8, 0x1ef, 0x1f6, 0x1fd, 0x204, 0x20b, 0x212, 0x219, 0x220, 
    0x227, 0x22e, 0x235, 0x23c, 0x243, 0x24a, 0x251, 0x258, 0x25f, 0x266, 
    0x26d, 0x274, 0x27b, 0x282, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT510Parser::Initializer SwiftMtParser_MT510Parser::_init;
