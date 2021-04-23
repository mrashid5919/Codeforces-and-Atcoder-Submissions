#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    if(y==0)
        return 1;
    else
    {
        long long i,u=1;
        for(i=1;i<=y;i++)
            u=u*x;
        return u;
    }
}

int main()
{
    fastio;
    long long t,n,i,sum,d;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        if(n%2050!=0)
        {
            cout<<"-1"<<"\n";
            continue;
        }
        d=n/2050;
        for(i=18;i>=0;i--)
        {
            if(d==0)
                break;
            if(d>=power(10,i))
            {
                sum+=(d/power(10,i));
                d=d%power(10,i);
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
