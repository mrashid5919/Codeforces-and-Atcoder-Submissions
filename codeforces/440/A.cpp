#include<stdio.h>
int main()
{
    long long int n,a,i,sum=0,total,m;
    scanf("%lld",&n);
    total=(n*(n+1))/2;
    for(i=0;i<(n-1);i++)
    {
        scanf("%lld",&a);
        sum=sum+a;
    }
    m=total-sum;
    printf("%lld",m);
    return 0;
}
