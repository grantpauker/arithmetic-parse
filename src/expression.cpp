#include <iostream>
#include "../include/expression.hpp"
Expression::Expression(Token *data, Token *left_data, Token *right_data) : data(data)
{
    left = new Expression(left_data);
    right = new Expression(right_data);
}
Expression::Expression(Token *data) : data(data)
{
    left = nullptr;
    right = nullptr;
}

void Expression::PushLeft(Token *data)
{
    left = new Expression(data);
}
void Expression::PushRight(Token *data)
{
    right = new Expression(data);
    return;
}
void Expression::PushLeft(Expression *exp)
{
    left = exp;
}
void Expression::PushRight(Expression *exp)
{
    right = exp;
    return;
}
void Expression::InsertLeft(Token *data)
{
    Expression *new_root = new Expression(data);
    new_root->PushLeft(this);
    *this = *new_root;
}
void Expression::InsertRight(Token *data)
{
    Expression *new_root = new Expression(data);
    new_root->PushRight(this);
    *this = *new_root;
}
Expression *Expression::GetLeft()
{
    return left;
}
Expression *Expression::GetRight()
{
    return right;
}
void Expression::PrintOwn()
{
    data->Print();
    return;
}
