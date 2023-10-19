#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],ser[200005];

int main()
{
    fastio;
    long long n,k,i,l,r,x;
    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>ara[i];
    l=0;
    r=n;
    map<long long,long long> mp;
    mp[1]=1;
    ser[0]=1;
    for(i=1;i<=min(n,k);i++)
    {
        if(mp[ara[ser[i-1]]]==0)
        {
            mp[ara[ser[i-1]]]=i+1;
            ser[i]=ara[ser[i-1]];
        }
        else
        {
            l=mp[ara[ser[i-1]]]-1;
            r=i+1-mp[ara[ser[i-1]]];
            break;
        }
    }
    // for(i=0;i<5;i++)
    //     cout<<ser[i]<<" ";
    // cout<<"\n";
    //cout<<l<<" "<<r<<"\n";
    cout<<ser[l+(k-l)%r]<<"\n";
    return 0;
}