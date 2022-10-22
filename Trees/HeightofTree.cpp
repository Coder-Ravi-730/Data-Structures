#include <bits/stdc++.h>
#include<vector>
#include <iostream>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInput()
{
  int rootData;
  cout<<"Enter the root Data"<<endl;
  cin>>rootData;
  TreeNode<int>* root = new TreeNode<int>(rootData);
  int N;
  cout<<"Enter the child of "<<rootData<<endl;
  cin>>N;
  for(int i = 0; i < N; i = i + 1)
  {
    TreeNode<int>* child = takeInput();
    root->children.push_back(child);
  }

  return root;
}

void printTree(TreeNode<int>* root)
{
  cout<<root->data<<":";
  for(int i = 0; i < root->children.size() != 0; i = i + 1)
  {
    cout<<root->children[i]->data<<",";
  }
  cout<<endl;
  for(int i = 0; i < root->children.size() != 0; i = i + 1)
  {
    printTree(root->children[i]);
  }
}

int getHeight(TreeNode<int>* root)
{
  if(root == NULL)
  {
    return 0;
  }

  int ans = root->data;

  for(int i = 0; i < root->children.size() != 0; i = i + 1)
  {
    int childHeight = getHeight(root->children[i]);
    if(childHeight > ans)
    {
      ans = childHeight;
    }
  }

  return ans;
}

int main()
{
  TreeNode<int>* root = takeInput();
  printTree(root);
}
