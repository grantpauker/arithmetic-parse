#include <iostream>
#include "../include/symbols.hpp"
#include "../include/shunting_yard.hpp"
#include "../include/operator_token.hpp"
ShuntingYard::ShuntingYard(std::vector<Token *> tokens) : tokens(tokens) {}
std::vector<Token *> ShuntingYard::Parse()
{
    std::vector<Token *> stack;
    for (std::vector<Token *>::iterator it = tokens.begin(); it != tokens.end(); it++)
    {
        if ((*it) != NULL)
        {
            if ((*it)->GetKind() == TokenKind::INT)
            {
                output.push_back(*it);
            }
            else if ((*it)->GetKind() == TokenKind::OPERATOR)
            {
                std::vector<Token *>::iterator it2 = stack.begin();
                while (it2 != stack.end() && (int)dynamic_cast<OperatorToken *>(*it)->val >= (int)dynamic_cast<OperatorToken *>(*it2)->val)
                {
                    output.push_back(*it2);
                    stack.erase(it2);
                }
                stack.insert(stack.begin(), *it);
            }
        }
    }
    for (std::vector<Token *>::iterator it3 = stack.begin(); it3 != stack.end(); it3++)
    {
        output.push_back(*it3);
    }

    return output;
}