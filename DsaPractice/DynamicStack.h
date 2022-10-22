#include <climits>
#include <iostream>
class stackusingArray{
	int *data;
	int nextIndex;
	int capacity;
	public:
		stackusingArray(){
			data = new int[4];
			nextIndex = 0;
			capacity = 4;
		}
		// To Know the size of the stack
		int size(){
			return nextIndex;
		}
		// To Know the stack is Empty or not
		bool isEmpty(){
			return nextIndex == 0;
		}
		// push Function to Insert the Element Dynamically
		void push(int element){
			if(nextIndex == capacity){
				int *newData = new int[2 * capacity];
				for(int i = 0; i < capacity; i = i + 1){
					newData[i] = data[i];
				}
				capacity = 2 *  capacity;
				delete [] data;
				data = newData;
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