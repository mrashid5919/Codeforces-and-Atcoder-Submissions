#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    long long n,k,i,ara[1005],mxv=0;
    map<pair<long long,long long>,long long> mp;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>i*k)
            mp[{ara[i]/k-i,ara[i]%k}]++;
    }
    pair<long long,long long> mx;
    map<pair<long long,long long>,long long>::iterator it;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->second>=mxv)
        {
            mxv=it->second;
            mx=it->first;
        }
    }
    cout<<n-mxv<<"\n";
    for(i=0;i<n;i++)
    {
        if(ara[i]==(i+mx.first)*k+mx.second)
            continue;
        if(ara[i]>(i+mx.first)*k+mx.second)
            cout<<"- ";
        else
            cout<<"+ ";
        cout<<i+1<<" "<<abs((i+mx.first)*k+mx.second-ara[i])<<"\n";
    }
    return 0;
}