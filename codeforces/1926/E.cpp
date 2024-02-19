#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
    {
        u*=x;
    }
    return u;
}

int main()
{
    fastio;
    long long t,n,k,x,cur,prv;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x=0;
        cur=1;
        while(k>x)
        {
            prv=x;
            x+=(n/cur)/2+(n/cur)%2;
            if(x>=k)
            {
                cout<<cur*(2*(k-prv)-1)<<"\n";
                break;
            }
            cur*=2;
        }
    }
    return 0;
}