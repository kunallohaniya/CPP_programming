                                         //            sequence              //
/*#include <iostream>  
using namespace std;

int main(){
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    bool isdec = false ,isinc = false;
    for(int i = 1 ;i < n ;i++ )
    {
    int curr;
    cin>> curr; 
    if(curr == prev)
    {
        cout<<"false";
    
    }  
    else if(curr<prev)
    {   
        isdec = "true";
       if(isinc == true)
       {
        cout<<"false";
        
       } 
    }
    else
    {
        isinc = true;
    }
       prev = curr;
    }
        cout<<"true";
       
    }     */

                                          //         square root          // 
           
/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;

    int result;
    result = sqrt(n);
    cout<<result<<endl;
}           */
     
                                         //             decimal to binary           //

/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  long bin_num = 0,remainder,p = 1;

  while(n>0){
    remainder = n % 2;
    n = n/2;
    bin_num = bin_num +(remainder*p);
    p = p*10;  
  }
  cout<<bin_num<<endl;
}*/

                                      //               binary to dicimal            //

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
  long dec_num = 0,remainder, p = 1;

  while(n>0)
  {
    remainder = n % 10;
    n = n / 10;

    dec_num = dec_num + ( remainder * p);
    p = p*2;
  }
  cout<<dec_num;
}*/
                                       //            reverse of a number                 //

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse = 0;
    while(n>0)
    {
      int lastdigit = n % 10;
      reverse = reverse * 10 + lastdigit;
      n = n/10;  
    }
    cout<<reverse;
} */                                      

                                     //              terms of AP                        //

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
   
   int i = 1;
   while(i<n)
   {
      int x;
      x = 3*i + 2;
   
    if (x % 4 != 0)
    {
     cout<< x <<" ";
     i++;
     count++;  
   }
   else 
    {
    i++;
   }
}
}*/

                                              //            SUM OR PRODUCT          //

/*#include<iostream>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    cin>>c;
    int sum = 0,mul = 1;

    if(c==1)
    {
        while(n<=12 && n>0)
        {
          sum = sum + n;
          n--;  
        }
        cout<< sum <<endl;
    }
    else if(c == 2)
    {
        while(n>0)
        {
          mul = mul * n;
          n--;
        }
        cout<< mul << endl;
    }
    else{
        cout << -1 <<endl;
    }
}      */                                         

                                //     ALL PRIME NUMBERS            //

/*#include <iostream>
using namespace std;

int main(){

  
  int n;
  cin >> n;

  for (int i = 2; i <= n; i++) {
    int k = 0;
    for (int j = 2; j <= i; j++) {
      if (i % j == 0)

        k++;
    }
    if (k == 1)
      cout << i << endl;
  }
}           */

                             //               CHARACTER COUNT                        //

/*#include<iostream>
 using namespace std;

 int main(){
  char c;
  c = cin.get();
  int count = 0,counts = 0,countd = 0;
   while(c !='$'){
     
     if(c>='a' && c<='z') {
     count++;
   }
   else if(c>='0' && c<='9') {
   countd++;
   }
   else
   {
    counts++;
   }
   c = cin.get();
 }  
 cout<<count<<' '<<countd<<' '<<counts<<endl;     
 }*/                    

                         //                Nth FIBONACCI NUMBER                      //
/*#include<iostream>
using namespace std;
int main(){
  int n;
   cin>>n;
   int a = 0,b = 1;
   int i = 1;
   while(i<=n){
    int c = a + b;
    a = b;
    b = c;
    i++;
   } 
   cout<<a;
}      */                   
 
                            //               MIRROR NUMBER PATTERN                       //

/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int space = 1;
    while(space<= n-i){
      cout<<' ';
      space++;
    }
    int j = 1;
    while(j <= i){
      cout<<j; 
      j++;
    }
    cout<<endl;
    i++;
  }
} */                           

                                      //                 INVERTED *    or    NO             //
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i = 1;
while(i<=n){
  int j = 1;
  while(j<= n-i+1){
    cout<<n-i+1;
    j++;
  }
  cout<<endl;
 i++;
}
}*/
 
                                       //                 ISOSCELES   TRIANGLE   * or NUMBER               //
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int space = 1;
    while(space<= n-i){
      cout<<' ';
      space++;   
    }
    int j = 1;
    while(j <= i){
      cout<<j;
      j++;
    }
     j = i-1;
     while(j>=1){
      cout<<j;
      j--;
     }
     cout<<endl;
     i++;
  }
} */                                      
                                     //             TRIANGLE OF NUMBERS             //
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
  int space = 1;
  while(space <= n-i){
    cout<<' ';
    space++;
  }
   int j = 1;
   int val = i;
   while(j<=i){
    cout<<val;
    val++;
    j++;
   }
    j = 2*i-2;
    while(j>=i){
      cout<<j--;
    }
    cout<<endl;
    i++;
  }
} */
                                 //             DIAMOND OF STARS*                  //

/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i <= n/2 + 1){
    int space = 1;
    while(space <= n/2 + 1 - i){
      cout<<" ";
      space++;
    }
    int star = 1;
    while(star <=i){
      cout<<'*';
      star++;
    }
    star = i-1;
    while(star>=1){
      cout<<'*';
      star--;
    }
    cout<<endl;
    i++;
  }
  int hr = n/2 + 1;
  int nr = n - hr;
  i = nr;
  while(i>=1){
  int spaces = nr - i + 1;
  while(spaces>=1){
    cout<<" ";
    spaces--;
  } 
  int star = 2*i-1;
  while(star>=1){
    cout<<'*';
    star--;
  }
  i--;
  cout<<endl;
  }
}*/
 
                                       //            STAR PATTERN                  //
                                      
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      cout<<n;
      j++;
    }
 cout<<endl;
 i++;
}
}*/
                                        //             TRIANGLE PATTERN                        //
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=i){
      cout<<i;
      j++;
    }
    cout<<endl;
    i++;
  }
}   */                                     

                                    //                 REVERSE NUMBER PATTERN - 1 21 321 4321              //
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int j =1;
    while(j<=i){
      cout<<i-j+1;
      j++;
    }
    cout<<endl;
    i++;
  }
} */                                   
                                   //    SEQ NUMEBR PATTERN-1 12 123 1234                    //
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int j =1;
    while(j<=i){
      cout<<j;
      j++;
    }
    cout<<endl;
    i++;
  }
}*/
                                 //           SEQ NO. PATTERN - 1 23 345 4567                       //
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
   while(i<=n){
    int val = i;
    int j = 1;
    while(j<=i){
      cout<<val;
      j++;
      val++;
    }
    cout<<endl;
    i++;
   }
}             */                      
                                  //                   SQ NO. PATTERN - 1 23 456 78910             //
                          
/*#include<iostream>
 using namespace std;
 int main(){
  int n;
  cin>>n;
  int i = 1;
  int val = 1;
  while(i<=n){
    int j = 1;
    while(j<=i){
      cout<<val;
      j++;
      val++;
    }
    cout<<endl;
    i++;
  }
 }      */                           
                                  //                 CHAR PATTERN - ABCD ABCD ABCD ABCD       //
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i = 1;
  while(i<=n){
    int j = 1;
    while(j<=n){
      char ch = 'A'+ j-1;
      cout<<ch;
      j++;
    }
     cout<<endl;
     i++;
     }
} */                                 
                                   //              CHAR PATTERN - ABCD BCDE CDEF DEFG      //
/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i <= n){
        int j =1;
        char startchar = 'A'+ i -1;
        while (j <= n){
            char ch = startchar +j - 1;
            cout<<ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}*/