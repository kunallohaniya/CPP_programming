                  //        ARRAY SUM        //
/*#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
long sum = 0;

long input[100000];
for(int i = 0 ; i < n ;i++)
{
  cin >> input[i];
  sum = sum + input [i];
}
cout<< sum <<endl;
}*/
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
// #include<iostream>
// using namespace std;

// void selectionSort(int input[],int n)  {
//   for(int i = 0 ;i<n-1 ;i++)   {
//     //  find min element in the array    //
//   int min = input[i],minIndex = i;
//   for(int j = i+1 ;j<n ;j++)   {
//     if(input[j] < min) {
//       min = input[j];
//       minIndex = j;
//     }
//   }
//   int temp = input[i];
//   input[i] = input[minIndex];
//   input[minIndex] = temp;
//  }  
// }
// int main()  {
//   int input[] = {3,1,6,9,0,4};
//   selectionSort(input,6);
//   for(int i = 0 ;i<6 ;i++)  {
//     cout<<input[i]<<" ";
//   }
//   cout<<endl;
// }   
                   //            BUBBLE SORT  -    doubt            //

/*#include<iostream>
using namespace std;

void printArray(int input[] , int n)
{
  for(int i = 0 ; i < n ;i++)  
{
    cout<< input[i] <<" ";
} 
  cout<< endl;
}
 void bubbleSort(int arr[] , int n) 
 {
  for(int j = 0 ;j < n - 1 ;j++) 
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
                   //     FINDING GREATEST AMONG INTEGERS            //
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  int input [100];
  for(int i = 0 ;i < n ;i++) {
    cin>>input[i];
  }
  for(int i = 0 ;i < n ;i++) {
    cout<<input[i]<<endl;
  }
  int max = INT_MIN;
  for(int i = 0 ; i < n ;i++) {
  if(input[i] > max){
    max = input[i];
  }
  }
  cout<<"max:"<<max<<endl;
}           */
              //            ARRAY STORED       //
/*#include<iostream>
using namespace std;

void printArray(int input[]) {
  cout<< "function :" << sizeof(input) << endl;
}
int main(){
  int n;
  cin>>n;

  int input[100];
  cout<<input<<endl;
   for(int i = 0; i < n; i++) {
    cin >> input[i];
   }
   cout <<"main : "<<sizeof(input) << endl:
   printArray(input);
}          */
                 //   MERGE SORT     //


// #include<iostream>
// using namespace std;

// void merge(int *arr, int s, int e){
//     int mid = (s+e)/2;
    
//     int len1 = mid-s + 1;
//     int len2 = e-mid;

//     // assume to create array for len1, len2 length
//     int *left = new int[len1];
//     int *right = new int[len2];

//     // copy values
//     int k = s;
//     for(int i=0; i<len1; i++) {
//         left[i] = arr[k];
//         k++;
//     }
//     k = mid+1;
//     for(int i=0; i<len2; i++) {
//         right[i] = arr[k];
//         k++;
//     }

//     // merge logic
//     int leftIndex = 0;
//     int rightIndex = 0;
//     int mainArrayIndex = s;

//     while(leftIndex < len1 && rightIndex < len2) {
//         if(left[leftIndex] < right[rightIndex]) {
//             arr[mainArrayIndex++] = left[leftIndex++];
//         }
//         else{
//             arr[mainArrayIndex++] = right[rightIndex++];
//         }
//     }

//     // copy logic for left array
//     while(leftIndex < len1) {
//         arr[mainArrayIndex++] = left[leftIndex++];
//     }

//     // copy logic for right array
//      while(rightIndex < len1) {
//         arr[mainArrayIndex++] = right[rightIndex++];
//     }

//     // TODO: delete left and right wla newly created array

// }

// void mergeSort(int arr[], int s, int e) {
//     // base case
//     // s == e -> single element is always sorted
//     // s > e -> invalid 
//     if(s >= e) {
//         return;
//     }
//     int mid = (s+e)/2;
//     // left part sort kardo recursion bhaiya
//     mergeSort(arr, s, mid);

//     // rightpart sort kardo recursion bhaiya
//     mergeSort(arr, mid+1, e);

//     // now merge two sorted arrays
//     merge(arr, s, e);
// }

// int main(){
//     int arr[] = {4,5,13,2,12};
//     int n = 5;

//     int s = 0;
//     int e = n-1;
//     mergeSort(arr, s, e);

//     return 0;
//     }

        //  QUICK SORT    //

#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  //  step1: choose pivotelement
  int pivotIndex = s;
  int pivotElement = arr[s];

  // step2: find right position for pivot Element and place if there
  int count = 0;
  for(int i = s+1; i<=e; i++) {
    if(arr[i] <= pivotElement) {
      count++;
    }
  }
  // jab mai loop se bahar tha to mere pass 
  //  pivot ka right position ka index ready h
  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;

  // swap3: left me chota and right me bada
  int i = s;
  int j = e;
  
  while(i < pivotIndex && j > pivotIndex) {
    while (arr[i] <= pivotElement) {
      i++;
    }
    while(arr[j] > pivotElement) {
      j--;
    }
    
    // 2 case ho skte h ->
    // A-> you found the elements to swap
    // B-> no need to swap
    if(i < pivotIndex && j > pivotIndex) {
      swap(arr[i], arr[j]);
    } 
  }
  return pivotIndex; 
}
void quickSort(int arr[], int s, int e) {
  // base case
  if(s >= e) {
    return;
  }

  // partition logic, return pivotIndex
  int p = partition(arr, s, e);

  // recursive calls
  // pivot element -> left
  quickSort(arr, s, p-1);

  // pivot element -> right
  quickSort(arr, p+1, e);

}

int main() {
  int arr[] = {8,1,3,4,20,50,50,1,1,1,2,1,50,50,50,50,50,2,2,30};
  int n = 20;

  int s = 0;
  int e = n-1;
  quickSort(arr, s, e);

  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}        