#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
    {
        u*=x;
    }
    return u;
}

int main()
{
    fastio;
    long long t,n,i,cnt,x;
    x=power(2,31);
    //cout<<x<<endl;
    x--;
    cin>>t;
    while(t--)
    {
        cnt=0;
        map<long long,long long> mp;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(mp[ara[i]^x]<=mp[ara[i]]){
                cnt++;
                // mp[ara[i]]++;
            }
            // else if(mp[ara[i]]>0)
            //     cnt++;
            // else
                mp[ara[i]]++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}