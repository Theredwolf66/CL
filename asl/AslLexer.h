
// Generated from Asl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  AslLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
<<<<<<< HEAD
    ASSIGN = 8, EQUAL = 9, DIF = 10, BT = 11, BE = 12, LE = 13, LT = 14, 
    PLUS = 15, MUL = 16, RES = 17, DIV = 18, VAR = 19, INT = 20, FLOAT = 21, 
    BOOL = 22, CHAR = 23, ARRAY = 24, NOT = 25, AND = 26, OR = 27, IF = 28, 
    THEN = 29, ELSE = 30, ENDIF = 31, FUNC = 32, ENDFUNC = 33, READ = 34, 
    WRITE = 35, BOOLVAL = 36, ID = 37, COMA = 38, INTVAL = 39, FLOATVAL = 40, 
    CHARVAL = 41, STRING = 42, COMMENT = 43, WS = 44
=======
    ASSIGN = 8, EQUAL = 9, PLUS = 10, MUL = 11, RES = 12, DIV = 13, VAR = 14, 
    INT = 15, FLOAT = 16, BOOL = 17, CHAR = 18, ARRAY = 19, NOT = 20, AND = 21, 
    OR = 22, IF = 23, THEN = 24, ELSE = 25, ENDIF = 26, FUNC = 27, ENDFUNC = 28, 
    READ = 29, WRITE = 30, RETURN = 31, BOOLVAL = 32, ID = 33, COMA = 34, 
    INTVAL = 35, FLOATVAL = 36, CHARVAL = 37, STRING = 38, COMMENT = 39, 
    WS = 40
>>>>>>> 5ef9b1c6180520cf22008cf7ba63b1246125c1da
  };

  AslLexer(antlr4::CharStream *input);
  ~AslLexer();

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

