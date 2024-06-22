#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    bool isdec=false,isinc=false;
    for(int i=1;i<n;i++)
    {
        int curr;
        cin>>curr;
        if(prev==curr)
        {
            cout<<"false";
            return 0;
        }
        else if(curr<prev)
        {
            isdec=true;
            if(isinc==true)
            {
                cout<<"false";
                return 0;
            }
        }
        else
        {
            isinc=true;
        }
        prev=curr;
    }
    cout<<"true";
    return 0;

	
}
