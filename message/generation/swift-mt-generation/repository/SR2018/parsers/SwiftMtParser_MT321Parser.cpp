
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtParser_MT321Lexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT321.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT321Listener.h"

#include "SwiftMtParser_MT321Parser.h"


using namespace antlrcpp;
using namespace message::definition::swift::mt::parsers::sr2018;
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
   _localctx->elem.set_tag("A"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(242);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext = fld_16R_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_16R_AContext->fld); 
    setState(245); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(244);
              dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext = fld_20C_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(247); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_20C_AContext->fld); 
    setState(250);
    dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext = fld_23G_A();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_23G_AContext->fld); 
    setState(253); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(252);
              dynamic_cast<Seq_AContext *>(_localctx)->fld_22H_AContext = fld_22H_A();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(255); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_22H_AContext->fld); 
    setState(261);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(258);
        dynamic_cast<Seq_AContext *>(_localctx)->fld_99B_AContext = fld_99B_A(); 
      }
      setState(263);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->fld_99B_AContext->fld); 
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(265);
        dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context = seq_A1(); 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_AContext *>(_localctx)->seq_A1Context->elem); 
    setState(272);
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
   _localctx->elem.set_tag("A1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context = fld_16R_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_16R_A1Context->fld); 
    setState(278);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      setState(277);
      dynamic_cast<Seq_A1Context *>(_localctx)->fld_13a_A1Context = fld_13a_A1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_13a_A1Context->fld); 
    setState(281);
    dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context = fld_20C_A1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_A1Context *>(_localctx)->fld_20C_A1Context->fld); 
    setState(283);
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
   _localctx->elem.set_tag("B"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(286);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext = fld_16R_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_16R_BContext->fld); 
    setState(288);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_20C_BContext = fld_20C_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_20C_BContext->fld); 
    setState(291); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(290);
              dynamic_cast<Seq_BContext *>(_localctx)->fld_22H_BContext = fld_22H_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(293); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_22H_BContext->fld); 
    setState(297); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(296);
              dynamic_cast<Seq_BContext *>(_localctx)->fld_98A_BContext = fld_98A_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(299); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_98A_BContext->fld); 
    setState(303); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(302);
              dynamic_cast<Seq_BContext *>(_localctx)->fld_19A_BContext = fld_19A_B();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(305); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_19A_BContext->fld); 
    setState(308);
    dynamic_cast<Seq_BContext *>(_localctx)->fld_92A_BContext = fld_92A_B();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_92A_BContext->fld); 
    setState(311);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      setState(310);
      dynamic_cast<Seq_BContext *>(_localctx)->fld_99B_BContext = fld_99B_B();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_99B_BContext->fld); 
    setState(315);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      setState(314);
      dynamic_cast<Seq_BContext *>(_localctx)->fld_94C_BContext = fld_94C_B();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->fld_94C_BContext->fld); 
    setState(318);
    dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context = seq_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->seq_B1Context->elem); 
    setState(320);
    dynamic_cast<Seq_BContext *>(_localctx)->seq_B2Context = seq_B2();
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->seq_B2Context->elem); 
    setState(323);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(322);
      dynamic_cast<Seq_BContext *>(_localctx)->seq_B3Context = seq_B3();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_BContext *>(_localctx)->seq_B3Context->elem); 
    setState(326);
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
   _localctx->elem.set_tag("B1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(329);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context = fld_16R_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_16R_B1Context->fld); 
    setState(331);
    dynamic_cast<Seq_B1Context *>(_localctx)->fld_95a_B1Context = fld_95a_B1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B1Context *>(_localctx)->fld_95a_B1Context->fld); 
    setState(333);
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
   _localctx->elem.set_tag("B2"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(336);
    dynamic_cast<Seq_B2Context *>(_localctx)->fld_16R_B2Context = fld_16R_B2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B2Context *>(_localctx)->fld_16R_B2Context->fld); 
    setState(339);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      setState(338);
      dynamic_cast<Seq_B2Context *>(_localctx)->fld_95a_B2Context = fld_95a_B2();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B2Context *>(_localctx)->fld_95a_B2Context->fld); 
    setState(342);
    dynamic_cast<Seq_B2Context *>(_localctx)->fld_97A_B2Context = fld_97A_B2();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B2Context *>(_localctx)->fld_97A_B2Context->fld); 
    setState(344);
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
   _localctx->elem.set_tag("B3"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(347);
    dynamic_cast<Seq_B3Context *>(_localctx)->fld_16R_B3Context = fld_16R_B3();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B3Context *>(_localctx)->fld_16R_B3Context->fld); 
    setState(350); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(349);
              dynamic_cast<Seq_B3Context *>(_localctx)->fld_95a_B3Context = fld_95a_B3();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(352); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B3Context *>(_localctx)->fld_95a_B3Context->fld); 
    setState(355);
    dynamic_cast<Seq_B3Context *>(_localctx)->fld_16S_B3Context = fld_16S_B3();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_B3Context *>(_localctx)->fld_16S_B3Context->fld); 
   
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
   _localctx->elem.set_tag("C"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(358);
    dynamic_cast<Seq_CContext *>(_localctx)->fld_16R_CContext = fld_16R_C();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_16R_CContext->fld); 
    setState(360);
    dynamic_cast<Seq_CContext *>(_localctx)->fld_22H_CContext = fld_22H_C();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->fld_22H_CContext->fld); 
    setState(363); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(362);
              dynamic_cast<Seq_CContext *>(_localctx)->seq_C1Context = seq_C1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(365); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_sequence()->MergeFrom(dynamic_cast<Seq_CContext *>(_localctx)->seq_C1Context->elem); 
    setState(368);
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
   _localctx->elem.set_tag("C1"); 

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(371);
    dynamic_cast<Seq_C1Context *>(_localctx)->fld_16R_C1Context = fld_16R_C1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_C1Context *>(_localctx)->fld_16R_C1Context->fld); 
    setState(374); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(373);
              dynamic_cast<Seq_C1Context *>(_localctx)->fld_95a_C1Context = fld_95a_C1();
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(376); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_C1Context *>(_localctx)->fld_95a_C1Context->fld); 
    setState(380);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      setState(379);
      dynamic_cast<Seq_C1Context *>(_localctx)->fld_97A_C1Context = fld_97A_C1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_C1Context *>(_localctx)->fld_97A_C1Context->fld); 
    setState(384);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      setState(383);
      dynamic_cast<Seq_C1Context *>(_localctx)->fld_70C_C1Context = fld_70C_C1();
      break;
    }

    }
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_C1Context *>(_localctx)->fld_70C_C1Context->fld); 
    setState(387);
    dynamic_cast<Seq_C1Context *>(_localctx)->fld_16S_C1Context = fld_16S_C1();
     _localctx->elem.mutable_objects()->Add()->mutable_field()->MergeFrom(dynamic_cast<Seq_C1Context *>(_localctx)->fld_16S_C1Context->fld); 
   
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
   _localctx->fld.set_tag("16R"); 
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
    setState(397);
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
    setState(400);
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
    setState(403);
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
    setState(406);
    dynamic_cast<Fld_99B_AContext *>(_localctx)->fld_99B_A_BContext = fld_99B_A_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_99B_AContext *>(_localctx)->fld_99B_A_BContext->fld); 
   
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
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(409);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(410);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(412); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(411);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(414); 
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
    setState(422);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(416);
      dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_AContext = fld_13a_A1_A();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_13a_A1Context *>(_localctx)->fld_13a_A1_AContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(419);
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
    setState(424);
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(427);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(428);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(430); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(429);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(434);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(435);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(437); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(436);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(441);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(442);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(444); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(443);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
    setState(448);
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
    setState(451);
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
    setState(454);
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
    setState(457);
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
    setState(460);
    dynamic_cast<Fld_92A_BContext *>(_localctx)->fld_92A_B_AContext = fld_92A_B_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_92A_BContext *>(_localctx)->fld_92A_B_AContext->fld); 
   
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
    setState(463);
    dynamic_cast<Fld_99B_BContext *>(_localctx)->fld_99B_B_BContext = fld_99B_B_B();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_99B_BContext *>(_localctx)->fld_99B_B_BContext->fld); 
   
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
    setState(466);
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
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(470);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(472); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(471);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
    setState(485);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(476);
      dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_PContext = fld_95a_B1_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(479);
      dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_QContext = fld_95a_B1_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B1Context *>(_localctx)->fld_95a_B1_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(482);
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(487);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(488);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(490); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(489);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(495);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(497); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(496);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
    setState(510);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 35, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(501);
      dynamic_cast<Fld_95a_B2Context *>(_localctx)->fld_95a_B2_PContext = fld_95a_B2_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B2Context *>(_localctx)->fld_95a_B2_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(504);
      dynamic_cast<Fld_95a_B2Context *>(_localctx)->fld_95a_B2_QContext = fld_95a_B2_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B2Context *>(_localctx)->fld_95a_B2_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(507);
      dynamic_cast<Fld_95a_B2Context *>(_localctx)->fld_95a_B2_RContext = fld_95a_B2_R();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B2Context *>(_localctx)->fld_95a_B2_RContext->fld); 
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
    setState(512);
    dynamic_cast<Fld_97A_B2Context *>(_localctx)->fld_97A_B2_AContext = fld_97A_B2_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_97A_B2Context *>(_localctx)->fld_97A_B2_AContext->fld); 
   
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(515);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(516);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(518); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(517);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(522);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(523);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(525); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(524);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
    setState(538);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(529);
      dynamic_cast<Fld_95a_B3Context *>(_localctx)->fld_95a_B3_PContext = fld_95a_B3_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B3Context *>(_localctx)->fld_95a_B3_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(532);
      dynamic_cast<Fld_95a_B3Context *>(_localctx)->fld_95a_B3_QContext = fld_95a_B3_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B3Context *>(_localctx)->fld_95a_B3_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(535);
      dynamic_cast<Fld_95a_B3Context *>(_localctx)->fld_95a_B3_RContext = fld_95a_B3_R();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_B3Context *>(_localctx)->fld_95a_B3_RContext->fld); 
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(540);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(541);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(543); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(542);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(545); 
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(547);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(548);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(550); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(549);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(552); 
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
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(554);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(555);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(557); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(556);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(559); 
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
    setState(561);
    dynamic_cast<Fld_22H_CContext *>(_localctx)->fld_22H_C_HContext = fld_22H_C_H();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_22H_CContext *>(_localctx)->fld_22H_C_HContext->fld); 
   
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
   _localctx->fld.set_tag("16R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(564);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(565);
    match(SwiftMtParser_MT321Parser::T__0);
    setState(567); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(566);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
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
    setState(580);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(571);
      dynamic_cast<Fld_95a_C1Context *>(_localctx)->fld_95a_C1_PContext = fld_95a_C1_P();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_C1Context *>(_localctx)->fld_95a_C1_PContext->fld); 
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(574);
      dynamic_cast<Fld_95a_C1Context *>(_localctx)->fld_95a_C1_QContext = fld_95a_C1_Q();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_C1Context *>(_localctx)->fld_95a_C1_QContext->fld); 
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(577);
      dynamic_cast<Fld_95a_C1Context *>(_localctx)->fld_95a_C1_RContext = fld_95a_C1_R();
       _localctx->fld.MergeFrom(dynamic_cast<Fld_95a_C1Context *>(_localctx)->fld_95a_C1_RContext->fld); 
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
    setState(582);
    dynamic_cast<Fld_97A_C1Context *>(_localctx)->fld_97A_C1_AContext = fld_97A_C1_A();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_97A_C1Context *>(_localctx)->fld_97A_C1_AContext->fld); 
   
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
    setState(585);
    dynamic_cast<Fld_70C_C1Context *>(_localctx)->fld_70C_C1_CContext = fld_70C_C1_C();
     _localctx->fld.MergeFrom(dynamic_cast<Fld_70C_C1Context *>(_localctx)->fld_70C_C1_CContext->fld); 
   
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(588);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(589);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(591); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(590);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(593); 
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
   _localctx->fld.set_tag("16S"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(595);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(596);
    match(SwiftMtParser_MT321Parser::T__1);
    setState(598); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(597);
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
      setState(600); 
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
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(602);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(603);
    match(SwiftMtParser_MT321Parser::T__2);
    setState(605); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(604);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(607); 
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
   _localctx->fld.set_tag("23G"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(609);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(610);
    match(SwiftMtParser_MT321Parser::T__3);
    setState(612); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(611);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(614); 
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
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(616);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(617);
    match(SwiftMtParser_MT321Parser::T__4);
    setState(619); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(618);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(621); 
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
   _localctx->fld.set_tag("99B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(623);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(624);
    match(SwiftMtParser_MT321Parser::T__5);
    setState(626); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(625);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(628); 
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
   _localctx->fld.set_tag("13A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(630);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(631);
    match(SwiftMtParser_MT321Parser::T__6);
    setState(633); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(632);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(635); 
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
   _localctx->fld.set_tag("13B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(637);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(638);
    match(SwiftMtParser_MT321Parser::T__7);
    setState(640); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(639);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(642); 
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
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(644);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(645);
    match(SwiftMtParser_MT321Parser::T__2);
    setState(647); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(646);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(649); 
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
   _localctx->fld.set_tag("20C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(652);
    match(SwiftMtParser_MT321Parser::T__2);
    setState(654); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(653);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(656); 
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
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(658);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(659);
    match(SwiftMtParser_MT321Parser::T__4);
    setState(661); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(660);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(663); 
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
   _localctx->fld.set_tag("98A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(666);
    match(SwiftMtParser_MT321Parser::T__8);
    setState(668); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(667);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(670); 
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
   _localctx->fld.set_tag("19A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(672);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(673);
    match(SwiftMtParser_MT321Parser::T__9);
    setState(675); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(674);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(677); 
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
   _localctx->fld.set_tag("92A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(679);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(680);
    match(SwiftMtParser_MT321Parser::T__10);
    setState(682); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(681);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(684); 
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
   _localctx->fld.set_tag("99B"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(686);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(687);
    match(SwiftMtParser_MT321Parser::T__5);
    setState(689); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(688);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(691); 
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
   _localctx->fld.set_tag("94C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(693);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(694);
    match(SwiftMtParser_MT321Parser::T__11);
    setState(696); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(695);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(698); 
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
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(700);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(701);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(703); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(702);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(705); 
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
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(707);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(708);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(710); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(709);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(712); 
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
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(714);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(715);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(717); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(716);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(719); 
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
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(721);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(722);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(724); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(723);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(726); 
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
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(728);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(729);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(731); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(730);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(733); 
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
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(735);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(736);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(738); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(737);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(740); 
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
   _localctx->fld.set_tag("97A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(742);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(743);
    match(SwiftMtParser_MT321Parser::T__15);
    setState(745); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(744);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(747); 
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
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(749);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(750);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(752); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(751);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(754); 
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
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(756);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(757);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(759); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(758);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(761); 
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
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(763);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(764);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(766); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(765);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(768); 
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
   _localctx->fld.set_tag("22H"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(770);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(771);
    match(SwiftMtParser_MT321Parser::T__4);
    setState(773); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(772);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(775); 
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
   _localctx->fld.set_tag("95P"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(777);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(778);
    match(SwiftMtParser_MT321Parser::T__12);
    setState(780); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(779);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(782); 
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
   _localctx->fld.set_tag("95Q"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(784);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(785);
    match(SwiftMtParser_MT321Parser::T__13);
    setState(787); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(786);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(789); 
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
   _localctx->fld.set_tag("95R"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(791);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(792);
    match(SwiftMtParser_MT321Parser::T__14);
    setState(794); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(793);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(796); 
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
   _localctx->fld.set_tag("97A"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(798);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(799);
    match(SwiftMtParser_MT321Parser::T__15);
    setState(801); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(800);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(803); 
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
   _localctx->fld.set_tag("70C"); 
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(805);
    match(SwiftMtParser_MT321Parser::START_OF_FIELD);
    setState(806);
    match(SwiftMtParser_MT321Parser::T__16);
    setState(808); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(807);
      _la = _input->LA(1);
      if (_la == 0 || _la == Token::EOF || (_la == SwiftMtParser_MT321Parser::START_OF_FIELD)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(810); 
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
    0x3, 0x1e, 0x32f, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
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
    0xd, 0xe, 0xd, 0xf0, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x6, 0xe, 0xf8, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xf9, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0x100, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0x101, 
    0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x106, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x109, 
    0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x10d, 0xa, 0xe, 0xc, 0xe, 0xe, 
    0xe, 0x110, 0xb, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x119, 0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0x126, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 
    0x127, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0x12c, 0xa, 0x10, 0xd, 0x10, 
    0xe, 0x10, 0x12d, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0x132, 0xa, 0x10, 
    0xd, 0x10, 0xe, 0x10, 0x133, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x13a, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0x13e, 
    0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x5, 0x10, 0x146, 0xa, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x156, 
    0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0x161, 0xa, 0x13, 
    0xd, 0x13, 0xe, 0x13, 0x162, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x6, 0x14, 0x16e, 
    0xa, 0x14, 0xd, 0x14, 0xe, 0x14, 0x16f, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x6, 0x15, 0x179, 0xa, 0x15, 
    0xd, 0x15, 0xe, 0x15, 0x17a, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x17f, 
    0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0x183, 0xa, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x16, 0x6, 
    0x16, 0x18c, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0x18d, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 
    0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
    0x1b, 0x6, 0x1b, 0x19f, 0xa, 0x1b, 0xd, 0x1b, 0xe, 0x1b, 0x1a0, 0x3, 
    0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 
    0x1a9, 0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x6, 0x1e, 0x1b1, 0xa, 0x1e, 0xd, 0x1e, 0xe, 0x1e, 0x1b2, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x6, 0x1f, 0x1b8, 0xa, 0x1f, 0xd, 0x1f, 
    0xe, 0x1f, 0x1b9, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x6, 0x20, 0x1bf, 
    0xa, 0x20, 0xd, 0x20, 0xe, 0x20, 0x1c0, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 
    0x3, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
    0x24, 0x3, 0x24, 0x3, 0x24, 0x3, 0x25, 0x3, 0x25, 0x3, 0x25, 0x3, 0x26, 
    0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 
    0x28, 0x3, 0x28, 0x6, 0x28, 0x1db, 0xa, 0x28, 0xd, 0x28, 0xe, 0x28, 
    0x1dc, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x5, 0x29, 0x1e8, 0xa, 0x29, 0x3, 0x2a, 
    0x3, 0x2a, 0x3, 0x2a, 0x6, 0x2a, 0x1ed, 0xa, 0x2a, 0xd, 0x2a, 0xe, 0x2a, 
    0x1ee, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 0x6, 0x2b, 0x1f4, 0xa, 0x2b, 
    0xd, 0x2b, 0xe, 0x2b, 0x1f5, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
    0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x201, 
    0xa, 0x2c, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 
    0x2e, 0x6, 0x2e, 0x209, 0xa, 0x2e, 0xd, 0x2e, 0xe, 0x2e, 0x20a, 0x3, 
    0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x6, 0x2f, 0x210, 0xa, 0x2f, 0xd, 0x2f, 
    0xe, 0x2f, 0x211, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 
    0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x3, 0x30, 0x5, 0x30, 0x21d, 0xa, 0x30, 
    0x3, 0x31, 0x3, 0x31, 0x3, 0x31, 0x6, 0x31, 0x222, 0xa, 0x31, 0xd, 0x31, 
    0xe, 0x31, 0x223, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x6, 0x32, 0x229, 
    0xa, 0x32, 0xd, 0x32, 0xe, 0x32, 0x22a, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 
    0x6, 0x33, 0x230, 0xa, 0x33, 0xd, 0x33, 0xe, 0x33, 0x231, 0x3, 0x34, 
    0x3, 0x34, 0x3, 0x34, 0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x6, 0x35, 0x23a, 
    0xa, 0x35, 0xd, 0x35, 0xe, 0x35, 0x23b, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
    0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x5, 
    0x36, 0x247, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x3, 0x37, 0x3, 0x38, 
    0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 0x6, 0x39, 0x252, 
    0xa, 0x39, 0xd, 0x39, 0xe, 0x39, 0x253, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
    0x6, 0x3a, 0x259, 0xa, 0x3a, 0xd, 0x3a, 0xe, 0x3a, 0x25a, 0x3, 0x3b, 
    0x3, 0x3b, 0x3, 0x3b, 0x6, 0x3b, 0x260, 0xa, 0x3b, 0xd, 0x3b, 0xe, 0x3b, 
    0x261, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3c, 0x6, 0x3c, 0x267, 0xa, 0x3c, 
    0xd, 0x3c, 0xe, 0x3c, 0x268, 0x3, 0x3d, 0x3, 0x3d, 0x3, 0x3d, 0x6, 0x3d, 
    0x26e, 0xa, 0x3d, 0xd, 0x3d, 0xe, 0x3d, 0x26f, 0x3, 0x3e, 0x3, 0x3e, 
    0x3, 0x3e, 0x6, 0x3e, 0x275, 0xa, 0x3e, 0xd, 0x3e, 0xe, 0x3e, 0x276, 
    0x3, 0x3f, 0x3, 0x3f, 0x3, 0x3f, 0x6, 0x3f, 0x27c, 0xa, 0x3f, 0xd, 0x3f, 
    0xe, 0x3f, 0x27d, 0x3, 0x40, 0x3, 0x40, 0x3, 0x40, 0x6, 0x40, 0x283, 
    0xa, 0x40, 0xd, 0x40, 0xe, 0x40, 0x284, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 
    0x6, 0x41, 0x28a, 0xa, 0x41, 0xd, 0x41, 0xe, 0x41, 0x28b, 0x3, 0x42, 
    0x3, 0x42, 0x3, 0x42, 0x6, 0x42, 0x291, 0xa, 0x42, 0xd, 0x42, 0xe, 0x42, 
    0x292, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x6, 0x43, 0x298, 0xa, 0x43, 
    0xd, 0x43, 0xe, 0x43, 0x299, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x6, 0x44, 
    0x29f, 0xa, 0x44, 0xd, 0x44, 0xe, 0x44, 0x2a0, 0x3, 0x45, 0x3, 0x45, 
    0x3, 0x45, 0x6, 0x45, 0x2a6, 0xa, 0x45, 0xd, 0x45, 0xe, 0x45, 0x2a7, 
    0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x6, 0x46, 0x2ad, 0xa, 0x46, 0xd, 0x46, 
    0xe, 0x46, 0x2ae, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x6, 0x47, 0x2b4, 
    0xa, 0x47, 0xd, 0x47, 0xe, 0x47, 0x2b5, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 
    0x6, 0x48, 0x2bb, 0xa, 0x48, 0xd, 0x48, 0xe, 0x48, 0x2bc, 0x3, 0x49, 
    0x3, 0x49, 0x3, 0x49, 0x6, 0x49, 0x2c2, 0xa, 0x49, 0xd, 0x49, 0xe, 0x49, 
    0x2c3, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x6, 0x4a, 0x2c9, 0xa, 0x4a, 
    0xd, 0x4a, 0xe, 0x4a, 0x2ca, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x6, 0x4b, 
    0x2d0, 0xa, 0x4b, 0xd, 0x4b, 0xe, 0x4b, 0x2d1, 0x3, 0x4c, 0x3, 0x4c, 
    0x3, 0x4c, 0x6, 0x4c, 0x2d7, 0xa, 0x4c, 0xd, 0x4c, 0xe, 0x4c, 0x2d8, 
    0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x6, 0x4d, 0x2de, 0xa, 0x4d, 0xd, 0x4d, 
    0xe, 0x4d, 0x2df, 0x3, 0x4e, 0x3, 0x4e, 0x3, 0x4e, 0x6, 0x4e, 0x2e5, 
    0xa, 0x4e, 0xd, 0x4e, 0xe, 0x4e, 0x2e6, 0x3, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
    0x6, 0x4f, 0x2ec, 0xa, 0x4f, 0xd, 0x4f, 0xe, 0x4f, 0x2ed, 0x3, 0x50, 
    0x3, 0x50, 0x3, 0x50, 0x6, 0x50, 0x2f3, 0xa, 0x50, 0xd, 0x50, 0xe, 0x50, 
    0x2f4, 0x3, 0x51, 0x3, 0x51, 0x3, 0x51, 0x6, 0x51, 0x2fa, 0xa, 0x51, 
    0xd, 0x51, 0xe, 0x51, 0x2fb, 0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x6, 0x52, 
    0x301, 0xa, 0x52, 0xd, 0x52, 0xe, 0x52, 0x302, 0x3, 0x53, 0x3, 0x53, 
    0x3, 0x53, 0x6, 0x53, 0x308, 0xa, 0x53, 0xd, 0x53, 0xe, 0x53, 0x309, 
    0x3, 0x54, 0x3, 0x54, 0x3, 0x54, 0x6, 0x54, 0x30f, 0xa, 0x54, 0xd, 0x54, 
    0xe, 0x54, 0x310, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x6, 0x55, 0x316, 
    0xa, 0x55, 0xd, 0x55, 0xe, 0x55, 0x317, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 
    0x6, 0x56, 0x31d, 0xa, 0x56, 0xd, 0x56, 0xe, 0x56, 0x31e, 0x3, 0x57, 
    0x3, 0x57, 0x3, 0x57, 0x6, 0x57, 0x324, 0xa, 0x57, 0xd, 0x57, 0xe, 0x57, 
    0x325, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x6, 0x58, 0x32b, 0xa, 0x58, 
    0xd, 0x58, 0xe, 0x58, 0x32c, 0x3, 0x58, 0x2, 0x2, 0x59, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 
    0x38, 0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
    0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 0x66, 
    0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 0x7c, 0x7e, 
    0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 0x92, 0x94, 0x96, 
    0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 0xa8, 0xaa, 0xac, 0xae, 
    0x2, 0x5, 0x3, 0x2, 0x1b, 0x1b, 0x3, 0x2, 0x1b, 0x1c, 0x3, 0x2, 0x1d, 
    0x1d, 0x2, 0x327, 0x2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x4, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x8, 0xc4, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xe, 0xd1, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0xd6, 0x3, 0x2, 0x2, 0x2, 0x12, 0xda, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0xe1, 0x3, 0x2, 0x2, 0x2, 0x16, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0xea, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xf4, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x115, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x120, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x14b, 0x3, 0x2, 0x2, 0x2, 0x22, 0x152, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x15d, 0x3, 0x2, 0x2, 0x2, 0x26, 0x168, 0x3, 0x2, 0x2, 0x2, 0x28, 0x175, 
    0x3, 0x2, 0x2, 0x2, 0x2a, 0x188, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x18f, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x192, 0x3, 0x2, 0x2, 0x2, 0x30, 0x195, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x198, 0x3, 0x2, 0x2, 0x2, 0x34, 0x19b, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x1a8, 0x3, 0x2, 0x2, 0x2, 0x38, 0x1aa, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x1b4, 0x3, 0x2, 0x2, 0x2, 0x3e, 
    0x1bb, 0x3, 0x2, 0x2, 0x2, 0x40, 0x1c2, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1c5, 
    0x3, 0x2, 0x2, 0x2, 0x44, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1cb, 0x3, 
    0x2, 0x2, 0x2, 0x48, 0x1ce, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1d1, 0x3, 0x2, 
    0x2, 0x2, 0x4c, 0x1d4, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x1d7, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x1e7, 0x3, 0x2, 0x2, 0x2, 0x52, 0x1e9, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x56, 0x200, 0x3, 0x2, 0x2, 0x2, 0x58, 
    0x202, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x205, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x20c, 
    0x3, 0x2, 0x2, 0x2, 0x5e, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x60, 0x21e, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x225, 0x3, 0x2, 0x2, 0x2, 0x64, 0x22c, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x233, 0x3, 0x2, 0x2, 0x2, 0x68, 0x236, 0x3, 0x2, 0x2, 
    0x2, 0x6a, 0x246, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x248, 0x3, 0x2, 0x2, 0x2, 
    0x6e, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x70, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x72, 
    0x255, 0x3, 0x2, 0x2, 0x2, 0x74, 0x25c, 0x3, 0x2, 0x2, 0x2, 0x76, 0x263, 
    0x3, 0x2, 0x2, 0x2, 0x78, 0x26a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x271, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x278, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x27f, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x286, 0x3, 0x2, 0x2, 0x2, 0x82, 0x28d, 0x3, 0x2, 0x2, 
    0x2, 0x84, 0x294, 0x3, 0x2, 0x2, 0x2, 0x86, 0x29b, 0x3, 0x2, 0x2, 0x2, 
    0x88, 0x2a2, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2a9, 0x3, 0x2, 0x2, 0x2, 0x8c, 
    0x2b0, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x2b7, 0x3, 0x2, 0x2, 0x2, 0x90, 0x2be, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x94, 0x2cc, 0x3, 
    0x2, 0x2, 0x2, 0x96, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x98, 0x2da, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x2e1, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x2e8, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x2ef, 0x3, 0x2, 0x2, 0x2, 0xa0, 0x2f6, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x2fd, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x304, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0x30b, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x312, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x319, 
    0x3, 0x2, 0x2, 0x2, 0xac, 0x320, 0x3, 0x2, 0x2, 0x2, 0xae, 0x327, 0x3, 
    0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x4, 0x3, 0x2, 0xb1, 0xb3, 0x5, 0x8, 
    0x5, 0x2, 0xb2, 0xb4, 0x5, 0xc, 0x7, 0x2, 0xb3, 0xb2, 0x3, 0x2, 0x2, 
    0x2, 0xb3, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb5, 0xb7, 0x5, 0x18, 0xd, 0x2, 0xb6, 0xb8, 0x5, 0xe, 0x8, 0x2, 0xb7, 
    0xb6, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 
    0x3, 0x2, 0x2, 0x2, 0xb9, 0xba, 0x7, 0x2, 0x2, 0x3, 0xba, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0xbb, 0xbc, 0x7, 0x14, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x6, 
    0x4, 0x2, 0xbd, 0xbe, 0x7, 0x1b, 0x2, 0x2, 0xbe, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0xbf, 0xc1, 0xa, 0x2, 0x2, 0x2, 0xc0, 0xbf, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc2, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc3, 0x7, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 
    0x7, 0x15, 0x2, 0x2, 0xc5, 0xc6, 0x5, 0xa, 0x6, 0x2, 0xc6, 0xc7, 0x7, 
    0x1b, 0x2, 0x2, 0xc7, 0x9, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xca, 0xa, 0x2, 
    0x2, 0x2, 0xc9, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcb, 0x3, 0x2, 0x2, 
    0x2, 0xcb, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcc, 0x3, 0x2, 0x2, 0x2, 
    0xcc, 0xb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x7, 0x16, 0x2, 0x2, 0xce, 
    0xcf, 0x5, 0x10, 0x9, 0x2, 0xcf, 0xd0, 0x7, 0x1b, 0x2, 0x2, 0xd0, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0xd1, 0xd2, 0x7, 0x18, 0x2, 0x2, 0xd2, 0xd3, 0x5, 
    0x10, 0x9, 0x2, 0xd3, 0xd4, 0x7, 0x1b, 0x2, 0x2, 0xd4, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0xd5, 0xd7, 0x5, 0x12, 0xa, 0x2, 0xd6, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd7, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 
    0xd8, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd9, 0x11, 0x3, 0x2, 0x2, 0x2, 0xda, 
    0xdb, 0x7, 0x1a, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x14, 0xb, 0x2, 0xdc, 0xdd, 
    0x7, 0x1c, 0x2, 0x2, 0xdd, 0xde, 0x5, 0x16, 0xc, 0x2, 0xde, 0xdf, 0x7, 
    0x1b, 0x2, 0x2, 0xdf, 0x13, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe2, 0xa, 0x3, 
    0x2, 0x2, 0xe1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xe3, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 
    0xe4, 0x15, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe7, 0xa, 0x2, 0x2, 0x2, 0xe6, 
    0xe5, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x17, 0x2, 0x2, 0xeb, 0xec, 0x5, 0x1a, 
    0xe, 0x2, 0xec, 0xee, 0x5, 0x1e, 0x10, 0x2, 0xed, 0xef, 0x5, 0x26, 0x14, 
    0x2, 0xee, 0xed, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x3, 0x2, 0x2, 0x2, 
    0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xf2, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf3, 0x7, 0x19, 0x2, 0x2, 0xf3, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0xf4, 0xf5, 0x5, 0x2a, 0x16, 0x2, 0xf5, 0xf7, 0x8, 
    0xe, 0x1, 0x2, 0xf6, 0xf8, 0x5, 0x2c, 0x17, 0x2, 0xf7, 0xf6, 0x3, 0x2, 
    0x2, 0x2, 0xf8, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf7, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfb, 0xfc, 0x8, 0xe, 0x1, 0x2, 0xfc, 0xfd, 0x5, 0x2e, 0x18, 0x2, 0xfd, 
    0xff, 0x8, 0xe, 0x1, 0x2, 0xfe, 0x100, 0x5, 0x30, 0x19, 0x2, 0xff, 0xfe, 
    0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0xff, 0x3, 
    0x2, 0x2, 0x2, 0x101, 0x102, 0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x3, 
    0x2, 0x2, 0x2, 0x103, 0x107, 0x8, 0xe, 0x1, 0x2, 0x104, 0x106, 0x5, 
    0x32, 0x1a, 0x2, 0x105, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x109, 0x3, 
    0x2, 0x2, 0x2, 0x107, 0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 
    0x2, 0x2, 0x2, 0x108, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x109, 0x107, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x10e, 0x8, 0xe, 0x1, 0x2, 0x10b, 0x10d, 0x5, 
    0x1c, 0xf, 0x2, 0x10c, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10f, 0x3, 
    0x2, 0x2, 0x2, 0x10f, 0x111, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x112, 0x8, 0xe, 0x1, 0x2, 0x112, 0x113, 0x5, 
    0x3c, 0x1f, 0x2, 0x113, 0x114, 0x8, 0xe, 0x1, 0x2, 0x114, 0x1b, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x116, 0x5, 0x34, 0x1b, 0x2, 0x116, 0x118, 0x8, 
    0xf, 0x1, 0x2, 0x117, 0x119, 0x5, 0x36, 0x1c, 0x2, 0x118, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x118, 0x119, 0x3, 0x2, 0x2, 0x2, 0x119, 0x11a, 0x3, 
    0x2, 0x2, 0x2, 0x11a, 0x11b, 0x8, 0xf, 0x1, 0x2, 0x11b, 0x11c, 0x5, 
    0x38, 0x1d, 0x2, 0x11c, 0x11d, 0x8, 0xf, 0x1, 0x2, 0x11d, 0x11e, 0x5, 
    0x3a, 0x1e, 0x2, 0x11e, 0x11f, 0x8, 0xf, 0x1, 0x2, 0x11f, 0x1d, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x121, 0x5, 0x3e, 0x20, 0x2, 0x121, 0x122, 0x8, 
    0x10, 0x1, 0x2, 0x122, 0x123, 0x5, 0x40, 0x21, 0x2, 0x123, 0x125, 0x8, 
    0x10, 0x1, 0x2, 0x124, 0x126, 0x5, 0x42, 0x22, 0x2, 0x125, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x126, 0x127, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 0x2, 0x2, 0x2, 0x128, 0x129, 0x3, 
    0x2, 0x2, 0x2, 0x129, 0x12b, 0x8, 0x10, 0x1, 0x2, 0x12a, 0x12c, 0x5, 
    0x44, 0x23, 0x2, 0x12b, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12d, 0x3, 
    0x2, 0x2, 0x2, 0x12d, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x12f, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x131, 0x8, 
    0x10, 0x1, 0x2, 0x130, 0x132, 0x5, 0x46, 0x24, 0x2, 0x131, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x132, 0x133, 0x3, 0x2, 0x2, 0x2, 0x133, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x134, 0x3, 0x2, 0x2, 0x2, 0x134, 0x135, 0x3, 
    0x2, 0x2, 0x2, 0x135, 0x136, 0x8, 0x10, 0x1, 0x2, 0x136, 0x137, 0x5, 
    0x48, 0x25, 0x2, 0x137, 0x139, 0x8, 0x10, 0x1, 0x2, 0x138, 0x13a, 0x5, 
    0x4a, 0x26, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13d, 0x8, 
    0x10, 0x1, 0x2, 0x13c, 0x13e, 0x5, 0x4c, 0x27, 0x2, 0x13d, 0x13c, 0x3, 
    0x2, 0x2, 0x2, 0x13d, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 
    0x2, 0x2, 0x2, 0x13f, 0x140, 0x8, 0x10, 0x1, 0x2, 0x140, 0x141, 0x5, 
    0x20, 0x11, 0x2, 0x141, 0x142, 0x8, 0x10, 0x1, 0x2, 0x142, 0x143, 0x5, 
    0x22, 0x12, 0x2, 0x143, 0x145, 0x8, 0x10, 0x1, 0x2, 0x144, 0x146, 0x5, 
    0x24, 0x13, 0x2, 0x145, 0x144, 0x3, 0x2, 0x2, 0x2, 0x145, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x146, 0x147, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x8, 
    0x10, 0x1, 0x2, 0x148, 0x149, 0x5, 0x62, 0x32, 0x2, 0x149, 0x14a, 0x8, 
    0x10, 0x1, 0x2, 0x14a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 0x5, 
    0x4e, 0x28, 0x2, 0x14c, 0x14d, 0x8, 0x11, 0x1, 0x2, 0x14d, 0x14e, 0x5, 
    0x50, 0x29, 0x2, 0x14e, 0x14f, 0x8, 0x11, 0x1, 0x2, 0x14f, 0x150, 0x5, 
    0x52, 0x2a, 0x2, 0x150, 0x151, 0x8, 0x11, 0x1, 0x2, 0x151, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x152, 0x153, 0x5, 0x54, 0x2b, 0x2, 0x153, 0x155, 0x8, 
    0x12, 0x1, 0x2, 0x154, 0x156, 0x5, 0x56, 0x2c, 0x2, 0x155, 0x154, 0x3, 
    0x2, 0x2, 0x2, 0x155, 0x156, 0x3, 0x2, 0x2, 0x2, 0x156, 0x157, 0x3, 
    0x2, 0x2, 0x2, 0x157, 0x158, 0x8, 0x12, 0x1, 0x2, 0x158, 0x159, 0x5, 
    0x58, 0x2d, 0x2, 0x159, 0x15a, 0x8, 0x12, 0x1, 0x2, 0x15a, 0x15b, 0x5, 
    0x5a, 0x2e, 0x2, 0x15b, 0x15c, 0x8, 0x12, 0x1, 0x2, 0x15c, 0x23, 0x3, 
    0x2, 0x2, 0x2, 0x15d, 0x15e, 0x5, 0x5c, 0x2f, 0x2, 0x15e, 0x160, 0x8, 
    0x13, 0x1, 0x2, 0x15f, 0x161, 0x5, 0x5e, 0x30, 0x2, 0x160, 0x15f, 0x3, 
    0x2, 0x2, 0x2, 0x161, 0x162, 0x3, 0x2, 0x2, 0x2, 0x162, 0x160, 0x3, 
    0x2, 0x2, 0x2, 0x162, 0x163, 0x3, 0x2, 0x2, 0x2, 0x163, 0x164, 0x3, 
    0x2, 0x2, 0x2, 0x164, 0x165, 0x8, 0x13, 0x1, 0x2, 0x165, 0x166, 0x5, 
    0x60, 0x31, 0x2, 0x166, 0x167, 0x8, 0x13, 0x1, 0x2, 0x167, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x168, 0x169, 0x5, 0x64, 0x33, 0x2, 0x169, 0x16a, 0x8, 
    0x14, 0x1, 0x2, 0x16a, 0x16b, 0x5, 0x66, 0x34, 0x2, 0x16b, 0x16d, 0x8, 
    0x14, 0x1, 0x2, 0x16c, 0x16e, 0x5, 0x28, 0x15, 0x2, 0x16d, 0x16c, 0x3, 
    0x2, 0x2, 0x2, 0x16e, 0x16f, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 
    0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 0x171, 0x3, 
    0x2, 0x2, 0x2, 0x171, 0x172, 0x8, 0x14, 0x1, 0x2, 0x172, 0x173, 0x5, 
    0x72, 0x3a, 0x2, 0x173, 0x174, 0x8, 0x14, 0x1, 0x2, 0x174, 0x27, 0x3, 
    0x2, 0x2, 0x2, 0x175, 0x176, 0x5, 0x68, 0x35, 0x2, 0x176, 0x178, 0x8, 
    0x15, 0x1, 0x2, 0x177, 0x179, 0x5, 0x6a, 0x36, 0x2, 0x178, 0x177, 0x3, 
    0x2, 0x2, 0x2, 0x179, 0x17a, 0x3, 0x2, 0x2, 0x2, 0x17a, 0x178, 0x3, 
    0x2, 0x2, 0x2, 0x17a, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x3, 
    0x2, 0x2, 0x2, 0x17c, 0x17e, 0x8, 0x15, 0x1, 0x2, 0x17d, 0x17f, 0x5, 
    0x6c, 0x37, 0x2, 0x17e, 0x17d, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17f, 0x3, 
    0x2, 0x2, 0x2, 0x17f, 0x180, 0x3, 0x2, 0x2, 0x2, 0x180, 0x182, 0x8, 
    0x15, 0x1, 0x2, 0x181, 0x183, 0x5, 0x6e, 0x38, 0x2, 0x182, 0x181, 0x3, 
    0x2, 0x2, 0x2, 0x182, 0x183, 0x3, 0x2, 0x2, 0x2, 0x183, 0x184, 0x3, 
    0x2, 0x2, 0x2, 0x184, 0x185, 0x8, 0x15, 0x1, 0x2, 0x185, 0x186, 0x5, 
    0x70, 0x39, 0x2, 0x186, 0x187, 0x8, 0x15, 0x1, 0x2, 0x187, 0x29, 0x3, 
    0x2, 0x2, 0x2, 0x188, 0x189, 0x7, 0x1d, 0x2, 0x2, 0x189, 0x18b, 0x7, 
    0x3, 0x2, 0x2, 0x18a, 0x18c, 0xa, 0x4, 0x2, 0x2, 0x18b, 0x18a, 0x3, 
    0x2, 0x2, 0x2, 0x18c, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18d, 0x18b, 0x3, 
    0x2, 0x2, 0x2, 0x18d, 0x18e, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x2b, 0x3, 0x2, 
    0x2, 0x2, 0x18f, 0x190, 0x5, 0x74, 0x3b, 0x2, 0x190, 0x191, 0x8, 0x17, 
    0x1, 0x2, 0x191, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x192, 0x193, 0x5, 0x76, 
    0x3c, 0x2, 0x193, 0x194, 0x8, 0x18, 0x1, 0x2, 0x194, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x195, 0x196, 0x5, 0x78, 0x3d, 0x2, 0x196, 0x197, 0x8, 0x19, 
    0x1, 0x2, 0x197, 0x31, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x5, 0x7a, 
    0x3e, 0x2, 0x199, 0x19a, 0x8, 0x1a, 0x1, 0x2, 0x19a, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0x19b, 0x19c, 0x7, 0x1d, 0x2, 0x2, 0x19c, 0x19e, 0x7, 0x3, 
    0x2, 0x2, 0x19d, 0x19f, 0xa, 0x4, 0x2, 0x2, 0x19e, 0x19d, 0x3, 0x2, 
    0x2, 0x2, 0x19f, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x19e, 0x3, 0x2, 
    0x2, 0x2, 0x1a0, 0x1a1, 0x3, 0x2, 0x2, 0x2, 0x1a1, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x1a2, 0x1a3, 0x5, 0x7c, 0x3f, 0x2, 0x1a3, 0x1a4, 0x8, 0x1c, 0x1, 
    0x2, 0x1a4, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1a5, 0x1a6, 0x5, 0x7e, 0x40, 
    0x2, 0x1a6, 0x1a7, 0x8, 0x1c, 0x1, 0x2, 0x1a7, 0x1a9, 0x3, 0x2, 0x2, 
    0x2, 0x1a8, 0x1a2, 0x3, 0x2, 0x2, 0x2, 0x1a8, 0x1a5, 0x3, 0x2, 0x2, 
    0x2, 0x1a9, 0x37, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 0x5, 0x80, 0x41, 
    0x2, 0x1ab, 0x1ac, 0x8, 0x1d, 0x1, 0x2, 0x1ac, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x1ad, 0x1ae, 0x7, 0x1d, 0x2, 0x2, 0x1ae, 0x1b0, 0x7, 0x4, 0x2, 
    0x2, 0x1af, 0x1b1, 0xa, 0x4, 0x2, 0x2, 0x1b0, 0x1af, 0x3, 0x2, 0x2, 
    0x2, 0x1b1, 0x1b2, 0x3, 0x2, 0x2, 0x2, 0x1b2, 0x1b0, 0x3, 0x2, 0x2, 
    0x2, 0x1b2, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x1b4, 0x1b5, 0x7, 0x1d, 0x2, 0x2, 0x1b5, 0x1b7, 0x7, 0x4, 0x2, 0x2, 
    0x1b6, 0x1b8, 0xa, 0x4, 0x2, 0x2, 0x1b7, 0x1b6, 0x3, 0x2, 0x2, 0x2, 
    0x1b8, 0x1b9, 0x3, 0x2, 0x2, 0x2, 0x1b9, 0x1b7, 0x3, 0x2, 0x2, 0x2, 
    0x1b9, 0x1ba, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x1bb, 
    0x1bc, 0x7, 0x1d, 0x2, 0x2, 0x1bc, 0x1be, 0x7, 0x3, 0x2, 0x2, 0x1bd, 
    0x1bf, 0xa, 0x4, 0x2, 0x2, 0x1be, 0x1bd, 0x3, 0x2, 0x2, 0x2, 0x1bf, 
    0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1be, 0x3, 0x2, 0x2, 0x2, 0x1c0, 
    0x1c1, 0x3, 0x2, 0x2, 0x2, 0x1c1, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1c2, 0x1c3, 
    0x5, 0x82, 0x42, 0x2, 0x1c3, 0x1c4, 0x8, 0x21, 0x1, 0x2, 0x1c4, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x5, 0x84, 0x43, 0x2, 0x1c6, 0x1c7, 
    0x8, 0x22, 0x1, 0x2, 0x1c7, 0x43, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 
    0x5, 0x86, 0x44, 0x2, 0x1c9, 0x1ca, 0x8, 0x23, 0x1, 0x2, 0x1ca, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 0x5, 0x88, 0x45, 0x2, 0x1cc, 0x1cd, 
    0x8, 0x24, 0x1, 0x2, 0x1cd, 0x47, 0x3, 0x2, 0x2, 0x2, 0x1ce, 0x1cf, 
    0x5, 0x8a, 0x46, 0x2, 0x1cf, 0x1d0, 0x8, 0x25, 0x1, 0x2, 0x1d0, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d2, 0x5, 0x8c, 0x47, 0x2, 0x1d2, 0x1d3, 
    0x8, 0x26, 0x1, 0x2, 0x1d3, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1d4, 0x1d5, 
    0x5, 0x8e, 0x48, 0x2, 0x1d5, 0x1d6, 0x8, 0x27, 0x1, 0x2, 0x1d6, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x1d7, 0x1d8, 0x7, 0x1d, 0x2, 0x2, 0x1d8, 0x1da, 
    0x7, 0x3, 0x2, 0x2, 0x1d9, 0x1db, 0xa, 0x4, 0x2, 0x2, 0x1da, 0x1d9, 
    0x3, 0x2, 0x2, 0x2, 0x1db, 0x1dc, 0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1da, 
    0x3, 0x2, 0x2, 0x2, 0x1dc, 0x1dd, 0x3, 0x2, 0x2, 0x2, 0x1dd, 0x4f, 0x3, 
    0x2, 0x2, 0x2, 0x1de, 0x1df, 0x5, 0x90, 0x49, 0x2, 0x1df, 0x1e0, 0x8, 
    0x29, 0x1, 0x2, 0x1e0, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1e2, 0x5, 
    0x92, 0x4a, 0x2, 0x1e2, 0x1e3, 0x8, 0x29, 0x1, 0x2, 0x1e3, 0x1e8, 0x3, 
    0x2, 0x2, 0x2, 0x1e4, 0x1e5, 0x5, 0x94, 0x4b, 0x2, 0x1e5, 0x1e6, 0x8, 
    0x29, 0x1, 0x2, 0x1e6, 0x1e8, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1de, 0x3, 
    0x2, 0x2, 0x2, 0x1e7, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1e7, 0x1e4, 0x3, 
    0x2, 0x2, 0x2, 0x1e8, 0x51, 0x3, 0x2, 0x2, 0x2, 0x1e9, 0x1ea, 0x7, 0x1d, 
    0x2, 0x2, 0x1ea, 0x1ec, 0x7, 0x4, 0x2, 0x2, 0x1eb, 0x1ed, 0xa, 0x4, 
    0x2, 0x2, 0x1ec, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1ee, 0x3, 0x2, 
    0x2, 0x2, 0x1ee, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ee, 0x1ef, 0x3, 0x2, 
    0x2, 0x2, 0x1ef, 0x53, 0x3, 0x2, 0x2, 0x2, 0x1f0, 0x1f1, 0x7, 0x1d, 
    0x2, 0x2, 0x1f1, 0x1f3, 0x7, 0x3, 0x2, 0x2, 0x1f2, 0x1f4, 0xa, 0x4, 
    0x2, 0x2, 0x1f3, 0x1f2, 0x3, 0x2, 0x2, 0x2, 0x1f4, 0x1f5, 0x3, 0x2, 
    0x2, 0x2, 0x1f5, 0x1f3, 0x3, 0x2, 0x2, 0x2, 0x1f5, 0x1f6, 0x3, 0x2, 
    0x2, 0x2, 0x1f6, 0x55, 0x3, 0x2, 0x2, 0x2, 0x1f7, 0x1f8, 0x5, 0x96, 
    0x4c, 0x2, 0x1f8, 0x1f9, 0x8, 0x2c, 0x1, 0x2, 0x1f9, 0x201, 0x3, 0x2, 
    0x2, 0x2, 0x1fa, 0x1fb, 0x5, 0x98, 0x4d, 0x2, 0x1fb, 0x1fc, 0x8, 0x2c, 
    0x1, 0x2, 0x1fc, 0x201, 0x3, 0x2, 0x2, 0x2, 0x1fd, 0x1fe, 0x5, 0x9a, 
    0x4e, 0x2, 0x1fe, 0x1ff, 0x8, 0x2c, 0x1, 0x2, 0x1ff, 0x201, 0x3, 0x2, 
    0x2, 0x2, 0x200, 0x1f7, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1fa, 0x3, 0x2, 
    0x2, 0x2, 0x200, 0x1fd, 0x3, 0x2, 0x2, 0x2, 0x201, 0x57, 0x3, 0x2, 0x2, 
    0x2, 0x202, 0x203, 0x5, 0x9c, 0x4f, 0x2, 0x203, 0x204, 0x8, 0x2d, 0x1, 
    0x2, 0x204, 0x59, 0x3, 0x2, 0x2, 0x2, 0x205, 0x206, 0x7, 0x1d, 0x2, 
    0x2, 0x206, 0x208, 0x7, 0x4, 0x2, 0x2, 0x207, 0x209, 0xa, 0x4, 0x2, 
    0x2, 0x208, 0x207, 0x3, 0x2, 0x2, 0x2, 0x209, 0x20a, 0x3, 0x2, 0x2, 
    0x2, 0x20a, 0x208, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20b, 0x3, 0x2, 0x2, 
    0x2, 0x20b, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x20c, 0x20d, 0x7, 0x1d, 0x2, 
    0x2, 0x20d, 0x20f, 0x7, 0x3, 0x2, 0x2, 0x20e, 0x210, 0xa, 0x4, 0x2, 
    0x2, 0x20f, 0x20e, 0x3, 0x2, 0x2, 0x2, 0x210, 0x211, 0x3, 0x2, 0x2, 
    0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x211, 0x212, 0x3, 0x2, 0x2, 
    0x2, 0x212, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x213, 0x214, 0x5, 0x9e, 0x50, 
    0x2, 0x214, 0x215, 0x8, 0x30, 0x1, 0x2, 0x215, 0x21d, 0x3, 0x2, 0x2, 
    0x2, 0x216, 0x217, 0x5, 0xa0, 0x51, 0x2, 0x217, 0x218, 0x8, 0x30, 0x1, 
    0x2, 0x218, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21a, 0x5, 0xa2, 0x52, 
    0x2, 0x21a, 0x21b, 0x8, 0x30, 0x1, 0x2, 0x21b, 0x21d, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x213, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x216, 0x3, 0x2, 0x2, 
    0x2, 0x21c, 0x219, 0x3, 0x2, 0x2, 0x2, 0x21d, 0x5f, 0x3, 0x2, 0x2, 0x2, 
    0x21e, 0x21f, 0x7, 0x1d, 0x2, 0x2, 0x21f, 0x221, 0x7, 0x4, 0x2, 0x2, 
    0x220, 0x222, 0xa, 0x4, 0x2, 0x2, 0x221, 0x220, 0x3, 0x2, 0x2, 0x2, 
    0x222, 0x223, 0x3, 0x2, 0x2, 0x2, 0x223, 0x221, 0x3, 0x2, 0x2, 0x2, 
    0x223, 0x224, 0x3, 0x2, 0x2, 0x2, 0x224, 0x61, 0x3, 0x2, 0x2, 0x2, 0x225, 
    0x226, 0x7, 0x1d, 0x2, 0x2, 0x226, 0x228, 0x7, 0x4, 0x2, 0x2, 0x227, 
    0x229, 0xa, 0x4, 0x2, 0x2, 0x228, 0x227, 0x3, 0x2, 0x2, 0x2, 0x229, 
    0x22a, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x228, 0x3, 0x2, 0x2, 0x2, 0x22a, 
    0x22b, 0x3, 0x2, 0x2, 0x2, 0x22b, 0x63, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 
    0x7, 0x1d, 0x2, 0x2, 0x22d, 0x22f, 0x7, 0x3, 0x2, 0x2, 0x22e, 0x230, 
    0xa, 0x4, 0x2, 0x2, 0x22f, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x230, 0x231, 
    0x3, 0x2, 0x2, 0x2, 0x231, 0x22f, 0x3, 0x2, 0x2, 0x2, 0x231, 0x232, 
    0x3, 0x2, 0x2, 0x2, 0x232, 0x65, 0x3, 0x2, 0x2, 0x2, 0x233, 0x234, 0x5, 
    0xa4, 0x53, 0x2, 0x234, 0x235, 0x8, 0x34, 0x1, 0x2, 0x235, 0x67, 0x3, 
    0x2, 0x2, 0x2, 0x236, 0x237, 0x7, 0x1d, 0x2, 0x2, 0x237, 0x239, 0x7, 
    0x3, 0x2, 0x2, 0x238, 0x23a, 0xa, 0x4, 0x2, 0x2, 0x239, 0x238, 0x3, 
    0x2, 0x2, 0x2, 0x23a, 0x23b, 0x3, 0x2, 0x2, 0x2, 0x23b, 0x239, 0x3, 
    0x2, 0x2, 0x2, 0x23b, 0x23c, 0x3, 0x2, 0x2, 0x2, 0x23c, 0x69, 0x3, 0x2, 
    0x2, 0x2, 0x23d, 0x23e, 0x5, 0xa6, 0x54, 0x2, 0x23e, 0x23f, 0x8, 0x36, 
    0x1, 0x2, 0x23f, 0x247, 0x3, 0x2, 0x2, 0x2, 0x240, 0x241, 0x5, 0xa8, 
    0x55, 0x2, 0x241, 0x242, 0x8, 0x36, 0x1, 0x2, 0x242, 0x247, 0x3, 0x2, 
    0x2, 0x2, 0x243, 0x244, 0x5, 0xaa, 0x56, 0x2, 0x244, 0x245, 0x8, 0x36, 
    0x1, 0x2, 0x245, 0x247, 0x3, 0x2, 0x2, 0x2, 0x246, 0x23d, 0x3, 0x2, 
    0x2, 0x2, 0x246, 0x240, 0x3, 0x2, 0x2, 0x2, 0x246, 0x243, 0x3, 0x2, 
    0x2, 0x2, 0x247, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 0x5, 0xac, 
    0x57, 0x2, 0x249, 0x24a, 0x8, 0x37, 0x1, 0x2, 0x24a, 0x6d, 0x3, 0x2, 
    0x2, 0x2, 0x24b, 0x24c, 0x5, 0xae, 0x58, 0x2, 0x24c, 0x24d, 0x8, 0x38, 
    0x1, 0x2, 0x24d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x24e, 0x24f, 0x7, 0x1d, 
    0x2, 0x2, 0x24f, 0x251, 0x7, 0x4, 0x2, 0x2, 0x250, 0x252, 0xa, 0x4, 
    0x2, 0x2, 0x251, 0x250, 0x3, 0x2, 0x2, 0x2, 0x252, 0x253, 0x3, 0x2, 
    0x2, 0x2, 0x253, 0x251, 0x3, 0x2, 0x2, 0x2, 0x253, 0x254, 0x3, 0x2, 
    0x2, 0x2, 0x254, 0x71, 0x3, 0x2, 0x2, 0x2, 0x255, 0x256, 0x7, 0x1d, 
    0x2, 0x2, 0x256, 0x258, 0x7, 0x4, 0x2, 0x2, 0x257, 0x259, 0xa, 0x4, 
    0x2, 0x2, 0x258, 0x257, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25a, 0x3, 0x2, 
    0x2, 0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25a, 0x25b, 0x3, 0x2, 
    0x2, 0x2, 0x25b, 0x73, 0x3, 0x2, 0x2, 0x2, 0x25c, 0x25d, 0x7, 0x1d, 
    0x2, 0x2, 0x25d, 0x25f, 0x7, 0x5, 0x2, 0x2, 0x25e, 0x260, 0xa, 0x4, 
    0x2, 0x2, 0x25f, 0x25e, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 0x3, 0x2, 
    0x2, 0x2, 0x261, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x261, 0x262, 0x3, 0x2, 
    0x2, 0x2, 0x262, 0x75, 0x3, 0x2, 0x2, 0x2, 0x263, 0x264, 0x7, 0x1d, 
    0x2, 0x2, 0x264, 0x266, 0x7, 0x6, 0x2, 0x2, 0x265, 0x267, 0xa, 0x4, 
    0x2, 0x2, 0x266, 0x265, 0x3, 0x2, 0x2, 0x2, 0x267, 0x268, 0x3, 0x2, 
    0x2, 0x2, 0x268, 0x266, 0x3, 0x2, 0x2, 0x2, 0x268, 0x269, 0x3, 0x2, 
    0x2, 0x2, 0x269, 0x77, 0x3, 0x2, 0x2, 0x2, 0x26a, 0x26b, 0x7, 0x1d, 
    0x2, 0x2, 0x26b, 0x26d, 0x7, 0x7, 0x2, 0x2, 0x26c, 0x26e, 0xa, 0x4, 
    0x2, 0x2, 0x26d, 0x26c, 0x3, 0x2, 0x2, 0x2, 0x26e, 0x26f, 0x3, 0x2, 
    0x2, 0x2, 0x26f, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x26f, 0x270, 0x3, 0x2, 
    0x2, 0x2, 0x270, 0x79, 0x3, 0x2, 0x2, 0x2, 0x271, 0x272, 0x7, 0x1d, 
    0x2, 0x2, 0x272, 0x274, 0x7, 0x8, 0x2, 0x2, 0x273, 0x275, 0xa, 0x4, 
    0x2, 0x2, 0x274, 0x273, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 0x3, 0x2, 
    0x2, 0x2, 0x276, 0x274, 0x3, 0x2, 0x2, 0x2, 0x276, 0x277, 0x3, 0x2, 
    0x2, 0x2, 0x277, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x278, 0x279, 0x7, 0x1d, 
    0x2, 0x2, 0x279, 0x27b, 0x7, 0x9, 0x2, 0x2, 0x27a, 0x27c, 0xa, 0x4, 
    0x2, 0x2, 0x27b, 0x27a, 0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x3, 0x2, 
    0x2, 0x2, 0x27d, 0x27b, 0x3, 0x2, 0x2, 0x2, 0x27d, 0x27e, 0x3, 0x2, 
    0x2, 0x2, 0x27e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x27f, 0x280, 0x7, 0x1d, 
    0x2, 0x2, 0x280, 0x282, 0x7, 0xa, 0x2, 0x2, 0x281, 0x283, 0xa, 0x4, 
    0x2, 0x2, 0x282, 0x281, 0x3, 0x2, 0x2, 0x2, 0x283, 0x284, 0x3, 0x2, 
    0x2, 0x2, 0x284, 0x282, 0x3, 0x2, 0x2, 0x2, 0x284, 0x285, 0x3, 0x2, 
    0x2, 0x2, 0x285, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x286, 0x287, 0x7, 0x1d, 
    0x2, 0x2, 0x287, 0x289, 0x7, 0x5, 0x2, 0x2, 0x288, 0x28a, 0xa, 0x4, 
    0x2, 0x2, 0x289, 0x288, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28b, 0x3, 0x2, 
    0x2, 0x2, 0x28b, 0x289, 0x3, 0x2, 0x2, 0x2, 0x28b, 0x28c, 0x3, 0x2, 
    0x2, 0x2, 0x28c, 0x81, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 0x7, 0x1d, 
    0x2, 0x2, 0x28e, 0x290, 0x7, 0x5, 0x2, 0x2, 0x28f, 0x291, 0xa, 0x4, 
    0x2, 0x2, 0x290, 0x28f, 0x3, 0x2, 0x2, 0x2, 0x291, 0x292, 0x3, 0x2, 
    0x2, 0x2, 0x292, 0x290, 0x3, 0x2, 0x2, 0x2, 0x292, 0x293, 0x3, 0x2, 
    0x2, 0x2, 0x293, 0x83, 0x3, 0x2, 0x2, 0x2, 0x294, 0x295, 0x7, 0x1d, 
    0x2, 0x2, 0x295, 0x297, 0x7, 0x7, 0x2, 0x2, 0x296, 0x298, 0xa, 0x4, 
    0x2, 0x2, 0x297, 0x296, 0x3, 0x2, 0x2, 0x2, 0x298, 0x299, 0x3, 0x2, 
    0x2, 0x2, 0x299, 0x297, 0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x3, 0x2, 
    0x2, 0x2, 0x29a, 0x85, 0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x7, 0x1d, 
    0x2, 0x2, 0x29c, 0x29e, 0x7, 0xb, 0x2, 0x2, 0x29d, 0x29f, 0xa, 0x4, 
    0x2, 0x2, 0x29e, 0x29d, 0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x3, 0x2, 
    0x2, 0x2, 0x2a0, 0x29e, 0x3, 0x2, 0x2, 0x2, 0x2a0, 0x2a1, 0x3, 0x2, 
    0x2, 0x2, 0x2a1, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2a2, 0x2a3, 0x7, 0x1d, 
    0x2, 0x2, 0x2a3, 0x2a5, 0x7, 0xc, 0x2, 0x2, 0x2a4, 0x2a6, 0xa, 0x4, 
    0x2, 0x2, 0x2a5, 0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a6, 0x2a7, 0x3, 0x2, 
    0x2, 0x2, 0x2a7, 0x2a5, 0x3, 0x2, 0x2, 0x2, 0x2a7, 0x2a8, 0x3, 0x2, 
    0x2, 0x2, 0x2a8, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2aa, 0x7, 0x1d, 
    0x2, 0x2, 0x2aa, 0x2ac, 0x7, 0xd, 0x2, 0x2, 0x2ab, 0x2ad, 0xa, 0x4, 
    0x2, 0x2, 0x2ac, 0x2ab, 0x3, 0x2, 0x2, 0x2, 0x2ad, 0x2ae, 0x3, 0x2, 
    0x2, 0x2, 0x2ae, 0x2ac, 0x3, 0x2, 0x2, 0x2, 0x2ae, 0x2af, 0x3, 0x2, 
    0x2, 0x2, 0x2af, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x2b1, 0x7, 0x1d, 
    0x2, 0x2, 0x2b1, 0x2b3, 0x7, 0x8, 0x2, 0x2, 0x2b2, 0x2b4, 0xa, 0x4, 
    0x2, 0x2, 0x2b3, 0x2b2, 0x3, 0x2, 0x2, 0x2, 0x2b4, 0x2b5, 0x3, 0x2, 
    0x2, 0x2, 0x2b5, 0x2b3, 0x3, 0x2, 0x2, 0x2, 0x2b5, 0x2b6, 0x3, 0x2, 
    0x2, 0x2, 0x2b6, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x2b7, 0x2b8, 0x7, 0x1d, 
    0x2, 0x2, 0x2b8, 0x2ba, 0x7, 0xe, 0x2, 0x2, 0x2b9, 0x2bb, 0xa, 0x4, 
    0x2, 0x2, 0x2ba, 0x2b9, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x2bc, 0x3, 0x2, 
    0x2, 0x2, 0x2bc, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bc, 0x2bd, 0x3, 0x2, 
    0x2, 0x2, 0x2bd, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x2be, 0x2bf, 0x7, 0x1d, 
    0x2, 0x2, 0x2bf, 0x2c1, 0x7, 0xf, 0x2, 0x2, 0x2c0, 0x2c2, 0xa, 0x4, 
    0x2, 0x2, 0x2c1, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c2, 0x2c3, 0x3, 0x2, 
    0x2, 0x2, 0x2c3, 0x2c1, 0x3, 0x2, 0x2, 0x2, 0x2c3, 0x2c4, 0x3, 0x2, 
    0x2, 0x2, 0x2c4, 0x91, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c6, 0x7, 0x1d, 
    0x2, 0x2, 0x2c6, 0x2c8, 0x7, 0x10, 0x2, 0x2, 0x2c7, 0x2c9, 0xa, 0x4, 
    0x2, 0x2, 0x2c8, 0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c9, 0x2ca, 0x3, 0x2, 
    0x2, 0x2, 0x2ca, 0x2c8, 0x3, 0x2, 0x2, 0x2, 0x2ca, 0x2cb, 0x3, 0x2, 
    0x2, 0x2, 0x2cb, 0x93, 0x3, 0x2, 0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x1d, 
    0x2, 0x2, 0x2cd, 0x2cf, 0x7, 0x11, 0x2, 0x2, 0x2ce, 0x2d0, 0xa, 0x4, 
    0x2, 0x2, 0x2cf, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2d1, 0x3, 0x2, 
    0x2, 0x2, 0x2d1, 0x2cf, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x2d2, 0x3, 0x2, 
    0x2, 0x2, 0x2d2, 0x95, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x7, 0x1d, 
    0x2, 0x2, 0x2d4, 0x2d6, 0x7, 0xf, 0x2, 0x2, 0x2d5, 0x2d7, 0xa, 0x4, 
    0x2, 0x2, 0x2d6, 0x2d5, 0x3, 0x2, 0x2, 0x2, 0x2d7, 0x2d8, 0x3, 0x2, 
    0x2, 0x2, 0x2d8, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2d8, 0x2d9, 0x3, 0x2, 
    0x2, 0x2, 0x2d9, 0x97, 0x3, 0x2, 0x2, 0x2, 0x2da, 0x2db, 0x7, 0x1d, 
    0x2, 0x2, 0x2db, 0x2dd, 0x7, 0x10, 0x2, 0x2, 0x2dc, 0x2de, 0xa, 0x4, 
    0x2, 0x2, 0x2dd, 0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x3, 0x2, 
    0x2, 0x2, 0x2df, 0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2df, 0x2e0, 0x3, 0x2, 
    0x2, 0x2, 0x2e0, 0x99, 0x3, 0x2, 0x2, 0x2, 0x2e1, 0x2e2, 0x7, 0x1d, 
    0x2, 0x2, 0x2e2, 0x2e4, 0x7, 0x11, 0x2, 0x2, 0x2e3, 0x2e5, 0xa, 0x4, 
    0x2, 0x2, 0x2e4, 0x2e3, 0x3, 0x2, 0x2, 0x2, 0x2e5, 0x2e6, 0x3, 0x2, 
    0x2, 0x2, 0x2e6, 0x2e4, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e7, 0x3, 0x2, 
    0x2, 0x2, 0x2e7, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x2e8, 0x2e9, 0x7, 0x1d, 
    0x2, 0x2, 0x2e9, 0x2eb, 0x7, 0x12, 0x2, 0x2, 0x2ea, 0x2ec, 0xa, 0x4, 
    0x2, 0x2, 0x2eb, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x2ec, 0x2ed, 0x3, 0x2, 
    0x2, 0x2, 0x2ed, 0x2eb, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0x3, 0x2, 
    0x2, 0x2, 0x2ee, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x2ef, 0x2f0, 0x7, 0x1d, 
    0x2, 0x2, 0x2f0, 0x2f2, 0x7, 0xf, 0x2, 0x2, 0x2f1, 0x2f3, 0xa, 0x4, 
    0x2, 0x2, 0x2f2, 0x2f1, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f4, 0x3, 0x2, 
    0x2, 0x2, 0x2f4, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x2f5, 0x3, 0x2, 
    0x2, 0x2, 0x2f5, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x7, 0x1d, 
    0x2, 0x2, 0x2f7, 0x2f9, 0x7, 0x10, 0x2, 0x2, 0x2f8, 0x2fa, 0xa, 0x4, 
    0x2, 0x2, 0x2f9, 0x2f8, 0x3, 0x2, 0x2, 0x2, 0x2fa, 0x2fb, 0x3, 0x2, 
    0x2, 0x2, 0x2fb, 0x2f9, 0x3, 0x2, 0x2, 0x2, 0x2fb, 0x2fc, 0x3, 0x2, 
    0x2, 0x2, 0x2fc, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x2fd, 0x2fe, 0x7, 0x1d, 
    0x2, 0x2, 0x2fe, 0x300, 0x7, 0x11, 0x2, 0x2, 0x2ff, 0x301, 0xa, 0x4, 
    0x2, 0x2, 0x300, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x3, 0x2, 
    0x2, 0x2, 0x302, 0x300, 0x3, 0x2, 0x2, 0x2, 0x302, 0x303, 0x3, 0x2, 
    0x2, 0x2, 0x303, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x304, 0x305, 0x7, 0x1d, 
    0x2, 0x2, 0x305, 0x307, 0x7, 0x7, 0x2, 0x2, 0x306, 0x308, 0xa, 0x4, 
    0x2, 0x2, 0x307, 0x306, 0x3, 0x2, 0x2, 0x2, 0x308, 0x309, 0x3, 0x2, 
    0x2, 0x2, 0x309, 0x307, 0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 
    0x2, 0x2, 0x30a, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x30b, 0x30c, 0x7, 0x1d, 
    0x2, 0x2, 0x30c, 0x30e, 0x7, 0xf, 0x2, 0x2, 0x30d, 0x30f, 0xa, 0x4, 
    0x2, 0x2, 0x30e, 0x30d, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x310, 0x3, 0x2, 
    0x2, 0x2, 0x310, 0x30e, 0x3, 0x2, 0x2, 0x2, 0x310, 0x311, 0x3, 0x2, 
    0x2, 0x2, 0x311, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x312, 0x313, 0x7, 0x1d, 
    0x2, 0x2, 0x313, 0x315, 0x7, 0x10, 0x2, 0x2, 0x314, 0x316, 0xa, 0x4, 
    0x2, 0x2, 0x315, 0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 0x317, 0x3, 0x2, 
    0x2, 0x2, 0x317, 0x315, 0x3, 0x2, 0x2, 0x2, 0x317, 0x318, 0x3, 0x2, 
    0x2, 0x2, 0x318, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x319, 0x31a, 0x7, 0x1d, 
    0x2, 0x2, 0x31a, 0x31c, 0x7, 0x11, 0x2, 0x2, 0x31b, 0x31d, 0xa, 0x4, 
    0x2, 0x2, 0x31c, 0x31b, 0x3, 0x2, 0x2, 0x2, 0x31d, 0x31e, 0x3, 0x2, 
    0x2, 0x2, 0x31e, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x31e, 0x31f, 0x3, 0x2, 
    0x2, 0x2, 0x31f, 0xab, 0x3, 0x2, 0x2, 0x2, 0x320, 0x321, 0x7, 0x1d, 
    0x2, 0x2, 0x321, 0x323, 0x7, 0x12, 0x2, 0x2, 0x322, 0x324, 0xa, 0x4, 
    0x2, 0x2, 0x323, 0x322, 0x3, 0x2, 0x2, 0x2, 0x324, 0x325, 0x3, 0x2, 
    0x2, 0x2, 0x325, 0x323, 0x3, 0x2, 0x2, 0x2, 0x325, 0x326, 0x3, 0x2, 
    0x2, 0x2, 0x326, 0xad, 0x3, 0x2, 0x2, 0x2, 0x327, 0x328, 0x7, 0x1d, 
    0x2, 0x2, 0x328, 0x32a, 0x7, 0x13, 0x2, 0x2, 0x329, 0x32b, 0xa, 0x4, 
    0x2, 0x2, 0x32a, 0x329, 0x3, 0x2, 0x2, 0x2, 0x32b, 0x32c, 0x3, 0x2, 
    0x2, 0x2, 0x32c, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x32c, 0x32d, 0x3, 0x2, 
    0x2, 0x2, 0x32d, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x4e, 0xb3, 0xb7, 0xc2, 0xcb, 
    0xd8, 0xe3, 0xe8, 0xf0, 0xf9, 0x101, 0x107, 0x10e, 0x118, 0x127, 0x12d, 
    0x133, 0x139, 0x13d, 0x145, 0x155, 0x162, 0x16f, 0x17a, 0x17e, 0x182, 
    0x18d, 0x1a0, 0x1a8, 0x1b2, 0x1b9, 0x1c0, 0x1dc, 0x1e7, 0x1ee, 0x1f5, 
    0x200, 0x20a, 0x211, 0x21c, 0x223, 0x22a, 0x231, 0x23b, 0x246, 0x253, 
    0x25a, 0x261, 0x268, 0x26f, 0x276, 0x27d, 0x284, 0x28b, 0x292, 0x299, 
    0x2a0, 0x2a7, 0x2ae, 0x2b5, 0x2bc, 0x2c3, 0x2ca, 0x2d1, 0x2d8, 0x2df, 
    0x2e6, 0x2ed, 0x2f4, 0x2fb, 0x302, 0x309, 0x310, 0x317, 0x31e, 0x325, 
    0x32c, 
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
