#include <map>
#include "symbols.hpp"
const extern std::map<char, Operators> operator_kinds = {
    {'*', Operators::MULT},
    {'/', Operators::DIV},
    {'%', Operators::MOD},
    {'+', Operators::ADD},
    {'-', Operators::SUB},
    {'&', Operators::AND},
    {'^', Operators::EXP},
    {'|', Operators::OR},
};

const extern std::map<Operators, std::string> operator_names =
    {
        {Operators::MULT, "+"},
        {Operators::DIV, "/"},
        {Operators::MOD, "%"},
        {Operators::ADD, "+"},
        {Operators::SUB, "-"},
        {Operators::AND, "&"},
        {Operators::EXP, "^"},
        {Operators::OR, "|"},
};
bool IsOperator(char c)
{
    return operator_kinds.find(c) != operator_kinds.end();
}