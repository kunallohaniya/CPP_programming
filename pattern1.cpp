#include <iostream>
using namespace std;
 int main (){
    int n;
    cin >> n;

    int i = 1;
    while ( i <= n){
        int j = 1;
        int val = i;
        while (j <= i){
            cout << val;
            j = j + 1;
            val = val +1;
        }
        cout << endl;
        i = i + 1;
    }
 }