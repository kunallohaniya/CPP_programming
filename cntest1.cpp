                  //        ARRAY SUM        //
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    long sum = 0;
    
    long input[100000];
    for(int i = 0;i < n;i++) {
        cin>> input[i];
        sum = sum + input[i];
    }
    cout<<sum<<endl;
}

  