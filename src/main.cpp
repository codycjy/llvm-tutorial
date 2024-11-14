// src/main.cpp
#include "parser.h"
#include "driver.h"
#include <cstdio>
#include <map>


int main() {
  // Install standard binary operators.
  // 1 is lowest precedence.
  kaleidoscope::BinopPrecedence['<'] = 10;
  kaleidoscope::BinopPrecedence['+'] = 20;
  kaleidoscope::BinopPrecedence['-'] = 20;
  kaleidoscope::BinopPrecedence['*'] = 40; // highest.

  // Prime the first token.
  fprintf(stderr, "ready> ");
  kaleidoscope::getNextToken();

  // Run the main "interpreter loop" now.
  MainLoop();

  return 0;
}
