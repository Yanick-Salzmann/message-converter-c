
#include "repository/ISwiftMtParser.h"
#include "SwiftMtMessage.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-generation/repository/SR2018/grammars/SwiftMtParser_MT721.g4 by ANTLR 4.7.2


#include "SwiftMtParser_MT721Lexer.h"


using namespace antlr4;

using namespace message::definition::swift::mt::parsers::sr2018;

SwiftMtParser_MT721Lexer::SwiftMtParser_MT721Lexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SwiftMtParser_MT721Lexer::~SwiftMtParser_MT721Lexer() {
  delete _interpreter;
}

std::string SwiftMtParser_MT721Lexer::getGrammarFileName() const {
  return "SwiftMtParser_MT721.g4";
}

const std::vector<std::string>& SwiftMtParser_MT721Lexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& SwiftMtParser_MT721Lexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& SwiftMtParser_MT721Lexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& SwiftMtParser_MT721Lexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& SwiftMtParser_MT721Lexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> SwiftMtParser_MT721Lexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& SwiftMtParser_MT721Lexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> SwiftMtParser_MT721Lexer::_decisionToDFA;
atn::PredictionContextCache SwiftMtParser_MT721Lexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SwiftMtParser_MT721Lexer::_atn;
std::vector<uint16_t> SwiftMtParser_MT721Lexer::_serializedATN;

std::vector<std::string> SwiftMtParser_MT721Lexer::_ruleNames = {
  u8"TAG_BH", u8"TAG_AH", u8"TAG_UH", u8"TAG_MT", u8"TAG_TR", u8"MT_END", 
  u8"LBRACE", u8"RBRACE", u8"COLON", u8"START_OF_FIELD", u8"ANY"
};

std::vector<std::string> SwiftMtParser_MT721Lexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> SwiftMtParser_MT721Lexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> SwiftMtParser_MT721Lexer::_literalNames = {
  "", u8"'{1:'", u8"'{2:'", u8"'{3:'", u8"'{4:'", u8"'{5:'", u8"'-}'", u8"'{'", 
  u8"'}'", u8"':'"
};

std::vector<std::string> SwiftMtParser_MT721Lexer::_symbolicNames = {
  "", u8"TAG_BH", u8"TAG_AH", u8"TAG_UH", u8"TAG_MT", u8"TAG_TR", u8"MT_END", 
  u8"LBRACE", u8"RBRACE", u8"COLON", u8"START_OF_FIELD", u8"ANY"
};

dfa::Vocabulary SwiftMtParser_MT721Lexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SwiftMtParser_MT721Lexer::_tokenNames;

SwiftMtParser_MT721Lexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0xd, 0x3e, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x5, 0xb, 0x38, 
    0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x2, 0x2, 
    0xd, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 
    0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x17, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x3, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x5, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x7, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xb, 0x29, 0x3, 0x2, 0x2, 0x2, 
    0xd, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xf, 0x30, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x13, 0x34, 0x3, 0x2, 0x2, 0x2, 0x15, 0x37, 
    0x3, 0x2, 0x2, 0x2, 0x17, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 
    0x7d, 0x2, 0x2, 0x1a, 0x1b, 0x7, 0x33, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x3c, 
    0x2, 0x2, 0x1c, 0x4, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x7d, 0x2, 
    0x2, 0x1e, 0x1f, 0x7, 0x34, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x3c, 0x2, 0x2, 
    0x20, 0x6, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x7d, 0x2, 0x2, 0x22, 
    0x23, 0x7, 0x35, 0x2, 0x2, 0x23, 0x24, 0x7, 0x3c, 0x2, 0x2, 0x24, 0x8, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x7d, 0x2, 0x2, 0x26, 0x27, 0x7, 
    0x36, 0x2, 0x2, 0x27, 0x28, 0x7, 0x3c, 0x2, 0x2, 0x28, 0xa, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x2a, 0x7, 0x7d, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x37, 0x2, 
    0x2, 0x2b, 0x2c, 0x7, 0x3c, 0x2, 0x2, 0x2c, 0xc, 0x3, 0x2, 0x2, 0x2, 
    0x2d, 0x2e, 0x7, 0x2f, 0x2, 0x2, 0x2e, 0x2f, 0x7, 0x7f, 0x2, 0x2, 0x2f, 
    0xe, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0x7d, 0x2, 0x2, 0x31, 0x10, 
    0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x7, 0x7f, 0x2, 0x2, 0x33, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x3c, 0x2, 0x2, 0x35, 0x14, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x38, 0x7, 0xf, 0x2, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x39, 0x3a, 0x7, 0xc, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x3c, 0x2, 0x2, 0x3b, 
    0x16, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0xb, 0x2, 0x2, 0x2, 0x3d, 0x18, 
    0x3, 0x2, 0x2, 0x2, 0x4, 0x2, 0x37, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SwiftMtParser_MT721Lexer::Initializer SwiftMtParser_MT721Lexer::_init;
