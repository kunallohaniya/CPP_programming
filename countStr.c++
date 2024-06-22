#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    char choice;

    do {
        int count = 1;
        getline(cin, str);

        for(auto c:str) {
            if(c == ' ') {
                count++;
            }
        }
        cout << "Number of words in a string: " << count << endl;

        cout << "Do you want to continue? (y/n): ";
        cin >> choice;
        cin.ignore();
    }
    while (choice == 'y' || choice == 'Y');

    return 0;
}