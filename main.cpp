#include <vector>
#include <string>
#include <iostream>
#include <signal.h>
#include "include/token.hpp"
#include "include/tokenizer.hpp"
#include "include/symbols.hpp"
#include "include/token_handler.hpp"
#include "include/shunting_yard.hpp"

int main()
{
    Tokenizer t("12+34/56%7&89");
    std::vector<Token *> tokens = t.Tokenize();
    ShuntingYard shunt(tokens);
    tokens = shunt.Parse();
    TokenHandler handler(tokens);
    handler.Print();
    return 0;
}