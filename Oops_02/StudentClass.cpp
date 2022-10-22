#include <bits/stdc++.h>
using namespace std;
class Student
{
    int age;
    public:
    char *name;
    public:
    Student(int age,char *name)
    {
        this->age = age;
        // Shallow Copy :Idealy we should avoid this.
        // this->name = name;

        // Deep copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // Copy Constructor
    Student(Student const &s)
    {
        this->age = s.age;
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    void display()
    {
        cout << age << " " << name << endl;
    }
};
