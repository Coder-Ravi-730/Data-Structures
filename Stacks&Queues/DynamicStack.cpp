#include <bits/stdc++.h>
using namespace std;
class StackUsingArray
{
private:
    int *data;
    int nextIndex;
    int capacity = 4;

public:
    StackUsingArray()
    {
        data = new int[capacity];
        nextIndex = 0;
    }
    // Returns the Number of Elements in the stacks
    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        if (nextIndex == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // Insert Element
    void push(int element)
    {
        int *newData = new int[2 * capacity];
        for (int i = 0; i < capacity; i++)
        {
            newData[i] = data[i];
        }
        capacity = capacity * 2;
        delete[] data;
        data = newData;

        /*
            if (nextIndex == capacity)
            {
                cout << "Stack is Full" << endl;
                return;
            }*/
        data[nextIndex] = element;
        nextIndex = nextIndex + 1;
    }
    // Delete an Element
    int pop()
    {
        // We Can Call the Size Function as Well to Check the Pop Function or isEmpty Function
        if (nextIndex == 0)
        {
            return INT_MIN;
        }
        nextIndex = nextIndex - 1;
        return data[nextIndex];
    }
    int top()
    {
        if (nextIndex == 0)
        {
            return INT_MIN;
        }
        return data[nextIndex - 1];
    }
};
int main()
{
    StackUsingArray s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout << s1.top() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;

    cout << s1.size() << endl;

    cout << s1.isEmpty() << endl;
}