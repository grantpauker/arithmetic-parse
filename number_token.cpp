#include "number_token.hpp"
#include <iostream>
NumberToken::NumberToken(int val) : val(val)
{
}
void NumberToken::Print()
{
    std::cout << "Int: " << val << std::endl;
    return;
}
std::string NumberToken::GetString()
{
    return std::to_string(val);
}
void NumberToken::Parse()
{
    return;
}