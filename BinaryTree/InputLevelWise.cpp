#include <iostream>
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

BinaryTreeNode<int>* takeInputLevelWise()
{
  int rootData;
  cout<<"Enter the rootData"<<endl;
  cin>>rootData;
  if(rootData == -1)
  {
    return NULL;
  }
  BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
  queue<BinaryTreeNode<int>*> pendingnodes;
  pendingnodes.push(root);

  while(pendingnodes.size() != 0)
  {
    BinaryTreeNode<int>* front = pendingnodes.front();
    pendingnodes.pop();

    cout<<"Enter the Left Child of "<<front->data<<endl;
    int leftChildData;
    cin>>leftChildData;
    if(leftChildData != -1)
    {
      BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChildData);
      front->left = child;
      pendingnodes.push(child);
    }
    cout<<"Enter the Right of"<<front->data<<endl;
    int rightChildData;
    cin>>rightChildData;
    if(rightChildData != -1)
    {
      BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChildData);
      front->right = child;
      pendingnodes.push(child);
    }
  }

  return root;
}

int main()
{

  BinaryTreeNode<int>* root = takeInputLevelWise();
  print(root);
  delete root;
}
