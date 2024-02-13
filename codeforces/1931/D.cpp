#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200006],unqcnt[200006];

int main()
{
    fastio;
    long long t,n,x,y,i,cnt,unq;
    cin>>t;
    while(t--)
    {
        cnt=0;
        unq=0;
        map<pair<long long,long long> ,long long> mp;
        cin>>n>>x>>y;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            mp[{ara[i]%x,ara[i]%y}]++;            
        }
        map<pair<long long,long long>,long long>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            pair<long long,long long> pr=it->first;
            if(pr.first==0 || 2*pr.first==x)
            {
                cnt+=(mp[pr]*(mp[pr]-1))/2;
            }
            else
            {
                if(pr.first<=x/2)
                {
                    cnt+=mp[pr]*mp[{x-pr.first,pr.second}];
                }
                else
                    break;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}