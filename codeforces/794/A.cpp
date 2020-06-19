#include<stdio.h>
int main()
{
    long long int a,b,c,n,i,ara[100005],count=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if((ara[i]>b)&&(ara[i]<c))
            count++;
    }
    printf("%lld\n",count);
    return 0;
}
