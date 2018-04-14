
#include <iostream>
#include "../include/tokenizer.hpp"
#include "../include/symbols.hpp"
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
