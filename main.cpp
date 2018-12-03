#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "parser.hpp"

int main()
{
    Parser p("((1+2)/3)*40+(10/(7+3))");
    p.parse();
    p.printOutput();
    return 0;
}