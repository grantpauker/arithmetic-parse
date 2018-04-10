#ifndef H_NUMBER_TOKEN
#define H_NUMBER_TOKEN
#include <string>
#include "token.hpp"
class NumberToken : public Token
{
public:
  NumberToken(int);
  void Print();
  std::string GetString();
  void Parse();
  int val;
};
#endif
