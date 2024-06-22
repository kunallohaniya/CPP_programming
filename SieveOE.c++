#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

//    prime numbers using sieve of eratosthenes- n(log (log n))
vector<bool>Sieve(int n) {
    vector<bool>prime(n, true);
    for(int i=2; i*i<n; i++) {    //Optimisation(2) i*i is equal to root n
        if(prime[i] == true) {
            // int j=2*i;
            int j=i*i;  // Optimisation(1)
            //first unmarked number would
            // be i*i, as other have marked by 2 to (i - 1)
            while(j<n) {
                prime[j]=false;
                j+=i;
            }
        }
    }
    return prime;
}

vector<bool> segSieve(int l, int r) {
    // get me prime array, i will use it to mark seg sieve
    vector<bool>sieve=Sieve(sqrt(r));
    vector<int>basePrimes;
    for(int i=0; i<sieve.size(); i++) {
        if(sieve[i]) {
            basePrimes.push_back(i);
        }
    }

    vector<bool>segSieve(r-l+1,true);
    if(l == 1 || l == 0) {
        segSieve[l] = false;
    }

    for(auto primeN:basePrimes) {
        int first_mul = (l / primeN) * primeN;
        if(first_mul < l) {
            first_mul += primeN;
        }
        int j = max(first_mul, primeN*primeN);
        while(j < r) {
            segSieve[j - l] = false;
            j += primeN;
        }
    }
    return segSieve;
}

int main() {
//    vector<bool>prime=Sieve(25);
//    for(int i=2; i<25; i++){
//     if(prime[i]) {
//         cout<<i <<" ";
//     }
//    }

int l = 110;
int r = 130;
vector<bool>ss = segSieve(l,r);
for(int i= 0; i<ss.size(); i++){
    if(ss[i]) {
        cout << i + l << " ";
    }
}
    return 0;
}





// 1:create a new Folder -> ReactFlio
// 2:npx create-react-app demoshopapp
// 3:change directory demoshopapp
// 4:npm start