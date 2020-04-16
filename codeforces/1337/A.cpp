#include<stdio.h>
int main()
{
    long long int t,a,b,c,d,x,y,z,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        x=b;
        y=c;
        z=c;
        printf("%lld %lld %lld\n",x,y,z);
    }
    return 0;
}
