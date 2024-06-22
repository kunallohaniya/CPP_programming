         //  TYPECASTING     //
/*#include<iostream>
using namespace std;
int main(){
    int i = 65;
    char c = i;
    cout << c <<endl;

    int * p = &i;
    char *pc = (char *)p;

    cout << p <<endl;
    cout << pc <<endl;
 
    cout << * p <<endl;
    cout << *pc <<endl;
    cout << *(pc + 1) <<endl;
    cout << *(pc + 2) <<endl;
    cout << *(pc + 3) <<endl;
}*/
          //    REFERENCE VARIABLE      //
/*#include<iostream>
using namespace std;

  void increment(int& n){
    n++;
  } 
  int main(){
    int i = 10;
    
    increment(i);
    cout << i <<endl;

    int& j = i;

    i++;
    cout << j <<endl;
    j++;
    cout << i <<endl;

    int k = 100;
    j = k;
    cout << i <<endl;
} */    
         //     PRBLM -3 //
/*#include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;
} */
        //       DYNAMIC MEMORY ALLOCATION      //
/*#include<iostream>
using namespace std;
int main(){*/

  /*int *p = new int;
  *p = 10;
  cout << *p <<endl;*/
    // STATIC  
  /*while (true){
    int i = 10;
   }*/
   // DYNAMIC   
  /* while(true){
    int *p = new int;
   }
}*/
         //   PRBLM - 1   //
/*#include<iostream>
using namespace std;

int x = 1;

void print(){
    int x = 2;
    {
        int x = 3;
        cout << x << endl;
    }
}
int main(){
    print();
    return 0;
}  */       
         // MACROS    //
/*#include<iostream>
using namespace std;

#define PI 3.14

int main(){

int r ;
cin >>r ;
cout << PI * r * r<<endl;
}*/   
     //     PRBLM  - 2  //
/*#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a*b

int main(){
    cout << MULTIPLY(2+3, 3+5);
    return 0;
}*/
    //   PRBLM  - 3  //
/*#include <iostream>
using namespace std;

#define SQUARE(x) x*x

int main(){
    int x = 36 / SQUARE(6);
    cout << x;

    return 0;
}*/
       //   DEFAULT ARGUMENT   //
/*#include<iostream>
using namespace std;

int sum(int a[],int size,int si = 0){
    int ans = 0;
    for(int i = si; i < size; i++){
        ans += a[i];
    }
    return ans;
}
int sum( int a, int b = 0, int c = 0,int d = 0){
    return a+b+c+d;
}

int main(){
    int a[20];

    cout << sum(a,20) <<endl;
} */
     //     CONSTANT VARIABLE    //
/*#include<iostream>
using namespace std;
int main(){
    // constant int
    const int i  = 10;
    int const i2 = 10;

    // constant reference from a non const int 
    int j = 12;
    const int & k = j;
    j++;

    cout << k << endl;

    // constant reference from a const int 
    int const j2 = 12;
    int const & k2 = j2;

    // reference from a const int( if we have Read access how can we offer write access to someone )
    int const j3 = 123;
    int & k3 = j3;
    k3++;
} */    
     //PRBLM  
#include <iostream>
using namespace std;

int main(){
    const int p = 5;
    int const *q = &p;
    (*q++);
}
              