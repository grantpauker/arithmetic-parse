#ifndef H_SYMBOLS
#define H_SYMBOLS
#include <map>
#include <string>
enum class Operators
{
    MULT,
    DIV,
    MOD,
    ADD,
    SUB,
    AND,
    EXP,
    OR,
};
const extern std::map<char, Operators> operator_kinds;
const extern std::map<Operators, std::string> operator_names;

bool IsOperator(char);
#endif