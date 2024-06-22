#include<iostream>
#include<math.h>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
    int dec_num = 0,i = 0,remainder;
	while(n!=0)
	{
		remainder = n % 10;
		n = n/ 10;
		dec_num = dec_num + remainder *pow(2,i);
		++i;
	}
	cout<<dec_num;
}
