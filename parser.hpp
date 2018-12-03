#ifndef H_PARSER
#define H_PARSER
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

class Parser
{
  public:
    std::string expression;
    std::string::iterator nextchar;
    std::vector<std::string> output;
    std::vector<std::string> stack;
    std::vector<std::string> operators;

    Parser(std::string in_expression)
    {
        operators = {"*", "/", "%", "+", "-"};

        expression = in_expression;
        nextchar = expression.begin();
    }
    void parse()
    {
        do
        {
            std::string buf;
            if (isDigit())
            {
                while (isDigit())
                {
                    buf += *nextchar;
                    getNextChar();
                }
                --nextchar;
                output.push_back(buf);
            }
            else if (isOperator())
            {
                std::string buf(1, *nextchar);
                if (!stack.empty())
                {
                    while (getPrecedence(stack.back()) < getPrecedence(std::string(buf)))
                    {
                        output.push_back(stack.back());
                        stack.pop_back();
                    }
                }
                stack.push_back(buf);
            }
            else if (isLeftBracket())
            {
                std::string buf(1, *nextchar);
                stack.push_back(buf);
            }
            else if (isRightBracket())
            {
                while (stack.back() != "(")
                {
                    output.push_back(stack.back());
                    stack.pop_back();
                }
                stack.pop_back();
            }
            else
            {
                buf = *nextchar;
            }
        } while (getNextChar());

        while (!stack.empty())
        {
            output.push_back(stack.back());
            stack.pop_back();
        }
    }
    bool getNextChar()
    {
        ++nextchar;
        return (nextchar != expression.end());
    }

    int getPrecedence(std::string op)
    {
        ptrdiff_t pos = std::find(operators.begin(), operators.end(), op) - operators.begin();
        return pos;
    }

    bool isDigit()
    {
        return std::isdigit(*nextchar);
    }

    bool isOperator()
    {
        for (auto op : operators)
        {
            if (*nextchar == op[0])
            {
                return true;
            }
        }
        return false;
    }

    bool isLeftBracket()
    {
        return *nextchar == '(';
    }

    bool isRightBracket()
    {
        return *nextchar == ')';
    }

    void printOutput()
    {
        for (auto s : output)
        {
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
};
#endif

