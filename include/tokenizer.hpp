#ifndef H_TOKENIZER
#define H_TOKENIZER
#include <string>
#include <vector>
#include "token.hpp"
#include "symbols.hpp"

class Tokenizer
{
public:
  Tokenizer(std::string);
  ~Tokenizer();
  std::vector<Token *> Tokenize();
  std::vector<Token *> tokens;

private:
  std::string source;
  std::string::iterator source_iter;
};
#endif