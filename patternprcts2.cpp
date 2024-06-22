#include<iostream>
using namespace std;
int main(){
    int i = 1,j;
    while(i <=5){
        j=5-i+1;
        int k = 1;
        while(k<=j){
            cout<<(char)(64+k);
            k++;
        }
     cout<<endl;
     i++;
    }
}