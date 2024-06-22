#include<iostream>
using namespace std;

int main(){
    char choice;
    do{   // 2 * 1 = 2

    int n;
    cout << "Enter number-> ";
    cin >> n;

    for(int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << n*i <<endl;
    }
    cin >> choice;
    }
    while(choice =='y' || choice =='Y');
    return 0;

}