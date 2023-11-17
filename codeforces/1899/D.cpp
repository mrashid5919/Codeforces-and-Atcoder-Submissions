#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        map<long long,long long> mp;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        map<long long,long long>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            cnt+=((it->second)*(it->second - 1))/2;
        }
        cnt+=mp[1]*mp[2];
        cout<<cnt<<"\n";
    }
    return 0;
}