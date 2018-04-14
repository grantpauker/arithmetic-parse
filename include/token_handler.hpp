#ifndef H_TOKEN_HANDLER
#define H_TOKEN_HANDLER
#include <vector>
#include "token.hpp"
class TokenHandler
{
  public:
    TokenHandler(std::vector<Token *>);
    void Print();
  private:
    std::vector<Token *> tokens;
};

#endif