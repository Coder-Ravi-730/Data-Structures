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

TreeNode<int>*  maxDataNode(TreeNode<int>* root)
{
  if(root == NULL)
  {
    return root;
  }

  TreeNode<int>* max = root;
  for(int i = 0; i < root->children.size() != 0; i = i + 1)
  {
    TreeNode<int>* maxchild  = maxDataNode(root->children[i]);
    if(maxchild -> data > max->data)
    {
      max = maxchild;
    }
  }

  return max;
}

int main(){
  TreeNode<int>* root = takeInput();
  printTree(root);
  TreeNode<int>* Final_Answer = maxDataNode(root);
  cout<<"Biggest Node in the tree is : "<<Final_Answer->data;
}
