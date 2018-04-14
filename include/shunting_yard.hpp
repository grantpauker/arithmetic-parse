#ifndef H_SHUNTING_YARD
#define H_SHUNTING_YARD
#include <vector>
#include "token.hpp"
class ShuntingYard
{
public:
  ShuntingYard(std::vector<Token *>);
  std::vector<Token *> Parse();

private:
  std::vector<Token *> tokens;
  std::vector<Token *> parsed;
};
#endif
