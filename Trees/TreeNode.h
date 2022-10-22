#include <bits/stdc++.h>
#include <vector>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    // You can add T data or it will assume by default.
    // vector<TreeNode<T> *> children;

    vector<TreeNode *> children;
    TreeNode(int data){
        this->data = data;
    }
};
