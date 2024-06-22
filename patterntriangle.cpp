#include<iostream>
using namespace std;
int main(){

//  after combining both can make diamond 
 
    // full pyramid
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            cout << " ";
        }
        for(int j = 1; j <= (2*i-1); j++) {
            if(i == n || j == (2*i-1) || j == 1) {
                cout << "*";
            }
            else 
            cout << " ";
        }
        // use this while making no space pyramid
        // for(int k=i-1; k >= 1; k--)  {
        //     cout << "*";
        // }
        cout << endl;
    }
    return 0;

    // // inverted pyramid
        // int n;
        // cin >> n;
        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<i; j++) {
        //         cout << " ";
        //     }
        //     for(int j=i+1; j<=n; j++) {
        //         cout << "* ";
        //     }
        //     cout << endl;
        // }

    // hollow diamond

    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++) {
    //     // space
    //     for(int j = 0; j < n-i-1; j++) {
    //         cout << " ";
    //     }
    //     //stars
    //     for(int j = 0; j < 2*i+1; j++) {
    //         // if first character if last char
    //         if(j == 0 || j == 2*i) {
    //             // first character
    //             cout << "*";
    //         }
    //             else{
    //                 // last char
    //             cout << " ";
    //             }
    //         }
    //         cout << endl;
    // }
        // for(int i = 0; i < n; i++) {
        //     // space
        //     for(int j = 0; j < i; j++) {
        //         cout << " ";
        //     }
        //     // star
        //     for(int j = 0; j < 2*n-2*i-1; j++) {
        //         if(j == 0 || j == 2*n-2*i-2) {
        //         // first character
        //         cout << "*";
        //     }
        //         else{
        //             // last char
        //         cout << " ";
        //         }
        //     }
        //     cout << endl;
        // }

    //  flip diamond
    // half pyramid

    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n-i; j++) {
    //         cout << "*";
    //     }

    //     // space vla full pyramid
    //     for(int j = 0; j < 2*i+1; j++) {
    //         cout << " ";
    //     }
    //     //half pyramid
    //     for(int j = 0; j < n-i; j++) {
    //         cout << "*";
    //     }
    //      cout << endl;
    // }

    // half pyramid
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i+1; j++) {
//             cout << "*";
//         }
    
//     // space wala triangle
//     for(int j = 0; j < 2*n-2*i-1; j++) {
//             cout << " ";
//     }
//     //  half pyramid
//     for(int j = 0; j < i+1; j++){
//         cout << "*";
//     }
//         cout << endl;
// }

    // FANCY PATTERN
//     int n;
//      cin >> n;
//       for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i+1 ; j++) {
//             cout << i+1;
//             // if last char don't print star
//             if(j != i){
//             cout << "*";
//         }
//         }
//         cout << endl;
// }
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n-i; j++) {
//             cout << n-i;
//             // if last char don't print star
//             if(j != n-i-1) {
//             cout << "*";
//         }
//         }
//         cout << endl;
//     }

        // ḥollow inverted half triangle
        // int n;
        // cin >> n;
        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < n; j++) {
        //         if(i == 0 || j == 0 || j == n-i-1) {
        //             cout << "*";
        //         }
        //         else{
        //             cout << " ";
        //         }
        //     }
        //      cout << endl;
        // }

        // int n;
        //  cin >> n;
        //  int c = 1;
        //  for(int i = 0; i < n; i++) {
        //     for(int j = 0; j <= i; j++) {
        //         cout <<c<<" ";
        //         c++;
        //     }
        //     cout << endl;
        //  }

        // NUMBERIC HOLLOW HALF PYRAMID
        // int n;
        // cin >> n;
        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<i+1; j++) {
        //         if(j == 0 || i == j || i == n-1){
        //         cout << j+1;
        //         }else{
        //             cout << " ";
        //         }
        //     }
        //     cout << endl;
        // }

        // NUMERIC HOLLOW INVERTED HALF PYRAMID

        // int n;
        // cin >> n;
        // for(int i = 0; i < n; i++) {
        //     for(int j = i+1; j <= n; j++) {
        //         if(j == i+1 || i == 0 || j == n) {
        //             cout << j;
        //         }else{
        //             cout << " ";
        //         }
        //     }
        //     cout << endl;
        // }
}


