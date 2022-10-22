#include <iostream>
#include "TreeNode.h"
using namespace std;


TreeNode<int> *takeInput_Level_Wise()
{
  int rootData;

  cout << "Enter the root data" << endl;
  cin >> rootData;

  TreeNode<int> *root = new TreeNode<int>(rootData);

  queue<TreeNode<int> *> pendingNodes;
  pendingNodes.push(root);

  while (pendingNodes.size() != 0)
  {
    TreeNode<int> *front = pendingNodes.front();
    pendingNodes.pop();

    cout << "Enter the Number of child of " << front->data << endl;
    int numChild;
    cin >> numChild;

    for (int i = 0; i < numChild; i = i + 1)
    {
      int childData;
      cout << "Enter the " << i << "th child of " << front->data << endl;
      cin >> childData;
      TreeNode<int> *child = new TreeNode<int>(childData);
      front->children.push_back(child);
      pendingNodes.push(child);
    }
  }

  return root;
}

void preOrder(TreeNode<int>* root)
{
  if(root == NULL)
  {
    return;
  }
  cout<<root->data<<",";
  for(int i = 0; i < root->children.size(); i = i + 1)
  {
    preOrder(root->children[i]);
  }
}

void postOrder(TreeNode<int>* root)
{
  if(root == NULL)
  {
    return;
  }
  for(int i = 0; i < root->children.size(); i = i + 1)
  {
    postOrder(root->children[i]);
  }
  cout<<root->data<<" ";
}

void printTree(TreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << ",";

  for (int i = 0; i < root->children.size() != 0; i = i + 1)
  {
    cout << root->children[i]->data << ",";
  }
  cout << endl;

  for (int i = 0; i < root->children.size(); i = i + 1)
  {
    printTree(root->children[i]);
  }
}

void deleteTree (TreeNode<int>* root)
{
  for(int i = 0; i < root->children.size(); i = i + 1)
  {
    deleteTree(root->children[i]);
  }

  delete root;
}

int main()
{
  TreeNode<int>* root = takeInput_Level_Wise();
  printTree(root);
  preOrder(root);
  cout<<"Below is Post order"<<endl;
  postOrder(root);
  deleteTree(root);
}
