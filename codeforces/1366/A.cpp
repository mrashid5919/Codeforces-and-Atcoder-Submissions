#include<stdio.h>
int main()
{
    long long int t,a,b;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&a,&b);
        if(a==0 || b==0)
            printf("0\n");
        else
        {
            if(a>=b)
            {
                if((a+b)/3>b)
                {
                    if(a/2<b)
                        printf("%lld\n",a/2);
                    else
                        printf("%lld\n",b);
                }
                else
                    printf("%lld\n",(a+b)/3);
            }
            else
            {
                if((a+b)/3>a)
                {
                    if(b/2<a)
                        printf("%lld\n",b/2);
                    else
                        printf("%lld\n",a);
                }
                else
                    printf("%lld\n",(a+b)/3);
            }
        }
    }
    return 0;
}
