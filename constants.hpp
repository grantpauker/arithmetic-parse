#ifndef H_CONSTANTS
#define H_CONSTANTS
#include <map>
#include <string>
class Constants
{
  public:
    Constants();
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
  
};
#endif