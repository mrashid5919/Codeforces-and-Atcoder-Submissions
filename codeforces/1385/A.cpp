#include<stdio.h>
int main()
{
    long long int t,x,y,z,a,b,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        if(x==y && y==z)
        {
            printf("YES\n");
            a=x;
            b=x;
            c=x;
            printf("%lld %lld %lld\n",a,b,c);
        }
        else if(x==y && x>z)
        {
            printf("YES\n");
            a=z;
            b=z;
            c=x;
            printf("%lld %lld %lld\n",a,b,c);
        }
        else if(x==z && x>y)
        {
            printf("YES\n");
            a=y;
            b=y;
            c=x;
            printf("%lld %lld %lld\n",a,b,c);
        }
        else if(y==z && y>x)
        {
            printf("YES\n");
            a=x;
            b=x;
            c=y;
            printf("%lld %lld %lld\n",a,b,c);
        }
        else
            printf("NO\n");
    }
    return 0;
}
