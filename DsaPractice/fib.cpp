#include <iostream>
#include <vector>
using namespace std;

vector<int> fib(int N){
    if(N <= 1){
        return N;
    }
}

int main(){
    int N;
    cin >> N;
    cout<<fib(N);

}