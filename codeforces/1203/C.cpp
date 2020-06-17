//Common divisors(incomplete)
#include<stdio.h>
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    unsigned long long int n,i,min,count=0,p,q;
    static unsigned long long int ara[400001];
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            min=ara[i];
        else if(ara[i]<min)
            min=ara[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            q=gcd(min,ara[i]);
        else
            q=gcd(q,ara[i]);
    }
    for(i=1; i*i<=q; i++)
    {
        if(q%i==0)
        {
            p=i;
            count=count+1;
        }
    }
    if(q==p*p)
        printf("%llu",2*count-1);
    else
        printf("%llu",2*count);
    return 0;
}
