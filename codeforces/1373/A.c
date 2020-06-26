//Donut shops
#include<stdio.h>
int main()
{
    long long int t,a,b,c,p,q;
    double d;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a>=c)
        {
            p=-1;
            q=b;
        }
        else
        {
            d=(double)c/b;
            if(d>=a)
            {
                p=1;
                q=-1;
            }
            else
            {
                p=1;
                q=b;
            }
        }
        printf("%lld %lld\n",p,q);
    }
    return 0;
}
