// #include <bits/stdc++.h>
#include <iostream>
#include <climits>
#include <stack>

using namespace std;

void print(int arr[], int N)
{

    for (int i = 0; i < N; i = i + 1)
    {
        cout << arr[i] << " ";
    }
}

int findDuplicate(int arr[], int N)
{

    for (int i = 0; i < N - 1; i = i + 1)
    {
        for (int j = i + 1; j < N; j = j + 1)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
                break;
            }
        }
    }
    return INT_MAX;
}

int duplicateNumber(int arr[], int size)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                return arr[i];
                break;
            }
        }
    }
    return INT_MAX;
}

int main()
{
    int N;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i = i + 1)
    {
        cin >> arr[i];
    }
    cout << duplicateNumber(arr, N);
}