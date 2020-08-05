#include<stdio.h>
int main()
{
    long long int n,d,x,y,sum=0,i;
    scanf("%lld%lld",&n,&d);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&x,&y);
        if(x*x+y*y<=d*d)
            sum++;
    }
    printf("%lld",sum);
    return 0;
}
