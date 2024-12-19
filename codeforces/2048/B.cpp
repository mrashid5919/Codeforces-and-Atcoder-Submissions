#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

long long ara[200005];

int main()
{
    fastio;
    long long t,n,k,i,d;
    cin>>t;
    while(t--)
    {
        d=0;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            ara[i]=0;
        }
        for(i=k;i<=n;i+=k)
        {
            ara[i]=d+1;
            d++;
        }
        for(i=1;i<=n;i++)
        {
            if(ara[i]==0)
            {
                ara[i]=d+1;
                d++;
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<ara[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}