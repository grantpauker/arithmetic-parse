#ifndef H_SYMBOLS
#define H_SYMBOLS
#include <map>
#include <string>
class Symbols
{
  public:
    Symbols();
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
    std::map<char, Operators> operator_kinds;
    std::map<Operators, std::string> operator_names;
    bool IsOperator(char);
};
#endif