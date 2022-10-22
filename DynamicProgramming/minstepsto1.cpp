// #include <bits/stdc++.h>
// #include <iostream>
// #include <cmath>
// using namespace std;

// // Brute Force Approach

// int countMinStepsToOne(int N){
//     if(N == 1){
//         return 0;
//     }
//     int decrementby1 = countMinStepsToOne(N - 1);

//     int divideByTwo = INT_MAX;
//     int divideByThree = INT_MAX;

//     if(N%2 == 0){
//         divideByTwo = countMinStepsToOne(N / 2);
//     }
//     if(N%3 == 0){
//         divideByThree = countMinStepsToOne(N / 3);
//     }
//     int answer = min(decrementby1, min(divideByTwo, divideByThree)) + 1;
//     return answer;
// }


// int main(){

//     int N;
//     cin >> N;
//     cout << countMinStepsToOne(N);
// }
#include<bits/stdc++.h>
using namespace std;
int countStepsToOne(int n)
{
    int *minSteps = new int[n + 1];
    minSteps[1] = 0;
    for (int i = 2; i <= n; ++i)
    {
        int subtractOne = minSteps[i - 1];
        int divideByTwo = INT_MAX;
        int divideByThree = INT_MAX;
        if (i % 2 == 0)
        {
            cout << "Divide by 2 : " << divideByTwo << " " << endl;
            divideByTwo = minSteps[i / 2];
        }
        if (i % 3 == 0)
        {
            cout<<"Divide by 3 :"<<divideByThree<<" "<<endl;
            divideByThree = minSteps[i / 3];
        }
        minSteps[i] = 1 + min(subtractOne, min(divideByTwo, divideByThree));
    }
    int result = minSteps[n];
    delete[] minSteps;
    return result;
}


int minStepsHelper(int n, int *ans) {
	// Base case
	if(n <= 1) {
		return 0;
	}

	// Check if output already exists
	if(ans[n] != -1) {
		return ans[n];
	}

	// Calculate output
	int x = minStepsHelper(n - 1, ans);

	int y = INT_MAX, z = INT_MAX;
	if(n % 2 == 0) {
		y = minStepsHelper(n/2, ans);
	}

	if(n % 3 == 0) {
		z = minStepsHelper(n/3, ans);
	}

	int output = min(x, min(y, z)) + 1;

	// Save output for future use
	ans[n] = output;

	return output;

}

int misSteps_2(int n) {
	int *ans = new int[n+1];

	for(int i = 0; i <= n; i++) {
		ans[i] = -1;
	}

	return minStepsHelper(n, ans);
}


int minSteps(int n) {
	// Base case
	if(n <= 1) {
		return 0;
	}

	// Recursive call
	int x = minSteps(n - 1);

	int y = INT_MAX, z = INT_MAX;
	if(n % 2 == 0) {
		y = minSteps(n/2);
	}

	if(n % 3 == 0) {
		z = minSteps(n/3);
	}

	// Calculate final output
	int ans = min(x, min(y, z)) + 1;

	return ans;

}


int main()
{
    int n;
	cin >> n;
	cout << countStepsToOne(n);
    return 0;
}
