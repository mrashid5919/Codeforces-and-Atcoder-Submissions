#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    long long u=1LL;
    for(long long i=0;i<y;i++)
        u*=x;
    return u;
}

int main()
{
    fastio;
    long long n;
    cin>>n;
    long long x=power(2,n);
    if(n>=13)
        x=x-power(2,n-13)*100;
    cout<<x<<"\n";
    return 0;
}
