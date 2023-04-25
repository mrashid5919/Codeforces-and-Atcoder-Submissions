#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,j,cnt;
    cin>>t;
    while(t--)
    {
        unordered_map<long long,long long> mp;
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]++;
        }
        sort(ara,ara+n);
        for(i=0;i<n;i++)
        {
            if(i>0)
            {
                if(ara[i]==ara[i-1])
                    continue;
            }
            for(j=1;ara[i]*j*j<=ara[n-1];j++)
            {
                if(j==1 && mp[ara[i]]>2)
                {
                    cnt+=mp[ara[i]]*(mp[ara[i]]-1)*(mp[ara[i]]-2);
                }
                else if(j!=1)
                {
                    long long x=mp[ara[i]*j];
                    if(x)
                    {
                        cnt+=mp[ara[i]]*mp[ara[i]*j]*mp[ara[i]*j*j];
                    }
                }
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}
