#include<iostream>
#include<vector>
#include<climits>
using namespace std;

    // MINIMUM NUMBER OF ELEMENTS SUPREME

// int solve(vector<int>& arr, int target) {
//     //base case
//     if(target == 0) {
//         return 0;
//     }
//     if(target < 0) {
//         return INT_MAX;
//     }

//     // let's solve 1 case
//     int mini = INT_MAX;
//     for(int i=0; i<arr.size(); i++) {
//         int ans = solve(arr, target - arr[i]);
//         if(ans != INT_MAX)
//         mini = min(mini, ans+1);
//     }
//     return mini;
// }

// int main() {
//     vector<int> arr{1,2};
//     int target = 5;

//     int ans = solve(arr, target);
//     cout << "Answer is: " <<ans << endl;
//     return 0;
// }


    // CUT INTO SEGMENTS SUPREME  -> Exponential t.c
    
int solve(int n, int x, int y, int z) {
    if(n == 0) {
        return 0;
    }
    if(n < 0) {
        return INT_MIN;
    }
   int a = solve(n-x,x,y,z) + 1;
   int b = solve(n-y,x,y,z) + 1;
   int c = solve(n-z,x,y,z) + 1;

    int ans = max(a, max(b, c));
    return ans;
}
int main() {
    int n = 8;
    int x = 4;
    int y = 3;
    int z = 1;

    int ans = solve(n,x,y,z);
    if (ans < 0)
    ans = 0;
    cout << "Answer is: " << ans << endl;
    return 0;
}

// MAXSUM OF NON-ADJACENT ELEMENTS

// void solve(vector<int>& arr, int i, int sum, int &maxi) {
//     // base case
//     if(i >= arr.size()) {
//         // maxi update
//         maxi = max(sum, maxi);
//         return;
//     }

//     // include
//     solve(arr, i+2, sum+arr[i], maxi);
//     // exclude
//     solve(arr, i+1, sum, maxi);
// }

//  int main() {
//     vector<int> arr{1,2,3};
//     int sum = 0;
//     int maxi = INT_MIN;
//     int i = 0;
//     solve(arr,i, sum, maxi);
//     cout << maxi << endl;
//     return 0;
//  }

    // LAST OCCURENCE OF A CHARACTER 

// void lastOccLtr(string&s, char x, int i, int&ans) {
//         if(i<0){
//             return;
//         }
//         if(s[i] == x) {
//             ans = i;
//             return;
//         }
//         lastOccLtr(s, x, i-1, ans);

//     }

//     int main() {
//         string s;
//         cin >> s;
//         char x;
//         cin >> x;
//         int ans = -1;
//         lastOccLtr(s, x, s.size()-1, ans);
//         cout << ans << endl;
//     }

//   PRINT ALL SUBARRAYS USING RECURSION

// void printSubarray(vector<int> &nums, int start, int end) {
//     // base case
//     if(end == nums.size()) {
//         return;
//     }
//     // 1 case
//     for(int i = 0; i<=end; i++) {
//         cout << nums[i] << " ";
//     }
//     cout << endl;
//     // recursive call
//     printSubarray(nums, start, end + 1);
// }

// int main() {
//     vector<int>nums{1,2,3,4,5};
//     printSubarray(nums,0,0);
//     return 0;
// }