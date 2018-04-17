#ifndef H_SYMBOLS
#define H_SYMBOLS
#include <map>
#include <string>
enum class Operator
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
enum class TokenKind
{
    INT,
    OPERATOR,
};
const extern std::map<std::string, Operator> operator_kinds;
const extern std::map<Operator, std::string> operator_names;

bool IsOperator(std::string);
#endif