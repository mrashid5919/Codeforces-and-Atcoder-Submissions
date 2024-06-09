#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,mn,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(ara[0]>=0)
        {
            mn=ara[0];
            mx=ara[0];
        }
        else
        {
            mn=ara[0];
            mx=(-1)*ara[0];
        }
        for(i=1;i<n;i++)
        {
            long long mncur,mxcur;
            mncur=min(mn+ara[i],min(abs(mn+ara[i]),min(mx+ara[i],abs(mx+ara[i]))));
            mxcur=max(mn+ara[i],max(abs(mn+ara[i]),max(mx+ara[i],abs(mx+ara[i]))));
            mn=mncur;
            mx=mxcur;
        }
        cout<<mx<<"\n";
    }
    return 0;
}