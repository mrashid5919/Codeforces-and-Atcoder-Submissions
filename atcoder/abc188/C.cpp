#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    if(y==0)
        return 1;
    else
    {
        long long d=1,i;
        for(i=0;i<y;i++)
            d=d*x;
        return d;
    }
}

int main()
{
    fastio;
    long long n,i,p,c,j,a,b;
    static long long ara[66000],t[66000];
    cin>>n;
    for(i=1;i<=power(2,n);i++)
    {
        cin>>ara[i];
        t[i]=1;
    }
    p=power(2,n);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=power(2,n);j++)
        {
            if(c==p)
                break;
            if(t[j]==1)
            {
                c++;
                if(c%2==1)
                    a=j;
                else
                {
                    b=j;
                    if(ara[a]>ara[b])
                    {
                        t[b]=0;
                    }
                    else
                        t[a]=0;
                }
            }
        }
        p/=2;
    }
    if(t[a]==0)
        cout<<a;
    else
        cout<<b;
    return 0;
}
