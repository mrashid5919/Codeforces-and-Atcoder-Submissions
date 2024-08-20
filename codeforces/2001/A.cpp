#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<long long,long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        mx=0;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            mx=max(mx,it->second);
        }
        cout<<n-mx<<"\n";
    }
    return 0;
}