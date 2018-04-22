#include <iostream>
#include "../include/number_token.hpp"
NumberToken::NumberToken(int val) : val(val)
{
}
void NumberToken::Print(std::ostream &os) const
{
    os << val;
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
TokenKind NumberToken::GetKind(void)
{
    return TokenKind::INT;
}