        //    FACTORIAL     //
/*#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    int i = 1;
    while (i <= n){
        ans = ans * i;
        i++;

}
return ans;
}
int main(){
    int n,r;
    cin>>n>>r;

    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    int ans = fact_n /(fact_r * fact_n_r);
    cout << ans <<endl;
}*/
      //     IS PRIME      //
/*#include<iostream>
using namespace std;

bool isprime(int n) {
  int d = 2;
  while (d < n){
    if(n % d == 0){
        return false;
    }
    d++;
  }
  return true;
}
int main(){
    bool ans = isprime(31);
    cout << ans <<endl;
    ans = isprime(23);
    cout << ans <<endl;
}*/
       //   PRINT 1 TO N  //
        