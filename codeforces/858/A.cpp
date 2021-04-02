#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long gcd(long long a, long long b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

long long power(long long x,long long y)
{
    long long d=1;
    for(long long i=0;i<y;i++)
        d=d*x;
    return d;
}

int main()
{
    fastio;
    long long n,k,ans,p;
    cin>>n>>k;
    p=power(10,k);
    ans=(n*p)/gcd(n,p);
    cout<<ans<<"\n";
    return 0;
}
