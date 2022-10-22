#include <iostream>
#include <bits/stdc++.h>
#include "NodeClass.cpp"
using namespace std;

Node *takeInput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            // or
            // tail = newNode
        }
        else
        {
            tail->next = newNode;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int length(Node *head)
{
    int length_01 = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        length_01 = length_01 + 1;
        temp = temp->next;
    }
    return length_01;
}

int main()
{

    Node *head = takeInput();
    cout << length(head)<<endl;
}