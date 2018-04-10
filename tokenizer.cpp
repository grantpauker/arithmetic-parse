
#include "tokenizer.hpp"
#include <iostream>
Tokenizer::Tokenizer(std::string source) : source(source)
{
}
Tokenizer::~Tokenizer(){
    tokens.~vector<Token *>();
}

std::vector<Token *> Tokenizer::Tokenize()
{
    source_iter = source.begin();
    while (source_iter != source.end())
    {
        std::cout << *source_iter << std::endl;
        ++source_iter;
    }
}
