#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long t[300005],b[300005],mp[1000005],taken[1000005],tksum[1000005];

vector<long long> adj[1000005];

int main()
{
    fastio;
    long long n,k,i,j,mx,prod,idx,sz;
    vector<pair<long long,long long> > vect;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>b[i];
        vect.push_back(make_pair(t[i],b[i]));
        mp[b[i]]=max(mp[b[i]],t[i]);
        adj[b[i]].push_back(t[i]);
    }        
    sort(vect.begin(),vect.end(),greater<pair<long long,long long> >());
    mx=0;
    prod=0;
    sort(b,b+n);
    sort(adj[b[0]].begin(),adj[b[0]].end());
    for(i=1;i<n;i++)
    {
        if(b[i]!=b[i-1])
            sort(adj[b[i]].begin(),adj[b[i]].end());
    }
    for(i=0;i<k;i++)
    {
        mx+=vect[i].first;
        prod+=vect[i].first;
        taken[vect[i].second]++;
        tksum[vect[i].second]+=vect[i].first;
    }
    mx*=b[0];
    //cout<<mx<<" "<<b[0]<<"\n";
    idx=k;
    sz=k;
    for(i=1;i<n;i++)
    {
        if(b[i]==b[i-1])
            continue;
        prod-=tksum[b[i-1]];
        sz-=taken[b[i-1]];
        while(sz<k && idx<n)
        {
            if(vect[idx].second>b[i] || (vect[idx].second==b[i] && vect[idx].first==mp[b[i]]))
            {
                prod+=vect[idx].first;
                taken[vect[idx].second]++;
                tksum[vect[idx].second]+=vect[idx].first;
                sz++;
            }
            idx++;
        }
        if(sz<k)
        {
            long long x=adj[b[i]].size();
            long long y=k-sz;
            for(j=1;j<=min(y,x-1);j++)
            {
                prod+=adj[b[i]][x-1-j];
                taken[b[i]]++;
                tksum[b[i]]+=adj[b[i]][x-1-j];
                sz++;
            }
        }
        mx=max(mx,prod*b[i]);
        //cout<<mx<<" "<<b[i]<<"\n";
    }
    cout<<mx<<"\n";
    return 0;
}
