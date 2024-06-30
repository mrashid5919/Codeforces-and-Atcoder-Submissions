#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,mx,idx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        mx=0,idx=-1;
        for(i=0;i<n;i++)
            cin>>ara[i];
        mx=ara[n-1]+n-1;
        for(i=0;i<n-1;i++)
        {
            if(ara[i]>ara[i+1])
                mx=max(mx,ara[i]+i);
        }
        cout<<mx<<"\n";
    }
    return 0;
}