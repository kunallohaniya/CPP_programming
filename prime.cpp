#include<iostream>
using namespace std;

int main(){
char choice;
        //  extended with do while
   do{ 
    int n;
    cout << "Enter n-> ";
    cin>>n;
    //  RETURN PRIME NUMBERS
    for ( int i = 2 ; i <= n ; i++){
        int k = 0;
    for ( int j = 2 ; j <= i ; j++)
    {
      if( i % j == 0 ){
       k++;
      }
    }  
    if (k == 1){
      cout<<i<<endl;
    }
    }
    cin >> choice;
   }
    while(choice =='y' || choice == 'Y');
    }

      // PRIME NUMBER CHECK
      // int n;
      // cin >> n;
      // int i = 2;
      // while(i < n) {
      //   if(n%i == 0) {
      //     cout << "Not prime" << endl;
      //   }
      //    else
      //   i++;
      //   cout << "prime" << endl;
      // }       

      // int n;
      // // if(cin >> n) {
      // //   cout << " kunal";
      // // }

      // if(cout << "kunal") {
      //   cout << " Prajapati";
      // }
      
// }
      

    
    
