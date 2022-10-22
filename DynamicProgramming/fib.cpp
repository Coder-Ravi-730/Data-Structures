#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
int fib(int N){
    
    if(N<=1){
        return N;
    }
    // return fib(N - 1) + fib(N - 2);
    int a = fib(N - 1);
    int b = fib(N - 2);
    return a + b;
}
// Dynamic Programming -> Bottom Up Approach
int DynamicFib(int N){
    int *arr = new int[N + 1];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i <=N; i = i + 1){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[N];
}

//Memoization Approach(Top-Down Approach)
int fib_dp1(int n ,int *ans){
    if(n<=1){
        return n;
    }

    if(ans[n] != -1){
        return ans[n];
    }

    int  smallCalculation_01 = fib_dp1(n - 1, ans);
    int  smallCalculation_02 = fib_dp1(n - 2, ans);

    // save the answer for the future use
    ans[n] = smallCalculation_01 + smallCalculation_02;

    // Return the final output
    return ans[n];

}

int fib_dp(int n){
    int *ans = new int[n + 1];
    for (int i = 0; i <= n; i = i + 1){
        ans[i] = -1;
    }
    return fib_dp1(n, ans);
}

int main(){
    int N;
    cout << "Enter the value of N :" << endl;
    cin >> N;
    // cout << fib_dp(N) << endl;
    cout << DynamicFib(N);
}




