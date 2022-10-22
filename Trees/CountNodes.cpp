#include <iostream>
#include <vector>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInput()
{
  int rootData;

  cout<<"Enter The Root Data"<<endl;
  cin>>rootData;
  TreeNode<int>* root =  new TreeNode<int>(rootData);

  int N;

  cout<<"Enter the Number of child of "<<rootData<<endl;
  cin>>N;

  for(int i = 0; i < N; i = i + 1)
  {
    TreeNode<int>* child = takeInput();
    root->children.push_back(child);
  }

  return root;
}

void printTree(TreeNode<int> *root)
{
    // Edge Case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";
    for (int i = 0; i < root->children.size(); i = i + 1)
    {
        cout << root->children[i]->data << ", ";
    }
    cout << endl;
    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int numNode(TreeNode<int>* root)
{
  int ans = 1;
  for(int i = 0; i < root->children.size(); i = i + 1)
  {
    ans = ans + numNode(root->children[i]);
  }

  return ans;
}

int main()
{
  TreeNode<int>* root = takeInput();
  printTree(root);
  cout<<numNode(root)<<endl;
}
