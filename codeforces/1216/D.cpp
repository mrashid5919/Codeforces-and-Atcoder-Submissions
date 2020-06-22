#include<stdio.h>
long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    long long int n,ara[200005],y,z,max,i;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&ara[i]);
    for(i=0;i<n;i++)
    {
        if(i==0)
            max=ara[i];
        else if(ara[i]>max)
            max=ara[i];
    }
    z=0;
    for(i=0;i<n;i++)
    {
        if(ara[i]==max)
            continue;
        else if(i==0)
        {
            y=max-ara[i];
            z=max-ara[i];
        }
        else
        {
            y=gcd(y,max-ara[i]);
            z=z+max-ara[i];
        }
    }
    z=z/y;
    printf("%lld %lld",z,y);
    return 0;
}
