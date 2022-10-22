#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInput()
{
    int data;
    printf("Enter the First Node of the Linked List\n");
    scanf("%d", &data);

    Node *head = NULL;

    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {

            Node *temp = head;
            while(temp->next  != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cin >> data;
    }
    return head;
}

void Print_ith_Node(Node *head, int i)
{
    int position = 0;
    Node *temp = head;
    while (temp!= NULL && position<i)
    {
        position = position + 1;
        temp = temp->next;
    }


    if(temp != NULL)
    {
        cout << temp->data;
    }
    
}


int main()
{
    Node *head = takeInput();
    int position;
    cin >> position;
    Print_ith_Node(head, position);
}
