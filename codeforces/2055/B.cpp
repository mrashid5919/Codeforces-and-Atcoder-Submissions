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

long long ara[200005],b[200005];

int main()
{
    fastio;
    long long t,n,i,idx,mn,p,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        p=0; cnt=0;
        for(i=0;i<n;i++)
        {
            if(ara[i]<b[i])
            {
                cnt++;
                idx=i;
            }
        }
        if(cnt>1)
        {
            cout<<"NO\n";
            continue;
        }
        if(cnt==0)
        {
            cout<<"YES\n";
            continue;
        }
        mn=b[idx]-ara[idx];
        for(i=0;i<n;i++)
        {
            if(i==idx)
                continue;
            if(ara[i]-b[i]<mn)
            {
                p=1;
                break;
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}