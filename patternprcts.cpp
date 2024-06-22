#include<iostream>
using namespace std;
int main(){
    int i=5,j,k;
    while(i>=1){
    k=i;
    j = 1;
    while(j<=5){
        if(k<=5){
            cout<<k;
        }
        else{
            cout<<5;
        }
        k++;
        j++;
    }
    cout<<endl;
    i--;
}
}