#include<iostream>
using namespace std;
class friction{
 private:
   int numerator;
   int denominator;
 public:    

 friction(int numerator,int denominator){
    this->numerator = numerator;
    this->denominator = denominator; 
 }
 void print(){
    cout<< this-> numerator <<"/" <<denominator << endl;
 }
 void simplify(){
    int gcd = 1;
    int j = min(this->numerator,this->denominator);
    for(int i = 1 ;i<=j ;i++){
        if(this->numerator % i == 0 && this->denominator % i == 0){
            gcd = i;
        }
    } 
 }
 void add(friction const &f2){
    int lcm = denominator * f2.denominator;
    int x = lcm / denominator;
    int y = lcm / f2.denominator;

    int num = x *numerator +(y *f2.numerator);

    numerator = num;
    denominator = lcm;

    simplify();
 }
  void multiply(friction const &f2){
    numerator = numerator *f2.numerator;
    denominator = denominator *f2.denominator;

    simplify();
  }
};