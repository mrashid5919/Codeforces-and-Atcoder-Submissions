#include<stdio.h>
int main()
{
    long long int k,n,w,i,cost=0,b;
    scanf("%lld%lld%lld",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        cost=cost+i*k;
    }
    if(cost>n)
    {
        b=cost-n;
    }
    else
    {
        b=0;
    }
    printf("%lld",b);
    return 0;
}
