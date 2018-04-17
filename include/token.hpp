#ifndef H_TOKEN
#define H_TOKEN
#include <string>
#include "symbols.hpp"

class Token
{
public:
  virtual void Print() = 0;
  virtual std::string GetString() = 0;
  virtual void Parse() = 0;
  virtual TokenKind GetKind() = 0;
  static Token *GetToken(std::string::iterator *);
};
#endif