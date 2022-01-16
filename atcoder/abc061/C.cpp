#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005],b[100005];

int main()
{
    fastio;
    long long n,k,i,sum=0;
    map<long long,long long> mp;
    map<long long,long long>::iterator it;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>ara[i]>>b[i];
        mp[ara[i]]+=b[i];
    }
    for(it=mp.begin();it!=mp.end();++it)
    {
        sum+=it->second;
        if(sum>=k)
        {
            cout<<it->first<<"\n";
            break;
        }
    }
    return 0;
}
