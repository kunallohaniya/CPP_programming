#include<iostream>
using namespace std;

int main() {
	// Write your code here
 int n;
 int r;
 
 int sum_e = 0;
 int sum_o = 0;
 cin >> n;

while(n > 0){
    r = n % 10;
    if (r % 2== 0)
	 {
      sum_e = sum_e + r;
    }
    else {
      sum_o = sum_o + r;
    }
    n = n / 10;
}
cout <<sum_e<<" "<<sum_o;
}


