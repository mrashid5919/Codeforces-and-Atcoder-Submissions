//Tiles(incomplete)
#include<stdio.h>
long long int power(long long int d,long long int s)
{
    if(s==1) return d;
    else if(s==0) return 1;
    else
    {
        long long int u,v=d;
        for(u=1;u<s;u++)
        {
            d=((d%998244353)*(v%998244353))%998244353;
        }
        return d;
    }
}
int main()
{
    long long int w,h,ans;
    scanf("%lld%lld",&w,&h);
    ans=(power(2,w+h))%998244353;
    printf("%lld",ans);
    return 0;
}
