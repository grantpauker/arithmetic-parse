#include "shunting_yard.hpp"
ShuntingYard::ShuntingYard(std::vector<Token *> tokens) : tokens(tokens) {}
std::vector<Token *> ShuntingYard::Parse()
{
    parsed = tokens;
    return parsed;
}