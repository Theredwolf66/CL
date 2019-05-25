
// Generated from Asl.g4 by ANTLR 4.7.1


#include "AslListener.h"

#include "AslParser.h"


using namespace antlrcpp;
using namespace antlr4;

AslParser::AslParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

AslParser::~AslParser() {
  delete _interpreter;
}

std::string AslParser::getGrammarFileName() const {
  return "Asl.g4";
}

const std::vector<std::string>& AslParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& AslParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

AslParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::ProgramContext::EOF() {
  return getToken(AslParser::EOF, 0);
}

std::vector<AslParser::FunctionContext *> AslParser::ProgramContext::function() {
  return getRuleContexts<AslParser::FunctionContext>();
}

AslParser::FunctionContext* AslParser::ProgramContext::function(size_t i) {
  return getRuleContext<AslParser::FunctionContext>(i);
}


size_t AslParser::ProgramContext::getRuleIndex() const {
  return AslParser::RuleProgram;
}

void AslParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void AslParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

AslParser::ProgramContext* AslParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, AslParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(28);
      function();
      setState(31); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == AslParser::FUNC);
    setState(33);
    match(AslParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

AslParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::FunctionContext::FUNC() {
  return getToken(AslParser::FUNC, 0);
}

tree::TerminalNode* AslParser::FunctionContext::ID() {
  return getToken(AslParser::ID, 0);
}

AslParser::ParametersContext* AslParser::FunctionContext::parameters() {
  return getRuleContext<AslParser::ParametersContext>(0);
}

AslParser::DeclarationsContext* AslParser::FunctionContext::declarations() {
  return getRuleContext<AslParser::DeclarationsContext>(0);
}

AslParser::StatementsContext* AslParser::FunctionContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::FunctionContext::ENDFUNC() {
  return getToken(AslParser::ENDFUNC, 0);
}

AslParser::TypeContext* AslParser::FunctionContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}


size_t AslParser::FunctionContext::getRuleIndex() const {
  return AslParser::RuleFunction;
}

void AslParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void AslParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

AslParser::FunctionContext* AslParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 2, AslParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(35);
    match(AslParser::FUNC);
    setState(36);
    match(AslParser::ID);
    setState(37);
    match(AslParser::T__0);
    setState(38);
    parameters();
    setState(39);
    match(AslParser::T__1);
    setState(42);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AslParser::T__2) {
      setState(40);
      match(AslParser::T__2);
      setState(41);
      type();
    }
    setState(44);
    declarations();
    setState(45);
    statements();
    setState(46);
    match(AslParser::ENDFUNC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametersContext ------------------------------------------------------------------

AslParser::ParametersContext::ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::Parameter_declContext *> AslParser::ParametersContext::parameter_decl() {
  return getRuleContexts<AslParser::Parameter_declContext>();
}

AslParser::Parameter_declContext* AslParser::ParametersContext::parameter_decl(size_t i) {
  return getRuleContext<AslParser::Parameter_declContext>(i);
}


size_t AslParser::ParametersContext::getRuleIndex() const {
  return AslParser::RuleParameters;
}

void AslParser::ParametersContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameters(this);
}

void AslParser::ParametersContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameters(this);
}

AslParser::ParametersContext* AslParser::parameters() {
  ParametersContext *_localctx = _tracker.createInstance<ParametersContext>(_ctx, getState());
  enterRule(_localctx, 4, AslParser::RuleParameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == AslParser::ID) {
      setState(48);
      parameter_decl();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AslParser::COMA) {
        setState(49);
        match(AslParser::COMA);
        setState(50);
        parameter_decl();
        setState(55);
        _errHandler->sync(this);
        _la = _input->LA(1);
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

//----------------- Parameter_declContext ------------------------------------------------------------------

AslParser::Parameter_declContext::Parameter_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> AslParser::Parameter_declContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::Parameter_declContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

AslParser::TypeContext* AslParser::Parameter_declContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}

AslParser::Array_declContext* AslParser::Parameter_declContext::array_decl() {
  return getRuleContext<AslParser::Array_declContext>(0);
}

std::vector<tree::TerminalNode *> AslParser::Parameter_declContext::COMA() {
  return getTokens(AslParser::COMA);
}

tree::TerminalNode* AslParser::Parameter_declContext::COMA(size_t i) {
  return getToken(AslParser::COMA, i);
}


size_t AslParser::Parameter_declContext::getRuleIndex() const {
  return AslParser::RuleParameter_decl;
}

void AslParser::Parameter_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter_decl(this);
}

void AslParser::Parameter_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter_decl(this);
}

AslParser::Parameter_declContext* AslParser::parameter_decl() {
  Parameter_declContext *_localctx = _tracker.createInstance<Parameter_declContext>(_ctx, getState());
  enterRule(_localctx, 6, AslParser::RuleParameter_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    match(AslParser::ID);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::COMA) {
      setState(59);
      match(AslParser::COMA);
      setState(60);
      match(AslParser::ID);
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    match(AslParser::T__2);
    setState(69);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::INT:
      case AslParser::FLOAT:
      case AslParser::BOOL:
      case AslParser::CHAR: {
        setState(67);
        type();
        break;
      }

      case AslParser::ARRAY: {
        setState(68);
        array_decl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

AslParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::Variable_declContext *> AslParser::DeclarationsContext::variable_decl() {
  return getRuleContexts<AslParser::Variable_declContext>();
}

AslParser::Variable_declContext* AslParser::DeclarationsContext::variable_decl(size_t i) {
  return getRuleContext<AslParser::Variable_declContext>(i);
}


size_t AslParser::DeclarationsContext::getRuleIndex() const {
  return AslParser::RuleDeclarations;
}

void AslParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void AslParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}

AslParser::DeclarationsContext* AslParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, AslParser::RuleDeclarations);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::VAR) {
      setState(71);
      variable_decl();
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_declContext ------------------------------------------------------------------

AslParser::Variable_declContext::Variable_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Variable_declContext::VAR() {
  return getToken(AslParser::VAR, 0);
}

std::vector<tree::TerminalNode *> AslParser::Variable_declContext::ID() {
  return getTokens(AslParser::ID);
}

tree::TerminalNode* AslParser::Variable_declContext::ID(size_t i) {
  return getToken(AslParser::ID, i);
}

AslParser::TypeContext* AslParser::Variable_declContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}

AslParser::Array_declContext* AslParser::Variable_declContext::array_decl() {
  return getRuleContext<AslParser::Array_declContext>(0);
}

std::vector<tree::TerminalNode *> AslParser::Variable_declContext::COMA() {
  return getTokens(AslParser::COMA);
}

tree::TerminalNode* AslParser::Variable_declContext::COMA(size_t i) {
  return getToken(AslParser::COMA, i);
}


size_t AslParser::Variable_declContext::getRuleIndex() const {
  return AslParser::RuleVariable_decl;
}

void AslParser::Variable_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_decl(this);
}

void AslParser::Variable_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_decl(this);
}

AslParser::Variable_declContext* AslParser::variable_decl() {
  Variable_declContext *_localctx = _tracker.createInstance<Variable_declContext>(_ctx, getState());
  enterRule(_localctx, 10, AslParser::RuleVariable_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(AslParser::VAR);
    setState(78);
    match(AslParser::ID);
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == AslParser::COMA) {
      setState(79);
      match(AslParser::COMA);
      setState(80);
      match(AslParser::ID);
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(86);
    match(AslParser::T__2);
    setState(89);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case AslParser::INT:
      case AslParser::FLOAT:
      case AslParser::BOOL:
      case AslParser::CHAR: {
        setState(87);
        type();
        break;
      }

      case AslParser::ARRAY: {
        setState(88);
        array_decl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

AslParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::TypeContext::INT() {
  return getToken(AslParser::INT, 0);
}

tree::TerminalNode* AslParser::TypeContext::FLOAT() {
  return getToken(AslParser::FLOAT, 0);
}

tree::TerminalNode* AslParser::TypeContext::BOOL() {
  return getToken(AslParser::BOOL, 0);
}

tree::TerminalNode* AslParser::TypeContext::CHAR() {
  return getToken(AslParser::CHAR, 0);
}


size_t AslParser::TypeContext::getRuleIndex() const {
  return AslParser::RuleType;
}

void AslParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void AslParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

AslParser::TypeContext* AslParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, AslParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::INT)
      | (1ULL << AslParser::FLOAT)
      | (1ULL << AslParser::BOOL)
      | (1ULL << AslParser::CHAR))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_declContext ------------------------------------------------------------------

AslParser::Array_declContext::Array_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::Array_declContext::ARRAY() {
  return getToken(AslParser::ARRAY, 0);
}

tree::TerminalNode* AslParser::Array_declContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

AslParser::TypeContext* AslParser::Array_declContext::type() {
  return getRuleContext<AslParser::TypeContext>(0);
}


size_t AslParser::Array_declContext::getRuleIndex() const {
  return AslParser::RuleArray_decl;
}

void AslParser::Array_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_decl(this);
}

void AslParser::Array_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_decl(this);
}

AslParser::Array_declContext* AslParser::array_decl() {
  Array_declContext *_localctx = _tracker.createInstance<Array_declContext>(_ctx, getState());
  enterRule(_localctx, 14, AslParser::RuleArray_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    match(AslParser::ARRAY);
    setState(94);
    match(AslParser::T__3);
    setState(95);
    match(AslParser::INTVAL);
    setState(96);
    match(AslParser::T__4);
    setState(97);
    match(AslParser::T__5);
    setState(98);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

AslParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<AslParser::StatementContext *> AslParser::StatementsContext::statement() {
  return getRuleContexts<AslParser::StatementContext>();
}

AslParser::StatementContext* AslParser::StatementsContext::statement(size_t i) {
  return getRuleContext<AslParser::StatementContext>(i);
}


size_t AslParser::StatementsContext::getRuleIndex() const {
  return AslParser::RuleStatements;
}

void AslParser::StatementsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatements(this);
}

void AslParser::StatementsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatements(this);
}

AslParser::StatementsContext* AslParser::statements() {
  StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, getState());
  enterRule(_localctx, 16, AslParser::RuleStatements);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::IF)
      | (1ULL << AslParser::READ)
      | (1ULL << AslParser::WRITE)
      | (1ULL << AslParser::RETURN)
      | (1ULL << AslParser::ID))) != 0)) {
      setState(100);
      statement();
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

AslParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::StatementContext::getRuleIndex() const {
  return AslParser::RuleStatement;
}

void AslParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProcCallContext ------------------------------------------------------------------

AslParser::ProcedureContext* AslParser::ProcCallContext::procedure() {
  return getRuleContext<AslParser::ProcedureContext>(0);
}

AslParser::ProcCallContext::ProcCallContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::ProcCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcCall(this);
}
void AslParser::ProcCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcCall(this);
}
//----------------- WriteExprContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteExprContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

AslParser::ExprContext* AslParser::WriteExprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::WriteExprContext::WriteExprContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::WriteExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWriteExpr(this);
}
void AslParser::WriteExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWriteExpr(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::IfStmtContext::IF() {
  return getToken(AslParser::IF, 0);
}

AslParser::ExprContext* AslParser::IfStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

tree::TerminalNode* AslParser::IfStmtContext::THEN() {
  return getToken(AslParser::THEN, 0);
}

AslParser::StatementsContext* AslParser::IfStmtContext::statements() {
  return getRuleContext<AslParser::StatementsContext>(0);
}

tree::TerminalNode* AslParser::IfStmtContext::ENDIF() {
  return getToken(AslParser::ENDIF, 0);
}

AslParser::IfStmtContext::IfStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::IfStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStmt(this);
}
void AslParser::IfStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStmt(this);
}
//----------------- ReadStmtContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ReadStmtContext::READ() {
  return getToken(AslParser::READ, 0);
}

AslParser::Left_exprContext* AslParser::ReadStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

AslParser::ReadStmtContext::ReadStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::ReadStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReadStmt(this);
}
void AslParser::ReadStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReadStmt(this);
}
//----------------- ReturnExpr_Context ------------------------------------------------------------------

tree::TerminalNode* AslParser::ReturnExpr_Context::RETURN() {
  return getToken(AslParser::RETURN, 0);
}

AslParser::ExprContext* AslParser::ReturnExpr_Context::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::ReturnExpr_Context::ReturnExpr_Context(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::ReturnExpr_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnExpr_(this);
}
void AslParser::ReturnExpr_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnExpr_(this);
}
//----------------- AssignStmtContext ------------------------------------------------------------------

AslParser::Left_exprContext* AslParser::AssignStmtContext::left_expr() {
  return getRuleContext<AslParser::Left_exprContext>(0);
}

tree::TerminalNode* AslParser::AssignStmtContext::ASSIGN() {
  return getToken(AslParser::ASSIGN, 0);
}

AslParser::IdentContext* AslParser::AssignStmtContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::AssignStmtContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

AslParser::ExprContext* AslParser::AssignStmtContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::AssignStmtContext::AssignStmtContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::AssignStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignStmt(this);
}
void AslParser::AssignStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignStmt(this);
}
//----------------- WriteStringContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::WriteStringContext::WRITE() {
  return getToken(AslParser::WRITE, 0);
}

tree::TerminalNode* AslParser::WriteStringContext::STRING() {
  return getToken(AslParser::STRING, 0);
}

AslParser::WriteStringContext::WriteStringContext(StatementContext *ctx) { copyFrom(ctx); }

void AslParser::WriteStringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWriteString(this);
}
void AslParser::WriteStringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWriteString(this);
}
AslParser::StatementContext* AslParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 18, AslParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::AssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(106);
      left_expr();
      setState(107);
      match(AslParser::ASSIGN);
      setState(108);
      ident();
      setState(109);
      match(AslParser::T__3);
      setState(110);
      match(AslParser::INTVAL);
      setState(111);
      match(AslParser::T__4);
      setState(112);
      match(AslParser::T__6);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::AssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(114);
      left_expr();
      setState(115);
      match(AslParser::ASSIGN);
      setState(116);
      ident();
      setState(117);
      match(AslParser::T__3);
      setState(118);
      expr(0);
      setState(119);
      match(AslParser::T__4);
      setState(120);
      match(AslParser::T__6);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::AssignStmtContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(122);
      left_expr();
      setState(123);
      match(AslParser::ASSIGN);
      setState(124);
      expr(0);
      setState(125);
      match(AslParser::T__6);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::IfStmtContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(127);
      match(AslParser::IF);
      setState(128);
      expr(0);
      setState(129);
      match(AslParser::THEN);
      setState(130);
      statements();
      setState(131);
      match(AslParser::ENDIF);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ProcCallContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(133);
      procedure();
      setState(134);
      match(AslParser::T__6);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReadStmtContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(136);
      match(AslParser::READ);
      setState(137);
      left_expr();
      setState(138);
      match(AslParser::T__6);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteExprContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(140);
      match(AslParser::WRITE);
      setState(141);
      expr(0);
      setState(142);
      match(AslParser::T__6);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::WriteStringContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(144);
      match(AslParser::WRITE);
      setState(145);
      match(AslParser::STRING);
      setState(146);
      match(AslParser::T__6);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<AslParser::ReturnExpr_Context>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(147);
      match(AslParser::RETURN);
      setState(148);
      expr(0);
      setState(149);
      match(AslParser::T__6);
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

//----------------- ProcedureContext ------------------------------------------------------------------

AslParser::ProcedureContext::ProcedureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::IdentContext* AslParser::ProcedureContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

std::vector<AslParser::ExprContext *> AslParser::ProcedureContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ProcedureContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}


size_t AslParser::ProcedureContext::getRuleIndex() const {
  return AslParser::RuleProcedure;
}

void AslParser::ProcedureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcedure(this);
}

void AslParser::ProcedureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcedure(this);
}

AslParser::ProcedureContext* AslParser::procedure() {
  ProcedureContext *_localctx = _tracker.createInstance<ProcedureContext>(_ctx, getState());
  enterRule(_localctx, 20, AslParser::RuleProcedure);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    ident();
    setState(154);
    match(AslParser::T__0);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << AslParser::T__0)
      | (1ULL << AslParser::NOT)
      | (1ULL << AslParser::BOOLVAL)
      | (1ULL << AslParser::ID)
      | (1ULL << AslParser::INTVAL)
      | (1ULL << AslParser::FLOATVAL)
      | (1ULL << AslParser::CHARVAL))) != 0)) {
      setState(155);
      expr(0);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == AslParser::COMA) {
        setState(156);
        match(AslParser::COMA);
        setState(157);
        expr(0);
        setState(162);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(165);
    match(AslParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Left_exprContext ------------------------------------------------------------------

AslParser::Left_exprContext::Left_exprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

AslParser::IdentContext* AslParser::Left_exprContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::Left_exprContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

AslParser::ExprContext* AslParser::Left_exprContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}


size_t AslParser::Left_exprContext::getRuleIndex() const {
  return AslParser::RuleLeft_expr;
}

void AslParser::Left_exprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeft_expr(this);
}

void AslParser::Left_exprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeft_expr(this);
}

AslParser::Left_exprContext* AslParser::left_expr() {
  Left_exprContext *_localctx = _tracker.createInstance<Left_exprContext>(_ctx, getState());
  enterRule(_localctx, 22, AslParser::RuleLeft_expr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(178);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(167);
      ident();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(168);
      ident();
      setState(169);
      match(AslParser::T__3);
      setState(170);
      match(AslParser::INTVAL);
      setState(171);
      match(AslParser::T__4);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(173);
      ident();
      setState(174);
      match(AslParser::T__3);
      setState(175);
      expr(0);
      setState(176);
      match(AslParser::T__4);
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

//----------------- ExprContext ------------------------------------------------------------------

AslParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t AslParser::ExprContext::getRuleIndex() const {
  return AslParser::RuleExpr;
}

void AslParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProcExprContext ------------------------------------------------------------------

AslParser::ProcedureContext* AslParser::ProcExprContext::procedure() {
  return getRuleContext<AslParser::ProcedureContext>(0);
}

AslParser::ProcExprContext::ProcExprContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::ProcExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProcExpr(this);
}
void AslParser::ProcExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProcExpr(this);
}
//----------------- ExprIdentContext ------------------------------------------------------------------

AslParser::IdentContext* AslParser::ExprIdentContext::ident() {
  return getRuleContext<AslParser::IdentContext>(0);
}

tree::TerminalNode* AslParser::ExprIdentContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

AslParser::ExprContext* AslParser::ExprIdentContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::ExprIdentContext::ExprIdentContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::ExprIdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprIdent(this);
}
void AslParser::ExprIdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprIdent(this);
}
//----------------- ArithmeticContext ------------------------------------------------------------------

std::vector<AslParser::ExprContext *> AslParser::ArithmeticContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::ArithmeticContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::ArithmeticContext::MUL() {
  return getToken(AslParser::MUL, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::DIV() {
  return getToken(AslParser::DIV, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::PLUS() {
  return getToken(AslParser::PLUS, 0);
}

tree::TerminalNode* AslParser::ArithmeticContext::RES() {
  return getToken(AslParser::RES, 0);
}

AslParser::ArithmeticContext::ArithmeticContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::ArithmeticContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArithmetic(this);
}
void AslParser::ArithmeticContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArithmetic(this);
}
//----------------- RelationalContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::RelationalContext::NOT() {
  return getToken(AslParser::NOT, 0);
}

std::vector<AslParser::ExprContext *> AslParser::RelationalContext::expr() {
  return getRuleContexts<AslParser::ExprContext>();
}

AslParser::ExprContext* AslParser::RelationalContext::expr(size_t i) {
  return getRuleContext<AslParser::ExprContext>(i);
}

tree::TerminalNode* AslParser::RelationalContext::EQUAL() {
  return getToken(AslParser::EQUAL, 0);
}

tree::TerminalNode* AslParser::RelationalContext::AND() {
  return getToken(AslParser::AND, 0);
}

tree::TerminalNode* AslParser::RelationalContext::OR() {
  return getToken(AslParser::OR, 0);
}

AslParser::RelationalContext::RelationalContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::RelationalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational(this);
}
void AslParser::RelationalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational(this);
}
//----------------- ParenthesisContext ------------------------------------------------------------------

AslParser::ExprContext* AslParser::ParenthesisContext::expr() {
  return getRuleContext<AslParser::ExprContext>(0);
}

AslParser::ParenthesisContext::ParenthesisContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::ParenthesisContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenthesis(this);
}
void AslParser::ParenthesisContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenthesis(this);
}
//----------------- ValueContext ------------------------------------------------------------------

tree::TerminalNode* AslParser::ValueContext::INTVAL() {
  return getToken(AslParser::INTVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::BOOLVAL() {
  return getToken(AslParser::BOOLVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::CHARVAL() {
  return getToken(AslParser::CHARVAL, 0);
}

tree::TerminalNode* AslParser::ValueContext::FLOATVAL() {
  return getToken(AslParser::FLOATVAL, 0);
}

AslParser::ValueContext::ValueContext(ExprContext *ctx) { copyFrom(ctx); }

void AslParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}
void AslParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

AslParser::ExprContext* AslParser::expr() {
   return expr(0);
}

AslParser::ExprContext* AslParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  AslParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  AslParser::ExprContext *previousContext = _localctx;
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, AslParser::RuleExpr, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(203);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ProcExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(181);
      procedure();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<ParenthesisContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(182);
      match(AslParser::T__0);
      setState(183);
      expr(0);
      setState(184);
      match(AslParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ExprIdentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(186);
      ident();
      setState(187);
      match(AslParser::T__3);
      setState(188);
      match(AslParser::INTVAL);
      setState(189);
      match(AslParser::T__4);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExprIdentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(191);
      ident();
      setState(192);
      match(AslParser::T__3);
      setState(193);
      expr(0);
      setState(194);
      match(AslParser::T__4);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<RelationalContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(196);
      match(AslParser::NOT);
      setState(197);
      expr(11);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<ValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(198);
      match(AslParser::INTVAL);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<ValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(199);
      match(AslParser::BOOLVAL);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(200);
      match(AslParser::CHARVAL);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ValueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      match(AslParser::FLOATVAL);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<ExprIdentContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(202);
      ident();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(222);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(220);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ArithmeticContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(205);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(206);
          dynamic_cast<ArithmeticContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == AslParser::MUL

          || _la == AslParser::DIV)) {
            dynamic_cast<ArithmeticContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(207);
          expr(11);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ArithmeticContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(208);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(209);
          dynamic_cast<ArithmeticContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == AslParser::PLUS

          || _la == AslParser::RES)) {
            dynamic_cast<ArithmeticContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(210);
          expr(10);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(211);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(212);
          dynamic_cast<RelationalContext *>(_localctx)->op = match(AslParser::EQUAL);
          setState(213);
          expr(9);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(214);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(215);
          dynamic_cast<RelationalContext *>(_localctx)->op = match(AslParser::AND);
          setState(216);
          expr(8);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(217);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(218);
          dynamic_cast<RelationalContext *>(_localctx)->op = match(AslParser::OR);
          setState(219);
          expr(7);
          break;
        }

        } 
      }
      setState(224);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IdentContext ------------------------------------------------------------------

AslParser::IdentContext::IdentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* AslParser::IdentContext::ID() {
  return getToken(AslParser::ID, 0);
}


size_t AslParser::IdentContext::getRuleIndex() const {
  return AslParser::RuleIdent;
}

void AslParser::IdentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdent(this);
}

void AslParser::IdentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<AslListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdent(this);
}

AslParser::IdentContext* AslParser::ident() {
  IdentContext *_localctx = _tracker.createInstance<IdentContext>(_ctx, getState());
  enterRule(_localctx, 26, AslParser::RuleIdent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    match(AslParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool AslParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool AslParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 10);
    case 1: return precpred(_ctx, 9);
    case 2: return precpred(_ctx, 8);
    case 3: return precpred(_ctx, 7);
    case 4: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> AslParser::_decisionToDFA;
atn::PredictionContextCache AslParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN AslParser::_atn;
std::vector<uint16_t> AslParser::_serializedATN;

std::vector<std::string> AslParser::_ruleNames = {
  "program", "function", "parameters", "parameter_decl", "declarations", 
  "variable_decl", "type", "array_decl", "statements", "statement", "procedure", 
  "left_expr", "expr", "ident"
};

std::vector<std::string> AslParser::_literalNames = {
  "", "'('", "')'", "':'", "'['", "']'", "'of'", "';'", "'='", "'=='", "'+'", 
  "'*'", "'-'", "'/'", "'var'", "'int'", "'float'", "'bool'", "'char'", 
  "'array'", "'not'", "'and'", "'or'", "'if'", "'then'", "'else'", "'endif'", 
  "'func'", "'endfunc'", "'read'", "'write'", "'return'", "", "", "','"
};

std::vector<std::string> AslParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "ASSIGN", "EQUAL", "PLUS", "MUL", "RES", 
  "DIV", "VAR", "INT", "FLOAT", "BOOL", "CHAR", "ARRAY", "NOT", "AND", "OR", 
  "IF", "THEN", "ELSE", "ENDIF", "FUNC", "ENDFUNC", "READ", "WRITE", "RETURN", 
  "BOOLVAL", "ID", "COMA", "INTVAL", "FLOATVAL", "CHARVAL", "STRING", "COMMENT", 
  "WS"
};

dfa::Vocabulary AslParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> AslParser::_tokenNames;

AslParser::Initializer::Initializer() {
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
    0x3, 0x2a, 0xe6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x6, 0x2, 0x20, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
    0x21, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2d, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0x36, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0x39, 0xb, 0x4, 0x5, 0x4, 0x3b, 0xa, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x40, 0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 
    0x43, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x48, 0xa, 0x5, 
    0x3, 0x6, 0x7, 0x6, 0x4b, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x4e, 0xb, 0x6, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x54, 0xa, 0x7, 0xc, 
    0x7, 0xe, 0x7, 0x57, 0xb, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 
    0x5c, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x7, 0xa, 0x68, 0xa, 0xa, 
    0xc, 0xa, 0xe, 0xa, 0x6b, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0x9a, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x7, 0xc, 0xa1, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xa4, 0xb, 0xc, 0x5, 0xc, 
    0xa6, 0xa, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x5, 0xd, 0xb5, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0xce, 0xa, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x7, 0xe, 0xdf, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xe2, 0xb, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x2, 0x3, 0x1a, 0x10, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x2, 0x5, 
    0x3, 0x2, 0x11, 0x14, 0x4, 0x2, 0xd, 0xd, 0xf, 0xf, 0x4, 0x2, 0xc, 0xc, 
    0xe, 0xe, 0x2, 0xfb, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x25, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3c, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x5d, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x12, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x99, 0x3, 0x2, 0x2, 0x2, 0x16, 0x9b, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0xb4, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xcd, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x5, 0x4, 0x3, 
    0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 0x2, 0x2, 0x3, 0x24, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x25, 0x26, 0x7, 0x1d, 0x2, 0x2, 0x26, 0x27, 0x7, 
    0x23, 0x2, 0x2, 0x27, 0x28, 0x7, 0x3, 0x2, 0x2, 0x28, 0x29, 0x5, 0x6, 
    0x4, 0x2, 0x29, 0x2c, 0x7, 0x4, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0x5, 0x2, 
    0x2, 0x2b, 0x2d, 0x5, 0xe, 0x8, 0x2, 0x2c, 0x2a, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x2f, 0x5, 0xa, 0x6, 0x2, 0x2f, 0x30, 0x5, 0x12, 0xa, 0x2, 0x30, 0x31, 
    0x7, 0x1e, 0x2, 0x2, 0x31, 0x5, 0x3, 0x2, 0x2, 0x2, 0x32, 0x37, 0x5, 
    0x8, 0x5, 0x2, 0x33, 0x34, 0x7, 0x24, 0x2, 0x2, 0x34, 0x36, 0x5, 0x8, 
    0x5, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 
    0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x7, 
    0x3, 0x2, 0x2, 0x2, 0x3c, 0x41, 0x7, 0x23, 0x2, 0x2, 0x3d, 0x3e, 0x7, 
    0x24, 0x2, 0x2, 0x3e, 0x40, 0x7, 0x23, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x42, 0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 
    0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x44, 0x47, 0x7, 0x5, 0x2, 0x2, 0x45, 
    0x48, 0x5, 0xe, 0x8, 0x2, 0x46, 0x48, 0x5, 0x10, 0x9, 0x2, 0x47, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 0x48, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x4b, 0x5, 0xc, 0x7, 0x2, 0x4a, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x10, 0x2, 0x2, 0x50, 
    0x55, 0x7, 0x23, 0x2, 0x2, 0x51, 0x52, 0x7, 0x24, 0x2, 0x2, 0x52, 0x54, 
    0x7, 0x23, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x54, 0x57, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x53, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x58, 0x3, 0x2, 0x2, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x5b, 0x7, 0x5, 0x2, 0x2, 0x59, 0x5c, 0x5, 0xe, 0x8, 0x2, 
    0x5a, 0x5c, 0x5, 0x10, 0x9, 0x2, 0x5b, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 
    0x9, 0x2, 0x2, 0x2, 0x5e, 0xf, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x7, 
    0x15, 0x2, 0x2, 0x60, 0x61, 0x7, 0x6, 0x2, 0x2, 0x61, 0x62, 0x7, 0x25, 
    0x2, 0x2, 0x62, 0x63, 0x7, 0x7, 0x2, 0x2, 0x63, 0x64, 0x7, 0x8, 0x2, 
    0x2, 0x64, 0x65, 0x5, 0xe, 0x8, 0x2, 0x65, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x68, 0x5, 0x14, 0xb, 0x2, 0x67, 0x66, 0x3, 0x2, 0x2, 0x2, 0x68, 
    0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x3, 0x2, 0x2, 0x2, 0x6a, 0x13, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x18, 0xd, 0x2, 0x6d, 0x6e, 0x7, 0xa, 
    0x2, 0x2, 0x6e, 0x6f, 0x5, 0x1c, 0xf, 0x2, 0x6f, 0x70, 0x7, 0x6, 0x2, 
    0x2, 0x70, 0x71, 0x7, 0x25, 0x2, 0x2, 0x71, 0x72, 0x7, 0x7, 0x2, 0x2, 
    0x72, 0x73, 0x7, 0x9, 0x2, 0x2, 0x73, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0x5, 0x18, 0xd, 0x2, 0x75, 0x76, 0x7, 0xa, 0x2, 0x2, 0x76, 0x77, 
    0x5, 0x1c, 0xf, 0x2, 0x77, 0x78, 0x7, 0x6, 0x2, 0x2, 0x78, 0x79, 0x5, 
    0x1a, 0xe, 0x2, 0x79, 0x7a, 0x7, 0x7, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x9, 
    0x2, 0x2, 0x7b, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x5, 0x18, 0xd, 
    0x2, 0x7d, 0x7e, 0x7, 0xa, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x1a, 0xe, 0x2, 
    0x7f, 0x80, 0x7, 0x9, 0x2, 0x2, 0x80, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x81, 
    0x82, 0x7, 0x19, 0x2, 0x2, 0x82, 0x83, 0x5, 0x1a, 0xe, 0x2, 0x83, 0x84, 
    0x7, 0x1a, 0x2, 0x2, 0x84, 0x85, 0x5, 0x12, 0xa, 0x2, 0x85, 0x86, 0x7, 
    0x1c, 0x2, 0x2, 0x86, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x5, 0x16, 
    0xc, 0x2, 0x88, 0x89, 0x7, 0x9, 0x2, 0x2, 0x89, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x8b, 0x7, 0x1f, 0x2, 0x2, 0x8b, 0x8c, 0x5, 0x18, 0xd, 0x2, 
    0x8c, 0x8d, 0x7, 0x9, 0x2, 0x2, 0x8d, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x8f, 0x7, 0x20, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x1a, 0xe, 0x2, 0x90, 0x91, 
    0x7, 0x9, 0x2, 0x2, 0x91, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x7, 
    0x20, 0x2, 0x2, 0x93, 0x94, 0x7, 0x28, 0x2, 0x2, 0x94, 0x9a, 0x7, 0x9, 
    0x2, 0x2, 0x95, 0x96, 0x7, 0x21, 0x2, 0x2, 0x96, 0x97, 0x5, 0x1a, 0xe, 
    0x2, 0x97, 0x98, 0x7, 0x9, 0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x99, 0x74, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x7c, 0x3, 0x2, 0x2, 0x2, 0x99, 0x81, 0x3, 0x2, 0x2, 0x2, 0x99, 0x87, 
    0x3, 0x2, 0x2, 0x2, 0x99, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x99, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x99, 0x92, 0x3, 0x2, 0x2, 0x2, 0x99, 0x95, 0x3, 0x2, 
    0x2, 0x2, 0x9a, 0x15, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x1c, 0xf, 
    0x2, 0x9c, 0xa5, 0x7, 0x3, 0x2, 0x2, 0x9d, 0xa2, 0x5, 0x1a, 0xe, 0x2, 
    0x9e, 0x9f, 0x7, 0x24, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0x1a, 0xe, 0x2, 0xa0, 
    0x9e, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa6, 0x3, 
    0x2, 0x2, 0x2, 0xa4, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa5, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 
    0x2, 0xa7, 0xa8, 0x7, 0x4, 0x2, 0x2, 0xa8, 0x17, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xb5, 0x5, 0x1c, 0xf, 0x2, 0xaa, 0xab, 0x5, 0x1c, 0xf, 0x2, 0xab, 
    0xac, 0x7, 0x6, 0x2, 0x2, 0xac, 0xad, 0x7, 0x25, 0x2, 0x2, 0xad, 0xae, 
    0x7, 0x7, 0x2, 0x2, 0xae, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x5, 
    0x1c, 0xf, 0x2, 0xb0, 0xb1, 0x7, 0x6, 0x2, 0x2, 0xb1, 0xb2, 0x5, 0x1a, 
    0xe, 0x2, 0xb2, 0xb3, 0x7, 0x7, 0x2, 0x2, 0xb3, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0xb4, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0xb4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb5, 0x19, 0x3, 0x2, 0x2, 0x2, 0xb6, 
    0xb7, 0x8, 0xe, 0x1, 0x2, 0xb7, 0xce, 0x5, 0x16, 0xc, 0x2, 0xb8, 0xb9, 
    0x7, 0x3, 0x2, 0x2, 0xb9, 0xba, 0x5, 0x1a, 0xe, 0x2, 0xba, 0xbb, 0x7, 
    0x4, 0x2, 0x2, 0xbb, 0xce, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x1c, 
    0xf, 0x2, 0xbd, 0xbe, 0x7, 0x6, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x25, 0x2, 
    0x2, 0xbf, 0xc0, 0x7, 0x7, 0x2, 0x2, 0xc0, 0xce, 0x3, 0x2, 0x2, 0x2, 
    0xc1, 0xc2, 0x5, 0x1c, 0xf, 0x2, 0xc2, 0xc3, 0x7, 0x6, 0x2, 0x2, 0xc3, 
    0xc4, 0x5, 0x1a, 0xe, 0x2, 0xc4, 0xc5, 0x7, 0x7, 0x2, 0x2, 0xc5, 0xce, 
    0x3, 0x2, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x16, 0x2, 0x2, 0xc7, 0xce, 0x5, 
    0x1a, 0xe, 0xd, 0xc8, 0xce, 0x7, 0x25, 0x2, 0x2, 0xc9, 0xce, 0x7, 0x22, 
    0x2, 0x2, 0xca, 0xce, 0x7, 0x27, 0x2, 0x2, 0xcb, 0xce, 0x7, 0x26, 0x2, 
    0x2, 0xcc, 0xce, 0x5, 0x1c, 0xf, 0x2, 0xcd, 0xb6, 0x3, 0x2, 0x2, 0x2, 
    0xcd, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcc, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0xc, 0xc, 0x2, 
    0x2, 0xd0, 0xd1, 0x9, 0x3, 0x2, 0x2, 0xd1, 0xdf, 0x5, 0x1a, 0xe, 0xd, 
    0xd2, 0xd3, 0xc, 0xb, 0x2, 0x2, 0xd3, 0xd4, 0x9, 0x4, 0x2, 0x2, 0xd4, 
    0xdf, 0x5, 0x1a, 0xe, 0xc, 0xd5, 0xd6, 0xc, 0xa, 0x2, 0x2, 0xd6, 0xd7, 
    0x7, 0xb, 0x2, 0x2, 0xd7, 0xdf, 0x5, 0x1a, 0xe, 0xb, 0xd8, 0xd9, 0xc, 
    0x9, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x17, 0x2, 0x2, 0xda, 0xdf, 0x5, 0x1a, 
    0xe, 0xa, 0xdb, 0xdc, 0xc, 0x8, 0x2, 0x2, 0xdc, 0xdd, 0x7, 0x18, 0x2, 
    0x2, 0xdd, 0xdf, 0x5, 0x1a, 0xe, 0x9, 0xde, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xde, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xde, 
    0xd8, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe2, 
    0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 
    0x2, 0x2, 0x2, 0xe1, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe0, 0x3, 0x2, 
    0x2, 0x2, 0xe3, 0xe4, 0x7, 0x23, 0x2, 0x2, 0xe4, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x13, 0x21, 0x2c, 0x37, 0x3a, 0x41, 0x47, 0x4c, 0x55, 0x5b, 0x69, 
    0x99, 0xa2, 0xa5, 0xb4, 0xcd, 0xde, 0xe0, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

AslParser::Initializer AslParser::_init;
