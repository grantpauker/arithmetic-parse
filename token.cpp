#include <iostream>
#include "token.hpp"
#include "number_token.hpp"
#include "symbols.hpp"
Token *Token::GetToken(std::string::iterator *it)
{
    std::string::iterator tmp_it = *it;
    std::string tok_str;
    Symbols sym;
    sym = Symbols();
    if (isdigit(*tmp_it))
    {
        while (isdigit(*tmp_it))
        {
            tmp_it++;
        }
        tok_str = std::string(*it, tmp_it);
        *it = tmp_it;
        return new NumberToken(std::stoi(tok_str));
    }
    else if (sym.IsOperator(*tmp_it)){
        std::cout << "IsOperator: " << *tmp_it << std::endl;
    }
        while (!isdigit(**it))
        {
            (*it)++;
        }
    return NULL;
}