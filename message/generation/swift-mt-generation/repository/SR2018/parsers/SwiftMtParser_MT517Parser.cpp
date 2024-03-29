
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT517Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT517.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT517Listener.h"

#include "SwiftMtParser_MT517Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
using namespace antlr4;

SwiftMtParser_MT517Parser::SwiftMtParser_MT517Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT517Parser::~SwiftMtParser_MT517Parser() {
  delete _interpreter;
}

std::string SwiftMtParser_MT517Parser::getGrammarFileName() const {
  return "SwiftMtParser_MT517.g4";
}

const std::vector<std::string>& SwiftMtParser_MT517Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& SwiftMtParser_MT517Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- MessageContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::MessageContext::MessageContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::BhContext* SwiftMtParser_MT517Parser::MessageContext::bh() {
  return getRuleContext<SwiftMtParser_MT517Parser::BhContext>(0);
}

SwiftMtParser_MT517Parser::AhContext* SwiftMtParser_MT517Parser::MessageContext::ah() {
  return getRuleContext<SwiftMtParser_MT517Parser::AhContext>(0);
}

SwiftMtParser_MT517Parser::MtContext* SwiftMtParser_MT517Parser::MessageContext::mt() {
  return getRuleContext<SwiftMtParser_MT517Parser::MtContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::MessageContext::EOF() {
  return getToken(SwiftMtParser_MT517Parser::EOF, 0);
}

SwiftMtParser_MT517Parser::UhContext* SwiftMtParser_MT517Parser::MessageContext::uh() {
  return getRuleContext<SwiftMtParser_MT517Parser::UhContext>(0);
}

SwiftMtParser_MT517Parser::TrContext* SwiftMtParser_MT517Parser::MessageContext::tr() {
  return getRuleContext<SwiftMtParser_MT517Parser::TrContext>(0);
}


size_t SwiftMtParser_MT517Parser::MessageContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleMessage;
}

void SwiftMtParser_MT517Parser::MessageContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMessage(this);
}

void SwiftMtParser_MT517Parser::MessageContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMessage(this);
}

SwiftMtParser_MT517Parser::MessageContext* SwiftMtParser_MT517Parser::message() {
  MessageContext *_localctx = _tracker.createInstance<MessageContext>(_ctx, getState());
  enterRule(_localctx, 0, SwiftMtParser_MT517Parser::RuleMessage);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    bh();
    setState(77);
    ah();
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT517Parser::TAG_UH) {
      setState(78);
      uh();
    }
    setState(81);
    mt();
    setState(83);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SwiftMtParser_MT517Parser::TAG_TR) {
      setState(82);
      tr();
    }
    setState(85);
    match(SwiftMtParser_MT517Parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BhContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::BhContext::BhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT517Parser::BhContext::TAG_BH() {
  return getToken(SwiftMtParser_MT517Parser::TAG_BH, 0);
}

SwiftMtParser_MT517Parser::Bh_contentContext* SwiftMtParser_MT517Parser::BhContext::bh_content() {
  return getRuleContext<SwiftMtParser_MT517Parser::Bh_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::BhContext::RBRACE() {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT517Parser::BhContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleBh;
}

void SwiftMtParser_MT517Parser::BhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh(this);
}

void SwiftMtParser_MT517Parser::BhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh(this);
}

SwiftMtParser_MT517Parser::BhContext* SwiftMtParser_MT517Parser::bh() {
  BhContext *_localctx = _tracker.createInstance<BhContext>(_ctx, getState());
  enterRule(_localctx, 2, SwiftMtParser_MT517Parser::RuleBh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(SwiftMtParser_MT517Parser::TAG_BH);
    setState(88);
    bh_content();
    setState(89);
    match(SwiftMtParser_MT517Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Bh_contentContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Bh_contentContext::Bh_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Bh_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT517Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Bh_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, i);
}


size_t SwiftMtParser_MT517Parser::Bh_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleBh_content;
}

void SwiftMtParser_MT517Parser::Bh_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBh_content(this);
}

void SwiftMtParser_MT517Parser::Bh_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBh_content(this);
}

SwiftMtParser_MT517Parser::Bh_contentContext* SwiftMtParser_MT517Parser::bh_content() {
  Bh_contentContext *_localctx = _tracker.createInstance<Bh_contentContext>(_ctx, getState());
  enterRule(_localctx, 4, SwiftMtParser_MT517Parser::RuleBh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(91);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(94); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AhContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::AhContext::AhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT517Parser::AhContext::TAG_AH() {
  return getToken(SwiftMtParser_MT517Parser::TAG_AH, 0);
}

SwiftMtParser_MT517Parser::Ah_contentContext* SwiftMtParser_MT517Parser::AhContext::ah_content() {
  return getRuleContext<SwiftMtParser_MT517Parser::Ah_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::AhContext::RBRACE() {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT517Parser::AhContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleAh;
}

void SwiftMtParser_MT517Parser::AhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh(this);
}

void SwiftMtParser_MT517Parser::AhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh(this);
}

SwiftMtParser_MT517Parser::AhContext* SwiftMtParser_MT517Parser::ah() {
  AhContext *_localctx = _tracker.createInstance<AhContext>(_ctx, getState());
  enterRule(_localctx, 6, SwiftMtParser_MT517Parser::RuleAh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(SwiftMtParser_MT517Parser::TAG_AH);
    setState(97);
    ah_content();
    setState(98);
    match(SwiftMtParser_MT517Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Ah_contentContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Ah_contentContext::Ah_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Ah_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT517Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Ah_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, i);
}


size_t SwiftMtParser_MT517Parser::Ah_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleAh_content;
}

void SwiftMtParser_MT517Parser::Ah_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAh_content(this);
}

void SwiftMtParser_MT517Parser::Ah_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAh_content(this);
}

SwiftMtParser_MT517Parser::Ah_contentContext* SwiftMtParser_MT517Parser::ah_content() {
  Ah_contentContext *_localctx = _tracker.createInstance<Ah_contentContext>(_ctx, getState());
  enterRule(_localctx, 8, SwiftMtParser_MT517Parser::RuleAh_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(100);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(103); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UhContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::UhContext::UhContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT517Parser::UhContext::TAG_UH() {
  return getToken(SwiftMtParser_MT517Parser::TAG_UH, 0);
}

SwiftMtParser_MT517Parser::Sys_blockContext* SwiftMtParser_MT517Parser::UhContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT517Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::UhContext::RBRACE() {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT517Parser::UhContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleUh;
}

void SwiftMtParser_MT517Parser::UhContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUh(this);
}

void SwiftMtParser_MT517Parser::UhContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUh(this);
}

SwiftMtParser_MT517Parser::UhContext* SwiftMtParser_MT517Parser::uh() {
  UhContext *_localctx = _tracker.createInstance<UhContext>(_ctx, getState());
  enterRule(_localctx, 10, SwiftMtParser_MT517Parser::RuleUh);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(SwiftMtParser_MT517Parser::TAG_UH);
    setState(106);
    sys_block();
    setState(107);
    match(SwiftMtParser_MT517Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TrContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::TrContext::TrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT517Parser::TrContext::TAG_TR() {
  return getToken(SwiftMtParser_MT517Parser::TAG_TR, 0);
}

SwiftMtParser_MT517Parser::Sys_blockContext* SwiftMtParser_MT517Parser::TrContext::sys_block() {
  return getRuleContext<SwiftMtParser_MT517Parser::Sys_blockContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::TrContext::RBRACE() {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT517Parser::TrContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleTr;
}

void SwiftMtParser_MT517Parser::TrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTr(this);
}

void SwiftMtParser_MT517Parser::TrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTr(this);
}

SwiftMtParser_MT517Parser::TrContext* SwiftMtParser_MT517Parser::tr() {
  TrContext *_localctx = _tracker.createInstance<TrContext>(_ctx, getState());
  enterRule(_localctx, 12, SwiftMtParser_MT517Parser::RuleTr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    match(SwiftMtParser_MT517Parser::TAG_TR);
    setState(110);
    sys_block();
    setState(111);
    match(SwiftMtParser_MT517Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_blockContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Sys_blockContext::Sys_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SwiftMtParser_MT517Parser::Sys_elementContext *> SwiftMtParser_MT517Parser::Sys_blockContext::sys_element() {
  return getRuleContexts<SwiftMtParser_MT517Parser::Sys_elementContext>();
}

SwiftMtParser_MT517Parser::Sys_elementContext* SwiftMtParser_MT517Parser::Sys_blockContext::sys_element(size_t i) {
  return getRuleContext<SwiftMtParser_MT517Parser::Sys_elementContext>(i);
}


size_t SwiftMtParser_MT517Parser::Sys_blockContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleSys_block;
}

void SwiftMtParser_MT517Parser::Sys_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_block(this);
}

void SwiftMtParser_MT517Parser::Sys_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_block(this);
}

SwiftMtParser_MT517Parser::Sys_blockContext* SwiftMtParser_MT517Parser::sys_block() {
  Sys_blockContext *_localctx = _tracker.createInstance<Sys_blockContext>(_ctx, getState());
  enterRule(_localctx, 14, SwiftMtParser_MT517Parser::RuleSys_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(113);
      sys_element();
      setState(116); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == SwiftMtParser_MT517Parser::LBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_elementContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Sys_elementContext::Sys_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Sys_elementContext::LBRACE() {
  return getToken(SwiftMtParser_MT517Parser::LBRACE, 0);
}

SwiftMtParser_MT517Parser::Sys_element_keyContext* SwiftMtParser_MT517Parser::Sys_elementContext::sys_element_key() {
  return getRuleContext<SwiftMtParser_MT517Parser::Sys_element_keyContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Sys_elementContext::COLON() {
  return getToken(SwiftMtParser_MT517Parser::COLON, 0);
}

SwiftMtParser_MT517Parser::Sys_element_contentContext* SwiftMtParser_MT517Parser::Sys_elementContext::sys_element_content() {
  return getRuleContext<SwiftMtParser_MT517Parser::Sys_element_contentContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Sys_elementContext::RBRACE() {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, 0);
}


size_t SwiftMtParser_MT517Parser::Sys_elementContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleSys_element;
}

void SwiftMtParser_MT517Parser::Sys_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element(this);
}

void SwiftMtParser_MT517Parser::Sys_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element(this);
}

SwiftMtParser_MT517Parser::Sys_elementContext* SwiftMtParser_MT517Parser::sys_element() {
  Sys_elementContext *_localctx = _tracker.createInstance<Sys_elementContext>(_ctx, getState());
  enterRule(_localctx, 16, SwiftMtParser_MT517Parser::RuleSys_element);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(SwiftMtParser_MT517Parser::LBRACE);
    setState(119);
    sys_element_key();
    setState(120);
    match(SwiftMtParser_MT517Parser::COLON);
    setState(121);
    sys_element_content();
    setState(122);
    match(SwiftMtParser_MT517Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_keyContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Sys_element_keyContext::Sys_element_keyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Sys_element_keyContext::COLON() {
  return getTokens(SwiftMtParser_MT517Parser::COLON);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Sys_element_keyContext::COLON(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::COLON, i);
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Sys_element_keyContext::RBRACE() {
  return getTokens(SwiftMtParser_MT517Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Sys_element_keyContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, i);
}


size_t SwiftMtParser_MT517Parser::Sys_element_keyContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleSys_element_key;
}

void SwiftMtParser_MT517Parser::Sys_element_keyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_key(this);
}

void SwiftMtParser_MT517Parser::Sys_element_keyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_key(this);
}

SwiftMtParser_MT517Parser::Sys_element_keyContext* SwiftMtParser_MT517Parser::sys_element_key() {
  Sys_element_keyContext *_localctx = _tracker.createInstance<Sys_element_keyContext>(_ctx, getState());
  enterRule(_localctx, 18, SwiftMtParser_MT517Parser::RuleSys_element_key);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(124);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::RBRACE

      || _la == SwiftMtParser_MT517Parser::COLON)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(127); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sys_element_contentContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Sys_element_contentContext::Sys_element_contentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Sys_element_contentContext::RBRACE() {
  return getTokens(SwiftMtParser_MT517Parser::RBRACE);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Sys_element_contentContext::RBRACE(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::RBRACE, i);
}


size_t SwiftMtParser_MT517Parser::Sys_element_contentContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleSys_element_content;
}

void SwiftMtParser_MT517Parser::Sys_element_contentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSys_element_content(this);
}

void SwiftMtParser_MT517Parser::Sys_element_contentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSys_element_content(this);
}

SwiftMtParser_MT517Parser::Sys_element_contentContext* SwiftMtParser_MT517Parser::sys_element_content() {
  Sys_element_contentContext *_localctx = _tracker.createInstance<Sys_element_contentContext>(_ctx, getState());
  enterRule(_localctx, 20, SwiftMtParser_MT517Parser::RuleSys_element_content);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(129);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::RBRACE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(132); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::START_OF_FIELD)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MtContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::MtContext::MtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SwiftMtParser_MT517Parser::MtContext::TAG_MT() {
  return getToken(SwiftMtParser_MT517Parser::TAG_MT, 0);
}

SwiftMtParser_MT517Parser::Seq_AContext* SwiftMtParser_MT517Parser::MtContext::seq_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Seq_AContext>(0);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::MtContext::MT_END() {
  return getToken(SwiftMtParser_MT517Parser::MT_END, 0);
}


size_t SwiftMtParser_MT517Parser::MtContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleMt;
}

void SwiftMtParser_MT517Parser::MtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMt(this);
}

void SwiftMtParser_MT517Parser::MtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMt(this);
}

SwiftMtParser_MT517Parser::MtContext* SwiftMtParser_MT517Parser::mt() {
  MtContext *_localctx = _tracker.createInstance<MtContext>(_ctx, getState());
  enterRule(_localctx, 22, SwiftMtParser_MT517Parser::RuleMt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(SwiftMtParser_MT517Parser::TAG_MT);
    setState(135);
    seq_A();
    setState(136);
    match(SwiftMtParser_MT517Parser::MT_END);
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

SwiftMtParser_MT517Parser::Seq_AContext::Seq_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_16R_AContext* SwiftMtParser_MT517Parser::Seq_AContext::fld_16R_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_16R_AContext>(0);
}

SwiftMtParser_MT517Parser::Fld_20C_AContext* SwiftMtParser_MT517Parser::Seq_AContext::fld_20C_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_20C_AContext>(0);
}

SwiftMtParser_MT517Parser::Fld_23G_AContext* SwiftMtParser_MT517Parser::Seq_AContext::fld_23G_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_23G_AContext>(0);
}

SwiftMtParser_MT517Parser::Fld_16S_AContext* SwiftMtParser_MT517Parser::Seq_AContext::fld_16S_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_16S_AContext>(0);
}

SwiftMtParser_MT517Parser::Fld_98a_AContext* SwiftMtParser_MT517Parser::Seq_AContext::fld_98a_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_98a_AContext>(0);
}

std::vector<SwiftMtParser_MT517Parser::Fld_95a_AContext *> SwiftMtParser_MT517Parser::Seq_AContext::fld_95a_A() {
  return getRuleContexts<SwiftMtParser_MT517Parser::Fld_95a_AContext>();
}

SwiftMtParser_MT517Parser::Fld_95a_AContext* SwiftMtParser_MT517Parser::Seq_AContext::fld_95a_A(size_t i) {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_95a_AContext>(i);
}

SwiftMtParser_MT517Parser::Fld_25D_AContext* SwiftMtParser_MT517Parser::Seq_AContext::fld_25D_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_25D_AContext>(0);
}

std::vector<SwiftMtParser_MT517Parser::Seq_A1Context *> SwiftMtParser_MT517Parser::Seq_AContext::seq_A1() {
  return getRuleContexts<SwiftMtParser_MT517Parser::Seq_A1Context>();
}

SwiftMtParser_MT517Parser::Seq_A1Context* SwiftMtParser_MT517Parser::Seq_AContext::seq_A1(size_t i) {
  return getRuleContext<SwiftMtParser_MT517Parser::Seq_A1Context>(i);
}


size_t SwiftMtParser_MT517Parser::Seq_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleSeq_A;
}

void SwiftMtParser_MT517Parser::Seq_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A(this);
}

void SwiftMtParser_MT517Parser::Seq_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A(this);
}

SwiftMtParser_MT517Parser::Seq_AContext* SwiftMtParser_MT517Parser::seq_A() {
  Seq_AContext *_localctx = _tracker.createInstance<Seq_AContext>(_ctx, getState());
  enterRule(_localctx, 24, SwiftMtParser_MT517Parser::RuleSeq_A);
   _localctx->elem.set_tag("A"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(138);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext = fld_16R_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext->fld); 
    setState(140);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext = fld_20C_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext->fld); 
    setState(142);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext = fld_23G_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext->fld); 
    setState(145);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(144);
      dynamic_cast<Seq_AContext *>(_localctx)->fld_98a_AContext = fld_98a_A();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_98a_AContext->fld); 
    setState(149); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(148);
              dynamic_cast<Seq_AContext *>(_localctx)->fld_95a_AContext = fld_95a_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(151); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_95a_AContext->fld); 
    setState(155);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(154);
      dynamic_cast<Seq_AContext *>(_localctx)->fld_25D_AContext = fld_25D_A();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_25D_AContext->fld); 
    setState(159); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(158);
              dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context = seq_A1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(161); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context->elem); 
    setState(164);
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

SwiftMtParser_MT517Parser::Seq_A1Context::Seq_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_16R_A1Context* SwiftMtParser_MT517Parser::Seq_A1Context::fld_16R_A1() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_16R_A1Context>(0);
}

SwiftMtParser_MT517Parser::Fld_20C_A1Context* SwiftMtParser_MT517Parser::Seq_A1Context::fld_20C_A1() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_20C_A1Context>(0);
}

SwiftMtParser_MT517Parser::Fld_16S_A1Context* SwiftMtParser_MT517Parser::Seq_A1Context::fld_16S_A1() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_16S_A1Context>(0);
}

SwiftMtParser_MT517Parser::Fld_13a_A1Context* SwiftMtParser_MT517Parser::Seq_A1Context::fld_13a_A1() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_13a_A1Context>(0);
}


size_t SwiftMtParser_MT517Parser::Seq_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleSeq_A1;
}

void SwiftMtParser_MT517Parser::Seq_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSeq_A1(this);
}

void SwiftMtParser_MT517Parser::Seq_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSeq_A1(this);
}

SwiftMtParser_MT517Parser::Seq_A1Context* SwiftMtParser_MT517Parser::seq_A1() {
  Seq_A1Context *_localctx = _tracker.createInstance<Seq_A1Context>(_ctx, getState());
  enterRule(_localctx, 26, SwiftMtParser_MT517Parser::RuleSeq_A1);
   _localctx->elem.set_tag("A1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(167);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context = fld_16R_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context->fld); 
    setState(170);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(169);
      dynamic_cast<Seq_A1Context *>(_localctx)->fld_13a_A1Context = fld_13a_A1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_13a_A1Context->fld); 
    setState(173);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context = fld_20C_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context->fld); 
    setState(175);
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

//----------------- Fld_16R_AContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_16R_AContext::Fld_16R_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_16R_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_16R_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_16R_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_16R_A;
}

void SwiftMtParser_MT517Parser::Fld_16R_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A(this);
}

void SwiftMtParser_MT517Parser::Fld_16R_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A(this);
}

SwiftMtParser_MT517Parser::Fld_16R_AContext* SwiftMtParser_MT517Parser::fld_16R_A() {
  Fld_16R_AContext *_localctx = _tracker.createInstance<Fld_16R_AContext>(_ctx, getState());
  enterRule(_localctx, 28, SwiftMtParser_MT517Parser::RuleFld_16R_A);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(179);
    match(SwiftMtParser_MT517Parser::T__0);
    setState(181); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(180);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(183); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_AContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_20C_AContext::Fld_20C_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_20C_A_CContext* SwiftMtParser_MT517Parser::Fld_20C_AContext::fld_20C_A_C() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_20C_A_CContext>(0);
}


size_t SwiftMtParser_MT517Parser::Fld_20C_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_20C_A;
}

void SwiftMtParser_MT517Parser::Fld_20C_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A(this);
}

void SwiftMtParser_MT517Parser::Fld_20C_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A(this);
}

SwiftMtParser_MT517Parser::Fld_20C_AContext* SwiftMtParser_MT517Parser::fld_20C_A() {
  Fld_20C_AContext *_localctx = _tracker.createInstance<Fld_20C_AContext>(_ctx, getState());
  enterRule(_localctx, 30, SwiftMtParser_MT517Parser::RuleFld_20C_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(185);
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

SwiftMtParser_MT517Parser::Fld_23G_AContext::Fld_23G_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_23G_A_GContext* SwiftMtParser_MT517Parser::Fld_23G_AContext::fld_23G_A_G() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_23G_A_GContext>(0);
}


size_t SwiftMtParser_MT517Parser::Fld_23G_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_23G_A;
}

void SwiftMtParser_MT517Parser::Fld_23G_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A(this);
}

void SwiftMtParser_MT517Parser::Fld_23G_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A(this);
}

SwiftMtParser_MT517Parser::Fld_23G_AContext* SwiftMtParser_MT517Parser::fld_23G_A() {
  Fld_23G_AContext *_localctx = _tracker.createInstance<Fld_23G_AContext>(_ctx, getState());
  enterRule(_localctx, 32, SwiftMtParser_MT517Parser::RuleFld_23G_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(188);
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

SwiftMtParser_MT517Parser::Fld_98a_AContext::Fld_98a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_98a_A_AContext* SwiftMtParser_MT517Parser::Fld_98a_AContext::fld_98a_A_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_98a_A_AContext>(0);
}

SwiftMtParser_MT517Parser::Fld_98a_A_CContext* SwiftMtParser_MT517Parser::Fld_98a_AContext::fld_98a_A_C() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_98a_A_CContext>(0);
}

SwiftMtParser_MT517Parser::Fld_98a_A_EContext* SwiftMtParser_MT517Parser::Fld_98a_AContext::fld_98a_A_E() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_98a_A_EContext>(0);
}


size_t SwiftMtParser_MT517Parser::Fld_98a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_98a_A;
}

void SwiftMtParser_MT517Parser::Fld_98a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A(this);
}

void SwiftMtParser_MT517Parser::Fld_98a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A(this);
}

SwiftMtParser_MT517Parser::Fld_98a_AContext* SwiftMtParser_MT517Parser::fld_98a_A() {
  Fld_98a_AContext *_localctx = _tracker.createInstance<Fld_98a_AContext>(_ctx, getState());
  enterRule(_localctx, 34, SwiftMtParser_MT517Parser::RuleFld_98a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(200);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_AContext = fld_98a_A_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_CContext = fld_98a_A_C();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_98a_AContext *>(_localctx)->fld_98a_A_CContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(197);
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

//----------------- Fld_95a_AContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_95a_AContext::Fld_95a_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_95a_A_LContext* SwiftMtParser_MT517Parser::Fld_95a_AContext::fld_95a_A_L() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_95a_A_LContext>(0);
}

SwiftMtParser_MT517Parser::Fld_95a_A_PContext* SwiftMtParser_MT517Parser::Fld_95a_AContext::fld_95a_A_P() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_95a_A_PContext>(0);
}

SwiftMtParser_MT517Parser::Fld_95a_A_QContext* SwiftMtParser_MT517Parser::Fld_95a_AContext::fld_95a_A_Q() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_95a_A_QContext>(0);
}

SwiftMtParser_MT517Parser::Fld_95a_A_RContext* SwiftMtParser_MT517Parser::Fld_95a_AContext::fld_95a_A_R() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_95a_A_RContext>(0);
}


size_t SwiftMtParser_MT517Parser::Fld_95a_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_95a_A;
}

void SwiftMtParser_MT517Parser::Fld_95a_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A(this);
}

void SwiftMtParser_MT517Parser::Fld_95a_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A(this);
}

SwiftMtParser_MT517Parser::Fld_95a_AContext* SwiftMtParser_MT517Parser::fld_95a_A() {
  Fld_95a_AContext *_localctx = _tracker.createInstance<Fld_95a_AContext>(_ctx, getState());
  enterRule(_localctx, 36, SwiftMtParser_MT517Parser::RuleFld_95a_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(214);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(202);
      dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_LContext = fld_95a_A_L();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_LContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(205);
      dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_PContext = fld_95a_A_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_PContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(208);
      dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_QContext = fld_95a_A_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_AContext *>(_localctx)->fld_95a_A_QContext->fld); 
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(211);
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

//----------------- Fld_25D_AContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_25D_AContext::Fld_25D_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_25D_A_DContext* SwiftMtParser_MT517Parser::Fld_25D_AContext::fld_25D_A_D() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_25D_A_DContext>(0);
}


size_t SwiftMtParser_MT517Parser::Fld_25D_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_25D_A;
}

void SwiftMtParser_MT517Parser::Fld_25D_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_25D_A(this);
}

void SwiftMtParser_MT517Parser::Fld_25D_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_25D_A(this);
}

SwiftMtParser_MT517Parser::Fld_25D_AContext* SwiftMtParser_MT517Parser::fld_25D_A() {
  Fld_25D_AContext *_localctx = _tracker.createInstance<Fld_25D_AContext>(_ctx, getState());
  enterRule(_localctx, 38, SwiftMtParser_MT517Parser::RuleFld_25D_A);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    dynamic_cast<Fld_25D_AContext *>(_localctx)->fld_25D_A_DContext = fld_25D_A_D();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_25D_AContext *>(_localctx)->fld_25D_A_DContext->fld); 
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16R_A1Context ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_16R_A1Context::Fld_16R_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_16R_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_16R_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_16R_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_16R_A1;
}

void SwiftMtParser_MT517Parser::Fld_16R_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16R_A1(this);
}

void SwiftMtParser_MT517Parser::Fld_16R_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16R_A1(this);
}

SwiftMtParser_MT517Parser::Fld_16R_A1Context* SwiftMtParser_MT517Parser::fld_16R_A1() {
  Fld_16R_A1Context *_localctx = _tracker.createInstance<Fld_16R_A1Context>(_ctx, getState());
  enterRule(_localctx, 40, SwiftMtParser_MT517Parser::RuleFld_16R_A1);
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(220);
    match(SwiftMtParser_MT517Parser::T__0);
    setState(222); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(221);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(224); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1Context ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_13a_A1Context::Fld_13a_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_13a_A1_AContext* SwiftMtParser_MT517Parser::Fld_13a_A1Context::fld_13a_A1_A() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_13a_A1_AContext>(0);
}

SwiftMtParser_MT517Parser::Fld_13a_A1_BContext* SwiftMtParser_MT517Parser::Fld_13a_A1Context::fld_13a_A1_B() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_13a_A1_BContext>(0);
}


size_t SwiftMtParser_MT517Parser::Fld_13a_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_13a_A1;
}

void SwiftMtParser_MT517Parser::Fld_13a_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1(this);
}

void SwiftMtParser_MT517Parser::Fld_13a_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1(this);
}

SwiftMtParser_MT517Parser::Fld_13a_A1Context* SwiftMtParser_MT517Parser::fld_13a_A1() {
  Fld_13a_A1Context *_localctx = _tracker.createInstance<Fld_13a_A1Context>(_ctx, getState());
  enterRule(_localctx, 42, SwiftMtParser_MT517Parser::RuleFld_13a_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(232);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(226);
      dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_AContext = fld_13a_A1_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(229);
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

SwiftMtParser_MT517Parser::Fld_20C_A1Context::Fld_20C_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SwiftMtParser_MT517Parser::Fld_20C_A1_CContext* SwiftMtParser_MT517Parser::Fld_20C_A1Context::fld_20C_A1_C() {
  return getRuleContext<SwiftMtParser_MT517Parser::Fld_20C_A1_CContext>(0);
}


size_t SwiftMtParser_MT517Parser::Fld_20C_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_20C_A1;
}

void SwiftMtParser_MT517Parser::Fld_20C_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1(this);
}

void SwiftMtParser_MT517Parser::Fld_20C_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1(this);
}

SwiftMtParser_MT517Parser::Fld_20C_A1Context* SwiftMtParser_MT517Parser::fld_20C_A1() {
  Fld_20C_A1Context *_localctx = _tracker.createInstance<Fld_20C_A1Context>(_ctx, getState());
  enterRule(_localctx, 44, SwiftMtParser_MT517Parser::RuleFld_20C_A1);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(234);
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

SwiftMtParser_MT517Parser::Fld_16S_A1Context::Fld_16S_A1Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_16S_A1Context::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_16S_A1Context::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_16S_A1Context::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_16S_A1;
}

void SwiftMtParser_MT517Parser::Fld_16S_A1Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A1(this);
}

void SwiftMtParser_MT517Parser::Fld_16S_A1Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A1(this);
}

SwiftMtParser_MT517Parser::Fld_16S_A1Context* SwiftMtParser_MT517Parser::fld_16S_A1() {
  Fld_16S_A1Context *_localctx = _tracker.createInstance<Fld_16S_A1Context>(_ctx, getState());
  enterRule(_localctx, 46, SwiftMtParser_MT517Parser::RuleFld_16S_A1);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(238);
    match(SwiftMtParser_MT517Parser::T__1);
    setState(240); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(239);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(242); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_16S_AContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_16S_AContext::Fld_16S_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_16S_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_16S_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_16S_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_16S_A;
}

void SwiftMtParser_MT517Parser::Fld_16S_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_16S_A(this);
}

void SwiftMtParser_MT517Parser::Fld_16S_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_16S_A(this);
}

SwiftMtParser_MT517Parser::Fld_16S_AContext* SwiftMtParser_MT517Parser::fld_16S_A() {
  Fld_16S_AContext *_localctx = _tracker.createInstance<Fld_16S_AContext>(_ctx, getState());
  enterRule(_localctx, 48, SwiftMtParser_MT517Parser::RuleFld_16S_A);
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(244);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(245);
    match(SwiftMtParser_MT517Parser::T__1);
    setState(247); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(246);
              _la = _input->LA(1);
              if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
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
      setState(249); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
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

SwiftMtParser_MT517Parser::Fld_20C_A_CContext::Fld_20C_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_20C_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_20C_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_20C_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_20C_A_C;
}

void SwiftMtParser_MT517Parser::Fld_20C_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A_C(this);
}

void SwiftMtParser_MT517Parser::Fld_20C_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A_C(this);
}

SwiftMtParser_MT517Parser::Fld_20C_A_CContext* SwiftMtParser_MT517Parser::fld_20C_A_C() {
  Fld_20C_A_CContext *_localctx = _tracker.createInstance<Fld_20C_A_CContext>(_ctx, getState());
  enterRule(_localctx, 50, SwiftMtParser_MT517Parser::RuleFld_20C_A_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(252);
    match(SwiftMtParser_MT517Parser::T__2);
    setState(254); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(253);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(256); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_23G_A_GContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_23G_A_GContext::Fld_23G_A_GContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_23G_A_GContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_23G_A_GContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_23G_A_GContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_23G_A_G;
}

void SwiftMtParser_MT517Parser::Fld_23G_A_GContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_23G_A_G(this);
}

void SwiftMtParser_MT517Parser::Fld_23G_A_GContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_23G_A_G(this);
}

SwiftMtParser_MT517Parser::Fld_23G_A_GContext* SwiftMtParser_MT517Parser::fld_23G_A_G() {
  Fld_23G_A_GContext *_localctx = _tracker.createInstance<Fld_23G_A_GContext>(_ctx, getState());
  enterRule(_localctx, 52, SwiftMtParser_MT517Parser::RuleFld_23G_A_G);
   _localctx->fld.set_tag("23G"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(259);
    match(SwiftMtParser_MT517Parser::T__3);
    setState(261); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(260);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(263); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_AContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_98a_A_AContext::Fld_98a_A_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_98a_A_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_98a_A_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_98a_A_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_98a_A_A;
}

void SwiftMtParser_MT517Parser::Fld_98a_A_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_A(this);
}

void SwiftMtParser_MT517Parser::Fld_98a_A_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_A(this);
}

SwiftMtParser_MT517Parser::Fld_98a_A_AContext* SwiftMtParser_MT517Parser::fld_98a_A_A() {
  Fld_98a_A_AContext *_localctx = _tracker.createInstance<Fld_98a_A_AContext>(_ctx, getState());
  enterRule(_localctx, 54, SwiftMtParser_MT517Parser::RuleFld_98a_A_A);
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(265);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(266);
    match(SwiftMtParser_MT517Parser::T__4);
    setState(268); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(267);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(270); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_CContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_98a_A_CContext::Fld_98a_A_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_98a_A_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_98a_A_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_98a_A_CContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_98a_A_C;
}

void SwiftMtParser_MT517Parser::Fld_98a_A_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_C(this);
}

void SwiftMtParser_MT517Parser::Fld_98a_A_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_C(this);
}

SwiftMtParser_MT517Parser::Fld_98a_A_CContext* SwiftMtParser_MT517Parser::fld_98a_A_C() {
  Fld_98a_A_CContext *_localctx = _tracker.createInstance<Fld_98a_A_CContext>(_ctx, getState());
  enterRule(_localctx, 56, SwiftMtParser_MT517Parser::RuleFld_98a_A_C);
   _localctx->fld.set_tag("98C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(272);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(273);
    match(SwiftMtParser_MT517Parser::T__5);
    setState(275); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(274);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(277); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_98a_A_EContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_98a_A_EContext::Fld_98a_A_EContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_98a_A_EContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_98a_A_EContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_98a_A_EContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_98a_A_E;
}

void SwiftMtParser_MT517Parser::Fld_98a_A_EContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_98a_A_E(this);
}

void SwiftMtParser_MT517Parser::Fld_98a_A_EContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_98a_A_E(this);
}

SwiftMtParser_MT517Parser::Fld_98a_A_EContext* SwiftMtParser_MT517Parser::fld_98a_A_E() {
  Fld_98a_A_EContext *_localctx = _tracker.createInstance<Fld_98a_A_EContext>(_ctx, getState());
  enterRule(_localctx, 58, SwiftMtParser_MT517Parser::RuleFld_98a_A_E);
   _localctx->fld.set_tag("98E"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(280);
    match(SwiftMtParser_MT517Parser::T__6);
    setState(282); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(281);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(284); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_LContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_95a_A_LContext::Fld_95a_A_LContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_95a_A_LContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_95a_A_LContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_95a_A_LContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_95a_A_L;
}

void SwiftMtParser_MT517Parser::Fld_95a_A_LContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_L(this);
}

void SwiftMtParser_MT517Parser::Fld_95a_A_LContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_L(this);
}

SwiftMtParser_MT517Parser::Fld_95a_A_LContext* SwiftMtParser_MT517Parser::fld_95a_A_L() {
  Fld_95a_A_LContext *_localctx = _tracker.createInstance<Fld_95a_A_LContext>(_ctx, getState());
  enterRule(_localctx, 60, SwiftMtParser_MT517Parser::RuleFld_95a_A_L);
   _localctx->fld.set_tag("95L"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(286);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(287);
    match(SwiftMtParser_MT517Parser::T__7);
    setState(289); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(288);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(291); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_PContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_95a_A_PContext::Fld_95a_A_PContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_95a_A_PContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_95a_A_PContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_95a_A_PContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_95a_A_P;
}

void SwiftMtParser_MT517Parser::Fld_95a_A_PContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_P(this);
}

void SwiftMtParser_MT517Parser::Fld_95a_A_PContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_P(this);
}

SwiftMtParser_MT517Parser::Fld_95a_A_PContext* SwiftMtParser_MT517Parser::fld_95a_A_P() {
  Fld_95a_A_PContext *_localctx = _tracker.createInstance<Fld_95a_A_PContext>(_ctx, getState());
  enterRule(_localctx, 62, SwiftMtParser_MT517Parser::RuleFld_95a_A_P);
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(293);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(294);
    match(SwiftMtParser_MT517Parser::T__8);
    setState(296); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(295);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(298); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_QContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_95a_A_QContext::Fld_95a_A_QContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_95a_A_QContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_95a_A_QContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_95a_A_QContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_95a_A_Q;
}

void SwiftMtParser_MT517Parser::Fld_95a_A_QContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_Q(this);
}

void SwiftMtParser_MT517Parser::Fld_95a_A_QContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_Q(this);
}

SwiftMtParser_MT517Parser::Fld_95a_A_QContext* SwiftMtParser_MT517Parser::fld_95a_A_Q() {
  Fld_95a_A_QContext *_localctx = _tracker.createInstance<Fld_95a_A_QContext>(_ctx, getState());
  enterRule(_localctx, 64, SwiftMtParser_MT517Parser::RuleFld_95a_A_Q);
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(300);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(301);
    match(SwiftMtParser_MT517Parser::T__9);
    setState(303); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(302);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(305); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_95a_A_RContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_95a_A_RContext::Fld_95a_A_RContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_95a_A_RContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_95a_A_RContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_95a_A_RContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_95a_A_R;
}

void SwiftMtParser_MT517Parser::Fld_95a_A_RContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_95a_A_R(this);
}

void SwiftMtParser_MT517Parser::Fld_95a_A_RContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_95a_A_R(this);
}

SwiftMtParser_MT517Parser::Fld_95a_A_RContext* SwiftMtParser_MT517Parser::fld_95a_A_R() {
  Fld_95a_A_RContext *_localctx = _tracker.createInstance<Fld_95a_A_RContext>(_ctx, getState());
  enterRule(_localctx, 66, SwiftMtParser_MT517Parser::RuleFld_95a_A_R);
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(307);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(308);
    match(SwiftMtParser_MT517Parser::T__10);
    setState(310); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(309);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(312); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_25D_A_DContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_25D_A_DContext::Fld_25D_A_DContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_25D_A_DContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_25D_A_DContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_25D_A_DContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_25D_A_D;
}

void SwiftMtParser_MT517Parser::Fld_25D_A_DContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_25D_A_D(this);
}

void SwiftMtParser_MT517Parser::Fld_25D_A_DContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_25D_A_D(this);
}

SwiftMtParser_MT517Parser::Fld_25D_A_DContext* SwiftMtParser_MT517Parser::fld_25D_A_D() {
  Fld_25D_A_DContext *_localctx = _tracker.createInstance<Fld_25D_A_DContext>(_ctx, getState());
  enterRule(_localctx, 68, SwiftMtParser_MT517Parser::RuleFld_25D_A_D);
   _localctx->fld.set_tag("25D"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(314);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(315);
    match(SwiftMtParser_MT517Parser::T__11);
    setState(317); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(316);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_AContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_13a_A1_AContext::Fld_13a_A1_AContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_13a_A1_AContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_13a_A1_AContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_13a_A1_AContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_13a_A1_A;
}

void SwiftMtParser_MT517Parser::Fld_13a_A1_AContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_A(this);
}

void SwiftMtParser_MT517Parser::Fld_13a_A1_AContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_A(this);
}

SwiftMtParser_MT517Parser::Fld_13a_A1_AContext* SwiftMtParser_MT517Parser::fld_13a_A1_A() {
  Fld_13a_A1_AContext *_localctx = _tracker.createInstance<Fld_13a_A1_AContext>(_ctx, getState());
  enterRule(_localctx, 70, SwiftMtParser_MT517Parser::RuleFld_13a_A1_A);
   _localctx->fld.set_tag("13A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(321);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(322);
    match(SwiftMtParser_MT517Parser::T__12);
    setState(324); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(323);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
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
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_13a_A1_BContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_13a_A1_BContext::Fld_13a_A1_BContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_13a_A1_BContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_13a_A1_BContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_13a_A1_BContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_13a_A1_B;
}

void SwiftMtParser_MT517Parser::Fld_13a_A1_BContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_13a_A1_B(this);
}

void SwiftMtParser_MT517Parser::Fld_13a_A1_BContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_13a_A1_B(this);
}

SwiftMtParser_MT517Parser::Fld_13a_A1_BContext* SwiftMtParser_MT517Parser::fld_13a_A1_B() {
  Fld_13a_A1_BContext *_localctx = _tracker.createInstance<Fld_13a_A1_BContext>(_ctx, getState());
  enterRule(_localctx, 72, SwiftMtParser_MT517Parser::RuleFld_13a_A1_B);
   _localctx->fld.set_tag("13B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(328);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(329);
    match(SwiftMtParser_MT517Parser::T__13);
    setState(331); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(330);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(333); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fld_20C_A1_CContext ------------------------------------------------------------------

SwiftMtParser_MT517Parser::Fld_20C_A1_CContext::Fld_20C_A1_CContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SwiftMtParser_MT517Parser::Fld_20C_A1_CContext::START_OF_FIELD() {
  return getTokens(SwiftMtParser_MT517Parser::START_OF_FIELD);
}

tree::TerminalNode* SwiftMtParser_MT517Parser::Fld_20C_A1_CContext::START_OF_FIELD(size_t i) {
  return getToken(SwiftMtParser_MT517Parser::START_OF_FIELD, i);
}


size_t SwiftMtParser_MT517Parser::Fld_20C_A1_CContext::getRuleIndex() const {
  return SwiftMtParser_MT517Parser::RuleFld_20C_A1_C;
}

void SwiftMtParser_MT517Parser::Fld_20C_A1_CContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFld_20C_A1_C(this);
}

void SwiftMtParser_MT517Parser::Fld_20C_A1_CContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SwiftMtParser_MT517Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFld_20C_A1_C(this);
}

SwiftMtParser_MT517Parser::Fld_20C_A1_CContext* SwiftMtParser_MT517Parser::fld_20C_A1_C() {
  Fld_20C_A1_CContext *_localctx = _tracker.createInstance<Fld_20C_A1_CContext>(_ctx, getState());
  enterRule(_localctx, 74, SwiftMtParser_MT517Parser::RuleFld_20C_A1_C);
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(335);
    match(SwiftMtParser_MT517Parser::START_OF_FIELD);
    setState(336);
    match(SwiftMtParser_MT517Parser::T__2);
    setState(338); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(337);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT517Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(340); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << SwiftMtParser_MT517Parser::T__0)
      | (1ULL << SwiftMtParser_MT517Parser::T__1)
      | (1ULL << SwiftMtParser_MT517Parser::T__2)
      | (1ULL << SwiftMtParser_MT517Parser::T__3)
      | (1ULL << SwiftMtParser_MT517Parser::T__4)
      | (1ULL << SwiftMtParser_MT517Parser::T__5)
      | (1ULL << SwiftMtParser_MT517Parser::T__6)
      | (1ULL << SwiftMtParser_MT517Parser::T__7)
      | (1ULL << SwiftMtParser_MT517Parser::T__8)
      | (1ULL << SwiftMtParser_MT517Parser::T__9)
      | (1ULL << SwiftMtParser_MT517Parser::T__10)
      | (1ULL << SwiftMtParser_MT517Parser::T__11)
      | (1ULL << SwiftMtParser_MT517Parser::T__12)
      | (1ULL << SwiftMtParser_MT517Parser::T__13)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_BH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_AH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_UH)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_MT)
      | (1ULL << SwiftMtParser_MT517Parser::TAG_TR)
      | (1ULL << SwiftMtParser_MT517Parser::MT_END)
      | (1ULL << SwiftMtParser_MT517Parser::LBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::RBRACE)
      | (1ULL << SwiftMtParser_MT517Parser::COLON)
      | (1ULL << SwiftMtParser_MT517Parser::ANY))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT517Parser::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT517Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT517Parser::_atn;
std::vector<uint16_t> SwiftMtParser_MT517Parser::_serializedATN;

std::vector<std::string> SwiftMtParser_MT517Parser::_ruleNames = {
  "message", "bh", "bh_content", "ah", "ah_content", "uh", "tr", "sys_block", 
  "sys_element", "sys_element_key", "sys_element_content", "mt", "seq_A", 
  "seq_A1", "fld_16R_A", "fld_20C_A", "fld_23G_A", "fld_98a_A", "fld_95a_A", 
  "fld_25D_A", "fld_16R_A1", "fld_13a_A1", "fld_20C_A1", "fld_16S_A1", "fld_16S_A", 
  "fld_20C_A_C", "fld_23G_A_G", "fld_98a_A_A", "fld_98a_A_C", "fld_98a_A_E", 
  "fld_95a_A_L", "fld_95a_A_P", "fld_95a_A_Q", "fld_95a_A_R", "fld_25D_A_D", 
  "fld_13a_A1_A", "fld_13a_A1_B", "fld_20C_A1_C"
};

std::vector<std::string> SwiftMtParser_MT517Parser::_literalNames = {
  "", "'16R:'", "'16S:'", "'20C:'", "'23G:'", "'98A:'", "'98C:'", "'98E:'", 
  "'95L:'", "'95P:'", "'95Q:'", "'95R:'", "'25D:'", "'13A:'", "'13B:'", 
  "'{1:'", "'{2:'", "'{3:'", "'{4:'", "'{5:'", "'-}'", "'{'", "'}'", "':'"
};

std::vector<std::string> SwiftMtParser_MT517Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "TAG_BH", 
  "TAG_AH", "TAG_UH", "TAG_MT", "TAG_TR", "MT_END", "LBRACE", "RBRACE", 
  "COLON", "START_OF_FIELD", "ANY"
};

dfa::Vocabulary SwiftMtParser_MT517Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT517Parser::_tokenNames;

SwiftMtParser_MT517Parser::Initializer::Initializer() {
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
    0x3, 0x1b, 0x159, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x2, 0x5, 0x2, 0x52, 0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x5, 0x2, 0x56, 
    0xa, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x4, 0x6, 0x4, 0x5f, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x60, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x6, 0x6, 0x68, 0xa, 0x6, 0xd, 
    0x6, 0xe, 0x6, 0x69, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x6, 0x9, 0x75, 0xa, 0x9, 0xd, 
    0x9, 0xe, 0x9, 0x76, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x6, 0xb, 0x80, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x81, 
    0x3, 0xc, 0x6, 0xc, 0x85, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x86, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x94, 0xa, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x6, 0xe, 0x98, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x99, 0x3, 0xe, 0x3, 
    0xe, 0x5, 0xe, 0x9e, 0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0xa2, 0xa, 
    0xe, 0xd, 0xe, 0xe, 0xe, 0xa3, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xad, 0xa, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x6, 0x10, 0xb8, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xb9, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x5, 0x13, 0xcb, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xd9, 0xa, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0xe1, 0xa, 
    0x16, 0xd, 0x16, 0xe, 0x16, 0xe2, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xeb, 0xa, 0x17, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x6, 0x19, 0xf3, 0xa, 
    0x19, 0xd, 0x19, 0xe, 0x19, 0xf4, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x6, 
    0x1a, 0xfa, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0xfb, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x6, 0x1b, 0x101, 0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0x102, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x6, 0x1c, 0x108, 0xa, 0x1c, 0xd, 0x1c, 
    0xe, 0x1c, 0x109, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x6, 0x1d, 0x10f, 
    0xa, 0x1d, 0xd, 0x1d, 0xe, 0x1d, 0x110, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x6, 0x1e, 0x116, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x117, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x6, 0x1f, 0x11d, 0xa, 0x1f, 0xd, 0x1f, 0xe, 0x1f, 
    0x11e, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x6, 0x20, 0x124, 0xa, 0x20, 
    0xd, 0x20, 0xe, 0x20, 0x125, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x6, 0x21, 
    0x12b, 0xa, 0x21, 0xd, 0x21, 0xe, 0x21, 0x12c, 0x3, 0x22, 0x3, 0x22, 
    0x3, 0x22, 0x6, 0x22, 0x132, 0xa, 0x22, 0xd, 0x22, 0xe, 0x22, 0x133, 
    0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x6, 0x23, 0x139, 0xa, 0x23, 0xd, 0x23, 
    0xe, 0x23, 0x13a, 0x3, 0x24, 0x3, 0x24, 0x3, 0x24, 0x6, 0x24, 0x140, 
    0xa, 0x24, 0xd, 0x24, 0xe, 0x24, 0x141, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 
    0x6, 0x25, 0x147, 0xa, 0x25, 0xd, 0x25, 0xe, 0x25, 0x148, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x6, 0x26, 0x14e, 0xa, 0x26, 0xd, 0x26, 0xe, 0x26, 
    0x14f, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x6, 0x27, 0x155, 0xa, 0x27, 
    0xd, 0x27, 0xe, 0x27, 0x156, 0x3, 0x27, 0x2, 0x2, 0x28, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x2, 
    0x5, 0x3, 0x2, 0x18, 0x18, 0x3, 0x2, 0x18, 0x19, 0x3, 0x2, 0x1a, 0x1a, 
    0x2, 0x155, 0x2, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x59, 0x3, 0x2, 0x2, 
    0x2, 0x6, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x62, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0xc, 0x6b, 0x3, 0x2, 0x2, 0x2, 0xe, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x74, 0x3, 0x2, 0x2, 0x2, 0x12, 0x78, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x84, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x88, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xbb, 0x3, 0x2, 0x2, 0x2, 0x22, 0xbe, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xca, 0x3, 0x2, 0x2, 0x2, 0x26, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x28, 0xda, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0xdd, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xea, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0xec, 0x3, 0x2, 0x2, 0x2, 0x30, 0xef, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x34, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x104, 0x3, 0x2, 0x2, 0x2, 0x38, 0x10b, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x112, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x119, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x120, 0x3, 0x2, 0x2, 0x2, 0x40, 0x127, 0x3, 0x2, 0x2, 0x2, 0x42, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x135, 0x3, 0x2, 0x2, 0x2, 0x46, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x143, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x14a, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x151, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x5, 0x4, 0x3, 
    0x2, 0x4f, 0x51, 0x5, 0x8, 0x5, 0x2, 0x50, 0x52, 0x5, 0xc, 0x7, 0x2, 
    0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x55, 0x5, 0x18, 0xd, 0x2, 0x54, 0x56, 
    0x5, 0xe, 0x8, 0x2, 0x55, 0x54, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0x2, 
    0x2, 0x3, 0x58, 0x3, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x11, 0x2, 
    0x2, 0x5a, 0x5b, 0x5, 0x6, 0x4, 0x2, 0x5b, 0x5c, 0x7, 0x18, 0x2, 0x2, 
    0x5c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5f, 0xa, 0x2, 0x2, 0x2, 0x5e, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 
    0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x63, 0x7, 0x12, 0x2, 0x2, 0x63, 0x64, 0x5, 0xa, 
    0x6, 0x2, 0x64, 0x65, 0x7, 0x18, 0x2, 0x2, 0x65, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x68, 0xa, 0x2, 0x2, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 
    0x68, 0x69, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0xb, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 
    0x7, 0x13, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x10, 0x9, 0x2, 0x6d, 0x6e, 0x7, 
    0x18, 0x2, 0x2, 0x6e, 0xd, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x15, 
    0x2, 0x2, 0x70, 0x71, 0x5, 0x10, 0x9, 0x2, 0x71, 0x72, 0x7, 0x18, 0x2, 
    0x2, 0x72, 0xf, 0x3, 0x2, 0x2, 0x2, 0x73, 0x75, 0x5, 0x12, 0xa, 0x2, 
    0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x74, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x11, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x7, 0x17, 0x2, 0x2, 0x79, 0x7a, 0x5, 
    0x14, 0xb, 0x2, 0x7a, 0x7b, 0x7, 0x19, 0x2, 0x2, 0x7b, 0x7c, 0x5, 0x16, 
    0xc, 0x2, 0x7c, 0x7d, 0x7, 0x18, 0x2, 0x2, 0x7d, 0x13, 0x3, 0x2, 0x2, 
    0x2, 0x7e, 0x80, 0xa, 0x3, 0x2, 0x2, 0x7f, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x15, 0x3, 0x2, 0x2, 0x2, 0x83, 0x85, 
    0xa, 0x2, 0x2, 0x2, 0x84, 0x83, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x3, 
    0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x87, 0x17, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x7, 0x14, 0x2, 
    0x2, 0x89, 0x8a, 0x5, 0x1a, 0xe, 0x2, 0x8a, 0x8b, 0x7, 0x16, 0x2, 0x2, 
    0x8b, 0x19, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x1e, 0x10, 0x2, 0x8d, 
    0x8e, 0x8, 0xe, 0x1, 0x2, 0x8e, 0x8f, 0x5, 0x20, 0x11, 0x2, 0x8f, 0x90, 
    0x8, 0xe, 0x1, 0x2, 0x90, 0x91, 0x5, 0x22, 0x12, 0x2, 0x91, 0x93, 0x8, 
    0xe, 0x1, 0x2, 0x92, 0x94, 0x5, 0x24, 0x13, 0x2, 0x93, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 
    0x2, 0x95, 0x97, 0x8, 0xe, 0x1, 0x2, 0x96, 0x98, 0x5, 0x26, 0x14, 0x2, 
    0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 
    0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 0x8, 0xe, 0x1, 0x2, 0x9c, 0x9e, 0x5, 
    0x28, 0x15, 0x2, 0x9d, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x3, 0x2, 
    0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa1, 0x8, 0xe, 0x1, 
    0x2, 0xa0, 0xa2, 0x5, 0x1c, 0xf, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 0x2, 0x2, 0x2, 0xa3, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 
    0x8, 0xe, 0x1, 0x2, 0xa6, 0xa7, 0x5, 0x32, 0x1a, 0x2, 0xa7, 0xa8, 0x8, 
    0xe, 0x1, 0x2, 0xa8, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x5, 0x2a, 
    0x16, 0x2, 0xaa, 0xac, 0x8, 0xf, 0x1, 0x2, 0xab, 0xad, 0x5, 0x2c, 0x17, 
    0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 
    0xad, 0xae, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x8, 0xf, 0x1, 0x2, 0xaf, 
    0xb0, 0x5, 0x2e, 0x18, 0x2, 0xb0, 0xb1, 0x8, 0xf, 0x1, 0x2, 0xb1, 0xb2, 
    0x5, 0x30, 0x19, 0x2, 0xb2, 0xb3, 0x8, 0xf, 0x1, 0x2, 0xb3, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x1a, 0x2, 0x2, 0xb5, 0xb7, 0x7, 0x3, 
    0x2, 0x2, 0xb6, 0xb8, 0xa, 0x4, 0x2, 0x2, 0xb7, 0xb6, 0x3, 0x2, 0x2, 
    0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xbb, 
    0xbc, 0x5, 0x34, 0x1b, 0x2, 0xbc, 0xbd, 0x8, 0x11, 0x1, 0x2, 0xbd, 0x21, 
    0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x5, 0x36, 0x1c, 0x2, 0xbf, 0xc0, 0x8, 
    0x12, 0x1, 0x2, 0xc0, 0x23, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x38, 
    0x1d, 0x2, 0xc2, 0xc3, 0x8, 0x13, 0x1, 0x2, 0xc3, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0xc4, 0xc5, 0x5, 0x3a, 0x1e, 0x2, 0xc5, 0xc6, 0x8, 0x13, 0x1, 0x2, 
    0xc6, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x5, 0x3c, 0x1f, 0x2, 0xc8, 
    0xc9, 0x8, 0x13, 0x1, 0x2, 0xc9, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xca, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc7, 0x3, 
    0x2, 0x2, 0x2, 0xcb, 0x25, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x5, 0x3e, 
    0x20, 0x2, 0xcd, 0xce, 0x8, 0x14, 0x1, 0x2, 0xce, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xcf, 0xd0, 0x5, 0x40, 0x21, 0x2, 0xd0, 0xd1, 0x8, 0x14, 0x1, 0x2, 
    0xd1, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x5, 0x42, 0x22, 0x2, 0xd3, 
    0xd4, 0x8, 0x14, 0x1, 0x2, 0xd4, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 
    0x5, 0x44, 0x23, 0x2, 0xd6, 0xd7, 0x8, 0x14, 0x1, 0x2, 0xd7, 0xd9, 0x3, 
    0x2, 0x2, 0x2, 0xd8, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xd8, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd9, 0x27, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x5, 0x46, 0x24, 0x2, 
    0xdb, 0xdc, 0x8, 0x15, 0x1, 0x2, 0xdc, 0x29, 0x3, 0x2, 0x2, 0x2, 0xdd, 
    0xde, 0x7, 0x1a, 0x2, 0x2, 0xde, 0xe0, 0x7, 0x3, 0x2, 0x2, 0xdf, 0xe1, 
    0xa, 0x4, 0x2, 0x2, 0xe0, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x5, 0x48, 0x25, 
    0x2, 0xe5, 0xe6, 0x8, 0x17, 0x1, 0x2, 0xe6, 0xeb, 0x3, 0x2, 0x2, 0x2, 
    0xe7, 0xe8, 0x5, 0x4a, 0x26, 0x2, 0xe8, 0xe9, 0x8, 0x17, 0x1, 0x2, 0xe9, 
    0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xeb, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xec, 0xed, 0x5, 
    0x4c, 0x27, 0x2, 0xed, 0xee, 0x8, 0x18, 0x1, 0x2, 0xee, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0xef, 0xf0, 0x7, 0x1a, 0x2, 0x2, 0xf0, 0xf2, 0x7, 0x4, 0x2, 
    0x2, 0xf1, 0xf3, 0xa, 0x4, 0x2, 0x2, 0xf2, 0xf1, 0x3, 0x2, 0x2, 0x2, 
    0xf3, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf4, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xf4, 
    0xf5, 0x3, 0x2, 0x2, 0x2, 0xf5, 0x31, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 
    0x7, 0x1a, 0x2, 0x2, 0xf7, 0xf9, 0x7, 0x4, 0x2, 0x2, 0xf8, 0xfa, 0xa, 
    0x4, 0x2, 0x2, 0xf9, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 0x2, 
    0x2, 0xfc, 0x33, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfe, 0x7, 0x1a, 0x2, 0x2, 
    0xfe, 0x100, 0x7, 0x5, 0x2, 0x2, 0xff, 0x101, 0xa, 0x4, 0x2, 0x2, 0x100, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x100, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 0x2, 0x2, 0x2, 0x103, 0x35, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x105, 0x7, 0x1a, 0x2, 0x2, 0x105, 0x107, 0x7, 
    0x6, 0x2, 0x2, 0x106, 0x108, 0xa, 0x4, 0x2, 0x2, 0x107, 0x106, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x109, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x10a, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x10b, 0x10c, 0x7, 0x1a, 0x2, 0x2, 0x10c, 0x10e, 0x7, 0x7, 
    0x2, 0x2, 0x10d, 0x10f, 0xa, 0x4, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 
    0x2, 0x2, 0x10f, 0x110, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 
    0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x112, 0x113, 0x7, 0x1a, 0x2, 0x2, 0x113, 0x115, 0x7, 0x8, 0x2, 
    0x2, 0x114, 0x116, 0xa, 0x4, 0x2, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 
    0x2, 0x116, 0x117, 0x3, 0x2, 0x2, 0x2, 0x117, 0x115, 0x3, 0x2, 0x2, 
    0x2, 0x117, 0x118, 0x3, 0x2, 0x2, 0x2, 0x118, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x119, 0x11a, 0x7, 0x1a, 0x2, 0x2, 0x11a, 0x11c, 0x7, 0x9, 0x2, 0x2, 
    0x11b, 0x11d, 0xa, 0x4, 0x2, 0x2, 0x11c, 0x11b, 0x3, 0x2, 0x2, 0x2, 
    0x11d, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11e, 0x11c, 0x3, 0x2, 0x2, 0x2, 
    0x11e, 0x11f, 0x3, 0x2, 0x2, 0x2, 0x11f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x120, 
    0x121, 0x7, 0x1a, 0x2, 0x2, 0x121, 0x123, 0x7, 0xa, 0x2, 0x2, 0x122, 
    0x124, 0xa, 0x4, 0x2, 0x2, 0x123, 0x122, 0x3, 0x2, 0x2, 0x2, 0x124, 
    0x125, 0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 
    0x126, 0x3, 0x2, 0x2, 0x2, 0x126, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 
    0x7, 0x1a, 0x2, 0x2, 0x128, 0x12a, 0x7, 0xb, 0x2, 0x2, 0x129, 0x12b, 
    0xa, 0x4, 0x2, 0x2, 0x12a, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 
    0x3, 0x2, 0x2, 0x2, 0x12c, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12d, 0x41, 0x3, 0x2, 0x2, 0x2, 0x12e, 0x12f, 0x7, 
    0x1a, 0x2, 0x2, 0x12f, 0x131, 0x7, 0xc, 0x2, 0x2, 0x130, 0x132, 0xa, 
    0x4, 0x2, 0x2, 0x131, 0x130, 0x3, 0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x131, 0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 
    0x2, 0x2, 0x2, 0x134, 0x43, 0x3, 0x2, 0x2, 0x2, 0x135, 0x136, 0x7, 0x1a, 
    0x2, 0x2, 0x136, 0x138, 0x7, 0xd, 0x2, 0x2, 0x137, 0x139, 0xa, 0x4, 
    0x2, 0x2, 0x138, 0x137, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 0x2, 
    0x2, 0x2, 0x13a, 0x138, 0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 
    0x2, 0x2, 0x13b, 0x45, 0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x1a, 
    0x2, 0x2, 0x13d, 0x13f, 0x7, 0xe, 0x2, 0x2, 0x13e, 0x140, 0xa, 0x4, 
    0x2, 0x2, 0x13f, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x140, 0x141, 0x3, 0x2, 
    0x2, 0x2, 0x141, 0x13f, 0x3, 0x2, 0x2, 0x2, 0x141, 0x142, 0x3, 0x2, 
    0x2, 0x2, 0x142, 0x47, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 0x7, 0x1a, 
    0x2, 0x2, 0x144, 0x146, 0x7, 0xf, 0x2, 0x2, 0x145, 0x147, 0xa, 0x4, 
    0x2, 0x2, 0x146, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 0x2, 
    0x2, 0x2, 0x148, 0x146, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 0x3, 0x2, 
    0x2, 0x2, 0x149, 0x49, 0x3, 0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x1a, 
    0x2, 0x2, 0x14b, 0x14d, 0x7, 0x10, 0x2, 0x2, 0x14c, 0x14e, 0xa, 0x4, 
    0x2, 0x2, 0x14d, 0x14c, 0x3, 0x2, 0x2, 0x2, 0x14e, 0x14f, 0x3, 0x2, 
    0x2, 0x2, 0x14f, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 
    0x2, 0x2, 0x150, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x7, 0x1a, 
    0x2, 0x2, 0x152, 0x154, 0x7, 0x5, 0x2, 0x2, 0x153, 0x155, 0xa, 0x4, 
    0x2, 0x2, 0x154, 0x153, 0x3, 0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 
    0x2, 0x2, 0x156, 0x154, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 0x2, 
    0x2, 0x2, 0x157, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x22, 0x51, 0x55, 0x60, 0x69, 
    0x76, 0x81, 0x86, 0x93, 0x99, 0x9d, 0xa3, 0xac, 0xb9, 0xca, 0xd8, 0xe2, 
    0xea, 0xf4, 0xfb, 0x102, 0x109, 0x110, 0x117, 0x11e, 0x125, 0x12c, 0x133, 
    0x13a, 0x141, 0x148, 0x14f, 0x156, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT517Parser::Initializer SwiftMtParser_MT517Parser::_init;
