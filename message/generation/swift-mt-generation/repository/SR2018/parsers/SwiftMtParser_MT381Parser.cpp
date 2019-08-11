
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT381Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT381.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT381Listener.h"

#include "SwiftMtParser_MT381Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
using namespace antlr4;

SwiftMtParser_MT381Parser::SwiftMtParser_MT381Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT381Parser::~SwiftMtParser_MT381Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT381Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT381.g4";
}

const std::vector<std::string>& SwiftMtParser_MT381Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT381Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::BhContext* SwiftMtParser_MT381Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT381Parser::BhContext>(0);
}

SwiftMtParser_MT381Parser::AhContext* SwiftMtParser_MT381Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT381Parser::AhContext>(0);
}

SwiftMtParser_MT381Parser::MtContext* SwiftMtParser_MT381Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT381Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT381Parser::EOF, 0);
}

SwiftMtParser_MT381Parser::UhContext* SwiftMtParser_MT381Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT381Parser::UhContext>(0);
}

SwiftMtParser_MT381Parser::TrContext* SwiftMtParser_MT381Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT381Parser::TrContext>(0);
}


size_t SwiftMtParser_MT381Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleMessage;
}

void SwiftMtParser_MT381Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT381Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT381Parser::MessageContext* SwiftMtParser_MT381Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT381Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    bh();
    setState(137);
    ah();
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT381Parser::TAG_UH) {
      setState(138);
      uh();
    }
    setState(141);
    mt();
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT381Parser::TAG_TR) {
      setState(142);
      tr();
    }
    setState(145);
    match(SwiftMtParser_MT381Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT381Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT381Parser::TAG_BH, 0);
}

SwiftMtParser_MT381Parser::Bh_contentContext* SwiftMtParser_MT381Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT381Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT381Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleBh;
}

void SwiftMtParser_MT381Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT381Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT381Parser::BhContext* SwiftMtParser_MT381Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT381Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    match(SwiftMtParser_MT381Parser::TAG_BH);
    setState(148);
    bh_content();
    setState(149);
    match(SwiftMtParser_MT381Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT381Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, i);
}


size_t SwiftMtParser_MT381Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleBh_content;
}

void SwiftMtParser_MT381Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT381Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT381Parser::Bh_contentContext* SwiftMtParser_MT381Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT381Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(151);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(154); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT381Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT381Parser::TAG_AH, 0);
}

SwiftMtParser_MT381Parser::Ah_contentContext* SwiftMtParser_MT381Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT381Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT381Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleAh;
}

void SwiftMtParser_MT381Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT381Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT381Parser::AhContext* SwiftMtParser_MT381Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT381Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(SwiftMtParser_MT381Parser::TAG_AH);
    setState(157);
    ah_content();
    setState(158);
    match(SwiftMtParser_MT381Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT381Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, i);
}


size_t SwiftMtParser_MT381Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleAh_content;
}

void SwiftMtParser_MT381Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT381Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT381Parser::Ah_contentContext* SwiftMtParser_MT381Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT381Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(161); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(160);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(163); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT381Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT381Parser::TAG_UH, 0);
}

SwiftMtParser_MT381Parser::Sys_blockContext* SwiftMtParser_MT381Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT381Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT381Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleUh;
}

void SwiftMtParser_MT381Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT381Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT381Parser::UhContext* SwiftMtParser_MT381Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT381Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(SwiftMtParser_MT381Parser::TAG_UH);
    setState(166);
    sys_block();
    setState(167);
    match(SwiftMtParser_MT381Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT381Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT381Parser::TAG_TR, 0);
}

SwiftMtParser_MT381Parser::Sys_blockContext* SwiftMtParser_MT381Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT381Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT381Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleTr;
}

void SwiftMtParser_MT381Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT381Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT381Parser::TrContext* SwiftMtParser_MT381Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT381Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(SwiftMtParser_MT381Parser::TAG_TR);
    setState(170);
    sys_block();
    setState(171);
    match(SwiftMtParser_MT381Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT381Parser::Sys_elementContext *> SwiftMtParser_MT381Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT381Parser::Sys_elementContext>();
}

SwiftMtParser_MT381Parser::Sys_elementContext* SwiftMtParser_MT381Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT381Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT381Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSys_block;
}

void SwiftMtParser_MT381Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT381Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT381Parser::Sys_blockContext* SwiftMtParser_MT381Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT381Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(173);
      sys_element();
      setState(176); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT381Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT381Parser::LBRACE, 0);
}

SwiftMtParser_MT381Parser::Sys_element_keyContext* SwiftMtParser_MT381Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT381Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT381Parser::COLON, 0);
}

SwiftMtParser_MT381Parser::Sys_element_contentContext* SwiftMtParser_MT381Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT381Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT381Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSys_element;
}

void SwiftMtParser_MT381Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT381Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT381Parser::Sys_elementContext* SwiftMtParser_MT381Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT381Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(SwiftMtParser_MT381Parser::LBRACE);
    setState(179);
    sys_element_key();
    setState(180);
    match(SwiftMtParser_MT381Parser::COLON);
    setState(181);
    sys_element_content();
    setState(182);
    match(SwiftMtParser_MT381Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT381Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT381Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, i);
}


size_t SwiftMtParser_MT381Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSys_element_key;
}

void SwiftMtParser_MT381Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT381Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT381Parser::Sys_element_keyContext* SwiftMtParser_MT381Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT381Parser::RuleSys_element_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(184);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::RBRACE

      || _la == SwiftMtParser_MT381Parser::COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(187); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT381Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::RBRACE, i);
}


size_t SwiftMtParser_MT381Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSys_element_content;
}

void SwiftMtParser_MT381Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT381Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT381Parser::Sys_element_contentContext* SwiftMtParser_MT381Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT381Parser::RuleSys_element_content);
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
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::RBRACE)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT381Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT381Parser::TAG_MT, 0);
}

SwiftMtParser_MT381Parser::Seq_AContext* SwiftMtParser_MT381Parser::MtContext::seq_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Seq_AContext>(0);
}

SwiftMtParser_MT381Parser::Seq_BContext* SwiftMtParser_MT381Parser::MtContext::seq_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Seq_BContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT381Parser::MT_END, 0);
}

SwiftMtParser_MT381Parser::Seq_CContext* SwiftMtParser_MT381Parser::MtContext::seq_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Seq_CContext>(0);
}


size_t SwiftMtParser_MT381Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleMt;
}

void SwiftMtParser_MT381Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT381Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT381Parser::MtContext* SwiftMtParser_MT381Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT381Parser::RuleMt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(SwiftMtParser_MT381Parser::TAG_MT);
    setState(195);
    seq_A();
    setState(196);
    seq_B();
    setState(198);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT381Parser::START_OF_FIELD) {
      setState(197);
      seq_C();
    }
    setState(200);
    match(SwiftMtParser_MT381Parser::MT_END);
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

SwiftMtParser_MT381Parser::Seq_AContext::Seq_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_16R_AContext* SwiftMtParser_MT381Parser::Seq_AContext::fld_16R_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16R_AContext>(0);
}

SwiftMtParser_MT381Parser::Fld_20C_AContext* SwiftMtParser_MT381Parser::Seq_AContext::fld_20C_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_20C_AContext>(0);
}

SwiftMtParser_MT381Parser::Fld_23G_AContext* SwiftMtParser_MT381Parser::Seq_AContext::fld_23G_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_23G_AContext>(0);
}

SwiftMtParser_MT381Parser::Fld_16S_AContext* SwiftMtParser_MT381Parser::Seq_AContext::fld_16S_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16S_AContext>(0);
}

SwiftMtParser_MT381Parser::Fld_22H_AContext* SwiftMtParser_MT381Parser::Seq_AContext::fld_22H_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_22H_AContext>(0);
}

std::vector<SwiftMtParser_MT381Parser::Seq_A1Context *> SwiftMtParser_MT381Parser::Seq_AContext::seq_A1() {
  return getRuleContexts<SwiftMtParser_MT381Parser::Seq_A1Context>();
}

SwiftMtParser_MT381Parser::Seq_A1Context* SwiftMtParser_MT381Parser::Seq_AContext::seq_A1(size_t i) {
  return getRuleContext<SwiftMtParser_MT381Parser::Seq_A1Context>(i);
}


size_t SwiftMtParser_MT381Parser::Seq_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSeq_A;
}

void SwiftMtParser_MT381Parser::Seq_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A(this);
}

void SwiftMtParser_MT381Parser::Seq_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A(this);
}

SwiftMtParser_MT381Parser::Seq_AContext* SwiftMtParser_MT381Parser::seq_A() {
  Seq_AContext *_localctx = _tracker.createInstance<Seq_AContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtParser_MT381Parser::RuleSeq_A);
   _localctx->elem.set_tag("A"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(202);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext = fld_16R_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext->fld); 
    setState(204);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext = fld_20C_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext->fld); 
    setState(206);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext = fld_23G_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext->fld); 
    setState(209);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(208);
      dynamic_cast<Seq_AContext *>(_localctx)->fld_22H_AContext = fld_22H_A();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_22H_AContext->fld); 
    setState(215);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(212);
        dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context = seq_A1(); 
      }
      setState(217);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context->elem); 
    setState(219);
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

SwiftMtParser_MT381Parser::Seq_A1Context::Seq_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_16R_A1Context* SwiftMtParser_MT381Parser::Seq_A1Context::fld_16R_A1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16R_A1Context>(0);
}

SwiftMtParser_MT381Parser::Fld_20C_A1Context* SwiftMtParser_MT381Parser::Seq_A1Context::fld_20C_A1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_20C_A1Context>(0);
}

SwiftMtParser_MT381Parser::Fld_16S_A1Context* SwiftMtParser_MT381Parser::Seq_A1Context::fld_16S_A1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16S_A1Context>(0);
}

SwiftMtParser_MT381Parser::Fld_13a_A1Context* SwiftMtParser_MT381Parser::Seq_A1Context::fld_13a_A1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_13a_A1Context>(0);
}


size_t SwiftMtParser_MT381Parser::Seq_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSeq_A1;
}

void SwiftMtParser_MT381Parser::Seq_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A1(this);
}

void SwiftMtParser_MT381Parser::Seq_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A1(this);
}

SwiftMtParser_MT381Parser::Seq_A1Context* SwiftMtParser_MT381Parser::seq_A1() {
  Seq_A1Context *_localctx = _tracker.createInstance<Seq_A1Context>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtParser_MT381Parser::RuleSeq_A1);
   _localctx->elem.set_tag("A1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context = fld_16R_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context->fld); 
    setState(225);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(224);
      dynamic_cast<Seq_A1Context *>(_localctx)->fld_13a_A1Context = fld_13a_A1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_13a_A1Context->fld); 
    setState(228);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context = fld_20C_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context->fld); 
    setState(230);
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

//----------------- Seq_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Seq_BContext::Seq_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_16R_BContext* SwiftMtParser_MT381Parser::Seq_BContext::fld_16R_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16R_BContext>(0);
}

SwiftMtParser_MT381Parser::Fld_92B_BContext* SwiftMtParser_MT381Parser::Seq_BContext::fld_92B_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_92B_BContext>(0);
}

SwiftMtParser_MT381Parser::Seq_B1Context* SwiftMtParser_MT381Parser::Seq_BContext::seq_B1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Seq_B1Context>(0);
}

SwiftMtParser_MT381Parser::Fld_16S_BContext* SwiftMtParser_MT381Parser::Seq_BContext::fld_16S_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16S_BContext>(0);
}

std::vector<SwiftMtParser_MT381Parser::Fld_98a_BContext *> SwiftMtParser_MT381Parser::Seq_BContext::fld_98a_B() {
  return getRuleContexts<SwiftMtParser_MT381Parser::Fld_98a_BContext>();
}

SwiftMtParser_MT381Parser::Fld_98a_BContext* SwiftMtParser_MT381Parser::Seq_BContext::fld_98a_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_98a_BContext>(i);
}

std::vector<SwiftMtParser_MT381Parser::Fld_19B_BContext *> SwiftMtParser_MT381Parser::Seq_BContext::fld_19B_B() {
  return getRuleContexts<SwiftMtParser_MT381Parser::Fld_19B_BContext>();
}

SwiftMtParser_MT381Parser::Fld_19B_BContext* SwiftMtParser_MT381Parser::Seq_BContext::fld_19B_B(size_t i) {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_19B_BContext>(i);
}

SwiftMtParser_MT381Parser::Fld_94C_BContext* SwiftMtParser_MT381Parser::Seq_BContext::fld_94C_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_94C_BContext>(0);
}

SwiftMtParser_MT381Parser::Seq_B2Context* SwiftMtParser_MT381Parser::Seq_BContext::seq_B2() {
  return getRuleContext<SwiftMtParser_MT381Parser::Seq_B2Context>(0);
}


size_t SwiftMtParser_MT381Parser::Seq_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSeq_B;
}

void SwiftMtParser_MT381Parser::Seq_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B(this);
}

void SwiftMtParser_MT381Parser::Seq_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B(this);
}

SwiftMtParser_MT381Parser::Seq_BContext* SwiftMtParser_MT381Parser::seq_B() {
  Seq_BContext *_localctx = _tracker.createInstance<Seq_BContext>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtParser_MT381Parser::RuleSeq_B);
   _localctx->elem.set_tag("B"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(233);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext = fld_16R_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext->fld); 
    setState(236); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(235);
              dynamic_cast<Seq_BContext *>(_localctx)->fld_98a_BContext = fld_98a_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(238); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_98a_BContext->fld); 
    setState(242); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(241);
              dynamic_cast<Seq_BContext *>(_localctx)->fld_19B_BContext = fld_19B_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(244); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_19B_BContext->fld); 
    setState(247);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_92B_BContext = fld_92B_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_92B_BContext->fld); 
    setState(250);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      setState(249);
      dynamic_cast<Seq_BContext *>(_localctx)->fld_94C_BContext = fld_94C_B();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_94C_BContext->fld); 
    setState(253);
    dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context = seq_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context->elem); 
    setState(256);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(255);
      dynamic_cast<Seq_BContext *>(_localctx)->seq_B2Context = seq_B2();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->seq_B2Context->elem); 
    setState(259);
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

SwiftMtParser_MT381Parser::Seq_B1Context::Seq_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_16R_B1Context* SwiftMtParser_MT381Parser::Seq_B1Context::fld_16R_B1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16R_B1Context>(0);
}

SwiftMtParser_MT381Parser::Fld_97A_B1Context* SwiftMtParser_MT381Parser::Seq_B1Context::fld_97A_B1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_97A_B1Context>(0);
}

SwiftMtParser_MT381Parser::Fld_16S_B1Context* SwiftMtParser_MT381Parser::Seq_B1Context::fld_16S_B1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16S_B1Context>(0);
}

SwiftMtParser_MT381Parser::Fld_95a_B1Context* SwiftMtParser_MT381Parser::Seq_B1Context::fld_95a_B1() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_95a_B1Context>(0);
}


size_t SwiftMtParser_MT381Parser::Seq_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSeq_B1;
}

void SwiftMtParser_MT381Parser::Seq_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B1(this);
}

void SwiftMtParser_MT381Parser::Seq_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B1(this);
}

SwiftMtParser_MT381Parser::Seq_B1Context* SwiftMtParser_MT381Parser::seq_B1() {
  Seq_B1Context *_localctx = _tracker.createInstance<Seq_B1Context>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtParser_MT381Parser::RuleSeq_B1);
   _localctx->elem.set_tag("B1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(262);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context = fld_16R_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context->fld); 
    setState(265);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      setState(264);
      dynamic_cast<Seq_B1Context *>(_localctx)->fld_95a_B1Context = fld_95a_B1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_95a_B1Context->fld); 
    setState(268);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_97A_B1Context = fld_97A_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_97A_B1Context->fld); 
    setState(270);
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

//----------------- Seq_B2Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Seq_B2Context::Seq_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_16R_B2Context* SwiftMtParser_MT381Parser::Seq_B2Context::fld_16R_B2() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16R_B2Context>(0);
}

SwiftMtParser_MT381Parser::Fld_24B_B2Context* SwiftMtParser_MT381Parser::Seq_B2Context::fld_24B_B2() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_24B_B2Context>(0);
}

SwiftMtParser_MT381Parser::Fld_16S_B2Context* SwiftMtParser_MT381Parser::Seq_B2Context::fld_16S_B2() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16S_B2Context>(0);
}

SwiftMtParser_MT381Parser::Fld_70D_B2Context* SwiftMtParser_MT381Parser::Seq_B2Context::fld_70D_B2() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_70D_B2Context>(0);
}


size_t SwiftMtParser_MT381Parser::Seq_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSeq_B2;
}

void SwiftMtParser_MT381Parser::Seq_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_B2(this);
}

void SwiftMtParser_MT381Parser::Seq_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_B2(this);
}

SwiftMtParser_MT381Parser::Seq_B2Context* SwiftMtParser_MT381Parser::seq_B2() {
  Seq_B2Context *_localctx = _tracker.createInstance<Seq_B2Context>(_ctx, getState());
  enterRule(_localctx, 32, SwiftMtParser_MT381Parser::RuleSeq_B2);
   _localctx->elem.set_tag("B2"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(273);
    dynamic_cast<Seq_B2Context *>(_localctx)->fld_16R_B2Context = fld_16R_B2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B2Context *>(_localctx)->fld_16R_B2Context->fld); 
    setState(275);
    dynamic_cast<Seq_B2Context *>(_localctx)->fld_24B_B2Context = fld_24B_B2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B2Context *>(_localctx)->fld_24B_B2Context->fld); 
    setState(278);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(277);
      dynamic_cast<Seq_B2Context *>(_localctx)->fld_70D_B2Context = fld_70D_B2();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B2Context *>(_localctx)->fld_70D_B2Context->fld); 
    setState(281);
    dynamic_cast<Seq_B2Context *>(_localctx)->fld_16S_B2Context = fld_16S_B2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B2Context *>(_localctx)->fld_16S_B2Context->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Seq_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Seq_CContext::Seq_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_16R_CContext* SwiftMtParser_MT381Parser::Seq_CContext::fld_16R_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16R_CContext>(0);
}

SwiftMtParser_MT381Parser::Fld_16S_CContext* SwiftMtParser_MT381Parser::Seq_CContext::fld_16S_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_16S_CContext>(0);
}

SwiftMtParser_MT381Parser::Fld_35B_CContext* SwiftMtParser_MT381Parser::Seq_CContext::fld_35B_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_35B_CContext>(0);
}

SwiftMtParser_MT381Parser::Fld_36B_CContext* SwiftMtParser_MT381Parser::Seq_CContext::fld_36B_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_36B_CContext>(0);
}

SwiftMtParser_MT381Parser::Fld_22F_CContext* SwiftMtParser_MT381Parser::Seq_CContext::fld_22F_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_22F_CContext>(0);
}

SwiftMtParser_MT381Parser::Fld_70E_CContext* SwiftMtParser_MT381Parser::Seq_CContext::fld_70E_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_70E_CContext>(0);
}


size_t SwiftMtParser_MT381Parser::Seq_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleSeq_C;
}

void SwiftMtParser_MT381Parser::Seq_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_C(this);
}

void SwiftMtParser_MT381Parser::Seq_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_C(this);
}

SwiftMtParser_MT381Parser::Seq_CContext* SwiftMtParser_MT381Parser::seq_C() {
  Seq_CContext *_localctx = _tracker.createInstance<Seq_CContext>(_ctx, getState());
  enterRule(_localctx, 34, SwiftMtParser_MT381Parser::RuleSeq_C);
   _localctx->elem.set_tag("C"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(284);
    dynamic_cast<Seq_CContext *>(_localctx)->fld_16R_CContext = fld_16R_C();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_16R_CContext->fld); 
    setState(287);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(286);
      dynamic_cast<Seq_CContext *>(_localctx)->fld_35B_CContext = fld_35B_C();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_35B_CContext->fld); 
    setState(291);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(290);
      dynamic_cast<Seq_CContext *>(_localctx)->fld_36B_CContext = fld_36B_C();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_36B_CContext->fld); 
    setState(295);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(294);
      dynamic_cast<Seq_CContext *>(_localctx)->fld_22F_CContext = fld_22F_C();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_22F_CContext->fld); 
    setState(299);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      setState(298);
      dynamic_cast<Seq_CContext *>(_localctx)->fld_70E_CContext = fld_70E_C();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_70E_CContext->fld); 
    setState(302);
    dynamic_cast<Seq_CContext *>(_localctx)->fld_16S_CContext = fld_16S_C();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_16S_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_AContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16R_AContext::Fld_16R_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16R_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16R_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16R_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16R_A;
}

void SwiftMtParser_MT381Parser::Fld_16R_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A(this);
}

void SwiftMtParser_MT381Parser::Fld_16R_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A(this);
}

SwiftMtParser_MT381Parser::Fld_16R_AContext* SwiftMtParser_MT381Parser::fld_16R_A() {
  Fld_16R_AContext *_localctx = _tracker.createInstance<Fld_16R_AContext>(_ctx, getState());
  enterRule(_localctx, 36, SwiftMtParser_MT381Parser::RuleFld_16R_A);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(305);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(306);
    match(SwiftMtParser_MT381Parser::T__0);
    setState(308); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(307);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_AContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_20C_AContext::Fld_20C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_20C_A_CContext* SwiftMtParser_MT381Parser::Fld_20C_AContext::fld_20C_A_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_20C_A_CContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_20C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_20C_A;
}

void SwiftMtParser_MT381Parser::Fld_20C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A(this);
}

void SwiftMtParser_MT381Parser::Fld_20C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A(this);
}

SwiftMtParser_MT381Parser::Fld_20C_AContext* SwiftMtParser_MT381Parser::fld_20C_A() {
  Fld_20C_AContext *_localctx = _tracker.createInstance<Fld_20C_AContext>(_ctx, getState());
  enterRule(_localctx, 38, SwiftMtParser_MT381Parser::RuleFld_20C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(312);
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

SwiftMtParser_MT381Parser::Fld_23G_AContext::Fld_23G_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_23G_A_GContext* SwiftMtParser_MT381Parser::Fld_23G_AContext::fld_23G_A_G() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_23G_A_GContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_23G_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_23G_A;
}

void SwiftMtParser_MT381Parser::Fld_23G_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A(this);
}

void SwiftMtParser_MT381Parser::Fld_23G_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A(this);
}

SwiftMtParser_MT381Parser::Fld_23G_AContext* SwiftMtParser_MT381Parser::fld_23G_A() {
  Fld_23G_AContext *_localctx = _tracker.createInstance<Fld_23G_AContext>(_ctx, getState());
  enterRule(_localctx, 40, SwiftMtParser_MT381Parser::RuleFld_23G_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(315);
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

//----------------- Fld_22H_AContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_22H_AContext::Fld_22H_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_22H_A_HContext* SwiftMtParser_MT381Parser::Fld_22H_AContext::fld_22H_A_H() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_22H_A_HContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_22H_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_22H_A;
}

void SwiftMtParser_MT381Parser::Fld_22H_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_A(this);
}

void SwiftMtParser_MT381Parser::Fld_22H_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_A(this);
}

SwiftMtParser_MT381Parser::Fld_22H_AContext* SwiftMtParser_MT381Parser::fld_22H_A() {
  Fld_22H_AContext *_localctx = _tracker.createInstance<Fld_22H_AContext>(_ctx, getState());
  enterRule(_localctx, 42, SwiftMtParser_MT381Parser::RuleFld_22H_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(318);
    dynamic_cast<Fld_22H_AContext *>(_localctx)->fld_22H_A_HContext = fld_22H_A_H();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_22H_AContext *>(_localctx)->fld_22H_A_HContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A1Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16R_A1Context::Fld_16R_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16R_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16R_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16R_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16R_A1;
}

void SwiftMtParser_MT381Parser::Fld_16R_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A1(this);
}

void SwiftMtParser_MT381Parser::Fld_16R_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A1(this);
}

SwiftMtParser_MT381Parser::Fld_16R_A1Context* SwiftMtParser_MT381Parser::fld_16R_A1() {
  Fld_16R_A1Context *_localctx = _tracker.createInstance<Fld_16R_A1Context>(_ctx, getState());
  enterRule(_localctx, 44, SwiftMtParser_MT381Parser::RuleFld_16R_A1);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(322);
    match(SwiftMtParser_MT381Parser::T__0);
    setState(324); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(323);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(326); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_13a_A1Context::Fld_13a_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_13a_A1_AContext* SwiftMtParser_MT381Parser::Fld_13a_A1Context::fld_13a_A1_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_13a_A1_AContext>(0);
}

SwiftMtParser_MT381Parser::Fld_13a_A1_BContext* SwiftMtParser_MT381Parser::Fld_13a_A1Context::fld_13a_A1_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_13a_A1_BContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_13a_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_13a_A1;
}

void SwiftMtParser_MT381Parser::Fld_13a_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1(this);
}

void SwiftMtParser_MT381Parser::Fld_13a_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1(this);
}

SwiftMtParser_MT381Parser::Fld_13a_A1Context* SwiftMtParser_MT381Parser::fld_13a_A1() {
  Fld_13a_A1Context *_localctx = _tracker.createInstance<Fld_13a_A1Context>(_ctx, getState());
  enterRule(_localctx, 46, SwiftMtParser_MT381Parser::RuleFld_13a_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(334);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(328);
      dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_AContext = fld_13a_A1_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(331);
      dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_BContext = fld_13a_A1_B();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_BContext->fld); 
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

SwiftMtParser_MT381Parser::Fld_20C_A1Context::Fld_20C_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_20C_A1_CContext* SwiftMtParser_MT381Parser::Fld_20C_A1Context::fld_20C_A1_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_20C_A1_CContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_20C_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_20C_A1;
}

void SwiftMtParser_MT381Parser::Fld_20C_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1(this);
}

void SwiftMtParser_MT381Parser::Fld_20C_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1(this);
}

SwiftMtParser_MT381Parser::Fld_20C_A1Context* SwiftMtParser_MT381Parser::fld_20C_A1() {
  Fld_20C_A1Context *_localctx = _tracker.createInstance<Fld_20C_A1Context>(_ctx, getState());
  enterRule(_localctx, 48, SwiftMtParser_MT381Parser::RuleFld_20C_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
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

SwiftMtParser_MT381Parser::Fld_16S_A1Context::Fld_16S_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16S_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16S_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16S_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16S_A1;
}

void SwiftMtParser_MT381Parser::Fld_16S_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A1(this);
}

void SwiftMtParser_MT381Parser::Fld_16S_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A1(this);
}

SwiftMtParser_MT381Parser::Fld_16S_A1Context* SwiftMtParser_MT381Parser::fld_16S_A1() {
  Fld_16S_A1Context *_localctx = _tracker.createInstance<Fld_16S_A1Context>(_ctx, getState());
  enterRule(_localctx, 50, SwiftMtParser_MT381Parser::RuleFld_16S_A1);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(339);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(340);
    match(SwiftMtParser_MT381Parser::T__1);
    setState(342); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(341);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(344); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_AContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16S_AContext::Fld_16S_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16S_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16S_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16S_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16S_A;
}

void SwiftMtParser_MT381Parser::Fld_16S_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A(this);
}

void SwiftMtParser_MT381Parser::Fld_16S_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A(this);
}

SwiftMtParser_MT381Parser::Fld_16S_AContext* SwiftMtParser_MT381Parser::fld_16S_A() {
  Fld_16S_AContext *_localctx = _tracker.createInstance<Fld_16S_AContext>(_ctx, getState());
  enterRule(_localctx, 52, SwiftMtParser_MT381Parser::RuleFld_16S_A);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(347);
    match(SwiftMtParser_MT381Parser::T__1);
    setState(349); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(348);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(351); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16R_BContext::Fld_16R_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16R_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16R_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16R_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16R_B;
}

void SwiftMtParser_MT381Parser::Fld_16R_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B(this);
}

void SwiftMtParser_MT381Parser::Fld_16R_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B(this);
}

SwiftMtParser_MT381Parser::Fld_16R_BContext* SwiftMtParser_MT381Parser::fld_16R_B() {
  Fld_16R_BContext *_localctx = _tracker.createInstance<Fld_16R_BContext>(_ctx, getState());
  enterRule(_localctx, 54, SwiftMtParser_MT381Parser::RuleFld_16R_B);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(353);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(354);
    match(SwiftMtParser_MT381Parser::T__0);
    setState(356); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(355);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_98a_BContext::Fld_98a_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_98a_B_AContext* SwiftMtParser_MT381Parser::Fld_98a_BContext::fld_98a_B_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_98a_B_AContext>(0);
}

SwiftMtParser_MT381Parser::Fld_98a_B_CContext* SwiftMtParser_MT381Parser::Fld_98a_BContext::fld_98a_B_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_98a_B_CContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_98a_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_98a_B;
}

void SwiftMtParser_MT381Parser::Fld_98a_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B(this);
}

void SwiftMtParser_MT381Parser::Fld_98a_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B(this);
}

SwiftMtParser_MT381Parser::Fld_98a_BContext* SwiftMtParser_MT381Parser::fld_98a_B() {
  Fld_98a_BContext *_localctx = _tracker.createInstance<Fld_98a_BContext>(_ctx, getState());
  enterRule(_localctx, 56, SwiftMtParser_MT381Parser::RuleFld_98a_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(366);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(360);
      dynamic_cast<Fld_98a_BContext *>(_localctx)->fld_98a_B_AContext = fld_98a_B_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_BContext *>(_localctx)->fld_98a_B_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(363);
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

//----------------- Fld_19B_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_19B_BContext::Fld_19B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_19B_B_BContext* SwiftMtParser_MT381Parser::Fld_19B_BContext::fld_19B_B_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_19B_B_BContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_19B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_19B_B;
}

void SwiftMtParser_MT381Parser::Fld_19B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_19B_B(this);
}

void SwiftMtParser_MT381Parser::Fld_19B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_19B_B(this);
}

SwiftMtParser_MT381Parser::Fld_19B_BContext* SwiftMtParser_MT381Parser::fld_19B_B() {
  Fld_19B_BContext *_localctx = _tracker.createInstance<Fld_19B_BContext>(_ctx, getState());
  enterRule(_localctx, 58, SwiftMtParser_MT381Parser::RuleFld_19B_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(368);
    dynamic_cast<Fld_19B_BContext *>(_localctx)->fld_19B_B_BContext = fld_19B_B_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_19B_BContext *>(_localctx)->fld_19B_B_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_92B_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_92B_BContext::Fld_92B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_92B_B_BContext* SwiftMtParser_MT381Parser::Fld_92B_BContext::fld_92B_B_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_92B_B_BContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_92B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_92B_B;
}

void SwiftMtParser_MT381Parser::Fld_92B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_92B_B(this);
}

void SwiftMtParser_MT381Parser::Fld_92B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_92B_B(this);
}

SwiftMtParser_MT381Parser::Fld_92B_BContext* SwiftMtParser_MT381Parser::fld_92B_B() {
  Fld_92B_BContext *_localctx = _tracker.createInstance<Fld_92B_BContext>(_ctx, getState());
  enterRule(_localctx, 60, SwiftMtParser_MT381Parser::RuleFld_92B_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(371);
    dynamic_cast<Fld_92B_BContext *>(_localctx)->fld_92B_B_BContext = fld_92B_B_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_92B_BContext *>(_localctx)->fld_92B_B_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_94C_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_94C_BContext::Fld_94C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_94C_B_CContext* SwiftMtParser_MT381Parser::Fld_94C_BContext::fld_94C_B_C() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_94C_B_CContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_94C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_94C_B;
}

void SwiftMtParser_MT381Parser::Fld_94C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94C_B(this);
}

void SwiftMtParser_MT381Parser::Fld_94C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94C_B(this);
}

SwiftMtParser_MT381Parser::Fld_94C_BContext* SwiftMtParser_MT381Parser::fld_94C_B() {
  Fld_94C_BContext *_localctx = _tracker.createInstance<Fld_94C_BContext>(_ctx, getState());
  enterRule(_localctx, 62, SwiftMtParser_MT381Parser::RuleFld_94C_B);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(374);
    dynamic_cast<Fld_94C_BContext *>(_localctx)->fld_94C_B_CContext = fld_94C_B_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_94C_BContext *>(_localctx)->fld_94C_B_CContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B1Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16R_B1Context::Fld_16R_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16R_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16R_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16R_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16R_B1;
}

void SwiftMtParser_MT381Parser::Fld_16R_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B1(this);
}

void SwiftMtParser_MT381Parser::Fld_16R_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B1(this);
}

SwiftMtParser_MT381Parser::Fld_16R_B1Context* SwiftMtParser_MT381Parser::fld_16R_B1() {
  Fld_16R_B1Context *_localctx = _tracker.createInstance<Fld_16R_B1Context>(_ctx, getState());
  enterRule(_localctx, 64, SwiftMtParser_MT381Parser::RuleFld_16R_B1);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(377);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(378);
    match(SwiftMtParser_MT381Parser::T__0);
    setState(380); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(379);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(382); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_95a_B1Context::Fld_95a_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_95a_B1_PContext* SwiftMtParser_MT381Parser::Fld_95a_B1Context::fld_95a_B1_P() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_95a_B1_PContext>(0);
}

SwiftMtParser_MT381Parser::Fld_95a_B1_QContext* SwiftMtParser_MT381Parser::Fld_95a_B1Context::fld_95a_B1_Q() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_95a_B1_QContext>(0);
}

SwiftMtParser_MT381Parser::Fld_95a_B1_RContext* SwiftMtParser_MT381Parser::Fld_95a_B1Context::fld_95a_B1_R() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_95a_B1_RContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_95a_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_95a_B1;
}

void SwiftMtParser_MT381Parser::Fld_95a_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1(this);
}

void SwiftMtParser_MT381Parser::Fld_95a_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1(this);
}

SwiftMtParser_MT381Parser::Fld_95a_B1Context* SwiftMtParser_MT381Parser::fld_95a_B1() {
  Fld_95a_B1Context *_localctx = _tracker.createInstance<Fld_95a_B1Context>(_ctx, getState());
  enterRule(_localctx, 66, SwiftMtParser_MT381Parser::RuleFld_95a_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(393);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(384);
      dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_PContext = fld_95a_B1_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(387);
      dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_QContext = fld_95a_B1_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(390);
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

SwiftMtParser_MT381Parser::Fld_97A_B1Context::Fld_97A_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_97A_B1_AContext* SwiftMtParser_MT381Parser::Fld_97A_B1Context::fld_97A_B1_A() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_97A_B1_AContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_97A_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_97A_B1;
}

void SwiftMtParser_MT381Parser::Fld_97A_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B1(this);
}

void SwiftMtParser_MT381Parser::Fld_97A_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B1(this);
}

SwiftMtParser_MT381Parser::Fld_97A_B1Context* SwiftMtParser_MT381Parser::fld_97A_B1() {
  Fld_97A_B1Context *_localctx = _tracker.createInstance<Fld_97A_B1Context>(_ctx, getState());
  enterRule(_localctx, 68, SwiftMtParser_MT381Parser::RuleFld_97A_B1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(395);
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

SwiftMtParser_MT381Parser::Fld_16S_B1Context::Fld_16S_B1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16S_B1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16S_B1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16S_B1Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16S_B1;
}

void SwiftMtParser_MT381Parser::Fld_16S_B1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B1(this);
}

void SwiftMtParser_MT381Parser::Fld_16S_B1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B1(this);
}

SwiftMtParser_MT381Parser::Fld_16S_B1Context* SwiftMtParser_MT381Parser::fld_16S_B1() {
  Fld_16S_B1Context *_localctx = _tracker.createInstance<Fld_16S_B1Context>(_ctx, getState());
  enterRule(_localctx, 70, SwiftMtParser_MT381Parser::RuleFld_16S_B1);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(399);
    match(SwiftMtParser_MT381Parser::T__1);
    setState(401); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(400);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(403); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_B2Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16R_B2Context::Fld_16R_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16R_B2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16R_B2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16R_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16R_B2;
}

void SwiftMtParser_MT381Parser::Fld_16R_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_B2(this);
}

void SwiftMtParser_MT381Parser::Fld_16R_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_B2(this);
}

SwiftMtParser_MT381Parser::Fld_16R_B2Context* SwiftMtParser_MT381Parser::fld_16R_B2() {
  Fld_16R_B2Context *_localctx = _tracker.createInstance<Fld_16R_B2Context>(_ctx, getState());
  enterRule(_localctx, 72, SwiftMtParser_MT381Parser::RuleFld_16R_B2);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(405);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(406);
    match(SwiftMtParser_MT381Parser::T__0);
    setState(408); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(407);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(410); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_24B_B2Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_24B_B2Context::Fld_24B_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_24B_B2_BContext* SwiftMtParser_MT381Parser::Fld_24B_B2Context::fld_24B_B2_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_24B_B2_BContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_24B_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_24B_B2;
}

void SwiftMtParser_MT381Parser::Fld_24B_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_24B_B2(this);
}

void SwiftMtParser_MT381Parser::Fld_24B_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_24B_B2(this);
}

SwiftMtParser_MT381Parser::Fld_24B_B2Context* SwiftMtParser_MT381Parser::fld_24B_B2() {
  Fld_24B_B2Context *_localctx = _tracker.createInstance<Fld_24B_B2Context>(_ctx, getState());
  enterRule(_localctx, 74, SwiftMtParser_MT381Parser::RuleFld_24B_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(412);
    dynamic_cast<Fld_24B_B2Context *>(_localctx)->fld_24B_B2_BContext = fld_24B_B2_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_24B_B2Context *>(_localctx)->fld_24B_B2_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70D_B2Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_70D_B2Context::Fld_70D_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_70D_B2_DContext* SwiftMtParser_MT381Parser::Fld_70D_B2Context::fld_70D_B2_D() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_70D_B2_DContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_70D_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_70D_B2;
}

void SwiftMtParser_MT381Parser::Fld_70D_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70D_B2(this);
}

void SwiftMtParser_MT381Parser::Fld_70D_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70D_B2(this);
}

SwiftMtParser_MT381Parser::Fld_70D_B2Context* SwiftMtParser_MT381Parser::fld_70D_B2() {
  Fld_70D_B2Context *_localctx = _tracker.createInstance<Fld_70D_B2Context>(_ctx, getState());
  enterRule(_localctx, 76, SwiftMtParser_MT381Parser::RuleFld_70D_B2);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(415);
    dynamic_cast<Fld_70D_B2Context *>(_localctx)->fld_70D_B2_DContext = fld_70D_B2_D();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_70D_B2Context *>(_localctx)->fld_70D_B2_DContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_B2Context ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16S_B2Context::Fld_16S_B2Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16S_B2Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16S_B2Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16S_B2Context::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16S_B2;
}

void SwiftMtParser_MT381Parser::Fld_16S_B2Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B2(this);
}

void SwiftMtParser_MT381Parser::Fld_16S_B2Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B2(this);
}

SwiftMtParser_MT381Parser::Fld_16S_B2Context* SwiftMtParser_MT381Parser::fld_16S_B2() {
  Fld_16S_B2Context *_localctx = _tracker.createInstance<Fld_16S_B2Context>(_ctx, getState());
  enterRule(_localctx, 78, SwiftMtParser_MT381Parser::RuleFld_16S_B2);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(419);
    match(SwiftMtParser_MT381Parser::T__1);
    setState(421); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(420);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(423); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16S_BContext::Fld_16S_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16S_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16S_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16S_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16S_B;
}

void SwiftMtParser_MT381Parser::Fld_16S_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_B(this);
}

void SwiftMtParser_MT381Parser::Fld_16S_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_B(this);
}

SwiftMtParser_MT381Parser::Fld_16S_BContext* SwiftMtParser_MT381Parser::fld_16S_B() {
  Fld_16S_BContext *_localctx = _tracker.createInstance<Fld_16S_BContext>(_ctx, getState());
  enterRule(_localctx, 80, SwiftMtParser_MT381Parser::RuleFld_16S_B);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(425);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(426);
    match(SwiftMtParser_MT381Parser::T__1);
    setState(428); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(427);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      setState(430); 
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

//----------------- Fld_16R_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16R_CContext::Fld_16R_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16R_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16R_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16R_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16R_C;
}

void SwiftMtParser_MT381Parser::Fld_16R_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_C(this);
}

void SwiftMtParser_MT381Parser::Fld_16R_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_C(this);
}

SwiftMtParser_MT381Parser::Fld_16R_CContext* SwiftMtParser_MT381Parser::fld_16R_C() {
  Fld_16R_CContext *_localctx = _tracker.createInstance<Fld_16R_CContext>(_ctx, getState());
  enterRule(_localctx, 82, SwiftMtParser_MT381Parser::RuleFld_16R_C);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(432);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(433);
    match(SwiftMtParser_MT381Parser::T__0);
    setState(435); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(434);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(437); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_35B_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_35B_CContext::Fld_35B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_35B_C_BContext* SwiftMtParser_MT381Parser::Fld_35B_CContext::fld_35B_C_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_35B_C_BContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_35B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_35B_C;
}

void SwiftMtParser_MT381Parser::Fld_35B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_35B_C(this);
}

void SwiftMtParser_MT381Parser::Fld_35B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_35B_C(this);
}

SwiftMtParser_MT381Parser::Fld_35B_CContext* SwiftMtParser_MT381Parser::fld_35B_C() {
  Fld_35B_CContext *_localctx = _tracker.createInstance<Fld_35B_CContext>(_ctx, getState());
  enterRule(_localctx, 84, SwiftMtParser_MT381Parser::RuleFld_35B_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(439);
    dynamic_cast<Fld_35B_CContext *>(_localctx)->fld_35B_C_BContext = fld_35B_C_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_35B_CContext *>(_localctx)->fld_35B_C_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_36B_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_36B_CContext::Fld_36B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_36B_C_BContext* SwiftMtParser_MT381Parser::Fld_36B_CContext::fld_36B_C_B() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_36B_C_BContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_36B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_36B_C;
}

void SwiftMtParser_MT381Parser::Fld_36B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_36B_C(this);
}

void SwiftMtParser_MT381Parser::Fld_36B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_36B_C(this);
}

SwiftMtParser_MT381Parser::Fld_36B_CContext* SwiftMtParser_MT381Parser::fld_36B_C() {
  Fld_36B_CContext *_localctx = _tracker.createInstance<Fld_36B_CContext>(_ctx, getState());
  enterRule(_localctx, 86, SwiftMtParser_MT381Parser::RuleFld_36B_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(442);
    dynamic_cast<Fld_36B_CContext *>(_localctx)->fld_36B_C_BContext = fld_36B_C_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_36B_CContext *>(_localctx)->fld_36B_C_BContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_22F_CContext::Fld_22F_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_22F_C_FContext* SwiftMtParser_MT381Parser::Fld_22F_CContext::fld_22F_C_F() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_22F_C_FContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_22F_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_22F_C;
}

void SwiftMtParser_MT381Parser::Fld_22F_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_C(this);
}

void SwiftMtParser_MT381Parser::Fld_22F_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_C(this);
}

SwiftMtParser_MT381Parser::Fld_22F_CContext* SwiftMtParser_MT381Parser::fld_22F_C() {
  Fld_22F_CContext *_localctx = _tracker.createInstance<Fld_22F_CContext>(_ctx, getState());
  enterRule(_localctx, 88, SwiftMtParser_MT381Parser::RuleFld_22F_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(445);
    dynamic_cast<Fld_22F_CContext *>(_localctx)->fld_22F_C_FContext = fld_22F_C_F();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_22F_CContext *>(_localctx)->fld_22F_C_FContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_70E_CContext::Fld_70E_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT381Parser::Fld_70E_C_EContext* SwiftMtParser_MT381Parser::Fld_70E_CContext::fld_70E_C_E() {
  return getRuleContext<SwiftMtParser_MT381Parser::Fld_70E_C_EContext>(0);
}


size_t SwiftMtParser_MT381Parser::Fld_70E_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_70E_C;
}

void SwiftMtParser_MT381Parser::Fld_70E_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_C(this);
}

void SwiftMtParser_MT381Parser::Fld_70E_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_C(this);
}

SwiftMtParser_MT381Parser::Fld_70E_CContext* SwiftMtParser_MT381Parser::fld_70E_C() {
  Fld_70E_CContext *_localctx = _tracker.createInstance<Fld_70E_CContext>(_ctx, getState());
  enterRule(_localctx, 90, SwiftMtParser_MT381Parser::RuleFld_70E_C);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(448);
    dynamic_cast<Fld_70E_CContext *>(_localctx)->fld_70E_C_EContext = fld_70E_C_E();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_70E_CContext *>(_localctx)->fld_70E_C_EContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_16S_CContext::Fld_16S_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_16S_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_16S_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_16S_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_16S_C;
}

void SwiftMtParser_MT381Parser::Fld_16S_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_C(this);
}

void SwiftMtParser_MT381Parser::Fld_16S_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_C(this);
}

SwiftMtParser_MT381Parser::Fld_16S_CContext* SwiftMtParser_MT381Parser::fld_16S_C() {
  Fld_16S_CContext *_localctx = _tracker.createInstance<Fld_16S_CContext>(_ctx, getState());
  enterRule(_localctx, 92, SwiftMtParser_MT381Parser::RuleFld_16S_C);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(451);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(452);
    match(SwiftMtParser_MT381Parser::T__1);
    setState(454); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(453);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      setState(456); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx);
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

SwiftMtParser_MT381Parser::Fld_20C_A_CContext::Fld_20C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_20C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_20C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_20C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_20C_A_C;
}

void SwiftMtParser_MT381Parser::Fld_20C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A_C(this);
}

void SwiftMtParser_MT381Parser::Fld_20C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A_C(this);
}

SwiftMtParser_MT381Parser::Fld_20C_A_CContext* SwiftMtParser_MT381Parser::fld_20C_A_C() {
  Fld_20C_A_CContext *_localctx = _tracker.createInstance<Fld_20C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 94, SwiftMtParser_MT381Parser::RuleFld_20C_A_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(459);
    match(SwiftMtParser_MT381Parser::T__2);
    setState(461); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(460);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(463); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_A_GContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_23G_A_GContext::Fld_23G_A_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_23G_A_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_23G_A_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_23G_A_GContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_23G_A_G;
}

void SwiftMtParser_MT381Parser::Fld_23G_A_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A_G(this);
}

void SwiftMtParser_MT381Parser::Fld_23G_A_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A_G(this);
}

SwiftMtParser_MT381Parser::Fld_23G_A_GContext* SwiftMtParser_MT381Parser::fld_23G_A_G() {
  Fld_23G_A_GContext *_localctx = _tracker.createInstance<Fld_23G_A_GContext>(_ctx, getState());
  enterRule(_localctx, 96, SwiftMtParser_MT381Parser::RuleFld_23G_A_G);
   _localctx->fld.set_tag("23G"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(466);
    match(SwiftMtParser_MT381Parser::T__3);
    setState(468); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(467);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(470); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22H_A_HContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_22H_A_HContext::Fld_22H_A_HContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_22H_A_HContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_22H_A_HContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_22H_A_HContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_22H_A_H;
}

void SwiftMtParser_MT381Parser::Fld_22H_A_HContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22H_A_H(this);
}

void SwiftMtParser_MT381Parser::Fld_22H_A_HContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22H_A_H(this);
}

SwiftMtParser_MT381Parser::Fld_22H_A_HContext* SwiftMtParser_MT381Parser::fld_22H_A_H() {
  Fld_22H_A_HContext *_localctx = _tracker.createInstance<Fld_22H_A_HContext>(_ctx, getState());
  enterRule(_localctx, 98, SwiftMtParser_MT381Parser::RuleFld_22H_A_H);
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(473);
    match(SwiftMtParser_MT381Parser::T__4);
    setState(475); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(474);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(477); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_AContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_13a_A1_AContext::Fld_13a_A1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_13a_A1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_13a_A1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_13a_A1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_13a_A1_A;
}

void SwiftMtParser_MT381Parser::Fld_13a_A1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_A(this);
}

void SwiftMtParser_MT381Parser::Fld_13a_A1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_A(this);
}

SwiftMtParser_MT381Parser::Fld_13a_A1_AContext* SwiftMtParser_MT381Parser::fld_13a_A1_A() {
  Fld_13a_A1_AContext *_localctx = _tracker.createInstance<Fld_13a_A1_AContext>(_ctx, getState());
  enterRule(_localctx, 100, SwiftMtParser_MT381Parser::RuleFld_13a_A1_A);
   _localctx->fld.set_tag("13A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(479);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(480);
    match(SwiftMtParser_MT381Parser::T__5);
    setState(482); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(481);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(484); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_13a_A1_BContext::Fld_13a_A1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_13a_A1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_13a_A1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_13a_A1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_13a_A1_B;
}

void SwiftMtParser_MT381Parser::Fld_13a_A1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_B(this);
}

void SwiftMtParser_MT381Parser::Fld_13a_A1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_B(this);
}

SwiftMtParser_MT381Parser::Fld_13a_A1_BContext* SwiftMtParser_MT381Parser::fld_13a_A1_B() {
  Fld_13a_A1_BContext *_localctx = _tracker.createInstance<Fld_13a_A1_BContext>(_ctx, getState());
  enterRule(_localctx, 102, SwiftMtParser_MT381Parser::RuleFld_13a_A1_B);
   _localctx->fld.set_tag("13B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(486);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(487);
    match(SwiftMtParser_MT381Parser::T__6);
    setState(489); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(488);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_20C_A1_CContext::Fld_20C_A1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_20C_A1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_20C_A1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_20C_A1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_20C_A1_C;
}

void SwiftMtParser_MT381Parser::Fld_20C_A1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1_C(this);
}

void SwiftMtParser_MT381Parser::Fld_20C_A1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1_C(this);
}

SwiftMtParser_MT381Parser::Fld_20C_A1_CContext* SwiftMtParser_MT381Parser::fld_20C_A1_C() {
  Fld_20C_A1_CContext *_localctx = _tracker.createInstance<Fld_20C_A1_CContext>(_ctx, getState());
  enterRule(_localctx, 104, SwiftMtParser_MT381Parser::RuleFld_20C_A1_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(493);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(494);
    match(SwiftMtParser_MT381Parser::T__2);
    setState(496); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(495);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_B_AContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_98a_B_AContext::Fld_98a_B_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_98a_B_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_98a_B_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_98a_B_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_98a_B_A;
}

void SwiftMtParser_MT381Parser::Fld_98a_B_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B_A(this);
}

void SwiftMtParser_MT381Parser::Fld_98a_B_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B_A(this);
}

SwiftMtParser_MT381Parser::Fld_98a_B_AContext* SwiftMtParser_MT381Parser::fld_98a_B_A() {
  Fld_98a_B_AContext *_localctx = _tracker.createInstance<Fld_98a_B_AContext>(_ctx, getState());
  enterRule(_localctx, 106, SwiftMtParser_MT381Parser::RuleFld_98a_B_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(500);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(501);
    match(SwiftMtParser_MT381Parser::T__7);
    setState(503); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(502);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_98a_B_CContext::Fld_98a_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_98a_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_98a_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_98a_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_98a_B_C;
}

void SwiftMtParser_MT381Parser::Fld_98a_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_B_C(this);
}

void SwiftMtParser_MT381Parser::Fld_98a_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_B_C(this);
}

SwiftMtParser_MT381Parser::Fld_98a_B_CContext* SwiftMtParser_MT381Parser::fld_98a_B_C() {
  Fld_98a_B_CContext *_localctx = _tracker.createInstance<Fld_98a_B_CContext>(_ctx, getState());
  enterRule(_localctx, 108, SwiftMtParser_MT381Parser::RuleFld_98a_B_C);
   _localctx->fld.set_tag("98C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(507);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(508);
    match(SwiftMtParser_MT381Parser::T__8);
    setState(510); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(509);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_19B_B_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_19B_B_BContext::Fld_19B_B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_19B_B_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_19B_B_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_19B_B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_19B_B_B;
}

void SwiftMtParser_MT381Parser::Fld_19B_B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_19B_B_B(this);
}

void SwiftMtParser_MT381Parser::Fld_19B_B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_19B_B_B(this);
}

SwiftMtParser_MT381Parser::Fld_19B_B_BContext* SwiftMtParser_MT381Parser::fld_19B_B_B() {
  Fld_19B_B_BContext *_localctx = _tracker.createInstance<Fld_19B_B_BContext>(_ctx, getState());
  enterRule(_localctx, 110, SwiftMtParser_MT381Parser::RuleFld_19B_B_B);
   _localctx->fld.set_tag("19B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(514);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(515);
    match(SwiftMtParser_MT381Parser::T__9);
    setState(517); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(516);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_92B_B_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_92B_B_BContext::Fld_92B_B_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_92B_B_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_92B_B_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_92B_B_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_92B_B_B;
}

void SwiftMtParser_MT381Parser::Fld_92B_B_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_92B_B_B(this);
}

void SwiftMtParser_MT381Parser::Fld_92B_B_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_92B_B_B(this);
}

SwiftMtParser_MT381Parser::Fld_92B_B_BContext* SwiftMtParser_MT381Parser::fld_92B_B_B() {
  Fld_92B_B_BContext *_localctx = _tracker.createInstance<Fld_92B_B_BContext>(_ctx, getState());
  enterRule(_localctx, 112, SwiftMtParser_MT381Parser::RuleFld_92B_B_B);
   _localctx->fld.set_tag("92B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(521);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(522);
    match(SwiftMtParser_MT381Parser::T__10);
    setState(524); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(523);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_94C_B_CContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_94C_B_CContext::Fld_94C_B_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_94C_B_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_94C_B_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_94C_B_CContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_94C_B_C;
}

void SwiftMtParser_MT381Parser::Fld_94C_B_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_94C_B_C(this);
}

void SwiftMtParser_MT381Parser::Fld_94C_B_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_94C_B_C(this);
}

SwiftMtParser_MT381Parser::Fld_94C_B_CContext* SwiftMtParser_MT381Parser::fld_94C_B_C() {
  Fld_94C_B_CContext *_localctx = _tracker.createInstance<Fld_94C_B_CContext>(_ctx, getState());
  enterRule(_localctx, 114, SwiftMtParser_MT381Parser::RuleFld_94C_B_C);
   _localctx->fld.set_tag("94C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(529);
    match(SwiftMtParser_MT381Parser::T__11);
    setState(531); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(530);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_PContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_95a_B1_PContext::Fld_95a_B1_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_95a_B1_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_95a_B1_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_95a_B1_PContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_95a_B1_P;
}

void SwiftMtParser_MT381Parser::Fld_95a_B1_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_P(this);
}

void SwiftMtParser_MT381Parser::Fld_95a_B1_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_P(this);
}

SwiftMtParser_MT381Parser::Fld_95a_B1_PContext* SwiftMtParser_MT381Parser::fld_95a_B1_P() {
  Fld_95a_B1_PContext *_localctx = _tracker.createInstance<Fld_95a_B1_PContext>(_ctx, getState());
  enterRule(_localctx, 116, SwiftMtParser_MT381Parser::RuleFld_95a_B1_P);
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(536);
    match(SwiftMtParser_MT381Parser::T__12);
    setState(538); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(537);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_QContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_95a_B1_QContext::Fld_95a_B1_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_95a_B1_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_95a_B1_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_95a_B1_QContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_95a_B1_Q;
}

void SwiftMtParser_MT381Parser::Fld_95a_B1_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_Q(this);
}

void SwiftMtParser_MT381Parser::Fld_95a_B1_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_Q(this);
}

SwiftMtParser_MT381Parser::Fld_95a_B1_QContext* SwiftMtParser_MT381Parser::fld_95a_B1_Q() {
  Fld_95a_B1_QContext *_localctx = _tracker.createInstance<Fld_95a_B1_QContext>(_ctx, getState());
  enterRule(_localctx, 118, SwiftMtParser_MT381Parser::RuleFld_95a_B1_Q);
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(543);
    match(SwiftMtParser_MT381Parser::T__13);
    setState(545); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(544);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_B1_RContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_95a_B1_RContext::Fld_95a_B1_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_95a_B1_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_95a_B1_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_95a_B1_RContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_95a_B1_R;
}

void SwiftMtParser_MT381Parser::Fld_95a_B1_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_B1_R(this);
}

void SwiftMtParser_MT381Parser::Fld_95a_B1_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_B1_R(this);
}

SwiftMtParser_MT381Parser::Fld_95a_B1_RContext* SwiftMtParser_MT381Parser::fld_95a_B1_R() {
  Fld_95a_B1_RContext *_localctx = _tracker.createInstance<Fld_95a_B1_RContext>(_ctx, getState());
  enterRule(_localctx, 120, SwiftMtParser_MT381Parser::RuleFld_95a_B1_R);
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(549);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(550);
    match(SwiftMtParser_MT381Parser::T__14);
    setState(552); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(551);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_97A_B1_AContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_97A_B1_AContext::Fld_97A_B1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_97A_B1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_97A_B1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_97A_B1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_97A_B1_A;
}

void SwiftMtParser_MT381Parser::Fld_97A_B1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_97A_B1_A(this);
}

void SwiftMtParser_MT381Parser::Fld_97A_B1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_97A_B1_A(this);
}

SwiftMtParser_MT381Parser::Fld_97A_B1_AContext* SwiftMtParser_MT381Parser::fld_97A_B1_A() {
  Fld_97A_B1_AContext *_localctx = _tracker.createInstance<Fld_97A_B1_AContext>(_ctx, getState());
  enterRule(_localctx, 122, SwiftMtParser_MT381Parser::RuleFld_97A_B1_A);
   _localctx->fld.set_tag("97A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(557);
    match(SwiftMtParser_MT381Parser::T__15);
    setState(559); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(558);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_24B_B2_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_24B_B2_BContext::Fld_24B_B2_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_24B_B2_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_24B_B2_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_24B_B2_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_24B_B2_B;
}

void SwiftMtParser_MT381Parser::Fld_24B_B2_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_24B_B2_B(this);
}

void SwiftMtParser_MT381Parser::Fld_24B_B2_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_24B_B2_B(this);
}

SwiftMtParser_MT381Parser::Fld_24B_B2_BContext* SwiftMtParser_MT381Parser::fld_24B_B2_B() {
  Fld_24B_B2_BContext *_localctx = _tracker.createInstance<Fld_24B_B2_BContext>(_ctx, getState());
  enterRule(_localctx, 124, SwiftMtParser_MT381Parser::RuleFld_24B_B2_B);
   _localctx->fld.set_tag("24B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(563);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(564);
    match(SwiftMtParser_MT381Parser::T__16);
    setState(566); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(565);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70D_B2_DContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_70D_B2_DContext::Fld_70D_B2_DContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_70D_B2_DContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_70D_B2_DContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_70D_B2_DContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_70D_B2_D;
}

void SwiftMtParser_MT381Parser::Fld_70D_B2_DContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70D_B2_D(this);
}

void SwiftMtParser_MT381Parser::Fld_70D_B2_DContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70D_B2_D(this);
}

SwiftMtParser_MT381Parser::Fld_70D_B2_DContext* SwiftMtParser_MT381Parser::fld_70D_B2_D() {
  Fld_70D_B2_DContext *_localctx = _tracker.createInstance<Fld_70D_B2_DContext>(_ctx, getState());
  enterRule(_localctx, 126, SwiftMtParser_MT381Parser::RuleFld_70D_B2_D);
   _localctx->fld.set_tag("70D"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(570);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(571);
    match(SwiftMtParser_MT381Parser::T__17);
    setState(573); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(572);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_35B_C_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_35B_C_BContext::Fld_35B_C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_35B_C_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_35B_C_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_35B_C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_35B_C_B;
}

void SwiftMtParser_MT381Parser::Fld_35B_C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_35B_C_B(this);
}

void SwiftMtParser_MT381Parser::Fld_35B_C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_35B_C_B(this);
}

SwiftMtParser_MT381Parser::Fld_35B_C_BContext* SwiftMtParser_MT381Parser::fld_35B_C_B() {
  Fld_35B_C_BContext *_localctx = _tracker.createInstance<Fld_35B_C_BContext>(_ctx, getState());
  enterRule(_localctx, 128, SwiftMtParser_MT381Parser::RuleFld_35B_C_B);
   _localctx->fld.set_tag("35B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(577);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(578);
    match(SwiftMtParser_MT381Parser::T__18);
    setState(580); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(579);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_36B_C_BContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_36B_C_BContext::Fld_36B_C_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_36B_C_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_36B_C_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_36B_C_BContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_36B_C_B;
}

void SwiftMtParser_MT381Parser::Fld_36B_C_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_36B_C_B(this);
}

void SwiftMtParser_MT381Parser::Fld_36B_C_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_36B_C_B(this);
}

SwiftMtParser_MT381Parser::Fld_36B_C_BContext* SwiftMtParser_MT381Parser::fld_36B_C_B() {
  Fld_36B_C_BContext *_localctx = _tracker.createInstance<Fld_36B_C_BContext>(_ctx, getState());
  enterRule(_localctx, 130, SwiftMtParser_MT381Parser::RuleFld_36B_C_B);
   _localctx->fld.set_tag("36B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(584);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(585);
    match(SwiftMtParser_MT381Parser::T__19);
    setState(587); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(586);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_22F_C_FContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_22F_C_FContext::Fld_22F_C_FContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_22F_C_FContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_22F_C_FContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_22F_C_FContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_22F_C_F;
}

void SwiftMtParser_MT381Parser::Fld_22F_C_FContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_22F_C_F(this);
}

void SwiftMtParser_MT381Parser::Fld_22F_C_FContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_22F_C_F(this);
}

SwiftMtParser_MT381Parser::Fld_22F_C_FContext* SwiftMtParser_MT381Parser::fld_22F_C_F() {
  Fld_22F_C_FContext *_localctx = _tracker.createInstance<Fld_22F_C_FContext>(_ctx, getState());
  enterRule(_localctx, 132, SwiftMtParser_MT381Parser::RuleFld_22F_C_F);
   _localctx->fld.set_tag("22F"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(592);
    match(SwiftMtParser_MT381Parser::T__20);
    setState(594); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(593);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_70E_C_EContext ------------------------------------------------------------------

SwiftMtParser_MT381Parser::Fld_70E_C_EContext::Fld_70E_C_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT381Parser::Fld_70E_C_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT381Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT381Parser::Fld_70E_C_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT381Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT381Parser::Fld_70E_C_EContext::getRuleIndex() const {
  return SwiftMtParser_MT381Parser::RuleFld_70E_C_E;
}

void SwiftMtParser_MT381Parser::Fld_70E_C_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_70E_C_E(this);
}

void SwiftMtParser_MT381Parser::Fld_70E_C_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT381Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_70E_C_E(this);
}

SwiftMtParser_MT381Parser::Fld_70E_C_EContext* SwiftMtParser_MT381Parser::fld_70E_C_E() {
  Fld_70E_C_EContext *_localctx = _tracker.createInstance<Fld_70E_C_EContext>(_ctx, getState());
  enterRule(_localctx, 134, SwiftMtParser_MT381Parser::RuleFld_70E_C_E);
   _localctx->fld.set_tag("70E"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    match(SwiftMtParser_MT381Parser::START_OF_FIELD);
    setState(599);
    match(SwiftMtParser_MT381Parser::T__21);
    setState(601); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(600);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT381Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT381Parser::T__0)
      | (1ULL << SwiftMtParser_MT381Parser::T__1)
      | (1ULL << SwiftMtParser_MT381Parser::T__2)
      | (1ULL << SwiftMtParser_MT381Parser::T__3)
      | (1ULL << SwiftMtParser_MT381Parser::T__4)
      | (1ULL << SwiftMtParser_MT381Parser::T__5)
      | (1ULL << SwiftMtParser_MT381Parser::T__6)
      | (1ULL << SwiftMtParser_MT381Parser::T__7)
      | (1ULL << SwiftMtParser_MT381Parser::T__8)
      | (1ULL << SwiftMtParser_MT381Parser::T__9)
      | (1ULL << SwiftMtParser_MT381Parser::T__10)
      | (1ULL << SwiftMtParser_MT381Parser::T__11)
      | (1ULL << SwiftMtParser_MT381Parser::T__12)
      | (1ULL << SwiftMtParser_MT381Parser::T__13)
      | (1ULL << SwiftMtParser_MT381Parser::T__14)
      | (1ULL << SwiftMtParser_MT381Parser::T__15)
      | (1ULL << SwiftMtParser_MT381Parser::T__16)
      | (1ULL << SwiftMtParser_MT381Parser::T__17)
      | (1ULL << SwiftMtParser_MT381Parser::T__18)
      | (1ULL << SwiftMtParser_MT381Parser::T__19)
      | (1ULL << SwiftMtParser_MT381Parser::T__20)
      | (1ULL << SwiftMtParser_MT381Parser::T__21)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT381Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT381Parser::MT_END)
      | (1ULL << SwiftMtParser_MT381Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT381Parser::COLON)
      | (1ULL << SwiftMtParser_MT381Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT381Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT381Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT381Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT381Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT381Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt", "seq_A", 
  "seq_A1", "seq_B", "seq_B1", "seq_B2", "seq_C", "fld_16R_A", "fld_20C_A", 
  "fld_23G_A", "fld_22H_A", "fld_16R_A1", "fld_13a_A1", "fld_20C_A1", "fld_16S_A1", 
  "fld_16S_A", "fld_16R_B", "fld_98a_B", "fld_19B_B", "fld_92B_B", "fld_94C_B", 
  "fld_16R_B1", "fld_95a_B1", "fld_97A_B1", "fld_16S_B1", "fld_16R_B2", 
  "fld_24B_B2", "fld_70D_B2", "fld_16S_B2", "fld_16S_B", "fld_16R_C", "fld_35B_C", 
  "fld_36B_C", "fld_22F_C", "fld_70E_C", "fld_16S_C", "fld_20C_A_C", "fld_23G_A_G", 
  "fld_22H_A_H", "fld_13a_A1_A", "fld_13a_A1_B", "fld_20C_A1_C", "fld_98a_B_A", 
  "fld_98a_B_C", "fld_19B_B_B", "fld_92B_B_B", "fld_94C_B_C", "fld_95a_B1_P", 
  "fld_95a_B1_Q", "fld_95a_B1_R", "fld_97A_B1_A", "fld_24B_B2_B", "fld_70D_B2_D", 
  "fld_35B_C_B", "fld_36B_C_B", "fld_22F_C_F", "fld_70E_C_E"
};

std::vector<std::string> SwiftMtParser_MT381Parser::_literalNames = {
  "", "'16R:'", "'16S:'", "'20C:'", "'23G:'", "'22H:'", "'13A:'", "'13B:'", 
  "'98A:'", "'98C:'", "'19B:'", "'92B:'", "'94C:'", "'95P:'", "'95Q:'", 
  "'95R:'", "'97A:'", "'24B:'", "'70D:'", "'35B:'", "'36B:'", "'22F:'", 
  "'70E:'", "'{1:'", "'{2:'", "'{3:'", "'{4:'", "'{5:'", "'-}'", "'{'", 
  "'}'", "':'"
};

std::vector<std::string> SwiftMtParser_MT381Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "TAG_BH", "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", 
  "MT_END", "LBRACE", "RBRACE", "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT381Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT381Parser::_tokenNames;

SwiftMtParser_MT381Parser::Initializer::Initializer() {
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
    0x3, 0x23, 0x260, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x8e, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x5, 0x2, 0x92, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x4, 0x6, 0x4, 0x9b, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 
    0x9c, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0xa4, 
    0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0xa5, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0xb1, 
    0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 0xb2, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0xbc, 0xa, 0xb, 0xd, 0xb, 
    0xe, 0xb, 0xbd, 0x3, 0xc, 0x6, 0xc, 0xc1, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 
    0xc2, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0xc9, 0xa, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xd4, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 
    0xe, 0xd8, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xdb, 0xb, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xe4, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0xef, 0xa, 0x10, 0xd, 0x10, 
    0xe, 0x10, 0xf0, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0xf5, 0xa, 0x10, 0xd, 
    0x10, 0xe, 0x10, 0xf6, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0xfd, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 
    0x10, 0x103, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x10c, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x119, 0xa, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x5, 0x13, 0x122, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
    0x126, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x12a, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x12e, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x137, 
    0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0x138, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x18, 0x6, 0x18, 0x147, 0xa, 0x18, 0xd, 0x18, 
    0xe, 0x18, 0x148, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x5, 0x19, 0x151, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x6, 0x1b, 0x159, 0xa, 0x1b, 0xd, 0x1b, 
    0xe, 0x1b, 0x15a, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x6, 0x1c, 0x160, 
    0xa, 0x1c, 0xd, 0x1c, 0xe, 0x1c, 0x161, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 
    0x6, 0x1d, 0x167, 0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x168, 0x3, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x171, 
    0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 
    0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 
    0x6, 0x22, 0x17f, 0xa, 0x22, 0xd, 0x22, 0xe, 0x22, 0x180, 0x3, 0x23, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x23, 0x3, 0x23, 0x5, 0x23, 0x18c, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 
    0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x6, 0x25, 0x194, 0xa, 0x25, 
    0xd, 0x25, 0xe, 0x25, 0x195, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x6, 0x26, 
    0x19b, 0xa, 0x26, 0xd, 0x26, 0xe, 0x26, 0x19c, 0x3, 0x27, 0x3, 0x27, 
    0x3, 0x27, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 
    0x29, 0x6, 0x29, 0x1a8, 0xa, 0x29, 0xd, 0x29, 0xe, 0x29, 0x1a9, 0x3, 
    0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x6, 0x2a, 0x1af, 0xa, 0x2a, 0xd, 0x2a, 
    0xe, 0x2a, 0x1b0, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x6, 0x2b, 0x1b6, 
    0xa, 0x2b, 0xd, 0x2b, 0xe, 0x2b, 0x1b7, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x6, 0x30, 
    0x1c9, 0xa, 0x30, 0xd, 0x30, 0xe, 0x30, 0x1ca, 0x3, 0x31, 0x3, 0x31, 
    0x3, 0x31, 0x6, 0x31, 0x1d0, 0xa, 0x31, 0xd, 0x31, 0xe, 0x31, 0x1d1, 
    0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x6, 0x32, 0x1d7, 0xa, 0x32, 0xd, 0x32, 
    0xe, 0x32, 0x1d8, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x6, 0x33, 0x1de, 
    0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 0x1df, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
    0x6, 0x34, 0x1e5, 0xa, 0x34, 0xd, 0x34, 0xe, 0x34, 0x1e6, 0x3, 0x35, 
    0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 0x1ec, 0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 
    0x1ed, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x6, 0x36, 0x1f3, 0xa, 0x36, 
    0xd, 0x36, 0xe, 0x36, 0x1f4, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x6, 0x37, 
    0x1fa, 0xa, 0x37, 0xd, 0x37, 0xe, 0x37, 0x1fb, 0x3, 0x38, 0x3, 0x38, 
    0x3, 0x38, 0x6, 0x38, 0x201, 0xa, 0x38, 0xd, 0x38, 0xe, 0x38, 0x202, 
    0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x6, 0x39, 0x208, 0xa, 0x39, 0xd, 0x39, 
    0xe, 0x39, 0x209, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x6, 0x3a, 0x20f, 
    0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 0x210, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 
    0x6, 0x3b, 0x216, 0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 0x217, 0x3, 0x3c, 
    0x3, 0x3c, 0x3, 0x3c, 0x6, 0x3c, 0x21d, 0xa, 0x3c, 0xd, 0x3c, 0xe, 0x3c, 
    0x21e, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x6, 0x3d, 0x224, 0xa, 0x3d, 
    0xd, 0x3d, 0xe, 0x3d, 0x225, 0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3e, 0x6, 0x3e, 
    0x22b, 0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x22c, 0x3, 0x3f, 0x3, 0x3f, 
    0x3, 0x3f, 0x6, 0x3f, 0x232, 0xa, 0x3f, 0xd, 0x3f, 0xe, 0x3f, 0x233, 
    0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x6, 0x40, 0x239, 0xa, 0x40, 0xd, 0x40, 
    0xe, 0x40, 0x23a, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x6, 0x41, 0x240, 
    0xa, 0x41, 0xd, 0x41, 0xe, 0x41, 0x241, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 
    0x6, 0x42, 0x247, 0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 0x248, 0x3, 0x43, 
    0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x24e, 0xa, 0x43, 0xd, 0x43, 0xe, 0x43, 
    0x24f, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x6, 0x44, 0x255, 0xa, 0x44, 
    0xd, 0x44, 0xe, 0x44, 0x256, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x6, 0x45, 
    0x25c, 0xa, 0x45, 0xd, 0x45, 0xe, 0x45, 0x25d, 0x3, 0x45, 0x2, 0x2, 
    0x46, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 
    0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 
    0x4a, 0x4c, 0x4e, 0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 
    0x62, 0x64, 0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 
    0x7a, 0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x2, 0x5, 0x3, 0x2, 
    0x20, 0x20, 0x3, 0x2, 0x20, 0x21, 0x3, 0x2, 0x22, 0x22, 0x2, 0x255, 
    0x2, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x95, 0x3, 0x2, 0x2, 0x2, 0x6, 0x9a, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa, 0xa3, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xe, 0xab, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x12, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0xbb, 0x3, 0x2, 0x2, 0x2, 0x16, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x18, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xe0, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x20, 0x108, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x113, 0x3, 0x2, 0x2, 0x2, 0x24, 0x11e, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x133, 0x3, 0x2, 0x2, 0x2, 0x28, 0x13a, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x13d, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x140, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x143, 0x3, 0x2, 0x2, 0x2, 0x30, 0x150, 0x3, 0x2, 0x2, 0x2, 0x32, 0x152, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x155, 0x3, 0x2, 0x2, 0x2, 0x36, 0x15c, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x163, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x170, 0x3, 0x2, 
    0x2, 0x2, 0x3c, 0x172, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x178, 0x3, 0x2, 0x2, 0x2, 0x42, 0x17b, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x18b, 0x3, 0x2, 0x2, 0x2, 0x46, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x190, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x197, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x19e, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x50, 0x1a4, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x54, 0x1b2, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x58, 0x1bc, 0x3, 0x2, 0x2, 
    0x2, 0x5a, 0x1bf, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x1c2, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x60, 0x1cc, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x1d3, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1da, 0x3, 0x2, 0x2, 0x2, 0x66, 0x1e1, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x1ef, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x1fd, 0x3, 0x2, 
    0x2, 0x2, 0x70, 0x204, 0x3, 0x2, 0x2, 0x2, 0x72, 0x20b, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x212, 0x3, 0x2, 0x2, 0x2, 0x76, 0x219, 0x3, 0x2, 0x2, 0x2, 
    0x78, 0x220, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x227, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x22e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x235, 0x3, 0x2, 0x2, 0x2, 0x80, 0x23c, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x243, 0x3, 0x2, 0x2, 0x2, 0x84, 0x24a, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x251, 0x3, 0x2, 0x2, 0x2, 0x88, 0x258, 0x3, 0x2, 
    0x2, 0x2, 0x8a, 0x8b, 0x5, 0x4, 0x3, 0x2, 0x8b, 0x8d, 0x5, 0x8, 0x5, 
    0x2, 0x8c, 0x8e, 0x5, 0xc, 0x7, 0x2, 0x8d, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 
    0x91, 0x5, 0x18, 0xd, 0x2, 0x90, 0x92, 0x5, 0xe, 0x8, 0x2, 0x91, 0x90, 
    0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x94, 0x7, 0x2, 0x2, 0x3, 0x94, 0x3, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x96, 0x7, 0x19, 0x2, 0x2, 0x96, 0x97, 0x5, 0x6, 0x4, 
    0x2, 0x97, 0x98, 0x7, 0x20, 0x2, 0x2, 0x98, 0x5, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9b, 0xa, 0x2, 0x2, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 
    0x1a, 0x2, 0x2, 0x9f, 0xa0, 0x5, 0xa, 0x6, 0x2, 0xa0, 0xa1, 0x7, 0x20, 
    0x2, 0x2, 0xa1, 0x9, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0xa, 0x2, 0x2, 
    0x2, 0xa3, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x1b, 0x2, 0x2, 0xa8, 0xa9, 
    0x5, 0x10, 0x9, 0x2, 0xa9, 0xaa, 0x7, 0x20, 0x2, 0x2, 0xaa, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x1d, 0x2, 0x2, 0xac, 0xad, 0x5, 0x10, 
    0x9, 0x2, 0xad, 0xae, 0x7, 0x20, 0x2, 0x2, 0xae, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0xb1, 0x5, 0x12, 0xa, 0x2, 0xb0, 0xaf, 0x3, 0x2, 0x2, 0x2, 
    0xb1, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xb3, 0x11, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 
    0x7, 0x1f, 0x2, 0x2, 0xb5, 0xb6, 0x5, 0x14, 0xb, 0x2, 0xb6, 0xb7, 0x7, 
    0x21, 0x2, 0x2, 0xb7, 0xb8, 0x5, 0x16, 0xc, 0x2, 0xb8, 0xb9, 0x7, 0x20, 
    0x2, 0x2, 0xb9, 0x13, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbc, 0xa, 0x3, 0x2, 
    0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbd, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc1, 0xa, 0x2, 0x2, 0x2, 0xc0, 0xbf, 
    0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 
    0x2, 0x2, 0x2, 0xc2, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0xc4, 0xc5, 0x7, 0x1c, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0x1a, 0xe, 
    0x2, 0xc6, 0xc8, 0x5, 0x1e, 0x10, 0x2, 0xc7, 0xc9, 0x5, 0x24, 0x13, 
    0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 
    0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x7, 0x1e, 0x2, 0x2, 0xcb, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x26, 0x14, 0x2, 0xcd, 0xce, 
    0x8, 0xe, 0x1, 0x2, 0xce, 0xcf, 0x5, 0x28, 0x15, 0x2, 0xcf, 0xd0, 0x8, 
    0xe, 0x1, 0x2, 0xd0, 0xd1, 0x5, 0x2a, 0x16, 0x2, 0xd1, 0xd3, 0x8, 0xe, 
    0x1, 0x2, 0xd2, 0xd4, 0x5, 0x2c, 0x17, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd9, 0x8, 0xe, 0x1, 0x2, 0xd6, 0xd8, 0x5, 0x1c, 0xf, 0x2, 0xd7, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xd7, 
    0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x8, 0xe, 
    0x1, 0x2, 0xdd, 0xde, 0x5, 0x36, 0x1c, 0x2, 0xde, 0xdf, 0x8, 0xe, 0x1, 
    0x2, 0xdf, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x5, 0x2e, 0x18, 0x2, 
    0xe1, 0xe3, 0x8, 0xf, 0x1, 0x2, 0xe2, 0xe4, 0x5, 0x30, 0x19, 0x2, 0xe3, 
    0xe2, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 
    0x3, 0x2, 0x2, 0x2, 0xe5, 0xe6, 0x8, 0xf, 0x1, 0x2, 0xe6, 0xe7, 0x5, 
    0x32, 0x1a, 0x2, 0xe7, 0xe8, 0x8, 0xf, 0x1, 0x2, 0xe8, 0xe9, 0x5, 0x34, 
    0x1b, 0x2, 0xe9, 0xea, 0x8, 0xf, 0x1, 0x2, 0xea, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xeb, 0xec, 0x5, 0x38, 0x1d, 0x2, 0xec, 0xee, 0x8, 0x10, 0x1, 0x2, 
    0xed, 0xef, 0x5, 0x3a, 0x1e, 0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 
    0xf0, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 
    0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf4, 0x8, 
    0x10, 0x1, 0x2, 0xf3, 0xf5, 0x5, 0x3c, 0x1f, 0x2, 0xf4, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf4, 0x3, 0x2, 0x2, 
    0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 
    0xf8, 0xf9, 0x8, 0x10, 0x1, 0x2, 0xf9, 0xfa, 0x5, 0x3e, 0x20, 0x2, 0xfa, 
    0xfc, 0x8, 0x10, 0x1, 0x2, 0xfb, 0xfd, 0x5, 0x40, 0x21, 0x2, 0xfc, 0xfb, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x3, 
    0x2, 0x2, 0x2, 0xfe, 0xff, 0x8, 0x10, 0x1, 0x2, 0xff, 0x100, 0x5, 0x20, 
    0x11, 0x2, 0x100, 0x102, 0x8, 0x10, 0x1, 0x2, 0x101, 0x103, 0x5, 0x22, 
    0x12, 0x2, 0x102, 0x101, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 
    0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x8, 0x10, 
    0x1, 0x2, 0x105, 0x106, 0x5, 0x52, 0x2a, 0x2, 0x106, 0x107, 0x8, 0x10, 
    0x1, 0x2, 0x107, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x5, 0x42, 
    0x22, 0x2, 0x109, 0x10b, 0x8, 0x11, 0x1, 0x2, 0x10a, 0x10c, 0x5, 0x44, 
    0x23, 0x2, 0x10b, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10b, 0x10c, 0x3, 0x2, 
    0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10e, 0x8, 0x11, 
    0x1, 0x2, 0x10e, 0x10f, 0x5, 0x46, 0x24, 0x2, 0x10f, 0x110, 0x8, 0x11, 
    0x1, 0x2, 0x110, 0x111, 0x5, 0x48, 0x25, 0x2, 0x111, 0x112, 0x8, 0x11, 
    0x1, 0x2, 0x112, 0x21, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 0x5, 0x4a, 
    0x26, 0x2, 0x114, 0x115, 0x8, 0x12, 0x1, 0x2, 0x115, 0x116, 0x5, 0x4c, 
    0x27, 0x2, 0x116, 0x118, 0x8, 0x12, 0x1, 0x2, 0x117, 0x119, 0x5, 0x4e, 
    0x28, 0x2, 0x118, 0x117, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 
    0x2, 0x2, 0x119, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11b, 0x8, 0x12, 
    0x1, 0x2, 0x11b, 0x11c, 0x5, 0x50, 0x29, 0x2, 0x11c, 0x11d, 0x8, 0x12, 
    0x1, 0x2, 0x11d, 0x23, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11f, 0x5, 0x54, 
    0x2b, 0x2, 0x11f, 0x121, 0x8, 0x13, 0x1, 0x2, 0x120, 0x122, 0x5, 0x56, 
    0x2c, 0x2, 0x121, 0x120, 0x3, 0x2, 0x2, 0x2, 0x121, 0x122, 0x3, 0x2, 
    0x2, 0x2, 0x122, 0x123, 0x3, 0x2, 0x2, 0x2, 0x123, 0x125, 0x8, 0x13, 
    0x1, 0x2, 0x124, 0x126, 0x5, 0x58, 0x2d, 0x2, 0x125, 0x124, 0x3, 0x2, 
    0x2, 0x2, 0x125, 0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 
    0x2, 0x2, 0x127, 0x129, 0x8, 0x13, 0x1, 0x2, 0x128, 0x12a, 0x5, 0x5a, 
    0x2e, 0x2, 0x129, 0x128, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 
    0x2, 0x2, 0x12a, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12d, 0x8, 0x13, 
    0x1, 0x2, 0x12c, 0x12e, 0x5, 0x5c, 0x2f, 0x2, 0x12d, 0x12c, 0x3, 0x2, 
    0x2, 0x2, 0x12d, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 
    0x2, 0x2, 0x12f, 0x130, 0x8, 0x13, 0x1, 0x2, 0x130, 0x131, 0x5, 0x5e, 
    0x30, 0x2, 0x131, 0x132, 0x8, 0x13, 0x1, 0x2, 0x132, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0x133, 0x134, 0x7, 0x22, 0x2, 0x2, 0x134, 0x136, 0x7, 0x3, 
    0x2, 0x2, 0x135, 0x137, 0xa, 0x4, 0x2, 0x2, 0x136, 0x135, 0x3, 0x2, 
    0x2, 0x2, 0x137, 0x138, 0x3, 0x2, 0x2, 0x2, 0x138, 0x136, 0x3, 0x2, 
    0x2, 0x2, 0x138, 0x139, 0x3, 0x2, 0x2, 0x2, 0x139, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0x13a, 0x13b, 0x5, 0x60, 0x31, 0x2, 0x13b, 0x13c, 0x8, 0x15, 0x1, 
    0x2, 0x13c, 0x29, 0x3, 0x2, 0x2, 0x2, 0x13d, 0x13e, 0x5, 0x62, 0x32, 
    0x2, 0x13e, 0x13f, 0x8, 0x16, 0x1, 0x2, 0x13f, 0x2b, 0x3, 0x2, 0x2, 
    0x2, 0x140, 0x141, 0x5, 0x64, 0x33, 0x2, 0x141, 0x142, 0x8, 0x17, 0x1, 
    0x2, 0x142, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x22, 0x2, 
    0x2, 0x144, 0x146, 0x7, 0x3, 0x2, 0x2, 0x145, 0x147, 0xa, 0x4, 0x2, 
    0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 0x2, 
    0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 0x2, 
    0x2, 0x149, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x5, 0x66, 0x34, 
    0x2, 0x14b, 0x14c, 0x8, 0x19, 0x1, 0x2, 0x14c, 0x151, 0x3, 0x2, 0x2, 
    0x2, 0x14d, 0x14e, 0x5, 0x68, 0x35, 0x2, 0x14e, 0x14f, 0x8, 0x19, 0x1, 
    0x2, 0x14f, 0x151, 0x3, 0x2, 0x2, 0x2, 0x150, 0x14a, 0x3, 0x2, 0x2, 
    0x2, 0x150, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x151, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x152, 0x153, 0x5, 0x6a, 0x36, 0x2, 0x153, 0x154, 0x8, 0x1a, 0x1, 0x2, 
    0x154, 0x33, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x7, 0x22, 0x2, 0x2, 
    0x156, 0x158, 0x7, 0x4, 0x2, 0x2, 0x157, 0x159, 0xa, 0x4, 0x2, 0x2, 
    0x158, 0x157, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 
    0x15a, 0x158, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x15b, 0x3, 0x2, 0x2, 0x2, 
    0x15b, 0x35, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 0x7, 0x22, 0x2, 0x2, 
    0x15d, 0x15f, 0x7, 0x4, 0x2, 0x2, 0x15e, 0x160, 0xa, 0x4, 0x2, 0x2, 
    0x15f, 0x15e, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 0x3, 0x2, 0x2, 0x2, 
    0x161, 0x15f, 0x3, 0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 
    0x162, 0x37, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x7, 0x22, 0x2, 0x2, 
    0x164, 0x166, 0x7, 0x3, 0x2, 0x2, 0x165, 0x167, 0xa, 0x4, 0x2, 0x2, 
    0x166, 0x165, 0x3, 0x2, 0x2, 0x2, 0x167, 0x168, 0x3, 0x2, 0x2, 0x2, 
    0x168, 0x166, 0x3, 0x2, 0x2, 0x2, 0x168, 0x169, 0x3, 0x2, 0x2, 0x2, 
    0x169, 0x39, 0x3, 0x2, 0x2, 0x2, 0x16a, 0x16b, 0x5, 0x6c, 0x37, 0x2, 
    0x16b, 0x16c, 0x8, 0x1e, 0x1, 0x2, 0x16c, 0x171, 0x3, 0x2, 0x2, 0x2, 
    0x16d, 0x16e, 0x5, 0x6e, 0x38, 0x2, 0x16e, 0x16f, 0x8, 0x1e, 0x1, 0x2, 
    0x16f, 0x171, 0x3, 0x2, 0x2, 0x2, 0x170, 0x16a, 0x3, 0x2, 0x2, 0x2, 
    0x170, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x171, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x172, 
    0x173, 0x5, 0x70, 0x39, 0x2, 0x173, 0x174, 0x8, 0x1f, 0x1, 0x2, 0x174, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x175, 0x176, 0x5, 0x72, 0x3a, 0x2, 0x176, 
    0x177, 0x8, 0x20, 0x1, 0x2, 0x177, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x178, 
    0x179, 0x5, 0x74, 0x3b, 0x2, 0x179, 0x17a, 0x8, 0x21, 0x1, 0x2, 0x17a, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x7, 0x22, 0x2, 0x2, 0x17c, 
    0x17e, 0x7, 0x3, 0x2, 0x2, 0x17d, 0x17f, 0xa, 0x4, 0x2, 0x2, 0x17e, 
    0x17d, 0x3, 0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 
    0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x3, 0x2, 0x2, 0x2, 0x181, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x182, 0x183, 0x5, 0x76, 0x3c, 0x2, 0x183, 
    0x184, 0x8, 0x23, 0x1, 0x2, 0x184, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x185, 
    0x186, 0x5, 0x78, 0x3d, 0x2, 0x186, 0x187, 0x8, 0x23, 0x1, 0x2, 0x187, 
    0x18c, 0x3, 0x2, 0x2, 0x2, 0x188, 0x189, 0x5, 0x7a, 0x3e, 0x2, 0x189, 
    0x18a, 0x8, 0x23, 0x1, 0x2, 0x18a, 0x18c, 0x3, 0x2, 0x2, 0x2, 0x18b, 
    0x182, 0x3, 0x2, 0x2, 0x2, 0x18b, 0x185, 0x3, 0x2, 0x2, 0x2, 0x18b, 
    0x188, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x45, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18e, 
    0x5, 0x7c, 0x3f, 0x2, 0x18e, 0x18f, 0x8, 0x24, 0x1, 0x2, 0x18f, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x7, 0x22, 0x2, 0x2, 0x191, 0x193, 
    0x7, 0x4, 0x2, 0x2, 0x192, 0x194, 0xa, 0x4, 0x2, 0x2, 0x193, 0x192, 
    0x3, 0x2, 0x2, 0x2, 0x194, 0x195, 0x3, 0x2, 0x2, 0x2, 0x195, 0x193, 
    0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x3, 0x2, 0x2, 0x2, 0x196, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x197, 0x198, 0x7, 0x22, 0x2, 0x2, 0x198, 0x19a, 0x7, 
    0x3, 0x2, 0x2, 0x199, 0x19b, 0xa, 0x4, 0x2, 0x2, 0x19a, 0x199, 0x3, 
    0x2, 0x2, 0x2, 0x19b, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19c, 0x19a, 0x3, 
    0x2, 0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x19e, 0x19f, 0x5, 0x7e, 0x40, 0x2, 0x19f, 0x1a0, 0x8, 0x27, 
    0x1, 0x2, 0x1a0, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x1a2, 0x5, 0x80, 
    0x41, 0x2, 0x1a2, 0x1a3, 0x8, 0x28, 0x1, 0x2, 0x1a3, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x22, 0x2, 0x2, 0x1a5, 0x1a7, 0x7, 0x4, 
    0x2, 0x2, 0x1a6, 0x1a8, 0xa, 0x4, 0x2, 0x2, 0x1a7, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x1a8, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a9, 0x1a7, 0x3, 0x2, 
    0x2, 0x2, 0x1a9, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x51, 0x3, 0x2, 0x2, 
    0x2, 0x1ab, 0x1ac, 0x7, 0x22, 0x2, 0x2, 0x1ac, 0x1ae, 0x7, 0x4, 0x2, 
    0x2, 0x1ad, 0x1af, 0xa, 0x4, 0x2, 0x2, 0x1ae, 0x1ad, 0x3, 0x2, 0x2, 
    0x2, 0x1af, 0x1b0, 0x3, 0x2, 0x2, 0x2, 0x1b0, 0x1ae, 0x3, 0x2, 0x2, 
    0x2, 0x1b0, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x1b2, 0x1b3, 0x7, 0x22, 0x2, 0x2, 0x1b3, 0x1b5, 0x7, 0x3, 0x2, 0x2, 
    0x1b4, 0x1b6, 0xa, 0x4, 0x2, 0x2, 0x1b5, 0x1b4, 0x3, 0x2, 0x2, 0x2, 
    0x1b6, 0x1b7, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1b5, 0x3, 0x2, 0x2, 0x2, 
    0x1b7, 0x1b8, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1b9, 
    0x1ba, 0x5, 0x82, 0x42, 0x2, 0x1ba, 0x1bb, 0x8, 0x2c, 0x1, 0x2, 0x1bb, 
    0x57, 0x3, 0x2, 0x2, 0x2, 0x1bc, 0x1bd, 0x5, 0x84, 0x43, 0x2, 0x1bd, 
    0x1be, 0x8, 0x2d, 0x1, 0x2, 0x1be, 0x59, 0x3, 0x2, 0x2, 0x2, 0x1bf, 
    0x1c0, 0x5, 0x86, 0x44, 0x2, 0x1c0, 0x1c1, 0x8, 0x2e, 0x1, 0x2, 0x1c1, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 0x5, 0x88, 0x45, 0x2, 0x1c3, 
    0x1c4, 0x8, 0x2f, 0x1, 0x2, 0x1c4, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x1c5, 
    0x1c6, 0x7, 0x22, 0x2, 0x2, 0x1c6, 0x1c8, 0x7, 0x4, 0x2, 0x2, 0x1c7, 
    0x1c9, 0xa, 0x4, 0x2, 0x2, 0x1c8, 0x1c7, 0x3, 0x2, 0x2, 0x2, 0x1c9, 
    0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1ca, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1ca, 
    0x1cb, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1cd, 
    0x7, 0x22, 0x2, 0x2, 0x1cd, 0x1cf, 0x7, 0x5, 0x2, 0x2, 0x1ce, 0x1d0, 
    0xa, 0x4, 0x2, 0x2, 0x1cf, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 
    0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1cf, 0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 
    0x3, 0x2, 0x2, 0x2, 0x1d2, 0x61, 0x3, 0x2, 0x2, 0x2, 0x1d3, 0x1d4, 0x7, 
    0x22, 0x2, 0x2, 0x1d4, 0x1d6, 0x7, 0x6, 0x2, 0x2, 0x1d5, 0x1d7, 0xa, 
    0x4, 0x2, 0x2, 0x1d6, 0x1d5, 0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x3, 
    0x2, 0x2, 0x2, 0x1d8, 0x1d6, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d9, 0x3, 
    0x2, 0x2, 0x2, 0x1d9, 0x63, 0x3, 0x2, 0x2, 0x2, 0x1da, 0x1db, 0x7, 0x22, 
    0x2, 0x2, 0x1db, 0x1dd, 0x7, 0x7, 0x2, 0x2, 0x1dc, 0x1de, 0xa, 0x4, 
    0x2, 0x2, 0x1dd, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1de, 0x1df, 0x3, 0x2, 
    0x2, 0x2, 0x1df, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 
    0x2, 0x2, 0x1e0, 0x65, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x7, 0x22, 
    0x2, 0x2, 0x1e2, 0x1e4, 0x7, 0x8, 0x2, 0x2, 0x1e3, 0x1e5, 0xa, 0x4, 
    0x2, 0x2, 0x1e4, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 0x1e6, 0x3, 0x2, 
    0x2, 0x2, 0x1e6, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x3, 0x2, 
    0x2, 0x2, 0x1e7, 0x67, 0x3, 0x2, 0x2, 0x2, 0x1e8, 0x1e9, 0x7, 0x22, 
    0x2, 0x2, 0x1e9, 0x1eb, 0x7, 0x9, 0x2, 0x2, 0x1ea, 0x1ec, 0xa, 0x4, 
    0x2, 0x2, 0x1eb, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1ec, 0x1ed, 0x3, 0x2, 
    0x2, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x69, 0x3, 0x2, 0x2, 0x2, 0x1ef, 0x1f0, 0x7, 0x22, 
    0x2, 0x2, 0x1f0, 0x1f2, 0x7, 0x5, 0x2, 0x2, 0x1f1, 0x1f3, 0xa, 0x4, 
    0x2, 0x2, 0x1f2, 0x1f1, 0x3, 0x2, 0x2, 0x2, 0x1f3, 0x1f4, 0x3, 0x2, 
    0x2, 0x2, 0x1f4, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x1f6, 0x1f7, 0x7, 0x22, 
    0x2, 0x2, 0x1f7, 0x1f9, 0x7, 0xa, 0x2, 0x2, 0x1f8, 0x1fa, 0xa, 0x4, 
    0x2, 0x2, 0x1f9, 0x1f8, 0x3, 0x2, 0x2, 0x2, 0x1fa, 0x1fb, 0x3, 0x2, 
    0x2, 0x2, 0x1fb, 0x1f9, 0x3, 0x2, 0x2, 0x2, 0x1fb, 0x1fc, 0x3, 0x2, 
    0x2, 0x2, 0x1fc, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x7, 0x22, 
    0x2, 0x2, 0x1fe, 0x200, 0x7, 0xb, 0x2, 0x2, 0x1ff, 0x201, 0xa, 0x4, 
    0x2, 0x2, 0x200, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x201, 0x202, 0x3, 0x2, 
    0x2, 0x2, 0x202, 0x200, 0x3, 0x2, 0x2, 0x2, 0x202, 0x203, 0x3, 0x2, 
    0x2, 0x2, 0x203, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x204, 0x205, 0x7, 0x22, 
    0x2, 0x2, 0x205, 0x207, 0x7, 0xc, 0x2, 0x2, 0x206, 0x208, 0xa, 0x4, 
    0x2, 0x2, 0x207, 0x206, 0x3, 0x2, 0x2, 0x2, 0x208, 0x209, 0x3, 0x2, 
    0x2, 0x2, 0x209, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 
    0x2, 0x2, 0x20a, 0x71, 0x3, 0x2, 0x2, 0x2, 0x20b, 0x20c, 0x7, 0x22, 
    0x2, 0x2, 0x20c, 0x20e, 0x7, 0xd, 0x2, 0x2, 0x20d, 0x20f, 0xa, 0x4, 
    0x2, 0x2, 0x20e, 0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 
    0x2, 0x2, 0x210, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 
    0x2, 0x2, 0x211, 0x73, 0x3, 0x2, 0x2, 0x2, 0x212, 0x213, 0x7, 0x22, 
    0x2, 0x2, 0x213, 0x215, 0x7, 0xe, 0x2, 0x2, 0x214, 0x216, 0xa, 0x4, 
    0x2, 0x2, 0x215, 0x214, 0x3, 0x2, 0x2, 0x2, 0x216, 0x217, 0x3, 0x2, 
    0x2, 0x2, 0x217, 0x215, 0x3, 0x2, 0x2, 0x2, 0x217, 0x218, 0x3, 0x2, 
    0x2, 0x2, 0x218, 0x75, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x7, 0x22, 
    0x2, 0x2, 0x21a, 0x21c, 0x7, 0xf, 0x2, 0x2, 0x21b, 0x21d, 0xa, 0x4, 
    0x2, 0x2, 0x21c, 0x21b, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x21e, 0x3, 0x2, 
    0x2, 0x2, 0x21e, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x3, 0x2, 
    0x2, 0x2, 0x21f, 0x77, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x7, 0x22, 
    0x2, 0x2, 0x221, 0x223, 0x7, 0x10, 0x2, 0x2, 0x222, 0x224, 0xa, 0x4, 
    0x2, 0x2, 0x223, 0x222, 0x3, 0x2, 0x2, 0x2, 0x224, 0x225, 0x3, 0x2, 
    0x2, 0x2, 0x225, 0x223, 0x3, 0x2, 0x2, 0x2, 0x225, 0x226, 0x3, 0x2, 
    0x2, 0x2, 0x226, 0x79, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x7, 0x22, 
    0x2, 0x2, 0x228, 0x22a, 0x7, 0x11, 0x2, 0x2, 0x229, 0x22b, 0xa, 0x4, 
    0x2, 0x2, 0x22a, 0x229, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x22c, 0x22a, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x3, 0x2, 
    0x2, 0x2, 0x22d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x7, 0x22, 
    0x2, 0x2, 0x22f, 0x231, 0x7, 0x12, 0x2, 0x2, 0x230, 0x232, 0xa, 0x4, 
    0x2, 0x2, 0x231, 0x230, 0x3, 0x2, 0x2, 0x2, 0x232, 0x233, 0x3, 0x2, 
    0x2, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x3, 0x2, 
    0x2, 0x2, 0x234, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x235, 0x236, 0x7, 0x22, 
    0x2, 0x2, 0x236, 0x238, 0x7, 0x13, 0x2, 0x2, 0x237, 0x239, 0xa, 0x4, 
    0x2, 0x2, 0x238, 0x237, 0x3, 0x2, 0x2, 0x2, 0x239, 0x23a, 0x3, 0x2, 
    0x2, 0x2, 0x23a, 0x238, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 
    0x2, 0x2, 0x23b, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x23d, 0x7, 0x22, 
    0x2, 0x2, 0x23d, 0x23f, 0x7, 0x14, 0x2, 0x2, 0x23e, 0x240, 0xa, 0x4, 
    0x2, 0x2, 0x23f, 0x23e, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x3, 0x2, 
    0x2, 0x2, 0x241, 0x23f, 0x3, 0x2, 0x2, 0x2, 0x241, 0x242, 0x3, 0x2, 
    0x2, 0x2, 0x242, 0x81, 0x3, 0x2, 0x2, 0x2, 0x243, 0x244, 0x7, 0x22, 
    0x2, 0x2, 0x244, 0x246, 0x7, 0x15, 0x2, 0x2, 0x245, 0x247, 0xa, 0x4, 
    0x2, 0x2, 0x246, 0x245, 0x3, 0x2, 0x2, 0x2, 0x247, 0x248, 0x3, 0x2, 
    0x2, 0x2, 0x248, 0x246, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x3, 0x2, 
    0x2, 0x2, 0x249, 0x83, 0x3, 0x2, 0x2, 0x2, 0x24a, 0x24b, 0x7, 0x22, 
    0x2, 0x2, 0x24b, 0x24d, 0x7, 0x16, 0x2, 0x2, 0x24c, 0x24e, 0xa, 0x4, 
    0x2, 0x2, 0x24d, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x3, 0x2, 
    0x2, 0x2, 0x24f, 0x24d, 0x3, 0x2, 0x2, 0x2, 0x24f, 0x250, 0x3, 0x2, 
    0x2, 0x2, 0x250, 0x85, 0x3, 0x2, 0x2, 0x2, 0x251, 0x252, 0x7, 0x22, 
    0x2, 0x2, 0x252, 0x254, 0x7, 0x17, 0x2, 0x2, 0x253, 0x255, 0xa, 0x4, 
    0x2, 0x2, 0x254, 0x253, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x3, 0x2, 
    0x2, 0x2, 0x256, 0x254, 0x3, 0x2, 0x2, 0x2, 0x256, 0x257, 0x3, 0x2, 
    0x2, 0x2, 0x257, 0x87, 0x3, 0x2, 0x2, 0x2, 0x258, 0x259, 0x7, 0x22, 
    0x2, 0x2, 0x259, 0x25b, 0x7, 0x18, 0x2, 0x2, 0x25a, 0x25c, 0xa, 0x4, 
    0x2, 0x2, 0x25b, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x3, 0x2, 
    0x2, 0x2, 0x25d, 0x25b, 0x3, 0x2, 0x2, 0x2, 0x25d, 0x25e, 0x3, 0x2, 
    0x2, 0x2, 0x25e, 0x89, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x8d, 0x91, 0x9c, 0xa5, 
    0xb2, 0xbd, 0xc2, 0xc8, 0xd3, 0xd9, 0xe3, 0xf0, 0xf6, 0xfc, 0x102, 0x10b, 
    0x118, 0x121, 0x125, 0x129, 0x12d, 0x138, 0x148, 0x150, 0x15a, 0x161, 
    0x168, 0x170, 0x180, 0x18b, 0x195, 0x19c, 0x1a9, 0x1b0, 0x1b7, 0x1ca, 
    0x1d1, 0x1d8, 0x1df, 0x1e6, 0x1ed, 0x1f4, 0x1fb, 0x202, 0x209, 0x210, 
    0x217, 0x21e, 0x225, 0x22c, 0x233, 0x23a, 0x241, 0x248, 0x24f, 0x256, 
    0x25d, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT381Parser::Initializer SwiftMtParser_MT381Parser::_init;
