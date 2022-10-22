#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> removeDuplicates(int *arr, int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(arr[i]) > 0)
        {
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}

int main()
{

    int N;
    cout << "Enter the size of the array :" << endl;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }


    vector<int> output = removeDuplicates(arr, N);

    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}

