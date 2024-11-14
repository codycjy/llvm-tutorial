#pragma once
#include "AST.h"
#include <map>

// 添加这个确保是外部链接
#ifdef __cplusplus
extern "C" {
#endif

extern int CurTok;
extern std::map<char, int> BinopPrecedence;

int getNextToken();
std::unique_ptr<ExprAST> ParseExpression();
std::unique_ptr<FunctionAST> ParseDefinition();
std::unique_ptr<PrototypeAST> ParseExtern();  // 确保只有一个声明
std::unique_ptr<FunctionAST> ParseTopLevelExpr();
std::unique_ptr<PrototypeAST> ParsePrototype();
std::unique_ptr<ExprAST> LogError(const char *Str);
std::unique_ptr<PrototypeAST> LogErrorP(const char *Str);

#ifdef __cplusplus
}
#endif
