#include<bits/stdc++.h>
#include "BinaryTreeClass.h"
using namespace std;

void print(BinaryTreeNode<int>* root)
{
  if(root == NULL)
  {
    return;
  }
  cout<<root->data<<":";
  if(root->left != NULL)
  {
    cout<<"Left->"<<root->left->data;
  }
  if(root->right != NULL)
  {
    cout<<"Right->"<<root->right->data;
  }
  cout<<endl;
  print(root->left);
  print(root->right);
}

int main()
{
  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(1);
  BinaryTreeNode<int>* node1 = new BinaryTreeNode<int>(2);
  BinaryTreeNode<int>* node2 = new BinaryTreeNode<int>(3);

  root->left = node1;
  root->right = node2;

  print(root);
  delete root;
}
