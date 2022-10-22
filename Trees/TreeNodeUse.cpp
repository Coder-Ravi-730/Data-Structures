#include <iostream>
#include <queue>
#include "TreeNode.h"
using namespace std;

TreeNode<int>* takeInput()
{
  int rootData;

  cout<<"Enter the root data"<<endl;
  cin>>rootData;

  TreeNode<int>* root = new TreeNode<int>(rootData);

  int N;

  cout<<"Enter the Children of "<<rootData<<endl;
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

int main()
{
    /*TreeNode<int> *root = new TreeNode<int>(1);
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2);*/
    TreeNode<int> *root = takeInput();
    printTree(root);
    // TODO delete the Tree.
    return 0;
}
