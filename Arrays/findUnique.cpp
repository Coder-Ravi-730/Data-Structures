#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void print(int arr[], int N){

    for (int i = 0; i < N; i = i + 1){
        cout << arr[i] << " ";
    }
}

int FindUnique(int arr[], int N){

    for (int i = 0; i < N; i = i + 1){
        int c = 0;
        for (int j = 0; j < N; j = j + 1){
            if (arr[i] == arr[j]){
                c = c + 1;
            }
        }
        if(c == 1){
            return arr[i];
        }
    }
    return 0;
}

int main(){
    int N;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; i = i + 1){
        cin >> arr[i];
    }

    cout << FindUnique(arr, N);

    return 0;
}