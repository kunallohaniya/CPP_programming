                  //        ARRAY SUM        //
/*#include<iostream>
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
} */
                   //          BINARY SEARCH         //
/*#include<iostream>
using namespace std;
 
 int binary_search(int input[],int n,int x )  
 {
 int start = 0, end = n-1;
 while(start <= end) 
 {
  int mid = (start + end) / 2;
   if(input[mid] == x) 
   {
     return mid;    
   }  
   else if( input[mid] > x)
   {
     end = mid - 1;
   }
   else 
   {
    start = mid + 1;
   }
 }
return -1;
 }

int main()
{
     int n;
     cin>>n;

     int input[100];
     for(int i = 0 ;i<n ;i++)  
     {
        cin >> input[i];
     }
     int x;
     cin >> x;
     cout<<binary_search(input,n,x)<<endl;
}   */
                                //                SELECTION SORT                  //
#include<iostream>
using namespace std;

void selectionSort(int input[],int n)  {
 for(int i = 0; i < n-1; i++) {
    // for min element in the array
    int min = input[i], minIndex = i;
    for(int j = i+1; j < n; j++) {
      if(input[j] < min) {
        min = input[j];
        minIndex = j;
      }
    }
  // swap  
  int temp = input[i];
  input[i] = input[minIndex];
  input[minIndex] = temp;
 }  
}
int main()  {
  int input[] = {3,1,6,9,0,4};
  selectionSort(input,6);
  for(int i = 0 ;i<6 ;i++)  {
    cout<<input[i]<<" ";
  }
  cout<<endl;
}   
                   //            BUBBLE SORT                    //
/*#include<iostream>
using namespace std;

void printArray(int input[] , int n)
{
  for(int i = 0 ; i<n ;i++)  
{
    cout<< input[i] <<" ";
} 
  cout<< endl;
}
 void bubbleSort(int arr[] , int n) 
 {
  for(int j = 0 ;j< n - 1 ;j++) 
  {
    for(int i = 0 ;i < n - 1 - j ;i++) 
    {
      if(arr[i] > arr[i+1]) 
      {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
      }
    }
  }
 }
  
  int main()
  {
    int n;
    cin>>n;

    int input[100];

    for(int i = 0 ;i < n ;i++) 
  {
   cin>>input[i]; 
  }
  }*/