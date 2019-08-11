
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT505Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT505.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT505Listener.h"

#include "SwiftMtParser_MT505Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
using namespace antlr4;

SwiftMtParser_MT505Parser::SwiftMtParser_MT505Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT505Parser::~SwiftMtParser_MT505Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT505Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT505.g4";
}

const std::vector<std::string>& SwiftMtParser_MT505Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT505Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::BhContext* SwiftMtParser_MT505Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT505Parser::BhContext>(0);
}

SwiftMtParser_MT505Parser::AhContext* SwiftMtParser_MT505Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT505Parser::AhContext>(0);
}

SwiftMtParser_MT505Parser::MtContext* SwiftMtParser_MT505Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT505Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT505Parser::EOF, 0);
}

SwiftMtParser_MT505Parser::UhContext* SwiftMtParser_MT505Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT505Parser::UhContext>(0);
}

SwiftMtParser_MT505Parser::TrContext* SwiftMtParser_MT505Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT505Parser::TrContext>(0);
}


size_t SwiftMtParser_MT505Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleMessage;
}

void SwiftMtParser_MT505Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT505Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT505Parser::MessageContext* SwiftMtParser_MT505Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT505Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    bh();
    setState(147);
    ah();
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT505Parser::TAG_UH) {
      setState(148);
      uh();
    }
    setState(151);
    mt();
    setState(153);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT505Parser::TAG_TR) {
      setState(152);
      tr();
    }
    setState(155);
    match(SwiftMtParser_MT505Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT505Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT505Parser::TAG_BH, 0);
}

SwiftMtParser_MT505Parser::Bh_contentContext* SwiftMtParser_MT505Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT505Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT505Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleBh;
}

void SwiftMtParser_MT505Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT505Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT505Parser::BhContext* SwiftMtParser_MT505Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT505Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(157);
    match(SwiftMtParser_MT505Parser::TAG_BH);
    setState(158);
    bh_content();
    setState(159);
    match(SwiftMtParser_MT505Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT505Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, i);
}


size_t SwiftMtParser_MT505Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleBh_content;
}

void SwiftMtParser_MT505Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT505Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT505Parser::Bh_contentContext* SwiftMtParser_MT505Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT505Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(161);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(164); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT505Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT505Parser::TAG_AH, 0);
}

SwiftMtParser_MT505Parser::Ah_contentContext* SwiftMtParser_MT505Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT505Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT505Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleAh;
}

void SwiftMtParser_MT505Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT505Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT505Parser::AhContext* SwiftMtParser_MT505Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT505Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(SwiftMtParser_MT505Parser::TAG_AH);
    setState(167);
    ah_content();
    setState(168);
    match(SwiftMtParser_MT505Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT505Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, i);
}


size_t SwiftMtParser_MT505Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleAh_content;
}

void SwiftMtParser_MT505Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT505Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT505Parser::Ah_contentContext* SwiftMtParser_MT505Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT505Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(170);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(173); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT505Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT505Parser::TAG_UH, 0);
}

SwiftMtParser_MT505Parser::Sys_blockContext* SwiftMtParser_MT505Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT505Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT505Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleUh;
}

void SwiftMtParser_MT505Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT505Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT505Parser::UhContext* SwiftMtParser_MT505Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT505Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(SwiftMtParser_MT505Parser::TAG_UH);
    setState(176);
    sys_block();
    setState(177);
    match(SwiftMtParser_MT505Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT505Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT505Parser::TAG_TR, 0);
}

SwiftMtParser_MT505Parser::Sys_blockContext* SwiftMtParser_MT505Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT505Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT505Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleTr;
}

void SwiftMtParser_MT505Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT505Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT505Parser::TrContext* SwiftMtParser_MT505Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT505Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(SwiftMtParser_MT505Parser::TAG_TR);
    setState(180);
    sys_block();
    setState(181);
    match(SwiftMtParser_MT505Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT505Parser::Sys_elementContext *> SwiftMtParser_MT505Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Sys_elementContext>();
}

SwiftMtParser_MT505Parser::Sys_elementContext* SwiftMtParser_MT505Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT505Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSys_block;
}

void SwiftMtParser_MT505Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT505Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT505Parser::Sys_blockContext* SwiftMtParser_MT505Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT505Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(183);
      sys_element();
      setState(186); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT505Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT505Parser::LBRACE, 0);
}

SwiftMtParser_MT505Parser::Sys_element_keyContext* SwiftMtParser_MT505Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT505Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT505Parser::COLON, 0);
}

SwiftMtParser_MT505Parser::Sys_element_contentContext* SwiftMtParser_MT505Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT505Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT505Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSys_element;
}

void SwiftMtParser_MT505Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT505Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT505Parser::Sys_elementContext* SwiftMtParser_MT505Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT505Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
    match(SwiftMtParser_MT505Parser::LBRACE);
    setState(189);
    sys_element_key();
    setState(190);
    match(SwiftMtParser_MT505Parser::COLON);
    setState(191);
    sys_element_content();
    setState(192);
    match(SwiftMtParser_MT505Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT505Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT505Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, i);
}


size_t SwiftMtParser_MT505Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSys_element_key;
}

void SwiftMtParser_MT505Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT505Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT505Parser::Sys_element_keyContext* SwiftMtParser_MT505Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT505Parser::RuleSys_element_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(194);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::RBRACE

      || _la == SwiftMtParser_MT505Parser::COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(197); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT505Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::RBRACE, i);
}


size_t SwiftMtParser_MT505Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSys_element_content;
}

void SwiftMtParser_MT505Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT505Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT505Parser::Sys_element_contentContext* SwiftMtParser_MT505Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT505Parser::RuleSys_element_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(200); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(199);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(202); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT505Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT505Parser::TAG_MT, 0);
}

SwiftMtParser_MT505Parser::Seq_AContext* SwiftMtParser_MT505Parser::MtContext::seq_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Seq_AContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT505Parser::MT_END, 0);
}

std::vector<SwiftMtParser_MT505Parser::Seq_BContext *> SwiftMtParser_MT505Parser::MtContext::seq_B() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Seq_BContext>();
}

SwiftMtParser_MT505Parser::Seq_BContext* SwiftMtParser_MT505Parser::MtContext::seq_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Seq_BContext>(i);
}


size_t SwiftMtParser_MT505Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleMt;
}

void SwiftMtParser_MT505Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT505Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT505Parser::MtContext* SwiftMtParser_MT505Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT505Parser::RuleMt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(204);
    match(SwiftMtParser_MT505Parser::TAG_MT);
    setState(205);
    seq_A();
    setState(207); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(206);
      seq_B();
      setState(209); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(211);
    match(SwiftMtParser_MT505Parser::MT_END);
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

SwiftMtParser_MT505Parser::Seq_AContext::Seq_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_16R_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_16R_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16R_AContext>(0);
}

SwiftMtParser_MT505Parser::Fld_23G_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_23G_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_23G_AContext>(0);
}

SwiftMtParser_MT505Parser::Fld_22a_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_22a_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_AContext>(0);
}

SwiftMtParser_MT505Parser::Fld_16S_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_16S_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16S_AContext>(0);
}

std::vector<SwiftMtParser_MT505Parser::Fld_20C_AContext *> SwiftMtParser_MT505Parser::Seq_AContext::fld_20C_A() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Fld_20C_AContext>();
}

SwiftMtParser_MT505Parser::Fld_20C_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_20C_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_20C_AContext>(i);
}

std::vector<SwiftMtParser_MT505Parser::Seq_A1Context *> SwiftMtParser_MT505Parser::Seq_AContext::seq_A1() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Seq_A1Context>();
}

SwiftMtParser_MT505Parser::Seq_A1Context* SwiftMtParser_MT505Parser::Seq_AContext::seq_A1(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Seq_A1Context>(i);
}

SwiftMtParser_MT505Parser::Fld_98a_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_98a_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98a_AContext>(0);
}

std::vector<SwiftMtParser_MT505Parser::Fld_95a_AContext *> SwiftMtParser_MT505Parser::Seq_AContext::fld_95a_A() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Fld_95a_AContext>();
}

SwiftMtParser_MT505Parser::Fld_95a_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_95a_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_95a_AContext>(i);
}

SwiftMtParser_MT505Parser::Fld_70C_AContext* SwiftMtParser_MT505Parser::Seq_AContext::fld_70C_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_70C_AContext>(0);
}

std::vector<SwiftMtParser_MT505Parser::Seq_A2Context *> SwiftMtParser_MT505Parser::Seq_AContext::seq_A2() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Seq_A2Context>();
}

SwiftMtParser_MT505Parser::Seq_A2Context* SwiftMtParser_MT505Parser::Seq_AContext::seq_A2(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Seq_A2Context>(i);
}


size_t SwiftMtParser_MT505Parser::Seq_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSeq_A;
}

void SwiftMtParser_MT505Parser::Seq_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A(this);
}

void SwiftMtParser_MT505Parser::Seq_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A(this);
}

SwiftMtParser_MT505Parser::Seq_AContext* SwiftMtParser_MT505Parser::seq_A() {
  Seq_AContext *_localctx = _tracker.createInstance<Seq_AContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtParser_MT505Parser::RuleSeq_A);
   _localctx->elem.set_tag("A"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(213);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext = fld_16R_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext->fld); 
    setState(216); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(215);
              dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext = fld_20C_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(218); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext->fld); 
    setState(221);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext = fld_23G_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext->fld); 
    setState(224); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(223);
              dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context = seq_A1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(226); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context->elem); 
    setState(230);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(229);
      dynamic_cast<Seq_AContext *>(_localctx)->fld_98a_AContext = fld_98a_A();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_98a_AContext->fld); 
    setState(233);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_22a_AContext = fld_22a_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_22a_AContext->fld); 
    setState(236); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(235);
              dynamic_cast<Seq_AContext *>(_localctx)->fld_95a_AContext = fld_95a_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(238); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_95a_AContext->fld); 
    setState(242);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(241);
      dynamic_cast<Seq_AContext *>(_localctx)->fld_70C_AContext = fld_70C_A();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_70C_AContext->fld); 
    setState(248);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(245);
        dynamic_cast<Seq_AContext *>(_localctx)->seq_A2Context = seq_A2(); 
      }
      setState(250);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->seq_A2Context->elem); 
    setState(252);
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

SwiftMtParser_MT505Parser::Seq_A1Context::Seq_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_16R_A1Context* SwiftMtParser_MT505Parser::Seq_A1Context::fld_16R_A1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16R_A1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_16S_A1Context* SwiftMtParser_MT505Parser::Seq_A1Context::fld_16S_A1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16S_A1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_22F_A1Context* SwiftMtParser_MT505Parser::Seq_A1Context::fld_22F_A1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22F_A1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_98A_A1Context* SwiftMtParser_MT505Parser::Seq_A1Context::fld_98A_A1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98A_A1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_13B_A1Context* SwiftMtParser_MT505Parser::Seq_A1Context::fld_13B_A1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_13B_A1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_70C_A1Context* SwiftMtParser_MT505Parser::Seq_A1Context::fld_70C_A1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_70C_A1Context>(0);
}


size_t SwiftMtParser_MT505Parser::Seq_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSeq_A1;
}

void SwiftMtParser_MT505Parser::Seq_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A1(this);
}

void SwiftMtParser_MT505Parser::Seq_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A1(this);
}

SwiftMtParser_MT505Parser::Seq_A1Context* SwiftMtParser_MT505Parser::seq_A1() {
  Seq_A1Context *_localctx = _tracker.createInstance<Seq_A1Context>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtParser_MT505Parser::RuleSeq_A1);
   _localctx->elem.set_tag("A1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(255);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context = fld_16R_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context->fld); 
    setState(258);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(257);
      dynamic_cast<Seq_A1Context *>(_localctx)->fld_22F_A1Context = fld_22F_A1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_22F_A1Context->fld); 
    setState(262);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(261);
      dynamic_cast<Seq_A1Context *>(_localctx)->fld_98A_A1Context = fld_98A_A1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_98A_A1Context->fld); 
    setState(266);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(265);
      dynamic_cast<Seq_A1Context *>(_localctx)->fld_13B_A1Context = fld_13B_A1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_13B_A1Context->fld); 
    setState(270);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(269);
      dynamic_cast<Seq_A1Context *>(_localctx)->fld_70C_A1Context = fld_70C_A1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_70C_A1Context->fld); 
    setState(273);
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

SwiftMtParser_MT505Parser::Seq_A2Context::Seq_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_16R_A2Context* SwiftMtParser_MT505Parser::Seq_A2Context::fld_16R_A2() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16R_A2Context>(0);
}

SwiftMtParser_MT505Parser::Fld_20C_A2Context* SwiftMtParser_MT505Parser::Seq_A2Context::fld_20C_A2() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_20C_A2Context>(0);
}

SwiftMtParser_MT505Parser::Fld_16S_A2Context* SwiftMtParser_MT505Parser::Seq_A2Context::fld_16S_A2() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16S_A2Context>(0);
}

SwiftMtParser_MT505Parser::Fld_13a_A2Context* SwiftMtParser_MT505Parser::Seq_A2Context::fld_13a_A2() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_13a_A2Context>(0);
}


size_t SwiftMtParser_MT505Parser::Seq_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSeq_A2;
}

void SwiftMtParser_MT505Parser::Seq_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A2(this);
}

void SwiftMtParser_MT505Parser::Seq_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A2(this);
}

SwiftMtParser_MT505Parser::Seq_A2Context* SwiftMtParser_MT505Parser::seq_A2() {
  Seq_A2Context *_localctx = _tracker.createInstance<Seq_A2Context>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtParser_MT505Parser::RuleSeq_A2);
   _localctx->elem.set_tag("A2"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(276);
    dynamic_cast<Seq_A2Context *>(_localctx)->fld_16R_A2Context = fld_16R_A2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A2Context *>(_localctx)->fld_16R_A2Context->fld); 
    setState(279);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(278);
      dynamic_cast<Seq_A2Context *>(_localctx)->fld_13a_A2Context = fld_13a_A2();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A2Context *>(_localctx)->fld_13a_A2Context->fld); 
    setState(282);
    dynamic_cast<Seq_A2Context *>(_localctx)->fld_20C_A2Context = fld_20C_A2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A2Context *>(_localctx)->fld_20C_A2Context->fld); 
    setState(284);
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

SwiftMtParser_MT505Parser::Seq_BContext::Seq_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_16R_BContext* SwiftMtParser_MT505Parser::Seq_BContext::fld_16R_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16R_BContext>(0);
}

SwiftMtParser_MT505Parser::Fld_20C_BContext* SwiftMtParser_MT505Parser::Seq_BContext::fld_20C_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_20C_BContext>(0);
}

std::vector<SwiftMtParser_MT505Parser::Fld_22a_BContext *> SwiftMtParser_MT505Parser::Seq_BContext::fld_22a_B() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Fld_22a_BContext>();
}

SwiftMtParser_MT505Parser::Fld_22a_BContext* SwiftMtParser_MT505Parser::Seq_BContext::fld_22a_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_BContext>(i);
}

SwiftMtParser_MT505Parser::Fld_98A_BContext* SwiftMtParser_MT505Parser::Seq_BContext::fld_98A_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98A_BContext>(0);
}

SwiftMtParser_MT505Parser::Seq_B1Context* SwiftMtParser_MT505Parser::Seq_BContext::seq_B1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Seq_B1Context>(0);
}


size_t SwiftMtParser_MT505Parser::Seq_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSeq_B;
}

void SwiftMtParser_MT505Parser::Seq_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B(this);
}

void SwiftMtParser_MT505Parser::Seq_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B(this);
}

SwiftMtParser_MT505Parser::Seq_BContext* SwiftMtParser_MT505Parser::seq_B() {
  Seq_BContext *_localctx = _tracker.createInstance<Seq_BContext>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtParser_MT505Parser::RuleSeq_B);
   _localctx->elem.set_tag("B"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(287);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext = fld_16R_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext->fld); 
    setState(289);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_20C_BContext = fld_20C_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_20C_BContext->fld); 
    setState(292); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(291);
              dynamic_cast<Seq_BContext *>(_localctx)->fld_22a_BContext = fld_22a_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(294); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_22a_BContext->fld); 
    setState(298);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(297);
      dynamic_cast<Seq_BContext *>(_localctx)->fld_98A_BContext = fld_98A_B();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_98A_BContext->fld); 
    setState(302);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      setState(301);
      dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context = seq_B1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context->elem); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_B1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Seq_B1Context::Seq_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_16R_B1Context* SwiftMtParser_MT505Parser::Seq_B1Context::fld_16R_B1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16R_B1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_35B_B1Context* SwiftMtParser_MT505Parser::Seq_B1Context::fld_35B_B1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_35B_B1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_36B_B1Context* SwiftMtParser_MT505Parser::Seq_B1Context::fld_36B_B1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_36B_B1Context>(0);
}

SwiftMtParser_MT505Parser::Fld_17B_B1Context* SwiftMtParser_MT505Parser::Seq_B1Context::fld_17B_B1() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_17B_B1Context>(0);
}

SwiftMtParser_MT505Parser::Seq_B1aContext* SwiftMtParser_MT505Parser::Seq_B1Context::seq_B1a() {
  return getRuleContext<SwiftMtParser_MT505Parser::Seq_B1aContext>(0);
}


size_t SwiftMtParser_MT505Parser::Seq_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSeq_B1;
}

void SwiftMtParser_MT505Parser::Seq_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B1(this);
}

void SwiftMtParser_MT505Parser::Seq_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B1(this);
}

SwiftMtParser_MT505Parser::Seq_B1Context* SwiftMtParser_MT505Parser::seq_B1() {
  Seq_B1Context *_localctx = _tracker.createInstance<Seq_B1Context>(_ctx, getState());
  enterRule(_localctx, 32, SwiftMtParser_MT505Parser::RuleSeq_B1);
   _localctx->elem.set_tag("B1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(306);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context = fld_16R_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context->fld); 
    setState(308);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_35B_B1Context = fld_35B_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_35B_B1Context->fld); 
    setState(310);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_36B_B1Context = fld_36B_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_36B_B1Context->fld); 
    setState(313);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      setState(312);
      dynamic_cast<Seq_B1Context *>(_localctx)->fld_17B_B1Context = fld_17B_B1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_17B_B1Context->fld); 
    setState(317);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(316);
      dynamic_cast<Seq_B1Context *>(_localctx)->seq_B1aContext = seq_B1a();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->seq_B1aContext->elem); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_B1aContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Seq_B1aContext::Seq_B1aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_16R_B1aContext* SwiftMtParser_MT505Parser::Seq_B1aContext::fld_16R_B1a() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_16R_B1aContext>(0);
}

std::vector<SwiftMtParser_MT505Parser::Fld_22a_B1aContext *> SwiftMtParser_MT505Parser::Seq_B1aContext::fld_22a_B1a() {
  return getRuleContexts<SwiftMtParser_MT505Parser::Fld_22a_B1aContext>();
}

SwiftMtParser_MT505Parser::Fld_22a_B1aContext* SwiftMtParser_MT505Parser::Seq_B1aContext::fld_22a_B1a(size_t i) {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_B1aContext>(i);
}


size_t SwiftMtParser_MT505Parser::Seq_B1aContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleSeq_B1a;
}

void SwiftMtParser_MT505Parser::Seq_B1aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B1a(this);
}

void SwiftMtParser_MT505Parser::Seq_B1aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B1a(this);
}

SwiftMtParser_MT505Parser::Seq_B1aContext* SwiftMtParser_MT505Parser::seq_B1a() {
  Seq_B1aContext *_localctx = _tracker.createInstance<Seq_B1aContext>(_ctx, getState());
  enterRule(_localctx, 34, SwiftMtParser_MT505Parser::RuleSeq_B1a);
   _localctx->elem.set_tag("B1a"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(321);
    dynamic_cast<Seq_B1aContext *>(_localctx)->fld_16R_B1aContext = fld_16R_B1a();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1aContext *>(_localctx)->fld_16R_B1aContext->fld); 
    setState(324); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(323);
              dynamic_cast<Seq_B1aContext *>(_localctx)->fld_22a_B1aContext = fld_22a_B1a();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(326); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1aContext *>(_localctx)->fld_22a_B1aContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16R_AContext::Fld_16R_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16R_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16R_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16R_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16R_A;
}

void SwiftMtParser_MT505Parser::Fld_16R_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A(this);
}

void SwiftMtParser_MT505Parser::Fld_16R_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A(this);
}

SwiftMtParser_MT505Parser::Fld_16R_AContext* SwiftMtParser_MT505Parser::fld_16R_A() {
  Fld_16R_AContext *_localctx = _tracker.createInstance<Fld_16R_AContext>(_ctx, getState());
  enterRule(_localctx, 36, SwiftMtParser_MT505Parser::RuleFld_16R_A);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(330);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(331);
    match(SwiftMtParser_MT505Parser::T__0);
    setState(333); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(332);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(335); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_20C_AContext::Fld_20C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_20C_A_CContext* SwiftMtParser_MT505Parser::Fld_20C_AContext::fld_20C_A_C() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_20C_A_CContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_20C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_20C_A;
}

void SwiftMtParser_MT505Parser::Fld_20C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A(this);
}

void SwiftMtParser_MT505Parser::Fld_20C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A(this);
}

SwiftMtParser_MT505Parser::Fld_20C_AContext* SwiftMtParser_MT505Parser::fld_20C_A() {
  Fld_20C_AContext *_localctx = _tracker.createInstance<Fld_20C_AContext>(_ctx, getState());
  enterRule(_localctx, 38, SwiftMtParser_MT505Parser::RuleFld_20C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(337);
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

SwiftMtParser_MT505Parser::Fld_23G_AContext::Fld_23G_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_23G_A_GContext* SwiftMtParser_MT505Parser::Fld_23G_AContext::fld_23G_A_G() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_23G_A_GContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_23G_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_23G_A;
}

void SwiftMtParser_MT505Parser::Fld_23G_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A(this);
}

void SwiftMtParser_MT505Parser::Fld_23G_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A(this);
}

SwiftMtParser_MT505Parser::Fld_23G_AContext* SwiftMtParser_MT505Parser::fld_23G_A() {
  Fld_23G_AContext *_localctx = _tracker.createInstance<Fld_23G_AContext>(_ctx, getState());
  enterRule(_localctx, 40, SwiftMtParser_MT505Parser::RuleFld_23G_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(340);
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

//----------------- Fld_16R_A1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16R_A1Context::Fld_16R_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16R_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16R_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16R_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16R_A1;
}

void SwiftMtParser_MT505Parser::Fld_16R_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A1(this);
}

void SwiftMtParser_MT505Parser::Fld_16R_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A1(this);
}

SwiftMtParser_MT505Parser::Fld_16R_A1Context* SwiftMtParser_MT505Parser::fld_16R_A1() {
  Fld_16R_A1Context *_localctx = _tracker.createInstance<Fld_16R_A1Context>(_ctx, getState());
  enterRule(_localctx, 42, SwiftMtParser_MT505Parser::RuleFld_16R_A1);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(344);
    match(SwiftMtParser_MT505Parser::T__0);
    setState(346); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(345);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(348); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_A1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22F_A1Context::Fld_22F_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_22F_A1_FContext* SwiftMtParser_MT505Parser::Fld_22F_A1Context::fld_22F_A1_F() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22F_A1_FContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_22F_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22F_A1;
}

void SwiftMtParser_MT505Parser::Fld_22F_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_A1(this);
}

void SwiftMtParser_MT505Parser::Fld_22F_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_A1(this);
}

SwiftMtParser_MT505Parser::Fld_22F_A1Context* SwiftMtParser_MT505Parser::fld_22F_A1() {
  Fld_22F_A1Context *_localctx = _tracker.createInstance<Fld_22F_A1Context>(_ctx, getState());
  enterRule(_localctx, 44, SwiftMtParser_MT505Parser::RuleFld_22F_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    dynamic_cast<Fld_22F_A1Context *>(_localctx)->fld_22F_A1_FContext = fld_22F_A1_F();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_22F_A1Context *>(_localctx)->fld_22F_A1_FContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_A1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98A_A1Context::Fld_98A_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_98A_A1_AContext* SwiftMtParser_MT505Parser::Fld_98A_A1Context::fld_98A_A1_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98A_A1_AContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_98A_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98A_A1;
}

void SwiftMtParser_MT505Parser::Fld_98A_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_A1(this);
}

void SwiftMtParser_MT505Parser::Fld_98A_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_A1(this);
}

SwiftMtParser_MT505Parser::Fld_98A_A1Context* SwiftMtParser_MT505Parser::fld_98A_A1() {
  Fld_98A_A1Context *_localctx = _tracker.createInstance<Fld_98A_A1Context>(_ctx, getState());
  enterRule(_localctx, 46, SwiftMtParser_MT505Parser::RuleFld_98A_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    dynamic_cast<Fld_98A_A1Context *>(_localctx)->fld_98A_A1_AContext = fld_98A_A1_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_98A_A1Context *>(_localctx)->fld_98A_A1_AContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13B_A1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_13B_A1Context::Fld_13B_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_13B_A1_BContext* SwiftMtParser_MT505Parser::Fld_13B_A1Context::fld_13B_A1_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_13B_A1_BContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_13B_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_13B_A1;
}

void SwiftMtParser_MT505Parser::Fld_13B_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13B_A1(this);
}

void SwiftMtParser_MT505Parser::Fld_13B_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13B_A1(this);
}

SwiftMtParser_MT505Parser::Fld_13B_A1Context* SwiftMtParser_MT505Parser::fld_13B_A1() {
  Fld_13B_A1Context *_localctx = _tracker.createInstance<Fld_13B_A1Context>(_ctx, getState());
  enterRule(_localctx, 48, SwiftMtParser_MT505Parser::RuleFld_13B_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(356);
    dynamic_cast<Fld_13B_A1Context *>(_localctx)->fld_13B_A1_BContext = fld_13B_A1_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_13B_A1Context *>(_localctx)->fld_13B_A1_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70C_A1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_70C_A1Context::Fld_70C_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_70C_A1_CContext* SwiftMtParser_MT505Parser::Fld_70C_A1Context::fld_70C_A1_C() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_70C_A1_CContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_70C_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_70C_A1;
}

void SwiftMtParser_MT505Parser::Fld_70C_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70C_A1(this);
}

void SwiftMtParser_MT505Parser::Fld_70C_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70C_A1(this);
}

SwiftMtParser_MT505Parser::Fld_70C_A1Context* SwiftMtParser_MT505Parser::fld_70C_A1() {
  Fld_70C_A1Context *_localctx = _tracker.createInstance<Fld_70C_A1Context>(_ctx, getState());
  enterRule(_localctx, 50, SwiftMtParser_MT505Parser::RuleFld_70C_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(359);
    dynamic_cast<Fld_70C_A1Context *>(_localctx)->fld_70C_A1_CContext = fld_70C_A1_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_70C_A1Context *>(_localctx)->fld_70C_A1_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_A1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16S_A1Context::Fld_16S_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16S_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16S_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16S_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16S_A1;
}

void SwiftMtParser_MT505Parser::Fld_16S_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A1(this);
}

void SwiftMtParser_MT505Parser::Fld_16S_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A1(this);
}

SwiftMtParser_MT505Parser::Fld_16S_A1Context* SwiftMtParser_MT505Parser::fld_16S_A1() {
  Fld_16S_A1Context *_localctx = _tracker.createInstance<Fld_16S_A1Context>(_ctx, getState());
  enterRule(_localctx, 52, SwiftMtParser_MT505Parser::RuleFld_16S_A1);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(362);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(363);
    match(SwiftMtParser_MT505Parser::T__1);
    setState(365); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(364);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(367); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98a_AContext::Fld_98a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_98a_A_AContext* SwiftMtParser_MT505Parser::Fld_98a_AContext::fld_98a_A_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98a_A_AContext>(0);
}

SwiftMtParser_MT505Parser::Fld_98a_A_CContext* SwiftMtParser_MT505Parser::Fld_98a_AContext::fld_98a_A_C() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98a_A_CContext>(0);
}

SwiftMtParser_MT505Parser::Fld_98a_A_EContext* SwiftMtParser_MT505Parser::Fld_98a_AContext::fld_98a_A_E() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98a_A_EContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_98a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98a_A;
}

void SwiftMtParser_MT505Parser::Fld_98a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A(this);
}

void SwiftMtParser_MT505Parser::Fld_98a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A(this);
}

SwiftMtParser_MT505Parser::Fld_98a_AContext* SwiftMtParser_MT505Parser::fld_98a_A() {
  Fld_98a_AContext *_localctx = _tracker.createInstance<Fld_98a_AContext>(_ctx, getState());
  enterRule(_localctx, 54, SwiftMtParser_MT505Parser::RuleFld_98a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(378);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(369);
      dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_AContext = fld_98a_A_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(372);
      dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_CContext = fld_98a_A_C();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_CContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(375);
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

//----------------- Fld_22a_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_AContext::Fld_22a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_22a_A_FContext* SwiftMtParser_MT505Parser::Fld_22a_AContext::fld_22a_A_F() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_A_FContext>(0);
}

SwiftMtParser_MT505Parser::Fld_22a_A_HContext* SwiftMtParser_MT505Parser::Fld_22a_AContext::fld_22a_A_H() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_A_HContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_A;
}

void SwiftMtParser_MT505Parser::Fld_22a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_A(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_A(this);
}

SwiftMtParser_MT505Parser::Fld_22a_AContext* SwiftMtParser_MT505Parser::fld_22a_A() {
  Fld_22a_AContext *_localctx = _tracker.createInstance<Fld_22a_AContext>(_ctx, getState());
  enterRule(_localctx, 56, SwiftMtParser_MT505Parser::RuleFld_22a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(386);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(380);
      dynamic_cast<Fld_22a_AContext *>(_localctx)->fld_22a_A_FContext = fld_22a_A_F();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_22a_AContext *>(_localctx)->fld_22a_A_FContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(383);
      dynamic_cast<Fld_22a_AContext *>(_localctx)->fld_22a_A_HContext = fld_22a_A_H();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_22a_AContext *>(_localctx)->fld_22a_A_HContext->fld); 
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

//----------------- Fld_95a_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_95a_AContext::Fld_95a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_95a_A_PContext* SwiftMtParser_MT505Parser::Fld_95a_AContext::fld_95a_A_P() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_95a_A_PContext>(0);
}

SwiftMtParser_MT505Parser::Fld_95a_A_QContext* SwiftMtParser_MT505Parser::Fld_95a_AContext::fld_95a_A_Q() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_95a_A_QContext>(0);
}

SwiftMtParser_MT505Parser::Fld_95a_A_RContext* SwiftMtParser_MT505Parser::Fld_95a_AContext::fld_95a_A_R() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_95a_A_RContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_95a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_95a_A;
}

void SwiftMtParser_MT505Parser::Fld_95a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A(this);
}

void SwiftMtParser_MT505Parser::Fld_95a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A(this);
}

SwiftMtParser_MT505Parser::Fld_95a_AContext* SwiftMtParser_MT505Parser::fld_95a_A() {
  Fld_95a_AContext *_localctx = _tracker.createInstance<Fld_95a_AContext>(_ctx, getState());
  enterRule(_localctx, 58, SwiftMtParser_MT505Parser::RuleFld_95a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(397);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(388);
      dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_PContext = fld_95a_A_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(391);
      dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_QContext = fld_95a_A_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(394);
      dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_RContext = fld_95a_A_R();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_RContext->fld); 
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

//----------------- Fld_70C_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_70C_AContext::Fld_70C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_70C_A_CContext* SwiftMtParser_MT505Parser::Fld_70C_AContext::fld_70C_A_C() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_70C_A_CContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_70C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_70C_A;
}

void SwiftMtParser_MT505Parser::Fld_70C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70C_A(this);
}

void SwiftMtParser_MT505Parser::Fld_70C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70C_A(this);
}

SwiftMtParser_MT505Parser::Fld_70C_AContext* SwiftMtParser_MT505Parser::fld_70C_A() {
  Fld_70C_AContext *_localctx = _tracker.createInstance<Fld_70C_AContext>(_ctx, getState());
  enterRule(_localctx, 60, SwiftMtParser_MT505Parser::RuleFld_70C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(399);
    dynamic_cast<Fld_70C_AContext *>(_localctx)->fld_70C_A_CContext = fld_70C_A_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_70C_AContext *>(_localctx)->fld_70C_A_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A2Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16R_A2Context::Fld_16R_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16R_A2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16R_A2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16R_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16R_A2;
}

void SwiftMtParser_MT505Parser::Fld_16R_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A2(this);
}

void SwiftMtParser_MT505Parser::Fld_16R_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A2(this);
}

SwiftMtParser_MT505Parser::Fld_16R_A2Context* SwiftMtParser_MT505Parser::fld_16R_A2() {
  Fld_16R_A2Context *_localctx = _tracker.createInstance<Fld_16R_A2Context>(_ctx, getState());
  enterRule(_localctx, 62, SwiftMtParser_MT505Parser::RuleFld_16R_A2);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(402);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(403);
    match(SwiftMtParser_MT505Parser::T__0);
    setState(405); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(404);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A2Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_13a_A2Context::Fld_13a_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_13a_A2_AContext* SwiftMtParser_MT505Parser::Fld_13a_A2Context::fld_13a_A2_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_13a_A2_AContext>(0);
}

SwiftMtParser_MT505Parser::Fld_13a_A2_BContext* SwiftMtParser_MT505Parser::Fld_13a_A2Context::fld_13a_A2_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_13a_A2_BContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_13a_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_13a_A2;
}

void SwiftMtParser_MT505Parser::Fld_13a_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A2(this);
}

void SwiftMtParser_MT505Parser::Fld_13a_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A2(this);
}

SwiftMtParser_MT505Parser::Fld_13a_A2Context* SwiftMtParser_MT505Parser::fld_13a_A2() {
  Fld_13a_A2Context *_localctx = _tracker.createInstance<Fld_13a_A2Context>(_ctx, getState());
  enterRule(_localctx, 64, SwiftMtParser_MT505Parser::RuleFld_13a_A2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(409);
      dynamic_cast<Fld_13a_A2Context *>(_localctx)->fld_13a_A2_AContext = fld_13a_A2_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_13a_A2Context *>(_localctx)->fld_13a_A2_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(412);
      dynamic_cast<Fld_13a_A2Context *>(_localctx)->fld_13a_A2_BContext = fld_13a_A2_B();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_13a_A2Context *>(_localctx)->fld_13a_A2_BContext->fld); 
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

//----------------- Fld_20C_A2Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_20C_A2Context::Fld_20C_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_20C_A2_CContext* SwiftMtParser_MT505Parser::Fld_20C_A2Context::fld_20C_A2_C() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_20C_A2_CContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_20C_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_20C_A2;
}

void SwiftMtParser_MT505Parser::Fld_20C_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A2(this);
}

void SwiftMtParser_MT505Parser::Fld_20C_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A2(this);
}

SwiftMtParser_MT505Parser::Fld_20C_A2Context* SwiftMtParser_MT505Parser::fld_20C_A2() {
  Fld_20C_A2Context *_localctx = _tracker.createInstance<Fld_20C_A2Context>(_ctx, getState());
  enterRule(_localctx, 66, SwiftMtParser_MT505Parser::RuleFld_20C_A2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    dynamic_cast<Fld_20C_A2Context *>(_localctx)->fld_20C_A2_CContext = fld_20C_A2_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_20C_A2Context *>(_localctx)->fld_20C_A2_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_A2Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16S_A2Context::Fld_16S_A2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16S_A2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16S_A2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16S_A2Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16S_A2;
}

void SwiftMtParser_MT505Parser::Fld_16S_A2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A2(this);
}

void SwiftMtParser_MT505Parser::Fld_16S_A2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A2(this);
}

SwiftMtParser_MT505Parser::Fld_16S_A2Context* SwiftMtParser_MT505Parser::fld_16S_A2() {
  Fld_16S_A2Context *_localctx = _tracker.createInstance<Fld_16S_A2Context>(_ctx, getState());
  enterRule(_localctx, 68, SwiftMtParser_MT505Parser::RuleFld_16S_A2);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(421);
    match(SwiftMtParser_MT505Parser::T__1);
    setState(423); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(422);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16S_AContext::Fld_16S_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16S_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16S_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16S_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16S_A;
}

void SwiftMtParser_MT505Parser::Fld_16S_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A(this);
}

void SwiftMtParser_MT505Parser::Fld_16S_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A(this);
}

SwiftMtParser_MT505Parser::Fld_16S_AContext* SwiftMtParser_MT505Parser::fld_16S_A() {
  Fld_16S_AContext *_localctx = _tracker.createInstance<Fld_16S_AContext>(_ctx, getState());
  enterRule(_localctx, 70, SwiftMtParser_MT505Parser::RuleFld_16S_A);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(428);
    match(SwiftMtParser_MT505Parser::T__1);
    setState(430); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(429);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16R_BContext::Fld_16R_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16R_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16R_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16R_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16R_B;
}

void SwiftMtParser_MT505Parser::Fld_16R_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B(this);
}

void SwiftMtParser_MT505Parser::Fld_16R_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B(this);
}

SwiftMtParser_MT505Parser::Fld_16R_BContext* SwiftMtParser_MT505Parser::fld_16R_B() {
  Fld_16R_BContext *_localctx = _tracker.createInstance<Fld_16R_BContext>(_ctx, getState());
  enterRule(_localctx, 72, SwiftMtParser_MT505Parser::RuleFld_16R_B);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(435);
    match(SwiftMtParser_MT505Parser::T__0);
    setState(437); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(436);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_20C_BContext::Fld_20C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_20C_B_CContext* SwiftMtParser_MT505Parser::Fld_20C_BContext::fld_20C_B_C() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_20C_B_CContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_20C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_20C_B;
}

void SwiftMtParser_MT505Parser::Fld_20C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B(this);
}

void SwiftMtParser_MT505Parser::Fld_20C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B(this);
}

SwiftMtParser_MT505Parser::Fld_20C_BContext* SwiftMtParser_MT505Parser::fld_20C_B() {
  Fld_20C_BContext *_localctx = _tracker.createInstance<Fld_20C_BContext>(_ctx, getState());
  enterRule(_localctx, 74, SwiftMtParser_MT505Parser::RuleFld_20C_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
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

//----------------- Fld_22a_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_BContext::Fld_22a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_22a_B_FContext* SwiftMtParser_MT505Parser::Fld_22a_BContext::fld_22a_B_F() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_B_FContext>(0);
}

SwiftMtParser_MT505Parser::Fld_22a_B_HContext* SwiftMtParser_MT505Parser::Fld_22a_BContext::fld_22a_B_H() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_B_HContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_B;
}

void SwiftMtParser_MT505Parser::Fld_22a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_B(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_B(this);
}

SwiftMtParser_MT505Parser::Fld_22a_BContext* SwiftMtParser_MT505Parser::fld_22a_B() {
  Fld_22a_BContext *_localctx = _tracker.createInstance<Fld_22a_BContext>(_ctx, getState());
  enterRule(_localctx, 76, SwiftMtParser_MT505Parser::RuleFld_22a_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(450);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(444);
      dynamic_cast<Fld_22a_BContext *>(_localctx)->fld_22a_B_FContext = fld_22a_B_F();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_22a_BContext *>(_localctx)->fld_22a_B_FContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(447);
      dynamic_cast<Fld_22a_BContext *>(_localctx)->fld_22a_B_HContext = fld_22a_B_H();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_22a_BContext *>(_localctx)->fld_22a_B_HContext->fld); 
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

//----------------- Fld_98A_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98A_BContext::Fld_98A_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_98A_B_AContext* SwiftMtParser_MT505Parser::Fld_98A_BContext::fld_98A_B_A() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_98A_B_AContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_98A_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98A_B;
}

void SwiftMtParser_MT505Parser::Fld_98A_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B(this);
}

void SwiftMtParser_MT505Parser::Fld_98A_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B(this);
}

SwiftMtParser_MT505Parser::Fld_98A_BContext* SwiftMtParser_MT505Parser::fld_98A_B() {
  Fld_98A_BContext *_localctx = _tracker.createInstance<Fld_98A_BContext>(_ctx, getState());
  enterRule(_localctx, 78, SwiftMtParser_MT505Parser::RuleFld_98A_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
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

//----------------- Fld_16R_B1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16R_B1Context::Fld_16R_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16R_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16R_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16R_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16R_B1;
}

void SwiftMtParser_MT505Parser::Fld_16R_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B1(this);
}

void SwiftMtParser_MT505Parser::Fld_16R_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B1(this);
}

SwiftMtParser_MT505Parser::Fld_16R_B1Context* SwiftMtParser_MT505Parser::fld_16R_B1() {
  Fld_16R_B1Context *_localctx = _tracker.createInstance<Fld_16R_B1Context>(_ctx, getState());
  enterRule(_localctx, 80, SwiftMtParser_MT505Parser::RuleFld_16R_B1);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(456);
    match(SwiftMtParser_MT505Parser::T__0);
    setState(458); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(457);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_35B_B1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_35B_B1Context::Fld_35B_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_35B_B1_BContext* SwiftMtParser_MT505Parser::Fld_35B_B1Context::fld_35B_B1_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_35B_B1_BContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_35B_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_35B_B1;
}

void SwiftMtParser_MT505Parser::Fld_35B_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_35B_B1(this);
}

void SwiftMtParser_MT505Parser::Fld_35B_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_35B_B1(this);
}

SwiftMtParser_MT505Parser::Fld_35B_B1Context* SwiftMtParser_MT505Parser::fld_35B_B1() {
  Fld_35B_B1Context *_localctx = _tracker.createInstance<Fld_35B_B1Context>(_ctx, getState());
  enterRule(_localctx, 82, SwiftMtParser_MT505Parser::RuleFld_35B_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(462);
    dynamic_cast<Fld_35B_B1Context *>(_localctx)->fld_35B_B1_BContext = fld_35B_B1_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_35B_B1Context *>(_localctx)->fld_35B_B1_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_36B_B1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_36B_B1Context::Fld_36B_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_36B_B1_BContext* SwiftMtParser_MT505Parser::Fld_36B_B1Context::fld_36B_B1_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_36B_B1_BContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_36B_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_36B_B1;
}

void SwiftMtParser_MT505Parser::Fld_36B_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_36B_B1(this);
}

void SwiftMtParser_MT505Parser::Fld_36B_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_36B_B1(this);
}

SwiftMtParser_MT505Parser::Fld_36B_B1Context* SwiftMtParser_MT505Parser::fld_36B_B1() {
  Fld_36B_B1Context *_localctx = _tracker.createInstance<Fld_36B_B1Context>(_ctx, getState());
  enterRule(_localctx, 84, SwiftMtParser_MT505Parser::RuleFld_36B_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    dynamic_cast<Fld_36B_B1Context *>(_localctx)->fld_36B_B1_BContext = fld_36B_B1_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_36B_B1Context *>(_localctx)->fld_36B_B1_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_17B_B1Context ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_17B_B1Context::Fld_17B_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_17B_B1_BContext* SwiftMtParser_MT505Parser::Fld_17B_B1Context::fld_17B_B1_B() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_17B_B1_BContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_17B_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_17B_B1;
}

void SwiftMtParser_MT505Parser::Fld_17B_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_17B_B1(this);
}

void SwiftMtParser_MT505Parser::Fld_17B_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_17B_B1(this);
}

SwiftMtParser_MT505Parser::Fld_17B_B1Context* SwiftMtParser_MT505Parser::fld_17B_B1() {
  Fld_17B_B1Context *_localctx = _tracker.createInstance<Fld_17B_B1Context>(_ctx, getState());
  enterRule(_localctx, 86, SwiftMtParser_MT505Parser::RuleFld_17B_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(468);
    dynamic_cast<Fld_17B_B1Context *>(_localctx)->fld_17B_B1_BContext = fld_17B_B1_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_17B_B1Context *>(_localctx)->fld_17B_B1_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B1aContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_16R_B1aContext::Fld_16R_B1aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_16R_B1aContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_16R_B1aContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_16R_B1aContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_16R_B1a;
}

void SwiftMtParser_MT505Parser::Fld_16R_B1aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B1a(this);
}

void SwiftMtParser_MT505Parser::Fld_16R_B1aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B1a(this);
}

SwiftMtParser_MT505Parser::Fld_16R_B1aContext* SwiftMtParser_MT505Parser::fld_16R_B1a() {
  Fld_16R_B1aContext *_localctx = _tracker.createInstance<Fld_16R_B1aContext>(_ctx, getState());
  enterRule(_localctx, 88, SwiftMtParser_MT505Parser::RuleFld_16R_B1a);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(471);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(472);
    match(SwiftMtParser_MT505Parser::T__0);
    setState(474); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(473);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(476); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22a_B1aContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_B1aContext::Fld_22a_B1aContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext* SwiftMtParser_MT505Parser::Fld_22a_B1aContext::fld_22a_B1a_F() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext>(0);
}

SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext* SwiftMtParser_MT505Parser::Fld_22a_B1aContext::fld_22a_B1a_H() {
  return getRuleContext<SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext>(0);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_B1aContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_B1a;
}

void SwiftMtParser_MT505Parser::Fld_22a_B1aContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_B1a(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_B1aContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_B1a(this);
}

SwiftMtParser_MT505Parser::Fld_22a_B1aContext* SwiftMtParser_MT505Parser::fld_22a_B1a() {
  Fld_22a_B1aContext *_localctx = _tracker.createInstance<Fld_22a_B1aContext>(_ctx, getState());
  enterRule(_localctx, 90, SwiftMtParser_MT505Parser::RuleFld_22a_B1a);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(484);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(478);
      dynamic_cast<Fld_22a_B1aContext *>(_localctx)->fld_22a_B1a_FContext = fld_22a_B1a_F();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_22a_B1aContext *>(_localctx)->fld_22a_B1a_FContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(481);
      dynamic_cast<Fld_22a_B1aContext *>(_localctx)->fld_22a_B1a_HContext = fld_22a_B1a_H();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_22a_B1aContext *>(_localctx)->fld_22a_B1a_HContext->fld); 
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

//----------------- Fld_20C_A_CContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_20C_A_CContext::Fld_20C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_20C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_20C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_20C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_20C_A_C;
}

void SwiftMtParser_MT505Parser::Fld_20C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A_C(this);
}

void SwiftMtParser_MT505Parser::Fld_20C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A_C(this);
}

SwiftMtParser_MT505Parser::Fld_20C_A_CContext* SwiftMtParser_MT505Parser::fld_20C_A_C() {
  Fld_20C_A_CContext *_localctx = _tracker.createInstance<Fld_20C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 92, SwiftMtParser_MT505Parser::RuleFld_20C_A_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(487);
    match(SwiftMtParser_MT505Parser::T__2);
    setState(489); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(488);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_A_GContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_23G_A_GContext::Fld_23G_A_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_23G_A_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_23G_A_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_23G_A_GContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_23G_A_G;
}

void SwiftMtParser_MT505Parser::Fld_23G_A_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A_G(this);
}

void SwiftMtParser_MT505Parser::Fld_23G_A_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A_G(this);
}

SwiftMtParser_MT505Parser::Fld_23G_A_GContext* SwiftMtParser_MT505Parser::fld_23G_A_G() {
  Fld_23G_A_GContext *_localctx = _tracker.createInstance<Fld_23G_A_GContext>(_ctx, getState());
  enterRule(_localctx, 94, SwiftMtParser_MT505Parser::RuleFld_23G_A_G);
   _localctx->fld.set_tag("23G"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(494);
    match(SwiftMtParser_MT505Parser::T__3);
    setState(496); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(495);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(498); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_A1_FContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22F_A1_FContext::Fld_22F_A1_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_22F_A1_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_22F_A1_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_22F_A1_FContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22F_A1_F;
}

void SwiftMtParser_MT505Parser::Fld_22F_A1_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_A1_F(this);
}

void SwiftMtParser_MT505Parser::Fld_22F_A1_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_A1_F(this);
}

SwiftMtParser_MT505Parser::Fld_22F_A1_FContext* SwiftMtParser_MT505Parser::fld_22F_A1_F() {
  Fld_22F_A1_FContext *_localctx = _tracker.createInstance<Fld_22F_A1_FContext>(_ctx, getState());
  enterRule(_localctx, 96, SwiftMtParser_MT505Parser::RuleFld_22F_A1_F);
   _localctx->fld.set_tag("22F"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(501);
    match(SwiftMtParser_MT505Parser::T__4);
    setState(503); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(502);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(505); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_A1_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98A_A1_AContext::Fld_98A_A1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_98A_A1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_98A_A1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_98A_A1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98A_A1_A;
}

void SwiftMtParser_MT505Parser::Fld_98A_A1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_A1_A(this);
}

void SwiftMtParser_MT505Parser::Fld_98A_A1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_A1_A(this);
}

SwiftMtParser_MT505Parser::Fld_98A_A1_AContext* SwiftMtParser_MT505Parser::fld_98A_A1_A() {
  Fld_98A_A1_AContext *_localctx = _tracker.createInstance<Fld_98A_A1_AContext>(_ctx, getState());
  enterRule(_localctx, 98, SwiftMtParser_MT505Parser::RuleFld_98A_A1_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(508);
    match(SwiftMtParser_MT505Parser::T__5);
    setState(510); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(509);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(512); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13B_A1_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_13B_A1_BContext::Fld_13B_A1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_13B_A1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_13B_A1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_13B_A1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_13B_A1_B;
}

void SwiftMtParser_MT505Parser::Fld_13B_A1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13B_A1_B(this);
}

void SwiftMtParser_MT505Parser::Fld_13B_A1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13B_A1_B(this);
}

SwiftMtParser_MT505Parser::Fld_13B_A1_BContext* SwiftMtParser_MT505Parser::fld_13B_A1_B() {
  Fld_13B_A1_BContext *_localctx = _tracker.createInstance<Fld_13B_A1_BContext>(_ctx, getState());
  enterRule(_localctx, 100, SwiftMtParser_MT505Parser::RuleFld_13B_A1_B);
   _localctx->fld.set_tag("13B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(515);
    match(SwiftMtParser_MT505Parser::T__6);
    setState(517); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(516);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(519); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70C_A1_CContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_70C_A1_CContext::Fld_70C_A1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_70C_A1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_70C_A1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_70C_A1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_70C_A1_C;
}

void SwiftMtParser_MT505Parser::Fld_70C_A1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70C_A1_C(this);
}

void SwiftMtParser_MT505Parser::Fld_70C_A1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70C_A1_C(this);
}

SwiftMtParser_MT505Parser::Fld_70C_A1_CContext* SwiftMtParser_MT505Parser::fld_70C_A1_C() {
  Fld_70C_A1_CContext *_localctx = _tracker.createInstance<Fld_70C_A1_CContext>(_ctx, getState());
  enterRule(_localctx, 102, SwiftMtParser_MT505Parser::RuleFld_70C_A1_C);
   _localctx->fld.set_tag("70C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(522);
    match(SwiftMtParser_MT505Parser::T__7);
    setState(524); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(523);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(526); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98a_A_AContext::Fld_98a_A_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_98a_A_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_98a_A_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_98a_A_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98a_A_A;
}

void SwiftMtParser_MT505Parser::Fld_98a_A_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_A(this);
}

void SwiftMtParser_MT505Parser::Fld_98a_A_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_A(this);
}

SwiftMtParser_MT505Parser::Fld_98a_A_AContext* SwiftMtParser_MT505Parser::fld_98a_A_A() {
  Fld_98a_A_AContext *_localctx = _tracker.createInstance<Fld_98a_A_AContext>(_ctx, getState());
  enterRule(_localctx, 104, SwiftMtParser_MT505Parser::RuleFld_98a_A_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(529);
    match(SwiftMtParser_MT505Parser::T__5);
    setState(531); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(530);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(533); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_CContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98a_A_CContext::Fld_98a_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_98a_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_98a_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_98a_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98a_A_C;
}

void SwiftMtParser_MT505Parser::Fld_98a_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_C(this);
}

void SwiftMtParser_MT505Parser::Fld_98a_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_C(this);
}

SwiftMtParser_MT505Parser::Fld_98a_A_CContext* SwiftMtParser_MT505Parser::fld_98a_A_C() {
  Fld_98a_A_CContext *_localctx = _tracker.createInstance<Fld_98a_A_CContext>(_ctx, getState());
  enterRule(_localctx, 106, SwiftMtParser_MT505Parser::RuleFld_98a_A_C);
   _localctx->fld.set_tag("98C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(536);
    match(SwiftMtParser_MT505Parser::T__8);
    setState(538); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(537);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(540); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_EContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98a_A_EContext::Fld_98a_A_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_98a_A_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_98a_A_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_98a_A_EContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98a_A_E;
}

void SwiftMtParser_MT505Parser::Fld_98a_A_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_E(this);
}

void SwiftMtParser_MT505Parser::Fld_98a_A_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_E(this);
}

SwiftMtParser_MT505Parser::Fld_98a_A_EContext* SwiftMtParser_MT505Parser::fld_98a_A_E() {
  Fld_98a_A_EContext *_localctx = _tracker.createInstance<Fld_98a_A_EContext>(_ctx, getState());
  enterRule(_localctx, 108, SwiftMtParser_MT505Parser::RuleFld_98a_A_E);
   _localctx->fld.set_tag("98E"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(543);
    match(SwiftMtParser_MT505Parser::T__9);
    setState(545); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(544);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(547); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22a_A_FContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_A_FContext::Fld_22a_A_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_22a_A_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_22a_A_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_A_FContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_A_F;
}

void SwiftMtParser_MT505Parser::Fld_22a_A_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_A_F(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_A_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_A_F(this);
}

SwiftMtParser_MT505Parser::Fld_22a_A_FContext* SwiftMtParser_MT505Parser::fld_22a_A_F() {
  Fld_22a_A_FContext *_localctx = _tracker.createInstance<Fld_22a_A_FContext>(_ctx, getState());
  enterRule(_localctx, 110, SwiftMtParser_MT505Parser::RuleFld_22a_A_F);
   _localctx->fld.set_tag("22F"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(550);
    match(SwiftMtParser_MT505Parser::T__4);
    setState(552); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(551);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(554); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22a_A_HContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_A_HContext::Fld_22a_A_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_22a_A_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_22a_A_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_A_HContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_A_H;
}

void SwiftMtParser_MT505Parser::Fld_22a_A_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_A_H(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_A_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_A_H(this);
}

SwiftMtParser_MT505Parser::Fld_22a_A_HContext* SwiftMtParser_MT505Parser::fld_22a_A_H() {
  Fld_22a_A_HContext *_localctx = _tracker.createInstance<Fld_22a_A_HContext>(_ctx, getState());
  enterRule(_localctx, 112, SwiftMtParser_MT505Parser::RuleFld_22a_A_H);
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(557);
    match(SwiftMtParser_MT505Parser::T__10);
    setState(559); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(558);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(561); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_PContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_95a_A_PContext::Fld_95a_A_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_95a_A_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_95a_A_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_95a_A_PContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_95a_A_P;
}

void SwiftMtParser_MT505Parser::Fld_95a_A_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_P(this);
}

void SwiftMtParser_MT505Parser::Fld_95a_A_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_P(this);
}

SwiftMtParser_MT505Parser::Fld_95a_A_PContext* SwiftMtParser_MT505Parser::fld_95a_A_P() {
  Fld_95a_A_PContext *_localctx = _tracker.createInstance<Fld_95a_A_PContext>(_ctx, getState());
  enterRule(_localctx, 114, SwiftMtParser_MT505Parser::RuleFld_95a_A_P);
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(564);
    match(SwiftMtParser_MT505Parser::T__11);
    setState(566); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(565);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(568); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_QContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_95a_A_QContext::Fld_95a_A_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_95a_A_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_95a_A_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_95a_A_QContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_95a_A_Q;
}

void SwiftMtParser_MT505Parser::Fld_95a_A_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_Q(this);
}

void SwiftMtParser_MT505Parser::Fld_95a_A_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_Q(this);
}

SwiftMtParser_MT505Parser::Fld_95a_A_QContext* SwiftMtParser_MT505Parser::fld_95a_A_Q() {
  Fld_95a_A_QContext *_localctx = _tracker.createInstance<Fld_95a_A_QContext>(_ctx, getState());
  enterRule(_localctx, 116, SwiftMtParser_MT505Parser::RuleFld_95a_A_Q);
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(571);
    match(SwiftMtParser_MT505Parser::T__12);
    setState(573); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(572);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(575); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_RContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_95a_A_RContext::Fld_95a_A_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_95a_A_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_95a_A_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_95a_A_RContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_95a_A_R;
}

void SwiftMtParser_MT505Parser::Fld_95a_A_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_R(this);
}

void SwiftMtParser_MT505Parser::Fld_95a_A_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_R(this);
}

SwiftMtParser_MT505Parser::Fld_95a_A_RContext* SwiftMtParser_MT505Parser::fld_95a_A_R() {
  Fld_95a_A_RContext *_localctx = _tracker.createInstance<Fld_95a_A_RContext>(_ctx, getState());
  enterRule(_localctx, 118, SwiftMtParser_MT505Parser::RuleFld_95a_A_R);
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(578);
    match(SwiftMtParser_MT505Parser::T__13);
    setState(580); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(579);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(582); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70C_A_CContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_70C_A_CContext::Fld_70C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_70C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_70C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_70C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_70C_A_C;
}

void SwiftMtParser_MT505Parser::Fld_70C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70C_A_C(this);
}

void SwiftMtParser_MT505Parser::Fld_70C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70C_A_C(this);
}

SwiftMtParser_MT505Parser::Fld_70C_A_CContext* SwiftMtParser_MT505Parser::fld_70C_A_C() {
  Fld_70C_A_CContext *_localctx = _tracker.createInstance<Fld_70C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 120, SwiftMtParser_MT505Parser::RuleFld_70C_A_C);
   _localctx->fld.set_tag("70C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(585);
    match(SwiftMtParser_MT505Parser::T__7);
    setState(587); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(586);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(589); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A2_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_13a_A2_AContext::Fld_13a_A2_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_13a_A2_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_13a_A2_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_13a_A2_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_13a_A2_A;
}

void SwiftMtParser_MT505Parser::Fld_13a_A2_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A2_A(this);
}

void SwiftMtParser_MT505Parser::Fld_13a_A2_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A2_A(this);
}

SwiftMtParser_MT505Parser::Fld_13a_A2_AContext* SwiftMtParser_MT505Parser::fld_13a_A2_A() {
  Fld_13a_A2_AContext *_localctx = _tracker.createInstance<Fld_13a_A2_AContext>(_ctx, getState());
  enterRule(_localctx, 122, SwiftMtParser_MT505Parser::RuleFld_13a_A2_A);
   _localctx->fld.set_tag("13A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(592);
    match(SwiftMtParser_MT505Parser::T__14);
    setState(594); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(593);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(596); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A2_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_13a_A2_BContext::Fld_13a_A2_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_13a_A2_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_13a_A2_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_13a_A2_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_13a_A2_B;
}

void SwiftMtParser_MT505Parser::Fld_13a_A2_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A2_B(this);
}

void SwiftMtParser_MT505Parser::Fld_13a_A2_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A2_B(this);
}

SwiftMtParser_MT505Parser::Fld_13a_A2_BContext* SwiftMtParser_MT505Parser::fld_13a_A2_B() {
  Fld_13a_A2_BContext *_localctx = _tracker.createInstance<Fld_13a_A2_BContext>(_ctx, getState());
  enterRule(_localctx, 124, SwiftMtParser_MT505Parser::RuleFld_13a_A2_B);
   _localctx->fld.set_tag("13B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(599);
    match(SwiftMtParser_MT505Parser::T__6);
    setState(601); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(600);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(603); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A2_CContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_20C_A2_CContext::Fld_20C_A2_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_20C_A2_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_20C_A2_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_20C_A2_CContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_20C_A2_C;
}

void SwiftMtParser_MT505Parser::Fld_20C_A2_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A2_C(this);
}

void SwiftMtParser_MT505Parser::Fld_20C_A2_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A2_C(this);
}

SwiftMtParser_MT505Parser::Fld_20C_A2_CContext* SwiftMtParser_MT505Parser::fld_20C_A2_C() {
  Fld_20C_A2_CContext *_localctx = _tracker.createInstance<Fld_20C_A2_CContext>(_ctx, getState());
  enterRule(_localctx, 126, SwiftMtParser_MT505Parser::RuleFld_20C_A2_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(605);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(606);
    match(SwiftMtParser_MT505Parser::T__2);
    setState(608); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(607);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(610); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_20C_B_CContext::Fld_20C_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_20C_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_20C_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_20C_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_20C_B_C;
}

void SwiftMtParser_MT505Parser::Fld_20C_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_B_C(this);
}

void SwiftMtParser_MT505Parser::Fld_20C_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_B_C(this);
}

SwiftMtParser_MT505Parser::Fld_20C_B_CContext* SwiftMtParser_MT505Parser::fld_20C_B_C() {
  Fld_20C_B_CContext *_localctx = _tracker.createInstance<Fld_20C_B_CContext>(_ctx, getState());
  enterRule(_localctx, 128, SwiftMtParser_MT505Parser::RuleFld_20C_B_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(612);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(613);
    match(SwiftMtParser_MT505Parser::T__2);
    setState(615); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(614);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(617); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22a_B_FContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_B_FContext::Fld_22a_B_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_22a_B_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_22a_B_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_B_FContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_B_F;
}

void SwiftMtParser_MT505Parser::Fld_22a_B_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_B_F(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_B_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_B_F(this);
}

SwiftMtParser_MT505Parser::Fld_22a_B_FContext* SwiftMtParser_MT505Parser::fld_22a_B_F() {
  Fld_22a_B_FContext *_localctx = _tracker.createInstance<Fld_22a_B_FContext>(_ctx, getState());
  enterRule(_localctx, 130, SwiftMtParser_MT505Parser::RuleFld_22a_B_F);
   _localctx->fld.set_tag("22F"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(619);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(620);
    match(SwiftMtParser_MT505Parser::T__4);
    setState(622); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(621);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      setState(624); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 59, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22a_B_HContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_B_HContext::Fld_22a_B_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_22a_B_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_22a_B_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_B_HContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_B_H;
}

void SwiftMtParser_MT505Parser::Fld_22a_B_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_B_H(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_B_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_B_H(this);
}

SwiftMtParser_MT505Parser::Fld_22a_B_HContext* SwiftMtParser_MT505Parser::fld_22a_B_H() {
  Fld_22a_B_HContext *_localctx = _tracker.createInstance<Fld_22a_B_HContext>(_ctx, getState());
  enterRule(_localctx, 132, SwiftMtParser_MT505Parser::RuleFld_22a_B_H);
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(626);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(627);
    match(SwiftMtParser_MT505Parser::T__10);
    setState(629); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(628);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      setState(631); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98A_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_98A_B_AContext::Fld_98A_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_98A_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_98A_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_98A_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_98A_B_A;
}

void SwiftMtParser_MT505Parser::Fld_98A_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98A_B_A(this);
}

void SwiftMtParser_MT505Parser::Fld_98A_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98A_B_A(this);
}

SwiftMtParser_MT505Parser::Fld_98A_B_AContext* SwiftMtParser_MT505Parser::fld_98A_B_A() {
  Fld_98A_B_AContext *_localctx = _tracker.createInstance<Fld_98A_B_AContext>(_ctx, getState());
  enterRule(_localctx, 134, SwiftMtParser_MT505Parser::RuleFld_98A_B_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(633);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(634);
    match(SwiftMtParser_MT505Parser::T__5);
    setState(636); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(635);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      setState(638); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_35B_B1_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_35B_B1_BContext::Fld_35B_B1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_35B_B1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_35B_B1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_35B_B1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_35B_B1_B;
}

void SwiftMtParser_MT505Parser::Fld_35B_B1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_35B_B1_B(this);
}

void SwiftMtParser_MT505Parser::Fld_35B_B1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_35B_B1_B(this);
}

SwiftMtParser_MT505Parser::Fld_35B_B1_BContext* SwiftMtParser_MT505Parser::fld_35B_B1_B() {
  Fld_35B_B1_BContext *_localctx = _tracker.createInstance<Fld_35B_B1_BContext>(_ctx, getState());
  enterRule(_localctx, 136, SwiftMtParser_MT505Parser::RuleFld_35B_B1_B);
   _localctx->fld.set_tag("35B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(640);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(641);
    match(SwiftMtParser_MT505Parser::T__15);
    setState(643); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(642);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(645); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT505Parser::T__0)
      | (1ULL << SwiftMtParser_MT505Parser::T__1)
      | (1ULL << SwiftMtParser_MT505Parser::T__2)
      | (1ULL << SwiftMtParser_MT505Parser::T__3)
      | (1ULL << SwiftMtParser_MT505Parser::T__4)
      | (1ULL << SwiftMtParser_MT505Parser::T__5)
      | (1ULL << SwiftMtParser_MT505Parser::T__6)
      | (1ULL << SwiftMtParser_MT505Parser::T__7)
      | (1ULL << SwiftMtParser_MT505Parser::T__8)
      | (1ULL << SwiftMtParser_MT505Parser::T__9)
      | (1ULL << SwiftMtParser_MT505Parser::T__10)
      | (1ULL << SwiftMtParser_MT505Parser::T__11)
      | (1ULL << SwiftMtParser_MT505Parser::T__12)
      | (1ULL << SwiftMtParser_MT505Parser::T__13)
      | (1ULL << SwiftMtParser_MT505Parser::T__14)
      | (1ULL << SwiftMtParser_MT505Parser::T__15)
      | (1ULL << SwiftMtParser_MT505Parser::T__16)
      | (1ULL << SwiftMtParser_MT505Parser::T__17)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT505Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT505Parser::MT_END)
      | (1ULL << SwiftMtParser_MT505Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT505Parser::COLON)
      | (1ULL << SwiftMtParser_MT505Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_36B_B1_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_36B_B1_BContext::Fld_36B_B1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_36B_B1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_36B_B1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_36B_B1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_36B_B1_B;
}

void SwiftMtParser_MT505Parser::Fld_36B_B1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_36B_B1_B(this);
}

void SwiftMtParser_MT505Parser::Fld_36B_B1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_36B_B1_B(this);
}

SwiftMtParser_MT505Parser::Fld_36B_B1_BContext* SwiftMtParser_MT505Parser::fld_36B_B1_B() {
  Fld_36B_B1_BContext *_localctx = _tracker.createInstance<Fld_36B_B1_BContext>(_ctx, getState());
  enterRule(_localctx, 138, SwiftMtParser_MT505Parser::RuleFld_36B_B1_B);
   _localctx->fld.set_tag("36B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(647);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(648);
    match(SwiftMtParser_MT505Parser::T__16);
    setState(650); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(649);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      setState(652); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_17B_B1_BContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_17B_B1_BContext::Fld_17B_B1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_17B_B1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_17B_B1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_17B_B1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_17B_B1_B;
}

void SwiftMtParser_MT505Parser::Fld_17B_B1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_17B_B1_B(this);
}

void SwiftMtParser_MT505Parser::Fld_17B_B1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_17B_B1_B(this);
}

SwiftMtParser_MT505Parser::Fld_17B_B1_BContext* SwiftMtParser_MT505Parser::fld_17B_B1_B() {
  Fld_17B_B1_BContext *_localctx = _tracker.createInstance<Fld_17B_B1_BContext>(_ctx, getState());
  enterRule(_localctx, 140, SwiftMtParser_MT505Parser::RuleFld_17B_B1_B);
   _localctx->fld.set_tag("17B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(654);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(655);
    match(SwiftMtParser_MT505Parser::T__17);
    setState(657); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(656);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      setState(659); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22a_B1a_FContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext::Fld_22a_B1a_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_B1a_F;
}

void SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_B1a_F(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_B1a_F(this);
}

SwiftMtParser_MT505Parser::Fld_22a_B1a_FContext* SwiftMtParser_MT505Parser::fld_22a_B1a_F() {
  Fld_22a_B1a_FContext *_localctx = _tracker.createInstance<Fld_22a_B1a_FContext>(_ctx, getState());
  enterRule(_localctx, 142, SwiftMtParser_MT505Parser::RuleFld_22a_B1a_F);
   _localctx->fld.set_tag("22F"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(661);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(662);
    match(SwiftMtParser_MT505Parser::T__4);
    setState(664); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(663);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      setState(666); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22a_B1a_HContext ------------------------------------------------------------------

SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext::Fld_22a_B1a_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT505Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT505Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext::getRuleIndex() const {
  return SwiftMtParser_MT505Parser::RuleFld_22a_B1a_H;
}

void SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22a_B1a_H(this);
}

void SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT505Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22a_B1a_H(this);
}

SwiftMtParser_MT505Parser::Fld_22a_B1a_HContext* SwiftMtParser_MT505Parser::fld_22a_B1a_H() {
  Fld_22a_B1a_HContext *_localctx = _tracker.createInstance<Fld_22a_B1a_HContext>(_ctx, getState());
  enterRule(_localctx, 144, SwiftMtParser_MT505Parser::RuleFld_22a_B1a_H);
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(668);
    match(SwiftMtParser_MT505Parser::START_OF_FIELD);
    setState(669);
    match(SwiftMtParser_MT505Parser::T__10);
    setState(671); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(670);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT505Parser::START_OF_FIELD)) {
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
      setState(673); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT505Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT505Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT505Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT505Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT505Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt", "seq_A", 
  "seq_A1", "seq_A2", "seq_B", "seq_B1", "seq_B1a", "fld_16R_A", "fld_20C_A", 
  "fld_23G_A", "fld_16R_A1", "fld_22F_A1", "fld_98A_A1", "fld_13B_A1", "fld_70C_A1", 
  "fld_16S_A1", "fld_98a_A", "fld_22a_A", "fld_95a_A", "fld_70C_A", "fld_16R_A2", 
  "fld_13a_A2", "fld_20C_A2", "fld_16S_A2", "fld_16S_A", "fld_16R_B", "fld_20C_B", 
  "fld_22a_B", "fld_98A_B", "fld_16R_B1", "fld_35B_B1", "fld_36B_B1", "fld_17B_B1", 
  "fld_16R_B1a", "fld_22a_B1a", "fld_20C_A_C", "fld_23G_A_G", "fld_22F_A1_F", 
  "fld_98A_A1_A", "fld_13B_A1_B", "fld_70C_A1_C", "fld_98a_A_A", "fld_98a_A_C", 
  "fld_98a_A_E", "fld_22a_A_F", "fld_22a_A_H", "fld_95a_A_P", "fld_95a_A_Q", 
  "fld_95a_A_R", "fld_70C_A_C", "fld_13a_A2_A", "fld_13a_A2_B", "fld_20C_A2_C", 
  "fld_20C_B_C", "fld_22a_B_F", "fld_22a_B_H", "fld_98A_B_A", "fld_35B_B1_B", 
  "fld_36B_B1_B", "fld_17B_B1_B", "fld_22a_B1a_F", "fld_22a_B1a_H"
};

std::vector<std::string> SwiftMtParser_MT505Parser::_literalNames = {
  "", "'16R:'", "'16S:'", "'20C:'", "'23G:'", "'22F:'", "'98A:'", "'13B:'", 
  "'70C:'", "'98C:'", "'98E:'", "'22H:'", "'95P:'", "'95Q:'", "'95R:'", 
  "'13A:'", "'35B:'", "'36B:'", "'17B:'", "'{1:'", "'{2:'", "'{3:'", "'{4:'", 
  "'{5:'", "'-}'", "'{'", "'}'", "':'"
};

std::vector<std::string> SwiftMtParser_MT505Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "TAG_BH", "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", "MT_END", "LBRACE", 
  "RBRACE", "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT505Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT505Parser::_tokenNames;

SwiftMtParser_MT505Parser::Initializer::Initializer() {
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
    0x3, 0x1f, 0x2a6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x9, 0x49, 0x4, 0x4a, 0x9, 0x4a, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 
    0x2, 0x98, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x9c, 0xa, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x6, 
    0x4, 0xa5, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0xa6, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0xae, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 
    0xaf, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0xbb, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 
    0xbc, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xb, 0x6, 0xb, 0xc6, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xc7, 0x3, 0xc, 0x6, 
    0xc, 0xcb, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xcc, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x6, 0xd, 0xd2, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xd3, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0xdb, 0xa, 0xe, 0xd, 0xe, 
    0xe, 0xe, 0xdc, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0xe3, 
    0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xe4, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xe9, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0xef, 0xa, 
    0xe, 0xd, 0xe, 0xe, 0xe, 0xf0, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xf5, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xf9, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0xfc, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0x105, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 
    0x109, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x10d, 0xa, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x5, 0xf, 0x111, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x11a, 0xa, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x127, 
    0xa, 0x11, 0xd, 0x11, 0xe, 0x11, 0x128, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x12d, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x131, 0xa, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x13c, 0xa, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x5, 0x12, 0x140, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0x147, 0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 
    0x148, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 
    0x150, 0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0x151, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x6, 0x17, 0x15d, 0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0x15e, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 
    0x1c, 0x3, 0x1c, 0x6, 0x1c, 0x170, 0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 
    0x171, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x17d, 0xa, 0x1d, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x185, 
    0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x190, 0xa, 0x1f, 
    0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x6, 
    0x21, 0x198, 0xa, 0x21, 0xd, 0x21, 0xe, 0x21, 0x199, 0x3, 0x22, 0x3, 
    0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x5, 0x22, 0x1a2, 
    0xa, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 0x3, 0x24, 0x3, 
    0x24, 0x6, 0x24, 0x1aa, 0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x1ab, 0x3, 
    0x25, 0x3, 0x25, 0x3, 0x25, 0x6, 0x25, 0x1b1, 0xa, 0x25, 0xd, 0x25, 
    0xe, 0x25, 0x1b2, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x6, 0x26, 0x1b8, 
    0xa, 0x26, 0xd, 0x26, 0xe, 0x26, 0x1b9, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x5, 
    0x28, 0x1c5, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x6, 0x2a, 0x1cd, 0xa, 0x2a, 0xd, 0x2a, 0xe, 0x2a, 
    0x1ce, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x6, 
    0x2e, 0x1dd, 0xa, 0x2e, 0xd, 0x2e, 0xe, 0x2e, 0x1de, 0x3, 0x2f, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x5, 0x2f, 0x1e7, 
    0xa, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x6, 0x30, 0x1ec, 0xa, 0x30, 
    0xd, 0x30, 0xe, 0x30, 0x1ed, 0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x6, 0x31, 
    0x1f3, 0xa, 0x31, 0xd, 0x31, 0xe, 0x31, 0x1f4, 0x3, 0x32, 0x3, 0x32, 
    0x3, 0x32, 0x6, 0x32, 0x1fa, 0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x1fb, 
    0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x201, 0xa, 0x33, 0xd, 0x33, 
    0xe, 0x33, 0x202, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 0x6, 0x34, 0x208, 
    0xa, 0x34, 0xd, 0x34, 0xe, 0x34, 0x209, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 
    0x6, 0x35, 0x20f, 0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 0x210, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x6, 0x36, 0x216, 0xa, 0x36, 0xd, 0x36, 0xe, 0x36, 
    0x217, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x6, 0x37, 0x21d, 0xa, 0x37, 
    0xd, 0x37, 0xe, 0x37, 0x21e, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x6, 0x38, 
    0x224, 0xa, 0x38, 0xd, 0x38, 0xe, 0x38, 0x225, 0x3, 0x39, 0x3, 0x39, 
    0x3, 0x39, 0x6, 0x39, 0x22b, 0xa, 0x39, 0xd, 0x39, 0xe, 0x39, 0x22c, 
    0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x232, 0xa, 0x3a, 0xd, 0x3a, 
    0xe, 0x3a, 0x233, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x6, 0x3b, 0x239, 
    0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 0x23a, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 
    0x6, 0x3c, 0x240, 0xa, 0x3c, 0xd, 0x3c, 0xe, 0x3c, 0x241, 0x3, 0x3d, 
    0x3, 0x3d, 0x3, 0x3d, 0x6, 0x3d, 0x247, 0xa, 0x3d, 0xd, 0x3d, 0xe, 0x3d, 
    0x248, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x6, 0x3e, 0x24e, 0xa, 0x3e, 
    0xd, 0x3e, 0xe, 0x3e, 0x24f, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x6, 0x3f, 
    0x255, 0xa, 0x3f, 0xd, 0x3f, 0xe, 0x3f, 0x256, 0x3, 0x40, 0x3, 0x40, 
    0x3, 0x40, 0x6, 0x40, 0x25c, 0xa, 0x40, 0xd, 0x40, 0xe, 0x40, 0x25d, 
    0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x6, 0x41, 0x263, 0xa, 0x41, 0xd, 0x41, 
    0xe, 0x41, 0x264, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x6, 0x42, 0x26a, 
    0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 0x26b, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 
    0x6, 0x43, 0x271, 0xa, 0x43, 0xd, 0x43, 0xe, 0x43, 0x272, 0x3, 0x44, 
    0x3, 0x44, 0x3, 0x44, 0x6, 0x44, 0x278, 0xa, 0x44, 0xd, 0x44, 0xe, 0x44, 
    0x279, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x6, 0x45, 0x27f, 0xa, 0x45, 
    0xd, 0x45, 0xe, 0x45, 0x280, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x6, 0x46, 
    0x286, 0xa, 0x46, 0xd, 0x46, 0xe, 0x46, 0x287, 0x3, 0x47, 0x3, 0x47, 
    0x3, 0x47, 0x6, 0x47, 0x28d, 0xa, 0x47, 0xd, 0x47, 0xe, 0x47, 0x28e, 
    0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x6, 0x48, 0x294, 0xa, 0x48, 0xd, 0x48, 
    0xe, 0x48, 0x295, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x6, 0x49, 0x29b, 
    0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 0x29c, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 
    0x6, 0x4a, 0x2a2, 0xa, 0x4a, 0xd, 0x4a, 0xe, 0x4a, 0x2a3, 0x3, 0x4a, 
    0x2, 0x2, 0x4b, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 
    0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 
    0x46, 0x48, 0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 
    0x5e, 0x60, 0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 
    0x76, 0x78, 0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 
    0x8e, 0x90, 0x92, 0x2, 0x5, 0x3, 0x2, 0x1c, 0x1c, 0x3, 0x2, 0x1c, 0x1d, 
    0x3, 0x2, 0x1e, 0x1e, 0x2, 0x2a1, 0x2, 0x94, 0x3, 0x2, 0x2, 0x2, 0x4, 
    0x9f, 0x3, 0x2, 0x2, 0x2, 0x6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa, 0xad, 0x3, 0x2, 0x2, 0x2, 0xc, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0xe, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x10, 0xba, 0x3, 0x2, 0x2, 
    0x2, 0x12, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x14, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0x16, 0xca, 0x3, 0x2, 0x2, 0x2, 0x18, 0xce, 0x3, 0x2, 0x2, 0x2, 0x1a, 
    0xd7, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x101, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x116, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x121, 0x3, 0x2, 0x2, 0x2, 0x22, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x143, 0x3, 0x2, 0x2, 0x2, 0x26, 0x14c, 0x3, 0x2, 
    0x2, 0x2, 0x28, 0x153, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x156, 0x3, 0x2, 0x2, 
    0x2, 0x2c, 0x159, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x160, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x163, 0x3, 0x2, 0x2, 0x2, 0x32, 0x166, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x169, 0x3, 0x2, 0x2, 0x2, 0x36, 0x16c, 0x3, 0x2, 0x2, 0x2, 0x38, 0x17c, 
    0x3, 0x2, 0x2, 0x2, 0x3a, 0x184, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x18f, 0x3, 
    0x2, 0x2, 0x2, 0x3e, 0x191, 0x3, 0x2, 0x2, 0x2, 0x40, 0x194, 0x3, 0x2, 
    0x2, 0x2, 0x42, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x44, 0x1a3, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x1a6, 0x3, 0x2, 0x2, 0x2, 0x48, 0x1ad, 0x3, 0x2, 0x2, 0x2, 
    0x4a, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x1c4, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1c9, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x56, 0x1d3, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x1d9, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x1e6, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x1e8, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x1ef, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1f6, 0x3, 0x2, 0x2, 0x2, 
    0x64, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x66, 0x204, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x20b, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x212, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x219, 
    0x3, 0x2, 0x2, 0x2, 0x6e, 0x220, 0x3, 0x2, 0x2, 0x2, 0x70, 0x227, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x74, 0x235, 0x3, 0x2, 
    0x2, 0x2, 0x76, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x78, 0x243, 0x3, 0x2, 0x2, 
    0x2, 0x7a, 0x24a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x251, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x258, 0x3, 0x2, 0x2, 0x2, 0x80, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x266, 0x3, 0x2, 0x2, 0x2, 0x84, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x86, 0x274, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x282, 0x3, 
    0x2, 0x2, 0x2, 0x8c, 0x289, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x290, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x297, 0x3, 0x2, 0x2, 0x2, 0x92, 0x29e, 0x3, 0x2, 0x2, 
    0x2, 0x94, 0x95, 0x5, 0x4, 0x3, 0x2, 0x95, 0x97, 0x5, 0x8, 0x5, 0x2, 
    0x96, 0x98, 0x5, 0xc, 0x7, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9b, 
    0x5, 0x18, 0xd, 0x2, 0x9a, 0x9c, 0x5, 0xe, 0x8, 0x2, 0x9b, 0x9a, 0x3, 
    0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0x9d, 0x9e, 0x7, 0x2, 0x2, 0x3, 0x9e, 0x3, 0x3, 0x2, 0x2, 
    0x2, 0x9f, 0xa0, 0x7, 0x15, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x6, 0x4, 0x2, 
    0xa1, 0xa2, 0x7, 0x1c, 0x2, 0x2, 0xa2, 0x5, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa5, 0xa, 0x2, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 
    0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0x7, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x16, 
    0x2, 0x2, 0xa9, 0xaa, 0x5, 0xa, 0x6, 0x2, 0xaa, 0xab, 0x7, 0x1c, 0x2, 
    0x2, 0xab, 0x9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xae, 0xa, 0x2, 0x2, 0x2, 
    0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x17, 0x2, 0x2, 0xb2, 0xb3, 0x5, 
    0x10, 0x9, 0x2, 0xb3, 0xb4, 0x7, 0x1c, 0x2, 0x2, 0xb4, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0xb5, 0xb6, 0x7, 0x19, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x10, 0x9, 
    0x2, 0xb7, 0xb8, 0x7, 0x1c, 0x2, 0x2, 0xb8, 0xf, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xbb, 0x5, 0x12, 0xa, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 
    0x3, 0x2, 0x2, 0x2, 0xbd, 0x11, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x7, 
    0x1b, 0x2, 0x2, 0xbf, 0xc0, 0x5, 0x14, 0xb, 0x2, 0xc0, 0xc1, 0x7, 0x1d, 
    0x2, 0x2, 0xc1, 0xc2, 0x5, 0x16, 0xc, 0x2, 0xc2, 0xc3, 0x7, 0x1c, 0x2, 
    0x2, 0xc3, 0x13, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc6, 0xa, 0x3, 0x2, 0x2, 
    0xc5, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc7, 
    0xc5, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 0xa, 0x2, 0x2, 0x2, 0xca, 0xc9, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 
    0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0xce, 0xcf, 0x7, 0x18, 0x2, 0x2, 0xcf, 0xd1, 0x5, 0x1a, 0xe, 0x2, 
    0xd0, 0xd2, 0x5, 0x20, 0x11, 0x2, 0xd1, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xd3, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 
    0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 
    0x1a, 0x2, 0x2, 0xd6, 0x19, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x26, 
    0x14, 0x2, 0xd8, 0xda, 0x8, 0xe, 0x1, 0x2, 0xd9, 0xdb, 0x5, 0x28, 0x15, 
    0x2, 0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 
    0xdc, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xde, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x8, 0xe, 0x1, 0x2, 0xdf, 0xe0, 
    0x5, 0x2a, 0x16, 0x2, 0xe0, 0xe2, 0x8, 0xe, 0x1, 0x2, 0xe1, 0xe3, 0x5, 
    0x1c, 0xf, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x8, 0xe, 0x1, 0x2, 
    0xe7, 0xe9, 0x5, 0x38, 0x1d, 0x2, 0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe8, 
    0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 
    0x8, 0xe, 0x1, 0x2, 0xeb, 0xec, 0x5, 0x3a, 0x1e, 0x2, 0xec, 0xee, 0x8, 
    0xe, 0x1, 0x2, 0xed, 0xef, 0x5, 0x3c, 0x1f, 0x2, 0xee, 0xed, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 
    0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 
    0xf2, 0xf4, 0x8, 0xe, 0x1, 0x2, 0xf3, 0xf5, 0x5, 0x3e, 0x20, 0x2, 0xf4, 
    0xf3, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 
    0x3, 0x2, 0x2, 0x2, 0xf6, 0xfa, 0x8, 0xe, 0x1, 0x2, 0xf7, 0xf9, 0x5, 
    0x1e, 0x10, 0x2, 0xf8, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0xfa, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0xfe, 0x8, 0xe, 0x1, 0x2, 0xfe, 0xff, 0x5, 0x48, 0x25, 0x2, 0xff, 
    0x100, 0x8, 0xe, 0x1, 0x2, 0x100, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 
    0x5, 0x2c, 0x17, 0x2, 0x102, 0x104, 0x8, 0xf, 0x1, 0x2, 0x103, 0x105, 
    0x5, 0x2e, 0x18, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x106, 0x3, 0x2, 0x2, 0x2, 0x106, 0x108, 
    0x8, 0xf, 0x1, 0x2, 0x107, 0x109, 0x5, 0x30, 0x19, 0x2, 0x108, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x10a, 
    0x3, 0x2, 0x2, 0x2, 0x10a, 0x10c, 0x8, 0xf, 0x1, 0x2, 0x10b, 0x10d, 
    0x5, 0x32, 0x1a, 0x2, 0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 
    0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x110, 
    0x8, 0xf, 0x1, 0x2, 0x10f, 0x111, 0x5, 0x34, 0x1b, 0x2, 0x110, 0x10f, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x112, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x113, 0x8, 0xf, 0x1, 0x2, 0x113, 0x114, 
    0x5, 0x36, 0x1c, 0x2, 0x114, 0x115, 0x8, 0xf, 0x1, 0x2, 0x115, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x5, 0x40, 0x21, 0x2, 0x117, 0x119, 
    0x8, 0x10, 0x1, 0x2, 0x118, 0x11a, 0x5, 0x42, 0x22, 0x2, 0x119, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x8, 0x10, 0x1, 0x2, 0x11c, 0x11d, 
    0x5, 0x44, 0x23, 0x2, 0x11d, 0x11e, 0x8, 0x10, 0x1, 0x2, 0x11e, 0x11f, 
    0x5, 0x46, 0x24, 0x2, 0x11f, 0x120, 0x8, 0x10, 0x1, 0x2, 0x120, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x5, 0x4a, 0x26, 0x2, 0x122, 0x123, 
    0x8, 0x11, 0x1, 0x2, 0x123, 0x124, 0x5, 0x4c, 0x27, 0x2, 0x124, 0x126, 
    0x8, 0x11, 0x1, 0x2, 0x125, 0x127, 0x5, 0x4e, 0x28, 0x2, 0x126, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 
    0x3, 0x2, 0x2, 0x2, 0x12a, 0x12c, 0x8, 0x11, 0x1, 0x2, 0x12b, 0x12d, 
    0x5, 0x50, 0x29, 0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x130, 
    0x8, 0x11, 0x1, 0x2, 0x12f, 0x131, 0x5, 0x22, 0x12, 0x2, 0x130, 0x12f, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x132, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x8, 0x11, 0x1, 0x2, 0x133, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x5, 0x52, 0x2a, 0x2, 0x135, 0x136, 
    0x8, 0x12, 0x1, 0x2, 0x136, 0x137, 0x5, 0x54, 0x2b, 0x2, 0x137, 0x138, 
    0x8, 0x12, 0x1, 0x2, 0x138, 0x139, 0x5, 0x56, 0x2c, 0x2, 0x139, 0x13b, 
    0x8, 0x12, 0x1, 0x2, 0x13a, 0x13c, 0x5, 0x58, 0x2d, 0x2, 0x13b, 0x13a, 
    0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 
    0x3, 0x2, 0x2, 0x2, 0x13d, 0x13f, 0x8, 0x12, 0x1, 0x2, 0x13e, 0x140, 
    0x5, 0x24, 0x13, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 
    0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 
    0x8, 0x12, 0x1, 0x2, 0x142, 0x23, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
    0x5, 0x5a, 0x2e, 0x2, 0x144, 0x146, 0x8, 0x13, 0x1, 0x2, 0x145, 0x147, 
    0x5, 0x5c, 0x2f, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 
    0x3, 0x2, 0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 
    0x3, 0x2, 0x2, 0x2, 0x149, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 
    0x8, 0x13, 0x1, 0x2, 0x14b, 0x25, 0x3, 0x2, 0x2, 0x2, 0x14c, 0x14d, 
    0x7, 0x1e, 0x2, 0x2, 0x14d, 0x14f, 0x7, 0x3, 0x2, 0x2, 0x14e, 0x150, 
    0xa, 0x4, 0x2, 0x2, 0x14f, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 
    0x3, 0x2, 0x2, 0x2, 0x151, 0x14f, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x152, 0x27, 0x3, 0x2, 0x2, 0x2, 0x153, 0x154, 0x5, 
    0x5e, 0x30, 0x2, 0x154, 0x155, 0x8, 0x15, 0x1, 0x2, 0x155, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x157, 0x5, 0x60, 0x31, 0x2, 0x157, 0x158, 0x8, 
    0x16, 0x1, 0x2, 0x158, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x7, 
    0x1e, 0x2, 0x2, 0x15a, 0x15c, 0x7, 0x3, 0x2, 0x2, 0x15b, 0x15d, 0xa, 
    0x4, 0x2, 0x2, 0x15c, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x15d, 0x15e, 0x3, 
    0x2, 0x2, 0x2, 0x15e, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 0x3, 
    0x2, 0x2, 0x2, 0x15f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x5, 0x62, 
    0x32, 0x2, 0x161, 0x162, 0x8, 0x18, 0x1, 0x2, 0x162, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x163, 0x164, 0x5, 0x64, 0x33, 0x2, 0x164, 0x165, 0x8, 0x19, 
    0x1, 0x2, 0x165, 0x31, 0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x5, 0x66, 
    0x34, 0x2, 0x167, 0x168, 0x8, 0x1a, 0x1, 0x2, 0x168, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x169, 0x16a, 0x5, 0x68, 0x35, 0x2, 0x16a, 0x16b, 0x8, 0x1b, 
    0x1, 0x2, 0x16b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16d, 0x7, 0x1e, 
    0x2, 0x2, 0x16d, 0x16f, 0x7, 0x4, 0x2, 0x2, 0x16e, 0x170, 0xa, 0x4, 
    0x2, 0x2, 0x16f, 0x16e, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 0x2, 
    0x2, 0x2, 0x171, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x3, 0x2, 
    0x2, 0x2, 0x172, 0x37, 0x3, 0x2, 0x2, 0x2, 0x173, 0x174, 0x5, 0x6a, 
    0x36, 0x2, 0x174, 0x175, 0x8, 0x1d, 0x1, 0x2, 0x175, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x176, 0x177, 0x5, 0x6c, 0x37, 0x2, 0x177, 0x178, 0x8, 0x1d, 
    0x1, 0x2, 0x178, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x179, 0x17a, 0x5, 0x6e, 
    0x38, 0x2, 0x17a, 0x17b, 0x8, 0x1d, 0x1, 0x2, 0x17b, 0x17d, 0x3, 0x2, 
    0x2, 0x2, 0x17c, 0x173, 0x3, 0x2, 0x2, 0x2, 0x17c, 0x176, 0x3, 0x2, 
    0x2, 0x2, 0x17c, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17d, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x17e, 0x17f, 0x5, 0x70, 0x39, 0x2, 0x17f, 0x180, 0x8, 0x1e, 0x1, 
    0x2, 0x180, 0x185, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x5, 0x72, 0x3a, 
    0x2, 0x182, 0x183, 0x8, 0x1e, 0x1, 0x2, 0x183, 0x185, 0x3, 0x2, 0x2, 
    0x2, 0x184, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x184, 0x181, 0x3, 0x2, 0x2, 
    0x2, 0x185, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x186, 0x187, 0x5, 0x74, 0x3b, 
    0x2, 0x187, 0x188, 0x8, 0x1f, 0x1, 0x2, 0x188, 0x190, 0x3, 0x2, 0x2, 
    0x2, 0x189, 0x18a, 0x5, 0x76, 0x3c, 0x2, 0x18a, 0x18b, 0x8, 0x1f, 0x1, 
    0x2, 0x18b, 0x190, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x18d, 0x5, 0x78, 0x3d, 
    0x2, 0x18d, 0x18e, 0x8, 0x1f, 0x1, 0x2, 0x18e, 0x190, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x186, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x189, 0x3, 0x2, 0x2, 
    0x2, 0x18f, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x190, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x191, 0x192, 0x5, 0x7a, 0x3e, 0x2, 0x192, 0x193, 0x8, 0x20, 0x1, 0x2, 
    0x193, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x7, 0x1e, 0x2, 0x2, 
    0x195, 0x197, 0x7, 0x3, 0x2, 0x2, 0x196, 0x198, 0xa, 0x4, 0x2, 0x2, 
    0x197, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 0x2, 0x2, 0x2, 
    0x199, 0x197, 0x3, 0x2, 0x2, 0x2, 0x199, 0x19a, 0x3, 0x2, 0x2, 0x2, 
    0x19a, 0x41, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19c, 0x5, 0x7c, 0x3f, 0x2, 
    0x19c, 0x19d, 0x8, 0x22, 0x1, 0x2, 0x19d, 0x1a2, 0x3, 0x2, 0x2, 0x2, 
    0x19e, 0x19f, 0x5, 0x7e, 0x40, 0x2, 0x19f, 0x1a0, 0x8, 0x22, 0x1, 0x2, 
    0x1a0, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x19b, 0x3, 0x2, 0x2, 0x2, 
    0x1a1, 0x19e, 0x3, 0x2, 0x2, 0x2, 0x1a2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1a3, 
    0x1a4, 0x5, 0x80, 0x41, 0x2, 0x1a4, 0x1a5, 0x8, 0x23, 0x1, 0x2, 0x1a5, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 0x1e, 0x2, 0x2, 0x1a7, 
    0x1a9, 0x7, 0x4, 0x2, 0x2, 0x1a8, 0x1aa, 0xa, 0x4, 0x2, 0x2, 0x1a9, 
    0x1a8, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ab, 
    0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1ab, 0x1ac, 0x3, 0x2, 0x2, 0x2, 0x1ac, 
    0x47, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x7, 0x1e, 0x2, 0x2, 0x1ae, 
    0x1b0, 0x7, 0x4, 0x2, 0x2, 0x1af, 0x1b1, 0xa, 0x4, 0x2, 0x2, 0x1b0, 
    0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 
    0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x1b4, 0x1b5, 0x7, 0x1e, 0x2, 0x2, 0x1b5, 
    0x1b7, 0x7, 0x3, 0x2, 0x2, 0x1b6, 0x1b8, 0xa, 0x4, 0x2, 0x2, 0x1b7, 
    0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x1bb, 0x1bc, 0x5, 0x82, 0x42, 0x2, 0x1bc, 
    0x1bd, 0x8, 0x27, 0x1, 0x2, 0x1bd, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1be, 
    0x1bf, 0x5, 0x84, 0x43, 0x2, 0x1bf, 0x1c0, 0x8, 0x28, 0x1, 0x2, 0x1c0, 
    0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x1c2, 0x5, 0x86, 0x44, 0x2, 0x1c2, 
    0x1c3, 0x8, 0x28, 0x1, 0x2, 0x1c3, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c4, 
    0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c5, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 0x5, 0x88, 0x45, 0x2, 0x1c7, 
    0x1c8, 0x8, 0x29, 0x1, 0x2, 0x1c8, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
    0x1ca, 0x7, 0x1e, 0x2, 0x2, 0x1ca, 0x1cc, 0x7, 0x3, 0x2, 0x2, 0x1cb, 
    0x1cd, 0xa, 0x4, 0x2, 0x2, 0x1cc, 0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cd, 
    0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x1ce, 
    0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1cf, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 
    0x5, 0x8a, 0x46, 0x2, 0x1d1, 0x1d2, 0x8, 0x2b, 0x1, 0x2, 0x1d2, 0x55, 
    0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x5, 0x8c, 0x47, 0x2, 0x1d4, 0x1d5, 
    0x8, 0x2c, 0x1, 0x2, 0x1d5, 0x57, 0x3, 0x2, 0x2, 0x2, 0x1d6, 0x1d7, 
    0x5, 0x8e, 0x48, 0x2, 0x1d7, 0x1d8, 0x8, 0x2d, 0x1, 0x2, 0x1d8, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x1d9, 0x1da, 0x7, 0x1e, 0x2, 0x2, 0x1da, 0x1dc, 
    0x7, 0x3, 0x2, 0x2, 0x1db, 0x1dd, 0xa, 0x4, 0x2, 0x2, 0x1dc, 0x1db, 
    0x3, 0x2, 0x2, 0x2, 0x1dd, 0x1de, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1dc, 
    0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x1e0, 0x1e1, 0x5, 0x90, 0x49, 0x2, 0x1e1, 0x1e2, 0x8, 
    0x2f, 0x1, 0x2, 0x1e2, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x1e3, 0x1e4, 0x5, 
    0x92, 0x4a, 0x2, 0x1e4, 0x1e5, 0x8, 0x2f, 0x1, 0x2, 0x1e5, 0x1e7, 0x3, 
    0x2, 0x2, 0x2, 0x1e6, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e3, 0x3, 
    0x2, 0x2, 0x2, 0x1e7, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x1e, 
    0x2, 0x2, 0x1e9, 0x1eb, 0x7, 0x5, 0x2, 0x2, 0x1ea, 0x1ec, 0xa, 0x4, 
    0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x1e, 
    0x2, 0x2, 0x1f0, 0x1f2, 0x7, 0x6, 0x2, 0x2, 0x1f1, 0x1f3, 0xa, 0x4, 
    0x2, 0x2, 0x1f2, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 
    0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x1e, 
    0x2, 0x2, 0x1f7, 0x1f9, 0x7, 0x7, 0x2, 0x2, 0x1f8, 0x1fa, 0xa, 0x4, 
    0x2, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x1e, 
    0x2, 0x2, 0x1fe, 0x200, 0x7, 0x8, 0x2, 0x2, 0x1ff, 0x201, 0xa, 0x4, 
    0x2, 0x2, 0x200, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 
    0x2, 0x2, 0x202, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x65, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x7, 0x1e, 
    0x2, 0x2, 0x205, 0x207, 0x7, 0x9, 0x2, 0x2, 0x206, 0x208, 0xa, 0x4, 
    0x2, 0x2, 0x207, 0x206, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x7, 0x1e, 
    0x2, 0x2, 0x20c, 0x20e, 0x7, 0xa, 0x2, 0x2, 0x20d, 0x20f, 0xa, 0x4, 
    0x2, 0x2, 0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x69, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x7, 0x1e, 
    0x2, 0x2, 0x213, 0x215, 0x7, 0x8, 0x2, 0x2, 0x214, 0x216, 0xa, 0x4, 
    0x2, 0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x218, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x1e, 
    0x2, 0x2, 0x21a, 0x21c, 0x7, 0xb, 0x2, 0x2, 0x21b, 0x21d, 0xa, 0x4, 
    0x2, 0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 
    0x2, 0x2, 0x21e, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x21f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x7, 0x1e, 
    0x2, 0x2, 0x221, 0x223, 0x7, 0xc, 0x2, 0x2, 0x222, 0x224, 0xa, 0x4, 
    0x2, 0x2, 0x223, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x226, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x7, 0x1e, 
    0x2, 0x2, 0x228, 0x22a, 0x7, 0x7, 0x2, 0x2, 0x229, 0x22b, 0xa, 0x4, 
    0x2, 0x2, 0x22a, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x22c, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x71, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x7, 0x1e, 
    0x2, 0x2, 0x22f, 0x231, 0x7, 0xd, 0x2, 0x2, 0x230, 0x232, 0xa, 0x4, 
    0x2, 0x2, 0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 
    0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 0x2, 
    0x2, 0x2, 0x234, 0x73, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x7, 0x1e, 
    0x2, 0x2, 0x236, 0x238, 0x7, 0xe, 0x2, 0x2, 0x237, 0x239, 0xa, 0x4, 
    0x2, 0x2, 0x238, 0x237, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 0x2, 
    0x2, 0x2, 0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 
    0x2, 0x2, 0x23b, 0x75, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x1e, 
    0x2, 0x2, 0x23d, 0x23f, 0x7, 0xf, 0x2, 0x2, 0x23e, 0x240, 0xa, 0x4, 
    0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 
    0x2, 0x2, 0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 
    0x2, 0x2, 0x242, 0x77, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x7, 0x1e, 
    0x2, 0x2, 0x244, 0x246, 0x7, 0x10, 0x2, 0x2, 0x245, 0x247, 0xa, 0x4, 
    0x2, 0x2, 0x246, 0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 
    0x2, 0x2, 0x249, 0x79, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x1e, 
    0x2, 0x2, 0x24b, 0x24d, 0x7, 0xa, 0x2, 0x2, 0x24c, 0x24e, 0xa, 0x4, 
    0x2, 0x2, 0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 
    0x2, 0x2, 0x24f, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x250, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x7, 0x1e, 
    0x2, 0x2, 0x252, 0x254, 0x7, 0x11, 0x2, 0x2, 0x253, 0x255, 0xa, 0x4, 
    0x2, 0x2, 0x254, 0x253, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x3, 0x2, 
    0x2, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 
    0x2, 0x2, 0x257, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x7, 0x1e, 
    0x2, 0x2, 0x259, 0x25b, 0x7, 0x9, 0x2, 0x2, 0x25a, 0x25c, 0xa, 0x4, 
    0x2, 0x2, 0x25b, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 0x2, 
    0x2, 0x2, 0x25e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x25f, 0x260, 0x7, 0x1e, 
    0x2, 0x2, 0x260, 0x262, 0x7, 0x5, 0x2, 0x2, 0x261, 0x263, 0xa, 0x4, 
    0x2, 0x2, 0x262, 0x261, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x3, 0x2, 
    0x2, 0x2, 0x264, 0x262, 0x3, 0x2, 0x2, 0x2, 0x264, 0x265, 0x3, 0x2, 
    0x2, 0x2, 0x265, 0x81, 0x3, 0x2, 0x2, 0x2, 0x266, 0x267, 0x7, 0x1e, 
    0x2, 0x2, 0x267, 0x269, 0x7, 0x5, 0x2, 0x2, 0x268, 0x26a, 0xa, 0x4, 
    0x2, 0x2, 0x269, 0x268, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 0x3, 0x2, 
    0x2, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 0x3, 0x2, 
    0x2, 0x2, 0x26c, 0x83, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 0x7, 0x1e, 
    0x2, 0x2, 0x26e, 0x270, 0x7, 0x7, 0x2, 0x2, 0x26f, 0x271, 0xa, 0x4, 
    0x2, 0x2, 0x270, 0x26f, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x3, 0x2, 
    0x2, 0x2, 0x272, 0x270, 0x3, 0x2, 0x2, 0x2, 0x272, 0x273, 0x3, 0x2, 
    0x2, 0x2, 0x273, 0x85, 0x3, 0x2, 0x2, 0x2, 0x274, 0x275, 0x7, 0x1e, 
    0x2, 0x2, 0x275, 0x277, 0x7, 0xd, 0x2, 0x2, 0x276, 0x278, 0xa, 0x4, 
    0x2, 0x2, 0x277, 0x276, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x3, 0x2, 
    0x2, 0x2, 0x279, 0x277, 0x3, 0x2, 0x2, 0x2, 0x279, 0x27a, 0x3, 0x2, 
    0x2, 0x2, 0x27a, 0x87, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 0x7, 0x1e, 
    0x2, 0x2, 0x27c, 0x27e, 0x7, 0x8, 0x2, 0x2, 0x27d, 0x27f, 0xa, 0x4, 
    0x2, 0x2, 0x27e, 0x27d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x3, 0x2, 
    0x2, 0x2, 0x280, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x280, 0x281, 0x3, 0x2, 
    0x2, 0x2, 0x281, 0x89, 0x3, 0x2, 0x2, 0x2, 0x282, 0x283, 0x7, 0x1e, 
    0x2, 0x2, 0x283, 0x285, 0x7, 0x12, 0x2, 0x2, 0x284, 0x286, 0xa, 0x4, 
    0x2, 0x2, 0x285, 0x284, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x3, 0x2, 
    0x2, 0x2, 0x287, 0x285, 0x3, 0x2, 0x2, 0x2, 0x287, 0x288, 0x3, 0x2, 
    0x2, 0x2, 0x288, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x289, 0x28a, 0x7, 0x1e, 
    0x2, 0x2, 0x28a, 0x28c, 0x7, 0x13, 0x2, 0x2, 0x28b, 0x28d, 0xa, 0x4, 
    0x2, 0x2, 0x28c, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x3, 0x2, 
    0x2, 0x2, 0x28e, 0x28c, 0x3, 0x2, 0x2, 0x2, 0x28e, 0x28f, 0x3, 0x2, 
    0x2, 0x2, 0x28f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x290, 0x291, 0x7, 0x1e, 
    0x2, 0x2, 0x291, 0x293, 0x7, 0x14, 0x2, 0x2, 0x292, 0x294, 0xa, 0x4, 
    0x2, 0x2, 0x293, 0x292, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x3, 0x2, 
    0x2, 0x2, 0x295, 0x293, 0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x3, 0x2, 
    0x2, 0x2, 0x296, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 0x7, 0x1e, 
    0x2, 0x2, 0x298, 0x29a, 0x7, 0x7, 0x2, 0x2, 0x299, 0x29b, 0xa, 0x4, 
    0x2, 0x2, 0x29a, 0x299, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x3, 0x2, 
    0x2, 0x2, 0x29c, 0x29a, 0x3, 0x2, 0x2, 0x2, 0x29c, 0x29d, 0x3, 0x2, 
    0x2, 0x2, 0x29d, 0x91, 0x3, 0x2, 0x2, 0x2, 0x29e, 0x29f, 0x7, 0x1e, 
    0x2, 0x2, 0x29f, 0x2a1, 0x7, 0xd, 0x2, 0x2, 0x2a0, 0x2a2, 0xa, 0x4, 
    0x2, 0x2, 0x2a1, 0x2a0, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x3, 0x2, 
    0x2, 0x2, 0x2a3, 0x2a1, 0x3, 0x2, 0x2, 0x2, 0x2a3, 0x2a4, 0x3, 0x2, 
    0x2, 0x2, 0x2a4, 0x93, 0x3, 0x2, 0x2, 0x2, 0x45, 0x97, 0x9b, 0xa6, 0xaf, 
    0xbc, 0xc7, 0xcc, 0xd3, 0xdc, 0xe4, 0xe8, 0xf0, 0xf4, 0xfa, 0x104, 0x108, 
    0x10c, 0x110, 0x119, 0x128, 0x12c, 0x130, 0x13b, 0x13f, 0x148, 0x151, 
    0x15e, 0x171, 0x17c, 0x184, 0x18f, 0x199, 0x1a1, 0x1ab, 0x1b2, 0x1b9, 
    0x1c4, 0x1ce, 0x1de, 0x1e6, 0x1ed, 0x1f4, 0x1fb, 0x202, 0x209, 0x210, 
    0x217, 0x21e, 0x225, 0x22c, 0x233, 0x23a, 0x241, 0x248, 0x24f, 0x256, 
    0x25d, 0x264, 0x26b, 0x272, 0x279, 0x280, 0x287, 0x28e, 0x295, 0x29c, 
    0x2a3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT505Parser::Initializer SwiftMtParser_MT505Parser::_init;
