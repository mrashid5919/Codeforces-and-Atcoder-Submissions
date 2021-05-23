#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long M=1000000007;

long long power(long long x,long long y)
{
    long long u=1,i;
    for(i=1;i<=y;i++)
        u=(u*x)%M;
    return u;
}

int main()
{
    fastio;
    long long n,a=1,b=1;
    cin>>n;
    a=power(3,3*n);
    b=power(7,n);
    if(a-b>=0)
        cout<<(a-b)%M<<"\n";
    else
        cout<<M+(a-b)<<"\n";
    return 0;
}
