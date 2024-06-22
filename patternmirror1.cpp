#include <iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int i = 1;
 while(i<=n){
    int space = 1;
    while (space <=n-i){
        cout<<' ';
        space ++;
    }
    int stars = 1;
     while(stars<=i){
     cout<<'*';
     stars++;
    }
    cout<<endl;
    i++;
  }
 }
