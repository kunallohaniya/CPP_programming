#include<iostream>
using namespace std;

 // "DP" = HERE complexity is improved -> O(N) (ITERATIVE)
int fib_3(int n) {
  int *ans = new int[n+1];

  ans[0] = 0;
  ans[1] = 1;

  for(int i = 2; i <= n; i++) {
    ans[i] = ans[i-1] + ans[i-2];
  } 
  return ans[n];
}
 //HERE complexity is about -> O(2^n)  (BRUTE FORCE)
int fibo(int n) {
  if(n <= 1){
    return n;
  }
  int a = fibo(n-1);
  int b = fibo(n-2);
  return a + b;
}
 // "MEMOIZATION" = HERE complexity is improved -> O(N)(RECURSIVE)
 int fibo_helper(int n,int *ans) {
  if(n <= 1) {
    return n;
  }

  // check if it already exists
  if(ans[n] != -1) {
    return ans[n];
  }

  int a = fibo_helper(n-1, ans);
  int b = fibo_helper(n-2, ans);

  // save the output for future use
  ans[n] = a + b;

  // return the final output
  return ans[n];
 }

 int fibo_2(int n) {
  int *ans = new int[n+1];

  for(int i = 0; i <= n; i++) {
    ans[i] = -1;
  }
  return fibo_helper(n, ans);
 }

 int main() {
  int n ;
  cin >> n;
  cout << fibo(n) << endl;
 }