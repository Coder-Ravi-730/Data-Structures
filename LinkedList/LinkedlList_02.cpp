#include <bits/stdc++.h>
using namespace std;
#include "NodeClass.cpp"

void print(Node *n1)
{
    Node *temp = n1;
    while (temp!=NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    
}


void Increment(Node *n1)
{
    Node *temp = n1;
    while (temp!=NULL)
    {
        cout << temp->data << " "; 
        temp->data++;
        temp = temp->next;
    }
    
}

int main()
{
    // Dynamic Allocation
    Node *n1 = new Node(1);
    Node *temp = n1;
    Node *n2 = new Node(2);
    Node *n3 = new Node(3);
    Node *n4 = new Node(4);
    Node *n5 = new Node(5);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    Increment(n1);
    print(n1);
}