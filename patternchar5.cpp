#include<iostream>
using namespace std;
int main(){
int n=5;
cin>>n;
int i = 1;
while(i<=n){
 int j = 1;
 while (j<=n){
 char ch = 'E'- i + j;
 cout << ch;
 j++;
}
cout <<endl;
i++;
}
}