
#include "../proto/SwiftMtMessageDefinition.pb.h"
#include <vector>
#include <string>
#include "BaseErrorListener.h"
#include "SwiftMtComponentFormatLexer.h"


// Generated from C:/programming/message-converter-c/message/generation/swift-mt-definition/format/SwiftMtComponentFormat.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"


namespace message::definition::swift::mt {


class  SwiftMtComponentFormatParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, IDENTIFIER = 5, CHARSET_NUMERIC = 6, 
    CHARSET_ALPHA = 7, CHARSET_ALPHA_NUMERIC = 8, CHARSET_HEX = 9, CHARSET_X = 10, 
    CHARSET_Y = 11, CHARSET_Z = 12, CHARSET_DECIMALS = 13, CHARSET_BLANK = 14, 
    DIGIT = 15, UPPERCASE_CHAR = 16, LBRACKET = 17, RBRACKET = 18, ANY = 19
  };

  enum {
    RuleField_format = 0, RuleComp_format = 1, RuleOptional_component = 2, 
    RuleOpt_comp_cttnt = 3, RuleComponent = 4, RuleSeparator = 5, RuleLength_restricted = 6, 
    RuleSign = 7, RuleConstant = 8, RuleCharset_type = 9, RuleLength_restriction = 10, 
    RuleExact_restriction = 11, RuleRange_restriction = 12, RuleLine_restriction = 13, 
    RuleMax_restriction = 14, RuleMax_two_digit = 15
  };

  SwiftMtComponentFormatParser(antlr4::TokenStream *input);
  ~SwiftMtComponentFormatParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  private:
      std::vector<std::string> _errors;
      std::vector<ComponentFormat> _components;
      ComponentFormat _current_component;

  public:
      [[nodiscard]] const std::vector<std::string>& errors() const { return _errors; }

  private:
      class DefaultErrorListener : public antlr4::BaseErrorListener {
      private:
          std::vector<std::string>& _errors;

      public:
          explicit DefaultErrorListener(std::vector<std::string>& errors) : _errors(errors) { }

          void syntaxError(Recognizer *recognizer, antlr4::Token * offendingSymbol, size_t line, size_t charPositionInLine,
                                 const std::string &msg, std::exception_ptr e) override {
              _errors.push_back(msg);
          }
      };

      DefaultErrorListener _error_listener { _errors };

      bool parse_format(std::vector<ComponentFormat>& components, std::vector<std::string>& errors) {
          _errors.clear();
          removeErrorListeners();
          addErrorListener(&_error_listener);

          _components.clear();

          field_format();

          if(!_errors.empty()) {
              errors.insert(errors.end(), _errors.begin(), _errors.end());
              return false;
          }

          components.insert(components.end(), _components.begin(), _components.end());
          return true;
      }

      void new_component() {
          _current_component = ComponentFormat{};
      }

      uint32_t to_unsigned_int(const std::string& text) {
          return std::stoul(text);
      }

  public:

      static bool parse(const std::string& format, std::vector<ComponentFormat>& components, std::vector<std::string>& errors) {
          antlr4::ANTLRInputStream stream{format};
          SwiftMtComponentFormatLexer lexer{&stream};
          antlr4::CommonTokenStream token_stream{&lexer};

          SwiftMtComponentFormatParser parser{&token_stream};
          return parser.parse_format(components, errors);
      }


  class Field_formatContext;
  class Comp_formatContext;
  class Optional_componentContext;
  class Opt_comp_cttntContext;
  class ComponentContext;
  class SeparatorContext;
  class Length_restrictedContext;
  class SignContext;
  class ConstantContext;
  class Charset_typeContext;
  class Length_restrictionContext;
  class Exact_restrictionContext;
  class Range_restrictionContext;
  class Line_restrictionContext;
  class Max_restrictionContext;
  class Max_two_digitContext; 

  class  Field_formatContext : public antlr4::ParserRuleContext {
  public:
    Field_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<Comp_formatContext *> comp_format();
    Comp_formatContext* comp_format(size_t i);
    std::vector<SeparatorContext *> separator();
    SeparatorContext* separator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Field_formatContext* field_format();

  class  Comp_formatContext : public antlr4::ParserRuleContext {
  public:
    Comp_formatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ComponentContext *component();
    Optional_componentContext *optional_component();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Comp_formatContext* comp_format();

  class  Optional_componentContext : public antlr4::ParserRuleContext {
  public:
    SwiftMtComponentFormatParser::Opt_comp_cttntContext *cntt = nullptr;;
    Optional_componentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACKET();
    antlr4::tree::TerminalNode *RBRACKET();
    Opt_comp_cttntContext *opt_comp_cttnt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Optional_componentContext* optional_component();

  class  Opt_comp_cttntContext : public antlr4::ParserRuleContext {
  public:
    SwiftMtComponentFormatParser::SeparatorContext *sep_before = nullptr;;
    SwiftMtComponentFormatParser::SeparatorContext *sep_after = nullptr;;
    Opt_comp_cttntContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Length_restrictedContext *> length_restricted();
    Length_restrictedContext* length_restricted(size_t i);
    std::vector<SignContext *> sign();
    SignContext* sign(size_t i);
    std::vector<ConstantContext *> constant();
    ConstantContext* constant(size_t i);
    std::vector<Comp_formatContext *> comp_format();
    Comp_formatContext* comp_format(size_t i);
    std::vector<SeparatorContext *> separator();
    SeparatorContext* separator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Opt_comp_cttntContext* opt_comp_cttnt();

  class  ComponentContext : public antlr4::ParserRuleContext {
  public:
    ComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Length_restrictedContext *length_restricted();
    ConstantContext *constant();
    std::vector<SeparatorContext *> separator();
    SeparatorContext* separator(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ComponentContext* component();

  class  SeparatorContext : public antlr4::ParserRuleContext {
  public:
    SeparatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ANY();
    antlr4::tree::TerminalNode* ANY(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SeparatorContext* separator();

  class  Length_restrictedContext : public antlr4::ParserRuleContext {
  public:
    Length_restrictedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Length_restrictionContext *length_restriction();
    Charset_typeContext *charset_type();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Length_restrictedContext* length_restricted();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SignContext* sign();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ConstantContext* constant();

  class  Charset_typeContext : public antlr4::ParserRuleContext {
  public:
    Charset_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CHARSET_NUMERIC();
    antlr4::tree::TerminalNode *CHARSET_ALPHA();
    antlr4::tree::TerminalNode *CHARSET_ALPHA_NUMERIC();
    antlr4::tree::TerminalNode *CHARSET_HEX();
    antlr4::tree::TerminalNode *CHARSET_X();
    antlr4::tree::TerminalNode *CHARSET_Y();
    antlr4::tree::TerminalNode *CHARSET_Z();
    antlr4::tree::TerminalNode *CHARSET_DECIMALS();
    antlr4::tree::TerminalNode *CHARSET_BLANK();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Charset_typeContext* charset_type();

  class  Length_restrictionContext : public antlr4::ParserRuleContext {
  public:
    Length_restrictionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Exact_restrictionContext *exact_restriction();
    Range_restrictionContext *range_restriction();
    Line_restrictionContext *line_restriction();
    Max_restrictionContext *max_restriction();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Length_restrictionContext* length_restriction();

  class  Exact_restrictionContext : public antlr4::ParserRuleContext {
  public:
    Exact_restrictionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Max_two_digitContext *max_two_digit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Exact_restrictionContext* exact_restriction();

  class  Range_restrictionContext : public antlr4::ParserRuleContext {
  public:
    SwiftMtComponentFormatParser::Max_two_digitContext *range_min = nullptr;;
    SwiftMtComponentFormatParser::Max_two_digitContext *range_max = nullptr;;
    Range_restrictionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Max_two_digitContext *> max_two_digit();
    Max_two_digitContext* max_two_digit(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Range_restrictionContext* range_restriction();

  class  Line_restrictionContext : public antlr4::ParserRuleContext {
  public:
    SwiftMtComponentFormatParser::Max_two_digitContext *num_lines = nullptr;;
    SwiftMtComponentFormatParser::Max_two_digitContext *line_size = nullptr;;
    Line_restrictionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Max_two_digitContext *> max_two_digit();
    Max_two_digitContext* max_two_digit(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Line_restrictionContext* line_restriction();

  class  Max_restrictionContext : public antlr4::ParserRuleContext {
  public:
    Max_restrictionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Max_two_digitContext *max_two_digit();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Max_restrictionContext* max_restriction();

  class  Max_two_digitContext : public antlr4::ParserRuleContext {
  public:
    Max_two_digitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> DIGIT();
    antlr4::tree::TerminalNode* DIGIT(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Max_two_digitContext* max_two_digit();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

}  // namespace message::definition::swift::mt
