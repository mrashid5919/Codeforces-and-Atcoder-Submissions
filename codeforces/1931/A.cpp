#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=28)
            cout<<"aa"<<(char)(n-3+'a')<<"\n";
        else if(n<=53)
            cout<<"a"<<(char)(n-28+'a')<<"z\n";
        else
            cout<<(char)(n-53+'a')<<"zz\n";
    }
    return 0;
}