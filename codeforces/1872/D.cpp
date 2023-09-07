#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long sum(long long n)
{
    return (n*(n+1))/2;
}

int main()
{
    fastio;
    long long t,n,x,y,a,b,asum,bsum,lcm;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y;
        lcm=(x*y)/__gcd(x,y);
        a=n/x-n/lcm;
        asum=sum(n)-sum(n-a);
        b=n/y-n/lcm;
        bsum=sum(b);
        cout<<asum-bsum<<"\n";
    }
    return 0;
}