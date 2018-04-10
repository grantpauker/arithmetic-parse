#include "number_token.hpp"
#include <iostream>
NumberToken::NumberToken(int val) : val(val)
{
}
void NumberToken::Print()
{
    std::cout << "KIND: int, VAL: " << val << std::endl;
    return;
}
std::string NumberToken::GetString()
{
    return "hello world";
}
void NumberToken::Parse()
{
    return;
}