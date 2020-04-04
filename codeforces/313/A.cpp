#include<stdio.h>
int main()
{
    long long int n,a,b,c,d;
    scanf("%lld",&n);
    if(n>=0)
        printf("%lld",n);
    else
    {
        c=-n%100;
        d=-n%10;
        a=(n/100)*10-d;
        b=n/10;
        if(a>=b)
            printf("%lld",a);
        else
            printf("%lld",b);
        //printf("%lld %lld",c,d);
    }
    return 0;
}
