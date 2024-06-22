#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int bin_num = 0,i = 0,remainder;
        while (n != 0)
         {
          remainder = n % 10;
          n = n / 10;
          bin_num = bin_num + remainder * pow(10, i);
          ++i;
        }
		cout<<bin_num;
 }


