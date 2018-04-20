#include <vector>
#include <string>
#include <iostream>
#include "include/token.hpp"
#include "include/number_token.hpp"

#include "include/tokenizer.hpp"
#include "include/symbols.hpp"
#include "include/token_handler.hpp"
#include "include/shunting_yard.hpp"
#include "include/expression.hpp"

int main()
{
    // std::string expr("12+34/56%7&89");
    std::vector<Token *> tmp;
    for (int i = 0; i < 10; i++)
    {
        tmp.push_back(new NumberToken(i));
    }

    Expression *exp = new Expression(tmp[0]);
    exp->PrintOwn();
    exp->InsertRight(tmp[1]);
    exp->GetRight()->PrintOwn();

    std::string expr("1+2*3");
    Tokenizer t(expr);
    std::vector<Token *> tokens = t.Tokenize();
    ShuntingYard shunt(tokens);
    tokens = shunt.Parse();
    TokenHandler handler(tokens);
    // handler.Print();
    return 0;
}