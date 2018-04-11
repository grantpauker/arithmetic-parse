#include "token.hpp"
#include "tokenizer.hpp"
#include "constants.hpp"
#include <vector>
#include <string>
#include <iostream>
int main()
{
    Constants constants();
    std::string source = "123+34";
    std::string::iterator it = source.begin();
    std::vector<Token *> tokens;
    tokens.push_back(Token::GetToken(&it));
    std::cout << *it << std::endl;
    for (std::vector<Token *>::iterator it2 = tokens.begin(); it2 < tokens.end(); it2++)
    {
        (*it2)->Print();
    }
    // std::string source = ;
    // Tokenizer t("d");
    // t.Tokenize();
    return 0;
}