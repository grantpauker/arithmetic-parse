#include "tokenizer.hpp"
#include "token.hpp"
#include <vector>
class Toeknizer
{
  public:
    std::vector<Token *> Tokenize();
    std::vector<Token *> tokens;

};