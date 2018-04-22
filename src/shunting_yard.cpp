#include <iostream>
#include "../include/symbols.hpp"
#include "../include/shunting_yard.hpp"
#include "../include/operator_token.hpp"
#include "../include/tree.hpp"
#include "../include/node.hpp"

ShuntingYard::ShuntingYard(std::vector<Token *> tokens) : tokens(tokens) {}
std::vector<Token *> ShuntingYard::Parse()
{
    Expression result;
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
                    if (!result.head)
                    {
                        result.head = new TokenNode(*it2);
                        result.head->left = new TokenNode(output.rbegin()[0]);
                        result.head->right = new TokenNode(output.rbegin()[1]);
                        output.pop_back();
                        output.pop_back();
                    }
                    else
                    {

                        result.Insert(*it2);
                        result.head->right = new TokenNode(output.rbegin()[0]);
                        output.pop_back();
                    }

                    stack.erase(it2);
                }
                stack.insert(stack.begin(), *it);
            }
        }
    }
    for (std::vector<Token *>::iterator it3 = stack.begin(); it3 != stack.end(); it3++)
    {
        result.Insert(*it3);
        result.head->right = new TokenNode(output.rbegin()[0]);
    }
    result.PrintTree();

    return output;
}