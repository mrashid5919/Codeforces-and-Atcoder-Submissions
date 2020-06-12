#include<stdio.h>
int main()
{
    long long int t,n,x,m,c,d,high,low,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&n,&x,&m);
        low=x;
        high=x;
        while(m--)
        {
            scanf("%lld%lld",&c,&d);
            if(c<low && d>=low)
                low=c;
            if(c<=high && d>high)
                high=d;
        }
        ans=(high-low)+1;
        printf("%lld\n",ans);
    }
    return 0;
}
