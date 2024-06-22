               //    POINTERS       //
/*#include <iostream>
using namespace std;
int main(){
  int i = 10;
  // address
  cout<< &i <<endl;
  // p pointer to  integer     
  int * p = &i;
  cout << p <<endl;
         //      D-REFERENCE     
  cout << *p <<endl;   
  // p pointer to float   
  float f = 12.4;
  float * pf = &f;
  cout << pf <<endl;
  // p pointer to double  
  double d = 123.23;
  double * pd = &d;
  cout << pd <<endl;
}*/
               //      size of         //
/*#include<iostream>
using namespace std;
int main(){
    int i = 10;
    int *p = &i;
    int *q = p;
  cout << sizeof(p)<<endl;
  cout << i <<endl;
  cout<< *p <<endl;
  i++;
  cout << i <<endl;
  cout << *p <<endl;

  int a = *p ;
  a++;
  cout << a <<endl;
  cout << *p <<endl;

   i = 12;
  cout << i <<endl;
  cout << *p <<endl;
   *p= 24;
  cout<< i << endl;
  cout<< *p << endl;
  (*p)++;
  cout<< i << endl;
  cout << *p <<endl;
}*/ 
         //          
/*#include<iostream>
using namespace std;
int main(){

int a = 100, b = 200;
int *p = &a, *q = &b;
p = q;
cout << p <<endl;
cout << q <<endl;
}*/
        //
/*#include<iostream>
using namespace std;
int main()*/
/*int a = 50;
 int *ptr = &a;
 int *q = ptr;
 (*q)++;
 cout << a  << endl;
}int a = 50;
 int *ptr = &a;
 cout << (*ptr)++ << " ";
 cout << a << endl;
}*/
/*
int a = 7;
int b = 17;
int *c = &b;
*c = 7;
cout  << a <<" " << b << endl;
}*/
/*int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;
}*/
/*float f = 10.5;
float p = 2.5;
float *ptr = &f;
(*ptr)++;
*ptr = p;
cout << *ptr << " " << f << " " << p;
}*/
        //               POINTER ARITHEMATIC        //
/*#include <iostream>
using namespace std;

int main() {
  int i = 10;
  int* p = &i;

  cout<< p <<endl;
  p = p + 2;
  cout << p <<endl;
  cout<< p <<endl;
  p = p - 2;
  cout << p <<endl;
  
  double d = 132.45;
  double* dp = &d;
  cout << dp <<endl;
  dp++;
  cout << dp << endl;
}*/
     //     PROBLEMS BASED ON PA   //
/*#include <iostream>
using namespace std;
int main (){
 /* int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;*/
/*int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;*/
/*double a = 10.54;
double *d = &a;
cout << d << endl;
d = d + 1;
cout  << d << endl;
}*/
               //          ARRAYS AND POINTERS          //
/*#include<iostream>
using namespace std;
int main(){
  int a[10];
  cout << a <<endl;
  cout << &a[0] <<endl;

  a[0] = 5;
  a[1] = 10;
  cout << *a <<endl;
  cout << *(a + 1) <<endl;

  int* p = &a[0];
  cout << p <<endl;
  cout << a <<endl;
      //   address is different      //
  cout << &p <<endl;
  cout << &a <<endl;
      //   size of different - 4 , 40    //
  cout << sizeof(p) <<endl;
  cout << sizeof(a) <<endl;
      //  can assing a at 1 time,nd can't change it //
  p = p + 1;
  p = a + 1;
} */              
            // ARRAYS AND POINTERS    //
/*#include<iostream>
using namespace std;
int main(){
/*int a[] = {1, 2, 3, 4};
cout << *(a) << " " << *(a+1);*/

/*int a[6] = {1, 2, 3};
cout << a <<" "<< &a;*/

/*int a[] = {1, 2, 3, 4, 5};
cout << *(a) << " " << *(a + 4);*/

/*int a[] = {1, 2, 3, 4};
int *p = a++;
cout << *p << endl;*/
  
         //        CHARACTER POINTER          //
/*#include<iostream>
using namespace std;
int main(){
   //  WHAT WE NEED TO PREFER     // 
char str[]= "abcde";
char *pstr = "abcde";

  int a[] = {1,2,3};
  char b[] = "ABC";

  cout << a <<endl;
  cout << b << endl;

  char*c = &b[0];
  cout << c <<endl;

  char c1 = 'a';
  char *pc = &c1;
      // HOW CHAR POINTER BEHAVING DIFF TO INT POINTER    // 
  cout << c1 <<endl;
  cout << pc <<endl;
}*/         
         //     problems ques   //
/*#include<iostream>
using namespace std;
int main(){*/
/* char ch = 'a';
 char* ptr = &ch;
 ch++;
 cout << *ptr << endl;*/
/*char b[] = "xyz";
char *c = &b[0];
cout << c << endl;*/

/*char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];
}*/
               //        POINTERS AND FUNCTIONS      //
/*#include<iostream>
using namespace std;

  void print(int* p){
    cout <<*p <<endl;
  }
  void incrementPointer(int * p){
    p = p + 1;
  }
    void increment(int* p){
      (*p)++;
    }
  
  int  main(){
    int i = 10;
    int * p = &i;

    print(p);

    cout << p <<endl;
    incrementPointer(p);
    cout << p <<endl;

    cout << *p <<endl;
    increment(p);
    cout << *p << endl;
  }*/
       //   
/*#include<iostream>
using namespace std;

  int sum (int a[],int size){
    cout << sizeof(a) <<endl;
    return 0;
  }
  int main(){
    int a[10];
    cout << sizeof(a) <<endl;
    cout << sum(a , 10) <<endl;
  }*/
    //   PASSING OF ARRAYS LIKE EFFECTIVELY POINTERS     //
/*#include<iostream>
using namespace std;

int sum(int* a,int size){
  int ans = 0 ;
  for(int i = 0; i < size; i++){
    ans += a[i];
  }
  return ans;
}
  int main(){
    int a[10];
    cout << sizeof(a)<<endl;
    cout << sum(a,10)<<endl;
  }*/
       //    PRBLM 1  //
/*#include<iostream>
using namespace std;

void changeSign(int *p){
  *p = (*p)  *  -1;
}

int main(){
  int a = 10;
  changeSign(&a);
  cout << a << endl;
}*/
     //   PRBLM 2    //
/*#include<iostream>
using namespace std;
void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}*/
       //   PRBLM 3     //
/*#include<iostream>
using namespace std;

void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}*/       
        //     DOUBLE POINTERS     //     
/*#include<iostream>
using namespace std;

void increment1(int** p){
  p = p + 1;
}
void increment2(int** p){
  *p = *p + 1;
}
void increment3(int** p){
  **p = **p + 1;
}

int main(){
  int i = 10;
  int * p = &i;

  int **p2 = &p;
  cout << p2 <<endl;
  cout << &p <<endl;

  cout << p <<endl;
  cout << *p2 <<endl;
  cout << &i <<endl;

  cout << i <<endl;
  cout << *p <<endl;
  cout <<**p2 <<endl;
}*/
       //  PRBLM 1    //
/*#include<iostream>
using namespace std;
int main(){
int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;
}*/
      //  PRBLM 2   //
/*#include<iostream>
using namespace std;
int main(){
int a = 100;
int *p = &a;
int **q = &p;
int b = (**q)++ + 4;
cout << a << " " << b << endl;
}*/
      //     PRBLM 3     //
/*#include<iostream>
using namespace std;
int main(){
 int a = 100;
  int *p = &a;
  int **q = &p;
  int b = (**q)++;
  int *r = *q;
  (*r)++;
  cout << a << " " << b << endl;
}*/
         //    PRACTICE      //
/*#include <iostream>
using namespace std;
int main()
{
  int arr[] = {4, 5, 6, 7};
  int *p = (arr + 1);
  cout << *arr + 9;
  return 0;
}*/
      //    2    //
/*#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}*/      
      //      7   //
/*#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}*/
     //     8       //
/*#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main()
{
  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}*/
         //        9        //
/*#include<iostream>
using namespace std;
int main()
{
 int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p << " " <<**q << " "<<***r;
  return 0;
}*/
        //      10         //
#include<iostream>
using namespace std;

// int f(int x, int *py, int **ppz) {
//     int y, z;
//     **ppz += 1;
//     z = **ppz;
//     *py += 2;
//     y = *py;
//     x += 3;
//     return x + y + z;

// }

// int main() {
//     int c, *b, **a;
//     c = 4;
//     b = &c;
//     a = &b;
//     cout << f(c, b, a);
//     return 0;
// }        

int* solve() {
  int a= 5;
  int *ans = &a;
  return ans;
}