#ifndef H_OPERATOR_TOKEN
#define H_OPERATOR_TOKEN
#include <string>
#include "token.hpp"
#include "symbols.hpp"
class OperatorToken : public Token
{
public:
  OperatorToken(Operators);
  void Print();
  std::string GetString();
  void Parse();
  Operators val;
};
#endif
