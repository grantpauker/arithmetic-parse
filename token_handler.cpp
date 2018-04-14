#include "token_handler.hpp"
TokenHandler::TokenHandler(std::vector<Token *> tokens) : tokens(tokens) {}

void TokenHandler::Print()
{
    for (std::vector<Token *>::iterator it = tokens.begin(); it != tokens.end(); it++)
    {
        if ((*it) != NULL)
        {
            (*it)->Print();
        }
    }
    return;
}