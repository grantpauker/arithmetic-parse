#ifndef H_NODE
#define H_NODE
#include "token.hpp"
template <class T>
class Node
{
public:
  Node(T data) : data(data)
  {
    left = nullptr;
    right = nullptr;
  }
  Node *left;
  Node *right;
  T data;
};
typedef Node<Token*> TokenNode;
#endif
