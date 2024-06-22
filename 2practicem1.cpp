                                    //             INVERTED PATTERN - *  or  n0.                  //      
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}*/                            
                                      //          INVERTED  -      4444 333 22 1                //
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
     int j = 1;
     while(j<=n-i+1){
        cout<<n-i+1;
        j++;
     }
     cout<<endl;
     i++;
    }    
  }*/
                                    //          ISOSCELES TRIANGLE   - * or NO                      //
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    int val = 1;
    while(i<=n){
        int space= 1;
        while(space <=n-i){
            cout<<' ';
            space++;
        }
        int j = 1;
        
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
         j = 2*i-2;
         while(j>=i){
            cout<<j;
            j--;
         }
         cout<<endl;
         i++;
    }
}                        */                       
                                 //            CHECK CASE       //
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter"<<endl;
    cin>>ch;
    
    if(ch >= 'A' && ch <= 'Z'){
        cout<<"1"<<endl;
    }
    else if(ch>= 'a' && ch <= 'z'){
        cout<<"0"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    } 
}                    