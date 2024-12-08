#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,k,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        p=0;
        map<long long,long long> mp;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]%k]++;
        }
        for(i=0;i<n;i++)
        {
            if(mp[ara[i]%k]==1)
            {
                cout<<"YES\n";
                cout<<i+1<<"\n";
                p=1;
                break;
            }
        }
        if(p==0)
            cout<<"NO\n";
    }
    return 0;
}