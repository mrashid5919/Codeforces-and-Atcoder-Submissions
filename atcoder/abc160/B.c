#include<stdio.h>
int main()
{
    long long int x,a,b,max;
    scanf("%lld",&x);
    a=x/500;
    b=(x%500)/5;
    max=a*1000+b*5;
    printf("%lld",max);
    return 0;
}