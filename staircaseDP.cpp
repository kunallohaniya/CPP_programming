#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;
int staircase(int n){
    if(n <= 1){
        return 1;
    }
    long long a = 1, b = 1, c = 2;
    for(int  i  = 0; i <= n-3; ++i ){
        long long d = (a + b + c) % mod;
        a = b; 
        b = c;
        c = d;
    }
    return c;
}
int main(){
    // write your code here
    int  t;
    cin>>t;
    while (t--) {
      int n;
      cin >> n;
      cout << staircase(n) << endl;
    }
}