               //  STRINGS   //
/*#include<iostream>
using namespace std;
int main(){
   
    string* sp = new string;  // dynamic allocatin of string //
    *sp = "def";
    cout << sp << endl;
    cout << *sp << endl;
                      
    string s = "abc";      //   static allocation of string  //
     //getline(cin , s); //  for printing the whole char with space, tab , etc.//
    cout << s <<endl;

    s = "defdef";    // can also be treated like an arrray //
    cout << s[0] <<endl;
    s[0] = 'a';     // can also change the content  //
    string s1;
    s1 = "def";
    string s2 = s + s1;  // string concatinate //
    cout << s2 <<endl;
    s += s1;         // dono ko concatinate krdiya //

    cout << s1 <<endl;
    cout << s <<endl;

    cout << s.length() << endl;   // to calculate length or size //
    cout << s.substr(3) << endl;  // to print substring   //
    cout << s.substr(3 , 3) << endl;  // to print substring till size we want   //
    cout << s.find("def") << endl;

}*/
 
                   //    RETURN SUBSEQUENCES OF A STRING   //
/*#include<iostream>
using namespace std;

int subs(string input , string output[]){
    if(input.empty()){
        output[0] = " ";
        return 1;
    }

    string smallString = input.substr(1);
    int smallOutputSize = subs(smallString,output);
    for(int i = 0; i < smallOutputSize; i++){
        output[i + smallOutputSize] = input[0] + output[i];
    }
    return 2 * smallOutputSize;
}

int main(){
    string input;
    cin >> input;
    string* output = new string[1000];       //   dynamic allocation of string   as above  //
    int count = subs(input,output);
    for(int i = 0; i < count; i++){
        cout << output[i] << endl;
    }
} */                  

            // PRINT SUBSEQUENCES OF THE STRING      //
#include<iostream>
using namespace std;

  void print_subs(string input, string output){
    if(input.size() == 0){
        cout << output << endl;
        return ;
    }
     print_subs(input.substr(1),output);
     print_subs(input.substr(1),output + input[0]);
  }    
  int main(){
    string input;
    cin >> input;
    string output = "";
    print_subs(input, output);
  }
