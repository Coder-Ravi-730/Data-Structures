#include <iostream>
using namespace std;

class Student
{
public:
    int age;
    const int rollNumber;
    Student(int r) : rollNumber(r)
    {
    }
};

int main()
{
    Student s1(101);
    s1.age = 20;
}