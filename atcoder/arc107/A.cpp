#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

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
    unsigned long long a,b,c,ans=1,M=998244353;
    cin>>a>>b>>c;
    ans=(ans*a)%M;
    ans=(ans*(a+1))%M;
    ans=(ans*b)%M;
    ans=(ans*(b+1))%M;
    ans=(ans*c)%M;
    ans=(ans*(c+1))%M;
    //cout<<ans<<"\n";
    ans=(ans*bigmod(8,M-2,M))%M;
    cout<<ans<<"\n";
    return 0;
}
