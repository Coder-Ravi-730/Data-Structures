#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    int *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};



class Stack
{
public:
    Node *head;
    int size;

public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    int getszie()
    {
        return size;
    }
    void push(int element)
    {
        Node *newNode = new Node(element);
    }
};
int main()
{
    int a;
    cout << a << endl;
}
//Recursion also uses stack 