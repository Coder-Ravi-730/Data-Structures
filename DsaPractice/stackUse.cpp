#include <bits/stdc++.h>
using namespace std;
// #include "stack.h"
#include "DynamicStack.h"
int main(){
	stackusingArray s;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	s.push(70);
	s.push(80);
	s.push(90);
	s.push(100);
	s.push(110);
	s.push(120);
	s.push(130);

	cout<<s.top()<<endl;

	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;

	cout<<"Size of the stack is :"<<s.size()<<endl;
	cout<<s.isEmpty()<<endl;
}