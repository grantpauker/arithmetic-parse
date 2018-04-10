#ifndef H_NUMBER_TOKEN
#define H_NUMBER_TOKEN
#include <string>
#include "token.hpp"
class NumberToken : public Token
{
  public:
  NumberToken();
    void Print();
    std::string GetString();
    void Parse();
};
#endif
