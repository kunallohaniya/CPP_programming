#include<iostream>
using namespace std;
int binarySearch(int a[],int start,int  end, int element){
    if(start>end){
        return -1;
    }

    int mid = (start + end)/2;
    if(a[mid] == element){
        return mid;
    }
    else if(a[mid] > element){
        return binarySearch(a, start, mid - 1, element);
    }
    else{
        return binarySearch(a, mid + 1, end, element);
    }
    
}

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, 0, length - 1, element);
    if(ans == -1){
        cout<<ans<<endl;
    }
    else{
        cout<< ans+1 << endl;
    }
}