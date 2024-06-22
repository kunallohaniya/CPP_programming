                           /*                 N CHOOSE R - n  
                                                            c
                                                             r     */

/*#include<iostream>                                         
using namespace std;                                          

int factorial (int n){
    int ans = 1;
    int i = 1;
    while(i<=n){
        ans = ans * i;
        i++; 
    }
    return ans;
}
int main(){
    int n;
    int r;
    cin>>n>>r;
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_r = factorial(n - r);
    int ans = fact_n / (fact_r * fact_n_r);
    cout<<ans<<endl;
}       */
                                       //         PRIME NUMBER             //
/*#include<iostream>
using namespace std;

bool isprime (int n){
    int d = 2;
    while(d < n){
        if(n % d == 0){
            return false; 
        }
        d++;
        }
        return true;
    }

int main(){
    bool ans = isprime (31);
    cout<< ans << endl;
    ans = isprime(85);
    cout<< ans << endl; 
}  */

                            //       PRINT 1 TO N      "void function"          //
/*#include<iostream>
using namespace std;

void print_1_to_n(int n){
for(int i=1 ; i<=n ; i++){
    cout<<i<<endl;
}
}                 
int main() {
    print_1_to_n(10);
} */         

                          //        MULTIPLY - a*b                //
/*#include<iostream>
using namespace std;

int multiply(int a,int b){
    return a*b;
}
int main(){
    int ans = multiply(2,4);
    cout<<ans<<endl;
}  */
            
                           //        DIVIDE - a / b             //

/*#include<iostream>
using namespace std;

int divide(int a,int b){
    return a/ b;
}               
int main(){
int ans = divide(100,50);
   cout<<ans<<endl;
}   */
                         //           CIRCUMFERENCE  AND AREA OF CIRCLE       //
/*#include<iostream>
using namespace std;

void circle(int radius){
    cout<<"circumference is: "<<2*3.14*radius<<endl;
    cout<<"area is: "<<2*3.14*radius*radius;
}
int main(){
    circle(20);
    return 0 ;
}    */

                          //       EVEN - ODD CHECK          //
/*#include<iostream>
using namespace std;

void eo(int x){
    if(x%2 ==0)
    cout<<"even"<<endl;
    else
    cout<<"odd";
}
int main()
{
    eo(4);
    eo(9);
    return 0;
}     */
                         //       ELIGIBLE TO VOTE                  //
/*#include<iostream>
using namespace std;

int years(int age){
    if(age>=18)
    cout<<"eligible for vote"<<endl;
    else
    cout<<"non-eligible for vote"<<endl;
    return 0;
}
    int main()
    {
        years(12);
        years(19);
    
    }*/
                        //          FINDING OUT PRIME OR NOT             //
/*#include<iostream>
using namespace std;

int number (int n)
{
    int d = 2;
    if(n % d == 0)
     cout<<"non-prime"<<endl;
     else
     cout<<"is prime"<<endl;
     return 0 ;
}
int main()
{
    number(5);
    number(31);
    number(20);
}   */
                        //            RESULT       //
/*#include<iostream>
using namespace std;

 void grade(int marks)
 {
    if(marks>=91 && marks<=100)
    cout<<"AA"<<endl;
    else if(marks>=81 && marks<=90)
    cout<<"AB"<<endl;
    else if(marks>=71 && marks<=80)
    cout<<"BB"<<endl;
    else if(marks>=61 && marks<=70)
    cout<<"BC"<<endl;
    else if(marks>=51 && marks<=60)
    cout<<"CD"<<endl;
    else if(marks>=41 && marks<=50)
    cout<<"DD"<<endl;
    else
    cout<<"fail"<<endl;
 }
 int main()
 {
    grade(93);
    grade(80);
   return 0;
 } */
                          //           FEHRENHEIT TO CELSIUS                 //
/*#include<iostream>
using namespace std;

double f_to_c(double f)
{
    double c; 
    {
    c = (f - 32) * 5/9;
    }
}
int main()
{
    double 
}
       */
                           //      PRIME NO B/W TWO NUMBERS          //
/*#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int num)
{
    for(int i = 2 ;i<=sqrt(num) ;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i = a ;i<= b ;i++)
    {
        if(isprime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
} */

                           //       ARRAYS - GREATEST  INTEGERS            //
/*#include<iostream>
#include<climits>
using namespace std;

 int main(){
 int n;
  cin>>n;
     // take input from the user 
  int input[100];
   for(int i = 0; i<n; i++){
    cin>>input[i];
}    // print array    
     for(int i = 0; i<n; i++){
      cout<< input[i] <<endl;  
     }
     //largest element in the array 
    int max = INT_MIN;

    for(int i=0 ; i<n ; i++){
        if(input[i]>max){
            max = input[i];
        }
        }
        cout<<"max: "<<max <<endl;
    } */
     
                               //            
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int sum = 0;
    
    long input[100000];
    for(int i = 0; i<n ; i++) {
        cin >>input[i];
        sum = sum + input[i];
    }
    cout<< sum << endl;
}*/
                             //       WILL PLACE 0 AT EMPTY SPACES     //
#include<iostream>
#include<climits>
using namespace std;

void printArray(int input[],int n) {
    for(int i = 0 ;i<n ;i++) {
     cout<<input[i]<<" ";
    }
    cout<<endl;
 }             
 int main(){
    int input[100]={1,2,3};

    printArray(input,100);
 }                   