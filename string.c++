#include<iostream>
using namespace std;

int main() {
  //   char choice;
  //   string name;
   
  //  do{

  //    int age;
  //    cout << "Enter age-> ";
  //   cin >> age;

  //   cin.ignore();
  //   cout << "Enter name-> ";
  //   getline(cin, name);
  //    cout << name <<" "<< age;

  //    cin >> choice;
  //  }
  //  while(choice =='y' || choice == 'Y');

  //  return 0;   

  char choice;
    string s;
    
  do{
    int count = 1;
    cout << "Enter the sentence: ";
    cin.ignore();
    getline(cin, s);
    for(int i = 0; i<s.length(); i++) {
    if( s[i] == ' ') {
      count++;
    }
    }
    cout << "Number of words are: " << count << endl;     
    cin >> choice;
  }
  while(choice == 'y' || choice == 'Y');
  return 0;
}