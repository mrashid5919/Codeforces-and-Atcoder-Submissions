#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long a[200005],b[200005],c[200005];

int main()
{
    fastio;
    long long n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        b[i]+=a[i];
    }
    map<long long,long long> mp;
    map<long long,long long>::iterator it;
    for(i=0;i<n;i++)
    {
        it=mp.find(a[i]);
        if(it!=mp.end())
            mp[a[i]]++;
        else
            mp.insert(pair<long long, long long>(a[i], 1LL));
    }
    for(i=0;i<n;i++)
    {
        it=mp.find(b[i]);
        if(it!=mp.end())
            mp[b[i]]--;
        else
            mp.insert(pair<long long,long long>(b[i], -1LL));
    }
    for(it=mp.begin(); it!=prev(mp.end()); ++it)
    {
        if(it==mp.begin())
            x=it->second;
        else
            x+=it->second;
        c[x]=c[x]=c[x]+next(it)->first-it->first;

        //cout<<it->first<<" "<<it->second<<"\n";
        //mx=max(mx,it->second);
    }
    for(i=1;i<=n;i++)
        cout<<c[i]<<" ";
    return 0;
}
