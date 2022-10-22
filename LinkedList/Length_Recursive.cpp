#include <bits/stdc++.h>
#include <iostream>
#include "NodeClass.cpp"

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

int Recursive_Length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }

    int Recursion_length = Recursive_Length(head->next);
    return Recursion_length + 1;
}

int main()
{
    Node *head = takeInput();
    cout << Recursive_Length(head);
}