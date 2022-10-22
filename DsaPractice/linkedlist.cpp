#include <iostream>
using namespace std;
// coding is very easy


class Node{
public:
  int data;
  Node* next;
  Node(int data){
    this -> data = data;
    next = NULL;
  }
};
Node* takeInput_better(){
  int data;
  cin>>data;
  Node* head = NULL;
  Node* tail = NULL;
  while (data != -1) {
    Node* newNode = new Node(data);
    if(head == NULL){
      head = newNode;
      tail = newNode;
    }else{
      tail->next = newNode;
      tail = newNode;
      // or
      // tail = tail->next;
    }
    cin>>data;
  }
  return head;
}
Node* takeInput(){
  int data;
  cin>>data;
  Node* head = NULL;
  while (data != -1) {
    Node* newNode = new Node(data);
    if(head == NULL){
      head = newNode;
    }else{
      Node*temp = head;
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = newNode;
    }
    cin>>data;
  }
  return head;
}
void print(Node* head){
  Node* temp = head;
  while (temp != NULL) {
    cout<<temp->data;
    if(temp->next != NULL){
      cout<<"->";
    }
    temp = temp->next;
  }
}
int main(){
/*Node n1(10);
  Node* head = &n1;
  Node n2(20);
  Node n3(30);
  Node n4(40);
  Node n5(50);
  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;*/
  Node*head = takeInput_better();
  print(head);
  // cout<<n1.data<<"->"<<n2.data<<"->"<<n3.data<<"->"<<n4.data<<"->"<<n5.data<<endl;
  // printing the first node's data with the help of head pointer
  // cout<<"printing the first node data with the help of the head";
  // cout<<head->data<<endl;
}
