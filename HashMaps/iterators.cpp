#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;
int main()
{
    unordered_map<string, int> ourmap;

    ourmap["abc"] = 1;
    ourmap["def"] = 2;
    ourmap["ghi"] = 3;
    ourmap["jkl"] = 4;
    ourmap["mno"] = 5;

    unordered_map<string, int>::iterator it = ourmap.begin();
    while (it != ourmap.end())
    {
        cout << "Key is : " << it->first << " Corresponding Value is :" << it->second << endl;
        it++;
    }

    // find
    unordered_map<string, int>::iterator it2 = ourmap.find("abc");


    // using iterators in vector
    vector<int> v;
    v.push_back(10);
    v.push_back(130);
    v.push_back(130);
    v.push_back(103);

    vector<int>::iterator it1 = v.begin();
    while (it1 != v.end())
    {
        cout <<* it1 << " ";
        it1 = it1 + 1;
    }
    
    return 0;
}
