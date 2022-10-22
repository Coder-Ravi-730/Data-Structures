#include <iostream>
using namespace std;
int main()
{
    string str;
    str = "Hello_World";
    cout << str[0]<<endl;
    cout << str[1]<<endl;
    cout << str[2]<<endl;
    str[0] = 'h';
    cout << str[0] << endl;
    // To Know the size of the string
    cout << str.size() << endl;
    // dot length is also a function which can be used in order to find the length of the string
    cout << str.length() << endl;
    // Substring Function
    cout << str.substr(1,3) << endl;
    // Find Function
    cout << str.find("World");
}