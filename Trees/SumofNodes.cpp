#include<iostream>
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

int sum(TreeNode<int>* root)
{
  int answer = root->data;
  for(int i = 0; i < root->children.size() != 0; i = i + 1)
  {
    answer = answer + sum(root->children[i]);
  }

  return answer;
}


int main()
{
  TreeNode<int>* root = takeInput();
  printTree(root);

  cout<<"Sum is " <<sum(root);
}
