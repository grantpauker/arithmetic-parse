#include "token.hpp"
#include "tokenizer.hpp"
#include <vector>
#include <string>
int main()
{
    std::vector<Token *> tokens;
    for (char c = '0'; c - '0' < 9; c++)
    {
        tokens.push_back(Token::GetToken(c));
    }
    for (std::vector<Token *>::iterator it = tokens.begin(); it < tokens.end(); it++)
    {
        (*it)->Print();
    }
    // std::string source = ;
    Tokenizer t("d");
    t.Tokenize();
    return 0;
}