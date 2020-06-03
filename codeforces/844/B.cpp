#include<stdio.h>
long long int power(long long int d,long long int s)
{
    if(s==1) return d;
    else if(s==0) return 1;
    else
    {
        long long int u,v=d;
        for(u=1;u<s;u++)
        {
            d=d*v;
        }
        return d;
    }
}
int main()
{
    long long int n,m,b,w,sum,i,j,ara[51][51],k;
    sum=0;
    w=0;
    b=0;
    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%lld",&ara[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]==0)
                w++;
        }
        k=power(2,w);
        sum=sum+k-1;
        w=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]==1)
                b++;
        }
        k=power(2,b);
        sum=sum+k-1;
        b=0;
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(ara[i][j]==0)
                w++;
        }
        k=power(2,w);
        sum=sum+k-1;
        w=0;
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(ara[i][j]==1)
                b++;
        }
        k=power(2,b);
        sum=sum+k-1;
        b=0;
    }
    sum=sum-(n*m);
    printf("%lld",sum);
    return 0;
}
