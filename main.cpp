#include "token.hpp"
#include "tokenizer.hpp"
#include "symbols.hpp"
#include <vector>
#include <string>
#include <iostream>
int main()
{
    Tokenizer t("12+34/56%7&89");
    t.Tokenize();
    t.Print();
    return 0;
}