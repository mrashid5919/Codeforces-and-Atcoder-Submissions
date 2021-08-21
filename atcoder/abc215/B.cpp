#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    if(y==0)
        return 1;
    else
    {
        long long u=1;
        for(long long i=1;i<=y;i++)
            u*=x;
        return u;
    }
}

int main()
{
    fastio;
    long long i,n,p;
    cin>>n;
    for(i=0;;i++)
    {
        if(power(2,i)>n)
        {
            cout<<i-1<<"\n";
            break;
        }
    }
    return 0;
}
