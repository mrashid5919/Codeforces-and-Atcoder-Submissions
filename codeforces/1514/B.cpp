#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    const long long M=1000000007;
    long long d=1;
    for(long long i=0;i<y;i++)
        d=(d*x)%M;
    return d;
}

int main()
{
    fastio;
    long long t,n,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ans=power(n,k);
        cout<<ans<<"\n";
    }
    return 0;
}
