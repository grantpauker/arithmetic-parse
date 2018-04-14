#ifndef H_TOKEN
#define H_TOKEN
#include <string>

class Token
{
public:
  virtual void Print() = 0;
  virtual std::string GetString() = 0;
  virtual void Parse() = 0;
  static Token *GetToken(std::string::iterator *);
};
#endif