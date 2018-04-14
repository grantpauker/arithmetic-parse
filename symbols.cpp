#include <map>
#include <string>
#include "symbols.hpp"
const extern std::map<std::string, Operator> operator_kinds = {
    {"*", Operator::MULT},
    {"/", Operator::DIV},
    {"%", Operator::MOD},
    {"+", Operator::ADD},
    {"-", Operator::SUB},
    {"&", Operator::AND},
    {"^", Operator::EXP},
    {"|", Operator::OR},
};

const extern std::map<Operator, std::string> operator_names =
    {
        {Operator::MULT, "+"},
        {Operator::DIV, "/"},
        {Operator::MOD, "%"},
        {Operator::ADD, "+"},
        {Operator::SUB, "-"},
        {Operator::AND, "&"},
        {Operator::EXP, "^"},
        {Operator::OR, "|"},
};
bool IsOperator(std::string c)
{
    return operator_kinds.find(c) != operator_kinds.end();
}