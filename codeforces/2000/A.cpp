#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=102 && n<=109)
            cout<<"YES\n";
        else if(n>=1010 && n<=1099)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}