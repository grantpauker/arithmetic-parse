#ifndef H_TREE
#define H_TREE
#include <iostream>
#include "token.hpp"
#include "node.hpp"

template <class T>
class Tree
{
public:
  Node<T> *head = nullptr;
  Tree() {}
  void Insert(T data)
  {
    Node<T> *new_head = new Node<T>(data);
    new_head->left = head;
    head = new_head;
  }
  void PrintTree()
  {
    PrintNode(head, 0);
  }

private:
  void PrintNode(Node<T> *to_print, int indent)
  {
    if (!to_print)
    {
      return;
    }
    PrintNode(to_print->left, indent + 2);
    PrintNode(to_print->right, indent + 2);
    for (int i = indent; i > 0; i--)
    {
      std::cout << ' ';
    }
    std::cout << to_print->data << std::endl;

    return;
  }
};
typedef Tree<Token *> Expression;
#endif
