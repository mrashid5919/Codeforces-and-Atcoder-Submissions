#include<stdio.h>
int main()
{
    long long int t,i,x,y,a,b,r;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        if(b<=2*a)
        {
            if(x==y)
                r=b*x;
            else if(x>y)
                r=(x-y)*a+y*b;
            else
                r=(y-x)*a+x*b;
        }
        else
        {
            if(x==y)
                r=2*a*x;
            else if(x>y)
                r=(x-y)*a+2*y*a;
            else
                r=(y-x)*a+2*x*a;
        }

        printf("%lld\n",r);
    }
    return 0;
}
