#include <iostream>
using namespace std;
int main(){
    int a = 10,b = 6,c = 10,d = 20;
if(a > b && c == d){
    cout <<"a is greater than b AND c is equal to d"<<endl;
}    
else{
    cout <<" AND condition not satisfies"<<endl;
}
if(a < b || c == d){
    cout <<" a is less than b OR c is equal to d"<<endl;
}
else{
    cout <<" a is neither less than b nor c is equal to d"<<endl;
}
if( !a ){
    cout <<"a is zero"<<endl;
}
else{
    cout <<"a is not zero"<<endl;
}
}