#include<iostream>
#include"friction.c++"
using namespace std;

int main(){
    friction f1(10,2);
    friction f2(15,4);
    
    f1.add(f2);

    f1.print();
    f2.print();
}