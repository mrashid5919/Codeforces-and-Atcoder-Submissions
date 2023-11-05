#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[500005],pr[500005],sf[500005],cnt2[500005];

int main()
{
    fastio;
    long long n,i,f=-1,th=-1,sm=0,z=0,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sm+=ara[i];
        if(ara[i]!=0)
            z=1;
    }
    if(n<3 || sm%3!=0)
    {
        cout<<0<<"\n";
        return 0;
    }
    if(z==0)
    {
        cout<<((n-2)*(n-1))/2<<"\n";
        return 0;
    }
    pr[0]=ara[0];
    for(i=1;i<n;i++)
        pr[i]=pr[i-1]+ara[i];
    sf[n-1]=ara[n-1];
    for(i=n-2;i>=0;i--)
        sf[i]=sf[i+1]+ara[i];
    for(i=0;i<n;i++)
    {
        if(pr[i]==sm/3)
        {
            f=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(sf[i]==sm/3)
        {
            th=i;
            break;
        }
    }
    if(f==-1 || th==-1)
    {
        cout<<0<<"\n";
        return 0;
    }
    for(i=n-1;i>=0;i--)
    {
        if(sf[i]==sm/3)
            cnt2[i]++;
        if(i<n-1)
            cnt2[i]+=cnt2[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        if(pr[i]==sm/3)
        {
            if(sm==0)
                ans+=cnt2[i+1]-1;
            else
                ans+=cnt2[i+1];
        }
    }
    cout<<ans<<"\n";
    return 0;
}