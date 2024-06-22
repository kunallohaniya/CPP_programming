#include<iostream>
using namespace std;
 int main() {
    string name; 
    getline(cin, name);

    // for(int i = 0; i < name.size(); i++) {
    //     cout << name.at(i);
    // }

    for(char ch : name){
        cout << ch;
    }
 }