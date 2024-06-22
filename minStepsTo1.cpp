#include<iostream>
#include<climits>
using namespace std;


 // RECURSIVE
int minStepsHelper(int n, int *ans) {
if(n <= 1) {
    return 0;
}

// check if output already exists
if(ans[n] != -1){ 
    return ans[n];
}
// calculate output
int x = minStepsHelper(n-1, ans);
int y = INT_MAX;
int z = INT_MAX;

    if(n%2==0) {
        y = minStepsHelper(n/2, ans);
    }
    if(n%3==0) {
        z = minStepsHelper(n/3, ans);
    }
    int output = min(x,min(y, z)) + 1;
    
    // save output for future use
    ans[n]= output;

    return output;
}
int main() {
    int n;
     cin >> n;
     cout << minStepsHelper(n) << endl;
}