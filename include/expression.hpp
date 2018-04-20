#ifndef H_EXPRESSION
#define H_EXPRESSION
#include "token.hpp"
enum class Direction
{
  LEFT,
  RIGHT,
};
class Expression
{
public:
  Expression(Token *, Token *, Token *);
  Expression(Token *);
  void PushLeft(Token *);
  void PushRight(Token *);
  void PushLeft(Expression *);
  void PushRight(Expression *);
  void InsertLeft(Token *);
  void InsertRight(Token *);
  Expression *GetLeft();
  Expression *GetRight();

  void PrintOwn();

private:
  Expression *left;
  Expression *right;
  Token *data;
};
#endif