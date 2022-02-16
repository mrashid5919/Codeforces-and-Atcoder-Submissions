#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

#define M 1000000007

long long ara[100005];

long long power(long long x,long long y)
{
    long long u=1;
    for(long long i=0;i<y;i++)
    {
        u=(u*x)%M;
    }
    return u;
}

int main()
{
    fastio;
    long long n,i,p=0,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ara[x]++;
    }
    if(n%2==0)
    {
        for(i=1;i<n;i=i+2)
        {
            if(ara[i]!=2)
            {
                p=1;
                break;
            }
        }
    }
    else
    {
        for(i=0;i<n;i=i+2)
        {
            if(i==0 && ara[i]!=1)
            {
                p=1;
                break;
            }
            else if(i!=0 && ara[i]!=2)
            {
                p=1;
                break;
            }
        }
    }
    if(p==1)
        cout<<0<<"\n";
    else
    {
        cout<<power(2,n/2)<<"\n";
    }
    return 0;
}
