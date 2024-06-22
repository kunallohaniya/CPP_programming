#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,n;
	cin >> x>>n;

  int power =x^n;

	while(x >0){
		while(n>0){
			cout << power;
		}	
		cout << x<<" "<<n;
}
}