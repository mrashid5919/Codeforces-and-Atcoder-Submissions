#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,sum,ans,m,c,b;
    cin>>t;
    while(t--)
    {
        sum=0;
        ans=0;
        c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            sum+=ara[i];
        }
        m=(2*sum)/n;
        if(m*n!=2*sum)
        {
            cout<<0<<"\n";
            continue;
        }
        sort(ara,ara+n);
        map<long long,long long> mp;
        map<long long,long long>::iterator it;
        map<long long,long long>::iterator it1;
        for(i=0;i<n;i++)
        {
            it=mp.find(ara[i]);
            if(it!=mp.end())
                mp[ara[i]]++;
            else
            {
                mp.insert(pair<long long, long long>(ara[i], 1LL));
                c++;
            }
        }

        for(i=0;i<n;i++)
        {
            b=m-ara[i];
            if(b==ara[i])
                ans+=mp[b]-1;
            else
                ans+=mp[b];
        }
        cout<<ans/2<<"\n";
    }
    return 0;
}
