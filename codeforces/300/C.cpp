#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

unsigned long long fact[1000005];

unsigned long long bigmod(long long x,unsigned long long y,unsigned long long M)
{
    if (y == 0)
        return 1;

    long long p = bigmod(x, y / 2, M) % M;
    p = (p * p) % M;

    return (y % 2 == 0) ? p : (x * p) % M;
}

int main()
{
    fastio;
    long long a,b,n,sm,i,M=1000000007,ans=0,x,p;
    cin>>a>>b>>n;
    sm=n*a;
    fact[0]=1;
    fact[1]=1;
    for(i=2;i<=n;i++)
        fact[i]=(fact[i-1]*i)%M;
    x=sm;
    p=0;
    while(x!=0)
    {
        if(x%10!=a && x%10!=b)
        {
            p=1;
            break;
        }
        x/=10;
    }
    if(p==0)
        ans++;
    //cout<<ans<<"\n";
    for(i=1;i<=n;i++)
    {
        sm+=b-a;
        p=0,x=sm;
        while(x!=0)
        {
            //cout<<x%10<<"\n";
            if(x%10!=a && x%10!=b)
            {
                p=1;
                break;
            }
            x/=10;
        }
        if(p==0)
        {
            unsigned long long addend=fact[n];
            addend=(addend*bigmod(fact[i],M-2,M))%M;
            addend=(addend*bigmod(fact[n-i],M-2,M))%M;
            ans=(ans+addend)%M;
        }
    }
    cout<<ans<<"\n";
    return 0;
}