
#include "../proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-definition/format/SwiftMtComponentFormat.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt {


class  SwiftMtComponentFormatLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, IDENTIFIER = 5, CHARSET_NUMERIC = 6, 
    CHARSET_ALPHA = 7, CHARSET_ALPHA_NUMERIC = 8, CHARSET_HEX = 9, CHARSET_X = 10, 
    CHARSET_Y = 11, CHARSET_Z = 12, CHARSET_DECIMALS = 13, CHARSET_BLANK = 14, 
    DIGIT = 15, UPPERCASE_CHAR = 16, LBRACKET = 17, RBRACKET = 18, ANY = 19
  };

  SwiftMtComponentFormatLexer(antlr4::CharStream *input);
  ~SwiftMtComponentFormatLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace message::definition::swift::mt
