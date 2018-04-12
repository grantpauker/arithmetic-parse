#include "symbols.hpp"
#include <map>
Symbols::Symbols()
{
    operator_kinds['*'] = Operators::MULT;
    operator_kinds['/'] = Operators::DIV;
    operator_kinds['%'] = Operators::MOD;
    operator_kinds['+'] = Operators::ADD;
    operator_kinds['-'] = Operators::SUB;
    operator_kinds['&'] = Operators::AND;
    operator_kinds['^'] = Operators::EXP;
    operator_kinds['|'] = Operators::OR;

    operator_names[Operators::MULT] = "+";
    operator_names[Operators::DIV] = "/";
    operator_names[Operators::MOD] = "%";
    operator_names[Operators::ADD] = "+";
    operator_names[Operators::SUB] = "-";
    operator_names[Operators::AND] = "&";
    operator_names[Operators::EXP] = "^";
    operator_names[Operators::OR] = "|";
}
bool Symbols::IsOperator(char c)
{
    return operator_kinds.find(c) != operator_kinds.end();
}