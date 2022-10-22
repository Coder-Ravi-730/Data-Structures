#include <bits/stdc++.h>
using namespace std;
// #include "QueuesUsingArray.h"

template <typename T>
class QueueUsingArray
{
public:
    T *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;

public:
    QueueUsingArray(int s)
    {
        data = new T[s];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = s;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T element)
    {
        if (size == capacity)
        {
            printf("Queue si Full!\n");
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;

        if (firstIndex == -1)
        {
            firstIndex = 0;
        }
        size = size + 1;
    }

    T front()
    {
        if (isEmpty())
        {
            printf("Queue is Empty!\n");
            return 0;
        }
        return data[firstIndex];
    }
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty ! " << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
};


int main()
{
    QueueUsingArray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
}