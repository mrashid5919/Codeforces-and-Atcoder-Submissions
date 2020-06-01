#include<stdio.h>
int main()
{
    long long int a,b,d,x;
    char c;
    scanf("%lld%lld",&a,&b);
    scanf("%c",&c);
    scanf("%lld",&d);
    b=b*100;
    b=b+d;
    x=a*b;
    x=x/100;
    printf("%lld",x);
    return 0;
}
