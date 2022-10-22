#include <bits/stdc++.h>
using namespace std;
#include "NodeClass.cpp"
void print(Node *head)
{
    while (head!= NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()

{
    Node n1(100);
    Node *head = &n1;

    Node n2(200);
    n1.next = &n2;

    Node n3(300);
    n2.next = &n3;

    Node n4(400);
    n3.next = &n4;

    Node n5(500);
    n4.next = &n5;

    print(head);
    

}
