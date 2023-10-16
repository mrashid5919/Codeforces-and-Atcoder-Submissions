#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        map<long long,long long> mp;
        for(i=0;i<n;i++)
        {
            long long cnt=0;
            while(ara[i]%2==0)
            {
                cnt++;
                ara[i]/=2;
            }
            mp[ara[i]]=max(mp[ara[i]],cnt);
        }
        map<long long,long long>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            ans+=(it->second);
        }
        cout<<ans<<"\n";
    }
    return 0;
}