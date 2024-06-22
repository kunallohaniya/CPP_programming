#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int rev = 0;
	for ( ;n!=0; )
	{
	rev = rev * 10;
	rev = rev+ n%10;   
	   n = n/10;
	}
	cout<<rev;
	
		}

