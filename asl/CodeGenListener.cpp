//////////////////////////////////////////////////////////////////////
//
//    CodeGenListener - Walk the parser tree to do
//                             the generation of code
//
//    Copyright (C) 2018  Universitat Politecnica de Catalunya
//
//    This library is free software; you can redistribute it and/or
//    modify it under the terms of the GNU General Public License
//    as published by the Free Software Foundation; either version 3
//    of the License, or (at your option) any later version.
//
//    This library is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//    Affero General Public License for more details.
//
//    You should have received a copy of the GNU Affero General Public
//    License along with this library; if not, write to the Free Software
//    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
//
//    contact: José Miguel Rivero (rivero@cs.upc.edu)
//             Computer Science Department
//             Universitat Politecnica de Catalunya
//             despatx Omega.110 - Campus Nord UPC
//             08034 Barcelona.  SPAIN
//
//////////////////////////////////////////////////////////////////////

#include "CodeGenListener.h"

#include "antlr4-runtime.h"

#include "../common/TypesMgr.h"
#include "../common/SymTable.h"
#include "../common/TreeDecoration.h"
#include "../common/code.h"

#include <cstddef>    // std::size_t

// uncomment the following line to enable debugging messages with DEBUG*
// #define DEBUG_BUILD
#include "../common/debug.h"

// using namespace std;


// Constructor
CodeGenListener::CodeGenListener(TypesMgr       & Types,
                                 SymTable       & Symbols,
                                 TreeDecoration & Decorations,
                                 code           & Code) :
  Types{Types},
  Symbols{Symbols},
  Decorations{Decorations},
  Code{Code} {
}

void CodeGenListener::enterProgram(AslParser::ProgramContext *ctx) {
  DEBUG_ENTER();
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
}
void CodeGenListener::exitProgram(AslParser::ProgramContext *ctx) {
  Symbols.popScope();
  DEBUG_EXIT();
}

void CodeGenListener::enterFunction(AslParser::FunctionContext *ctx) {
  DEBUG_ENTER();
  subroutine subr(ctx->ID()->getText());
  Code.add_subroutine(subr);
  SymTable::ScopeId sc = getScopeDecor(ctx);
  Symbols.pushThisScope(sc);
  codeCounters.reset();
}
void CodeGenListener::exitFunction(AslParser::FunctionContext *ctx) {
  subroutine & subrRef = Code.get_last_subroutine();
  instructionList code = getCodeDecor(ctx->statements());
  code = code || instruction::RETURN();
  subrRef.set_instructions(code);
  Symbols.popScope();
  DEBUG_EXIT();
}

void CodeGenListener::enterDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitDeclarations(AslParser::DeclarationsContext *ctx) {
  DEBUG_EXIT();
}

void CodeGenListener::enterVariable_decl(AslParser::Variable_declContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitVariable_decl(AslParser::Variable_declContext *ctx) {
  subroutine       & subrRef = Code.get_last_subroutine();
  TypesMgr::TypeId        t1;
  if(ctx->type())  t1 = getTypeDecor(ctx->type());
  else t1 = getTypeDecor(ctx->array_decl());
  std::size_t           size = Types.getSizeOfType(t1);
  for(auto id : ctx->ID()){
                  subrRef.add_var(id->getText(), size);
  }
  DEBUG_EXIT();
}

//TODO TODO TODO
//     TODO
//     TODO
//     TODO       Fer que les arrays escriguin el seu codi correctament
//     TODO
//     TODO
//     TODO

void CodeGenListener::enterType(AslParser::TypeContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitType(AslParser::TypeContext *ctx) {
  DEBUG_EXIT();
}

void CodeGenListener::enterStatements(AslParser::StatementsContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitStatements(AslParser::StatementsContext *ctx) {
  instructionList code;
  for (auto stCtx : ctx->statement()) {
    code = code || getCodeDecor(stCtx);
  }
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterAssignStmt(AslParser::AssignStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitAssignStmt(AslParser::AssignStmtContext *ctx) {
        auto addr1 = getAddrDecor(ctx->left_expr());
        auto offs1 = getOffsetDecor(ctx->left_expr());
        auto code1 = getCodeDecor(ctx->left_expr());
        TypesMgr::TypeId tid1 = getTypeDecor(ctx->left_expr());
        auto addr2 = getAddrDecor(ctx->expr());
        std::string     offs2 = getOffsetDecor(ctx->expr());
        auto code2 = getCodeDecor(ctx->expr());
        TypesMgr::TypeId tid2 = getTypeDecor(ctx->expr());
        auto code = code1 || code2;
        if (ctx->left_expr()->INTVAL() or ctx->left_expr()->expr()) {
            code = code || instruction::XLOAD(addr1, offs1, addr2);
            putCodeDecor(ctx, code);
            DEBUG_EXIT();
            return;
        } else if (ctx->ident()) {
            if (ctx->INTVAL())code = code || instruction::LOADX(addr1,getAddrDecor(ctx->ident()),ctx->INTVAL()->getText());
            else if(ctx->expr()) {
                code = code || instruction::LOADX(addr1, getAddrDecor(ctx->ident()),getOffsetDecor(ctx->expr()));
            }
            putCodeDecor(ctx, code);
            DEBUG_EXIT();
            return;
         }
         /*if(Types.isArrayTy(tid1) && Types.isArrayTy(tid2))  {
            auto identName = ctx->left_expr()->ident()->ID()->getText();
                code = code || instruction::ALOAD(addr1, addr2);
                putCodeDecor(ctx, code);
                DEBUG_EXIT();
                return;
        }
        else if(offs1 != "" && (Types.isArrayTy(tid1))) { //&& (Types.isArrayTy(tid1))
                auto identName = ctx->left_expr()->ident()->ID()->getText();

                if (Symbols.isParameterClass(identName)) {
                        auto tmp = "%" + codeCounters.newTEMP();
                        code = code || instruct&aion::LOAD(tmp, addr1);
                        addr1 = tmp;
                }

                code = code || instruction::XLOAD(addr1, offs1, addr2);
                putCodeDecor(ctx, code);
                DEBUG_EXIT();
                return;
        } else if (offs2 != "" && (Types.isArrayTy(tid2))) {
            auto identName = ctx->left_expr()->ident()->ID()->getText();

                if (Symbols.isParameterClass(identName)) {
                        auto tmp = "%" + codeCounters.newTEMP();
                        code = code || instruction::LOAD(tmp, addr1);
                        addr1 = tmp;
                }

                code = code || instruction::LOADX(addr1, addr2, offs2);
                putCodeDecor(ctx, code);
                DEBUG_EXIT();
                return;
        }*/

        code = code || instruction::LOAD(addr1, addr2);
        putCodeDecor(ctx, code);
        DEBUG_EXIT();
}

void CodeGenListener::enterIfStmt(AslParser::IfStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitIfStmt(AslParser::IfStmtContext *ctx) {
  instructionList   code;
  std::string      addr1 = getAddrDecor(ctx->expr());
  instructionList  code1 = getCodeDecor(ctx->expr());
  instructionList  code2 = getCodeDecor(ctx->statements());
  std::string      label = codeCounters.newLabelIF();
  std::string labelEndIf = "endif"+label;
  code = code1 || instruction::FJUMP(addr1, labelEndIf) ||
         code2 || instruction::LABEL(labelEndIf);
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterProcCall(AslParser::ProcCallContext *ctx) {
        DEBUG_ENTER();
}
void CodeGenListener::exitProcCall(AslParser::ProcCallContext *ctx) {
        auto code = getCodeDecor(ctx->procedure());
        putCodeDecor(ctx, code);
        DEBUG_EXIT();
}

void CodeGenListener::enterReadStmt(AslParser::ReadStmtContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitReadStmt(AslParser::ReadStmtContext *ctx) {
  instructionList  code;
  std::string     addr1 = getAddrDecor(ctx->left_expr());
  // std::string     offs1 = getOffsetDecor(ctx->left_expr());
  instructionList code1 = getCodeDecor(ctx->left_expr());
  // TypesMgr::TypeId tid1 = getTypeDecor(ctx->left_expr());
  code = code1 || instruction::READI(addr1);
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterWriteExpr(AslParser::WriteExprContext *ctx) {
  DEBUG_ENTER();
}

void CodeGenListener::exitWriteExpr(AslParser::WriteExprContext *ctx) {
  instructionList code;
  std::string     addr1 = getAddrDecor(ctx->expr());
  // std::string     offs1 = getOffsetDecor(ctx->expr());
  instructionList code1 = getCodeDecor(ctx->expr());
  // TypesMgr::TypeId tid1 = getTypeDecor(ctx->expr());
  code = code1 || instruction::WRITEI(addr1);
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterWriteString(AslParser::WriteStringContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitWriteString(AslParser::WriteStringContext *ctx) {
  instructionList code;
  std::string s = ctx->STRING()->getText();
  std::string temp = "%"+codeCounters.newTEMP();
  int i = 1;
  while (i < int(s.size())-1) {
    if (s[i] != '\\') {
      code = code ||
             instruction::CHLOAD(temp, s.substr(i,1)) ||
             instruction::WRITEC(temp);
      i += 1;
    }
    else {
      assert(i < int(s.size())-2);
      if (s[i+1] == 'n') {
        code = code || instruction::WRITELN();
        i += 2;
      }
      else if (s[i+1] == 't' or s[i+1] == '"' or s[i+1] == '\\') {
        code = code ||
               instruction::CHLOAD(temp, s.substr(i,2)) ||
               instruction::WRITEC(temp);
        i += 2;
      }
      else {
        code = code ||
               instruction::CHLOAD(temp, s.substr(i,1)) ||
               instruction::WRITEC(temp);
        i += 1;
      }
    }
  }
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterLeft_expr(AslParser::Left_exprContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitLeft_expr(AslParser::Left_exprContext *ctx) {
  putAddrDecor(ctx, getAddrDecor(ctx->ident()));
  //putOffsetDecor(ctx, getOffsetDecor(ctx->ident()));
  if (ctx->INTVAL()) {
      putOffsetDecor(ctx, ctx->INTVAL()->getText());
      putCodeDecor(ctx, getCodeDecor(ctx->ident()));
  }
  else if (ctx->expr()) {
      putOffsetDecor(ctx, getOffsetDecor(ctx->expr()));
      putCodeDecor(ctx, getCodeDecor(ctx->expr()));
  }
  else {
      putOffsetDecor(ctx, getOffsetDecor(ctx->ident()));
      putCodeDecor(ctx, getCodeDecor(ctx->ident()));
  }
  DEBUG_ENTER();
}

void CodeGenListener::enterArithmetic(AslParser::ArithmeticContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitArithmetic(AslParser::ArithmeticContext *ctx) {
  std::string     addr1 = getAddrDecor(ctx->expr(0));
  instructionList code1 = getCodeDecor(ctx->expr(0));
  std::string     addr2 = getAddrDecor(ctx->expr(1));
  instructionList code2 = getCodeDecor(ctx->expr(1));
  instructionList code  = code1 || code2;
  // TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
  // TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
  // TypesMgr::TypeId t  = getTypeDecor(ctx);

  std::string temp = "%"+codeCounters.newTEMP();

  std::cout << "Construint variable temp: " << temp << std::endl;

  if (ctx->MUL())
    code = code || instruction::MUL(temp, addr1, addr2);
  else  if (ctx->DIV())
      code = code || instruction::DIV(temp, addr1, addr2);
  else  if (ctx->RES())
      code = code || instruction::SUB(temp, addr1, addr2);
  else // (ctx->PLUS())
    code = code || instruction::ADD(temp, addr1, addr2);
  putAddrDecor(ctx, temp);
  putOffsetDecor(ctx, temp);
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterParenthesis(AslParser::ParenthesisContext *ctx) {
    DEBUG_ENTER();
}
void CodeGenListener::exitParenthesis(AslParser::ParenthesisContext *ctx) {
    std::string     addr1 = getAddrDecor(ctx->expr());
    instructionList code1 = getCodeDecor(ctx->expr());
    putAddrDecor(ctx, addr1);
    putOffsetDecor(ctx, addr1);
    putCodeDecor(ctx, code1);
    DEBUG_EXIT();
}

void CodeGenListener::enterRelational(AslParser::RelationalContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitRelational(AslParser::RelationalContext *ctx) {
    std::string temp = "%"+codeCounters.newTEMP();
    std::string     addr1 = getAddrDecor(ctx->expr(0));
    instructionList code1 = getCodeDecor(ctx->expr(0));
    // TypesMgr::TypeId t1 = getTypeDecor(ctx->expr(0));
    instructionList code;
    if (ctx->NOT()) { //NOT
        code = code1 || instruction::NOT(temp, addr1);
    } else {
        std::string     addr2 = getAddrDecor(ctx->expr(1));
        instructionList code2 = getCodeDecor(ctx->expr(1));
        code  = code1 || code2;

        // TypesMgr::TypeId t2 = getTypeDecor(ctx->expr(1));
        // TypesMgr::TypeId t  = getTypeDecor(ctx);
        if (ctx->EQUAL()) code = code || instruction::EQ(temp, addr1, addr2);
        else if (ctx->AND()) code = code || instruction::AND(temp, addr1, addr2);
        else /* if (ctx->OR()) */ code = code || instruction::OR(temp, addr1, addr2);
    } //TODO ficar la resta d'operadors relacionals
    putAddrDecor(ctx, temp);
    putOffsetDecor(ctx, temp);
    putCodeDecor(ctx, code);
    DEBUG_EXIT();
}

void CodeGenListener::enterValue(AslParser::ValueContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitValue(AslParser::ValueContext *ctx) {
  instructionList code;
  std::string temp = "%"+codeCounters.newTEMP();
  std::string text = ctx->getText();
  if (ctx->INTVAL()){
    code = instruction::ILOAD(temp, text);
    putOffsetDecor(ctx, text);
    std::cout << "Text Int: " << text << std::endl;
  }
  if (ctx->FLOATVAL()){
    code = instruction::FLOAD(temp, text);

  }
  if (ctx->CHARVAL()){
    code = instruction::CHLOAD(temp, text);

  }
  if(ctx->BOOLVAL()){
    if(text == "true"){
      text = '1';
    }
    else { //(text == "false")
      text = '0';

    }
    code = instruction::ILOAD(temp, text);
  }
  putAddrDecor(ctx, temp);
  //putOffsetDecor(ctx, "");
  putCodeDecor(ctx, code);
  DEBUG_EXIT();
}

void CodeGenListener::enterExprIdent(AslParser::ExprIdentContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitExprIdent(AslParser::ExprIdentContext *ctx) {
  putAddrDecor(ctx, getAddrDecor(ctx->ident()));

  if (ctx->INTVAL()) {
      std::string temp = "%"+codeCounters.newTEMP();
      instructionList code  = instruction::LOADX(temp,getAddrDecor(ctx->ident()),ctx->INTVAL()->getText());
      putOffsetDecor(ctx, temp);
      putCodeDecor(ctx, code);
  }
  else if (ctx->expr()) {
      //std::cout << "Hem passat per aqui!  :" << getOffsetDecor(ctx->expr()) << std::endl;
      instructionList code = getCodeDecor(ctx->expr());
      std::string temp = "%"+codeCounters.newTEMP();
      code  = code || instruction::LOADX(temp,getAddrDecor(ctx->ident()),getOffsetDecor(ctx->expr()));
      putOffsetDecor(ctx, getOffsetDecor(ctx->expr()));
      putCodeDecor(ctx, code);
      //TODO Mirar si cal i implementar ficar arrays dins d'arrays. El problema segurament es a que passa el offset incorrecte, i hauria de passar una var temp
      //TODO alternativament comprovar que no hi hagi arrays dins d'arrays, que si no es lia
  }
  else {
      putOffsetDecor(ctx, getOffsetDecor(ctx->ident()));
      putCodeDecor(ctx, getCodeDecor(ctx->ident()));
  }
  DEBUG_EXIT();
}

void CodeGenListener::enterIdent(AslParser::IdentContext *ctx) {
  DEBUG_ENTER();
}
void CodeGenListener::exitIdent(AslParser::IdentContext *ctx) {
  putAddrDecor(ctx, ctx->ID()->getText());
  putOffsetDecor(ctx, ctx->ID()->getText());
  putCodeDecor(ctx, instructionList());
  DEBUG_EXIT();
}

// void CodeGenListener::enterEveryRule(antlr4::ParserRuleContext *ctx) {
//   DEBUG_ENTER();
// }
// void CodeGenListener::exitEveryRule(antlr4::ParserRuleContext *ctx) {
//   DEBUG_EXIT();
// }
// void CodeGenListener::visitTerminal(antlr4::tree::TerminalNode *node) {
//   DEBUG(">>> visit " << node->getSymbol()->getLine() << ":" << node->getSymbol()->getCharPositionInLine() << " CodeGen TerminalNode");
// }
// void CodeGenListener::visitErrorNode(antlr4::tree::ErrorNode *node) {
// }


// Getters for the necessary tree node atributes:
//   Scope, Type, Addr, Offset and Code
SymTable::ScopeId CodeGenListener::getScopeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getScope(ctx);
}
TypesMgr::TypeId CodeGenListener::getTypeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getType(ctx);
}
std::string CodeGenListener::getAddrDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getAddr(ctx);
}
std::string  CodeGenListener::getOffsetDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getOffset(ctx);
}
instructionList CodeGenListener::getCodeDecor(antlr4::ParserRuleContext *ctx) {
  return Decorations.getCode(ctx);
}

// Setters for the necessary tree node attributes:
//   Addr, Offset and Code
void CodeGenListener::putAddrDecor(antlr4::ParserRuleContext *ctx, const std::string & a) {
  Decorations.putAddr(ctx, a);
}
void CodeGenListener::putOffsetDecor(antlr4::ParserRuleContext *ctx, const std::string & o) {
  Decorations.putOffset(ctx, o);
}
void CodeGenListener::putCodeDecor(antlr4::ParserRuleContext *ctx, const instructionList & c) {
  Decorations.putCode(ctx, c);
}
