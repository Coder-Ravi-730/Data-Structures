#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include "BinaryTreeClass.h"
using namespace std;

BinaryTreeNode<int> *takeInputLevelWise()
{
  int rootData;
  cout << "Enter the rootData" << endl;
  cin >> rootData;
  if (rootData == -1)
  {
    return NULL;
  }
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
  queue<BinaryTreeNode<int> *> pendingnodes;
  pendingnodes.push(root);

  while (pendingnodes.size() != 0)
  {
    BinaryTreeNode<int> *front = pendingnodes.front();
    pendingnodes.pop();

    cout << "Enter the Left Child of " << front->data << endl;
    int leftChildData;
    cin >> leftChildData;
    if (leftChildData != -1)
    {
      BinaryTreeNode<int> *child = new BinaryTreeNode<int>(leftChildData);
      front->left = child;
      pendingnodes.push(child);
    }
    cout << "Enter the Right of" << front->data << endl;
    int rightChildData;
    cin >> rightChildData;
    if (rightChildData != -1)
    {
      BinaryTreeNode<int> *child = new BinaryTreeNode<int>(rightChildData);
      front->right = child;
      pendingnodes.push(child);
    }
  }

  return root;
}

void print(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << ":";
  if (root->left != NULL)
  {
    cout << "Left->" << root->left->data;
  }
  if (root->right != NULL)
  {
    cout << "Right->" << root->right->data;
  }
  cout << endl;
  print(root->left);
  print(root->right);
}

bool findNode(BinaryTreeNode<int> *root, int x)
{
  if (root == NULL)
  {
    return 0;
  }
  else if (root->data == x)
  {
    return true;
  }
  return findNode(root->left, x) || findNode(root->right, x);
}
// Test Case
// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1
int main()
{

  BinaryTreeNode<int> *root = takeInputLevelWise();
  print(root);
  int x;
  cout << "Enter the node you want to search" << endl;
  cin >> x;
  cout << "Node is : " << findNode(root, x);
  delete root;
}
