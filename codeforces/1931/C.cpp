#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,st,en;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
        }
        st=0;
        en=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]==ara[0])
                st++;
            else
                break;
        }
        for(i=n-1;i>=0;i--)
        {
            if(ara[i]==ara[n-1])
                en++;
            else
                break;
        }
        if(ara[0]==ara[n-1])
        {
            if(st==n)
                cout<<0<<"\n";
            else
                cout<<n-(st+en)<<"\n";
        }
        else
            cout<<n-max(st,en)<<"\n";
    }
    return 0;
}