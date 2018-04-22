#include <vector>
#include <string>
#include <iostream>
#include <array>

#include "include/token.hpp"
#include "include/number_token.hpp"
#include "include/tokenizer.hpp"
#include "include/symbols.hpp"
#include "include/token_handler.hpp"
#include "include/shunting_yard.hpp"
#include "include/tree.hpp"
#include "include/node.hpp"

#define num(n) new NumberToken(n)
#define node(n) new Node<Token *>(num(n))

int main()
{
    Expression tr;
    tr.head = node(0);
    tr.head->left = node(1);
    tr.head->right = node(2);
    tr.Insert(num(3));
    // tr.PrintTree();

    std::string expr("12+34/56%7&89"); //34/36%7+12&89
    Tokenizer t(expr);
    std::vector<Token *> tokens = t.Tokenize();
    ShuntingYard shunt(tokens);
    tokens = shunt.Parse();
    TokenHandler handler(tokens);
    // handler.Print();
    return 0;
}