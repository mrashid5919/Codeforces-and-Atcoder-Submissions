#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,p,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i>0 && ara[i]<ara[i-1])
                p=1;
        }
        if(p==0)
        {
            cout<<"YES\n";
            continue;
        }
        p=0;
        for(i=0;i<n-1;i++)
        {
            x=ara[i]; y=ara[i+1];
            ara[i]-=min(x,y);
            ara[i+1]-=min(x,y);
        }
        for(i=1;i<n;i++)
        {
            if(ara[i]<ara[i-1])
            {
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}