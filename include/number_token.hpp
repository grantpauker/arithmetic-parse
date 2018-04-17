#ifndef H_NUMBER_TOKEN
#define H_NUMBER_TOKEN
#include <string>
#include "token.hpp"
#include "symbols.hpp"
class NumberToken : public Token
{
public:
  NumberToken(int);
  void Print();
  std::string GetString();
  void Parse();
  TokenKind GetKind(void);
  
  int val;
};
#endif
