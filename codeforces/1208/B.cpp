#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,i,ara[2005],cur=0,mx=0,j,pr=0,sf=0;
    map<long long, long long> mp;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=n;i++)
    {
        if(mp[ara[i]]==0)
        {
            pr++;
            mp[ara[i]]=i;
        }
        else
            break;
    }
    mp.clear();
    for(i=n;i>=1;i--)
    {
        if(mp[ara[i]]==0)
        {
            sf++;
            mp[ara[i]]=i;
        }
        else
            break;
    }
    mx=max(pr,sf);
    for(i=1;i<=pr;i++)
    {
        mp.clear();
        cur=min(i,pr);
        for(j=1;j<=i;j++)
            mp[ara[j]]=j;
        for(j=n;j>i;j--)
        {
            if(mp[ara[j]]==0)
            {
                cur++;
                mp[ara[j]]=j;
            }
            else
                break;
        }
        mx=max(mx,cur);
    }
    cout<<n-mx<<"\n";
    return 0;
}
