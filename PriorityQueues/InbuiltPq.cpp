#include <bits/stdc++.h>
#include <vector>
#include <queue>


using namespace std;

int main(){
    priority_queue<int> data;

    data.push(16);
    data.push(1);
    data.push(167);
    data.push(7);
    data.push(45);
    data.push(32);

    cout << "Size is : " << data.size() << endl;
    cout << "Top Element is : " << data.top() << endl;

    while (!data.empty())
    {
        cout << data.top() << " ";
        data.pop();
    }
    printf("\n");
}