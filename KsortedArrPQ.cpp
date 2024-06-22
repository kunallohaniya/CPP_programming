#include<iostream>
using namespace std;
#include<queue>

void KSortedArray(int input[], int n, int k) {
    priority_queue<int> pq;
    for(int i = 0 ; i < k; i++) {
        pq.push(input[i]);
    }
    int j = 0;
    for(int i = k; i < n; i++){
        input[j] = pq.top();
        pq.pop();
        j++;
        pq.push(input[i]);
    }
    while(!pq.empty()) {
        input[j] = pq.top();
        pq.pop();
    }
}

int main(){
    int input[] = {13,6,5,12,7};
    int k = 3;
    KSortedArray(input, 5 , k);
    for(int i = 0; i < 5; i++) {
        cout << input[i] << " ";
    }
}