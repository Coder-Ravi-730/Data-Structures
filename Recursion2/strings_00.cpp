#include <iostream>
using namespace std;
int main()
{
    // string s; //static allocation of it.
    // // dynamically allocated string
    // string *sp = new string;
    // *sp = "Hello_world";
    // cout << sp << endl;
    // cout << *sp << endl;
    // cout << "Enter the string" << endl;
    // cin >> s;

    // cout << s;

    // getline Funciton

    // To Take input without breaking at space 
    string str;
    getline(cin, str);
    cout << str;

    return 0;
}