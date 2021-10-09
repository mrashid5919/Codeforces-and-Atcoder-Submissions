#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long M=1000000007;

/*long long power(long long a, long long b) {
    long long res = 1;
    for(long long i=0;i<b;i++)
        res=(res*a)%M;
    return res;
}*/

long long bigmod(long long a,long long b)
{
    if(b==0)
        return 1LL;
    long long d=bigmod(a,b/2);
    if(b%2==1)
        return ((((d%M)*(d%M))%M)*(a%M))%M;
    return (d%M)*(d%M)%M;
}

int main()
{
    fastio;
    long long k,x=1,n;
    cin>>k;
    x=(1LL<<k)-1;
    n=bigmod(4,x-1);
    cout<<(6*n)%M<<"\n";
    return 0;
}
