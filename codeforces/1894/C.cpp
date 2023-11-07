#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],dif[200005];

int main()
{
    fastio;
    long long t,n,k,i,p,s,per;
    cin>>t;
    while(t--)
    {
        map<long long,long long> mp;
        cin>>n>>k;
        p=0;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            if(ara[i]>=i)
                dif[i]=ara[i]-i;
            else
                dif[i]=n+ara[i]-i;
        }
        /*if(ara[n]==n)
        {
            cout<<"Yes\n";
            continue;
        }*/
        s=0;
        for(i=1;i<=k;i++)
        {
            if(ara[n-s]>n)
            {
                p=1;
                break;
            }
            if(ara[n-s]==n)
                break;
            if((dif[n-s]-s+n)%n==ara[n-s])
            {
                if(mp[s]==1)
                {
                    per=i-1;
                    break;
                }
                mp[s]=1;
                s=(s+ara[n-s])%n;
            }
            else
            {
                p=1;
                break;
            }
        }
        //cout<<per<<"\n";
        if(p==1)
            cout<<"No\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}