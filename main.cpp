#include "token.hpp"
#include "tokenizer.hpp"
#include "constants.hpp"
#include <vector>
#include <string>
#include <iostream>
int main()
{
    Tokenizer t("123+34sdasdasd2312314fmds-2");
    t.Tokenize();
    t.Print();
    return 0;
}