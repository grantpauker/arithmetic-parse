#include <iostream>
#include <string>
#include "operator_token.hpp"
OperatorToken::OperatorToken(Operator val) : val(val){}

void OperatorToken::Print()
{
    std::cout << "Operator: " << operator_names.at(val) << std::endl;
    return;
}
std::string OperatorToken::GetString()
{
    return operator_names.at(val);
}
void OperatorToken::Parse()
{
    return;
}