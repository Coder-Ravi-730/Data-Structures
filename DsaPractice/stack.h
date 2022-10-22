#include <climits>
#include <iostream>
class stackusingArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
		stackusingArray(int totalsize){
			data = new int[totalsize];
			nextIndex = 0;
			capacity = totalsize;
		}
		// To Know the size of the stack
		int size(){
			return nextIndex;
		}
		// To Know the stack is Empty or not
		bool isEmpty(){
			return nextIndex == 0;
		}
		// push Function to Insert the Element
		void push(int element){
			if(nextIndex == capacity){
				cout<<"Stack is full! Can't insert the Element"<<endl;
				return;
			}
			data[nextIndex] = element;
			nextIndex = nextIndex + 1;
		}
		// To Delete the element
		int pop(){
			if(nextIndex == 0){
				cout<<"Stack is Empty"<<endl;
				return INT_MIN;
			}
			nextIndex = nextIndex - 1;
			return data[nextIndex];
		}
		// To Access the TopMost Element
		int top(){
			if(nextIndex == 0){
				cout<<"Stack is Empty"<<endl;
				return INT_MIN;
			}
			return data[nextIndex - 1];
		}

};