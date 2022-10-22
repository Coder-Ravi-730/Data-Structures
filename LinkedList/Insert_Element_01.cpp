#include <iostream>
using namespace std;
#include "NodeClass.cpp"

Node *takeInput()
{
    int data;
    cout << "Enter the First Node of the Linked List" << endl;
    cin >> data;
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
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newNode;
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

Node*  Insert(Node *head, int data, int position)
{
    Node *newNode = new Node(data);
    int count = 0;
    Node *temp = head;
    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    while(temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count = count + 1;
    }
    if (temp!= NULL)
    {
        Node* temp_01 = temp->next;
        temp->next = newNode;
        newNode->next = temp_01;
    }
    return head;
}
int main()
{
    Node *head = takeInput();
    print(head);
    int i, data;
    cin >> i >> data;
    head =  Insert(head, data, i);
    print(head);
}
