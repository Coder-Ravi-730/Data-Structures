#include <bits/stdc++.h>
#include <climits>
#include <cmath>
using namespace std;

int countStepsToOne(int N){

    int *arr = new int[N + 1];
    arr[1] = 0;
    for (int i = 2; i <= N; i = i + 1){
        int subtractby1 = arr[i - 1];
        int divideby2 = INT_MAX;
        int divideby3 = INT_MAX;

        if(i % 2 == 0){
            divideby2 = arr[i / 2];
        }
        if(i % 3 == 0){
            divideby3 = arr[i / 3];
        }
        arr[i] = min(subtractby1, min(divideby2, divideby3)) + 1;
    }

    int result = arr[N];
    delete[] arr;
    return result;
}

int main(){

    int N;
    cin >> N;
    cout << countStepsToOne(N);
}