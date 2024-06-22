#include<iostream>
using namespace std;
int main(){
    int i = 1,k = 6,l = 13,m = 16;
    while (i<=5)
    {
       int j = 1;
        while(j<=5)
        {
            if(i==1)
                 cout<<j<<"  ";
            else if (j==5)
                 cout<<k++<<" ";
            else if(i==5)
                 cout<<l--<<" ";
            else if(j==1)
                 cout<<m--<<" ";
            else
                 cout<<"   ";
            j++;
        }
        cout<<endl;
        i++;
    }
    }
