// #include <bits/stdc++.h>
#include <iostream>
#include <stack>
using namespace std;
#include "stackUsingArray.cpp"
int main(){
    StackUsingArray s1(4);
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
