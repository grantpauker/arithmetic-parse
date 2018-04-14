#include <iostream>
#include "../include/token.hpp"
#include "../include/number_token.hpp"
#include "../include/operator_token.hpp"
#include "../include/symbols.hpp"

Token *Token::GetToken(std::string::iterator *it)
{
    std::string::iterator tmp_it = *it;
    std::string tok_str;
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
    else if (IsOperator(std::string(tmp_it, std::next(tmp_it, 1))))
    {
        tmp_it++;
        tok_str = std::string(*it, tmp_it);
        *it = tmp_it;
        return new OperatorToken(operator_kinds.at(tok_str));
    }
    while (!isdigit(**it) && !IsOperator(std::string(*it, std::next(*it, 1))))
    {
        (*it)++;
    }
    return NULL;
}