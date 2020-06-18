#include<stdio.h>
int main()
{
    long long int ara[100001],t,a,b,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&a,&b,&n);
        if(a>b)
        {
            ara[0]=b;
            ara[1]=a;
        }
        else
        {
            ara[0]=a;
            ara[1]=b;
        }
        for(i=2;;i++)
        {
            ara[i]=ara[i-1]+ara[i-2];
            if(ara[i]>n)
            {
                printf("%lld\n",i-1);
                break;
            }
        }
    }
    return 0;
}
