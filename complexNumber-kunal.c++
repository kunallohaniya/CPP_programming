#include<iostream>
using namespace std;

class ComplexNumbers {
    // Complete this class
    int real,imaginary;
    public:
    ComplexNumbers(int re, int img){
        real = re;
        imaginary = img;
    }
    void plus(ComplexNumbers c){
         real = real + c.real;
         imaginary = imaginary + c.imaginary;
         
    }
    void multiply(ComplexNumbers c){
        int re = real *c.real - imaginary *c.imaginary;
        int img = real *c.imaginary + imaginary *c.real; 
        this ->real = re;
        this ->imaginary = img;
    }
    void print() {
        cout << real << " + i" << imaginary << endl;
    }  
};