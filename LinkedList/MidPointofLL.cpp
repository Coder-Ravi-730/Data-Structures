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
Node *MidPointofLInkedList(Node *head)
{
    Node *slow = head;
    Node *fast = head->next;
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    else
    {
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
    }
    return slow;
}
int main()
{
    Node *head = takeInput();
    Node *Fast = MidPointofLInkedList(head);
    int t;
    cin >> t;
    while (t--)
    {
        if (Fast != NULL)
        {
            cout << Fast->data;
        }
        cout << endl;
    }
}
