#include<iostream>
#include"fraction.cpp"
using namespace std;

int main(){
    Fraction f1(10,2);
    Fraction f2(15,4);
    
    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    f1.print();
    f2.print();
    f3.print();
    f4.print();

    Fraction f5 = f1 * f2;
    f5.print();

    if(f1 == f2){
        cout <<"equal" <<endl;
  } else{
        cout <<"not equal" <<endl;
    }    
}