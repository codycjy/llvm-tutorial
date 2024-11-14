#ifndef KALEIDOSCOPE_TOKEN_H
#define KALEIDOSCOPE_TOKEN_H

// Token 定义
enum Token {
  tok_eof = -1,

  // 命令
  tok_def = -2,
  tok_extern = -3,

  // 主要 token
  tok_identifier = -4,
  tok_number = -5
};

#endif // KALEIDOSCOPE_TOKEN_H
