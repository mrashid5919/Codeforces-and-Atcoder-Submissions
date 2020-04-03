#include<stdio.h>
int main()
{
    long long int t,s,a,b,c,i,r;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&s,&a,&b,&c);
        r=s/c+((s/c)/a)*b;
        printf("%lld\n",r);
    }
    return 0;
}
