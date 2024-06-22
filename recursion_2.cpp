#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int length( char s[]){
//     if(s[0] == '\0'){
//         return 0;
//     }
//     int smallStringLength = length(s + 1);
//     return 1 + smallStringLength;
// }

// int main(){
//  char str[100];
//  cin >> str;

//  int l = length(str);
//  cout << l << endl; 
// }

// sort

 bool checkSorted(vector<int> &arr, int & n, int i) {
    // base case
    if(i == n-1) {
        return true;
    }
     if(arr[i+1] > arr[i]) {
        return checkSorted(arr, n, i+1);
     }
     else{
        return false;
     }
 }

int main() {
    vector<int> v {10};
    int n = v.size();
    int i = 0;
    bool isSorted = checkSorted(v, n, i);

    if(isSorted) {
        cout << "Array is sorted" << endl;
    }
    else{
        cout << "Array is not sorted" << endl;
    }
    return 0;
}