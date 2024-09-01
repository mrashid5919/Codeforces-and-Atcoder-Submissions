#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%2==1)
            cout<<"NO\n";
        else if(a%2==0 && b%2==0)
            cout<<"YES\n";
        else
        {
            if(a>0)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}