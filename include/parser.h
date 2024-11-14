#pragma once
#include "AST.h"
#include <map>

// 添加这个确保是外部链接

namespace kaleidoscope {
int getNextToken();
extern int CurTok;
extern std::map<char, int> BinopPrecedence;
std::unique_ptr<ExprAST> ParseExpression();
std::unique_ptr<FunctionAST> ParseDefinition();
std::unique_ptr<PrototypeAST> ParseExtern();
std::unique_ptr<FunctionAST> ParseTopLevelExpr();
std::unique_ptr<PrototypeAST> ParsePrototype();
std::unique_ptr<ExprAST> LogError(const char *Str);
std::unique_ptr<PrototypeAST> LogErrorP(const char *Str);
} // namespace kaleidoscope
