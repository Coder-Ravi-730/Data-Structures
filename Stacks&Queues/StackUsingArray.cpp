// #include <bits/stdc++.h>
// #include <climits>
// using namespace std;
// class StackUsingArray
// {
// private:
//     int *data;
//     int nextIndex;
//     int capacity;

// public:
//     StackUsingArray(int totalSize)
//     {
//         data = new int[totalSize];
//         nextIndex = 0;
//         capacity = totalSize;
//     }
//     // Returns the Number of Elements in the stacks
//     int size()
//     {
//         return nextIndex;
//     }
//     bool isEmpty()
//     {
//         if (nextIndex == 0)
//         {
//             return true;
//         }
//         else
//         {
//             return false;
//         }
//     }
//     // Insert Element
//     void push(int element)
//     {
//         if (nextIndex == capacity)
//         {
//             cout << "Stack is Full" << endl;
//             return;
//         }
//         data[nextIndex] = element;
//         nextIndex = nextIndex + 1;
//     }
//     // Delete an Element
//     int pop()
//     {
//         // We Can Call the Size Function as Well to Check the Pop Function or isEmpty Function
//         if (nextIndex == 0)
//         {
//             return INT_MIN;
//         }
//         nextIndex = nextIndex - 1;
//         return data[nextIndex];
//     }
//     // To Access the top most element in our stack
//     int top()
//     {
//         if (nextIndex == 0)
//         {
//             return INT_MIN;
//         }
//         return data[nextIndex - 1];
//     }
// };

// #include <bits/stdc++.h>
// #include <climits>
// class StackusingArray
// {
//     int *data;
//     int nextIndex = 0;
//     int capacity;

// public:
//     StackusingArray(int totalSize)
//     {
//         data = new int[totalSize];
//         nextIndex = 0;
//         int capacity = totalSize;
//     }

//     // This will return the size of our stack
//     int size()
//     {
//         return nextIndex;
//     }

//     bool isEmpty()
//     {
//         if(nextIndex == 0)
//         {
//             return;
//         }

//         return nextIndex == 0;
//     }
    
//     void push(int element)
//     {
//         if(nextIndex == capacity)
//         {
//             cout << "Stack is full" << endl;
//             return;
//         }
//         data[nextIndex] = element;
//         nextIndex = nextIndex + 1;
//     }

//     // To delete an element
//     int pop()
//     {
//         if(isEmpty())
//         {
//             return INT_MIN;
//         }

//         return data[nextIndex];
//     }
// };


#include <bits/stdc++.h>
#include <iostream>
#include <climits>
using namespace std;
class stackArray{
private:
    int *data;
    int nextIndex;
    int capacity;
public:
    stackArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    int size(){
        return nextIndex;
    }
    int isEmpty(){
        return nextIndex == 0;
    }
    void push_back(int element){
        if(nextIndex == capacity){
            printf("stack is Full \n");
        }data[nextIndex] = element;
        nextIndex = nextIndex + 1;
    }
    int pop_back(){
        if(nextIndex == 0)
        {
            printf("Stack is Empty! \n");
        }nextIndex = nextIndex - 1;
        return data[nextIndex];
    }
    int top(){
        if(nextIndex == 0)
        {
            return 9999999;
        }
        return data[nextIndex - 1];
    }

};

int main() {
	// your code goes here
    stackArray s(4);
    s.push_back(10);
    s.push_back(20);
    s.push_back(30);
    s.push_back(40);
    s.pop_back();
    s.pop_back();
    s.top();
	return 0;
}

