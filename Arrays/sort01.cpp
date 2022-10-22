// #include <bits/stdc++.h>
// using namespace std;

// void print(int arr[], int N){

//     for (int i = 0; i < N; i = i + 1){
//         cout << arr[i] << " ";
//     }
// }

// void sort01(int arr[], int N){
//     int nextzero = 0;
//     // int i = 0;

//     for (int i = 0; i < N; i = i + 1)
//     {
//         if(arr[i] == 0){
//             int temp = arr[nextzero];
//             arr[nextzero] = arr[i];
//             arr[i] = temp;
//             nextzero = nextzero + 1;
//         }
        
        
//         // i++;
//     }
// }

// int main(){
//     int N;
//     cin >> N;

//     int *arr = new int[N];

//     for (int i = 0; i < N; i = i + 1){
//         cin >> arr[i];
//     }
//     sort01(arr, N);
//     print(arr, N);
//     delete[] arr;
// }

#include <iostream>
using namespace std;

void sort01(int *arr, int N){
    int nextZero = 0;

    for (int i = 0; i < N; i = i + 1){
        if(arr[i] == 0){
            int temp = arr[i];
            arr[i] = arr[nextZero];
            arr[nextZero] = temp;
            nextZero = nextZero + 1;
        }
    }
}

void print(int arr[], int N){

    for (int i = 0; i < N; i = i + 1){
        cout << arr[i] << " ";
    }
}


int main(){

    int arr[] = {1,0,0,1,1,1,0,1,1};
    int N = sizeof(arr) / sizeof(int);

    sort01(arr, N);
    print(arr, N);
}