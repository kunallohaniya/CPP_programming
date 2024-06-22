/*#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;
    // taking inputs
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
     
    //print array row wise
    cout<<" row wise :"<<endl; 
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j] <<" ";
        }
        cout<<endl;
    } int sum = 0;
    cout<<" column wise:"<<endl;
   for(int j = 0; j < n; j++){
    for(int i = 0;i < m; i++){
        cout<<a[i][j] <<" ";
  }
  cout<<endl;
 }
}*/
                 //        INITIALISATION OF ARRAY AT THE TIME OF DECLERATION     //
#include<iostream>
using namespace std;

void printArray(int a[][5],int m,int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int a[][5] = {{1,2},{3,4},{5,6}};
    printArray(a,3,5);
}
      