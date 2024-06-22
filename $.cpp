#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
   char c;
   cin >> c;
   
   int count = 0;
   while (c != '$') {
     count++;
      cin >> c;
   }
   int space = 1;
   c = cin.get();
   cout<<count<<space<<endl;
   }
