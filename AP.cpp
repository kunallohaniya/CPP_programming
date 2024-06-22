#include<iostream>
using namespace std;

int main() {
	
    int n;
    cin >> n;
    int count = 0;
    
    int i = 1;
    
    while(count < n)
    {   
        
        int x;
        x = 3*i + 2;
        
        if (x % 4 != 0)
        {
            cout << x << " ";
            i++;
            count ++ ;
        }
        else
        {
            i ++;
        }
        
      
        
    }
	
}
