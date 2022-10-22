#include <bits/stdc++.h>
#include <vector>
using namespace std;
template <typename T>
class BinaryTreeNode
{
public:
  T data;
  BinaryTreeNode* left;
  BinaryTreeNode* right;

  BinarySearchTree(T data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }

  ~BinaryTreeNode()
  {
    delete left;
    delete right;
  }
};
