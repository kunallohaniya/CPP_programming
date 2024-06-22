#include<iostream>
using namespace std;
int main(){

int i = 1;
   while(i<=5){
int j = i;
while(j<5){
    cout<<" ";
    j++;
}
int k = 1;
while(k<2*i){
    cout<<k;
    k++;
}
i++;
cout<<endl;
   }
 i = 4;
 while(i>0){
    int j = 5;
    while(j>i){
        cout<<" ";
        j--;
    }
    int k = 1;
    while(k<2*i){
        cout<<k;
        k++;
    }
    cout<<endl;
    i--;

 }  
}
