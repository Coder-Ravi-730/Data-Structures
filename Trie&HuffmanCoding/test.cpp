#include<iostream>
using namespace std;

int numPairsDivisibleBy60(int *time, int size) {
    int count = 0;
    for(int i = 0; i < size; i = i + 1){
        for(int j = i + 1; j < size; j = j + 1){
            if ((time[i] + time[j]) % 60 == 0)
            {
                cout << time[i] + time[j] <<" ";
                count = count + 1;
            }
        }
    }return count;
}

int main()
{
    int arr[] = {30, 20, 150, 100, 40 };
    int N = sizeof(arr) / sizeof(int);

    int answer = numPairsDivisibleBy60(arr, N);
    cout << answer << endl;

    return 0;
}
