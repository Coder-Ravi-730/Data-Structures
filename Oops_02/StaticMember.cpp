#include<iostream>
using namespace std;

class student
{   
    public:
    int age;
    int rollNumber;
    static int TotalStudents;
    student()
    {
        TotalStudents = TotalStudents + 1;
    }
};

int student ::TotalStudents;

int main()
{
    student s1;
    student s2;
    student s3;
    student s4;
    student s5;
    student s6;
    student s7;
    s1.age = 10;
    s1.rollNumber = 10;

    // cout << s1.age << " " << s1.rollNumber << endl;
    // cout << s1.TotalStudents << endl;//Logically it is not correct,although compiler will allow us to do this,it will not throw any Error.
    cout << student ::TotalStudents << endl;
    return 0;
}
