#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
// custom comparetor
bool cmp(char a, char b) {
    return a > b;
}
int main() {
    // string s = "kunal";
    // sort(s.begin(),s.end(), cmp);
    // cout << s << endl;

    map<int, char> meraMap;
    meraMap[0] = 'a';
    meraMap[2] = 'b';
    meraMap[21] = 'z';

    cout << "your ans is: "<< meraMap[2] << endl;
    return 0;

}