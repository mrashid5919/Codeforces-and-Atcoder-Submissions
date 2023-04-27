#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,j,l,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        map<long long,long long> mp;
        cnt=0;
        l=0;
        for(i=0;i<n;i++)
        {
            for(j=2;j*j<=ara[i];j++)
            {
                while(ara[i]%j==0)
                {
                    mp[j]++;
                    ara[i]/=j;
                    //cnt++;
                    if(ara[i]==1)
                        break;
                }
            }
            if(ara[i]!=1)
                mp[ara[i]]++;
        }
        map<long long,long long>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            //cout<<(it->first)<<" "<<(it->second)<<"\n";
            cnt+=(it->second)/2;
            l+=(it->second)%2;
            //cout<<cnt<<" "<<l<<"\n";
        }
        cnt+=(l/3);
        cout<<cnt<<"\n";
    }
    return 0;
}
