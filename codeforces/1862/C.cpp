#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],cnt[200005];

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<long long,long long> mp;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        p=0;
        for(i=n;i>=1;i--)
        {
            if(i==n)
                cnt[i]=mp[n];
            else
                cnt[i]=cnt[i+1]+mp[i];
        }
        for(i=1;i<=n;i++)
        {
            if(ara[i]!=cnt[i])
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