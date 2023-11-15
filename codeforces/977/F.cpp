#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long n,i,mx=0,mxid,cur;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    map<long long,long long> mp,idx,pr;
    for(i=0;i<n;i++)
    {
        if(mp[ara[i]-1]==0)
        {
            if(mp[ara[i]]==0)
            {
                mp[ara[i]]=1;
                idx[ara[i]]=i+1;
            }            
        }
        else
        {
            mp[ara[i]]=mp[ara[i]-1]+1;
            idx[ara[i]]=i+1;
            pr[i+1]=idx[ara[i]-1];
        }
    }
    for(i=0;i<n;i++)
    {
        if(mp[ara[i]]>mx)
        {
            mx=mp[ara[i]];
            mxid=idx[ara[i]];
        }
    }
    cout<<mx<<"\n";
    vector<long long> vect;
    cur=mxid;
    while(cur!=0)
    {
        vect.push_back(cur);
        cur=pr[cur];
    }
    for(i=vect.size()-1;i>=0;i--)
        cout<<vect[i]<<" ";
    cout<<"\n";
    return 0;
}