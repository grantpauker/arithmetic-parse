
#include "tokenizer.hpp"
#include "symbols.hpp"
#include <iostream>
Tokenizer::Tokenizer(std::string source) : source(source)
{
}
Tokenizer::~Tokenizer()
{
    tokens.~vector<Token *>();
}
std::vector<Token *> Tokenizer::Tokenize()
{
    std::string::iterator it = source.begin();
    while (it != source.end())
    {
        tokens.push_back(Token::GetToken(&it));
    }
    return tokens;
}
