#include <iostream>
using namespace std;

int power (int N, int X){
    if(X <= 0){
        return 1;
    }
    cout << X << " ";
    int smallCalculation = power(N , X - 1);
    return smallCalculation * N;
}

int main(){
    int N;
    cin >> N;
    int X;
    cin>>X;
    int ans  =  power(N, X);
    cout << ans << " ";
}