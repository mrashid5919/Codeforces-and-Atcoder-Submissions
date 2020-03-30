#include<stdio.h>
int main()
{
    long long int t,a,b,c,A,B,C,n,i;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
        if(a>=b && a>=c)
        {
            B=a-b;
            C=a-c;
            n=n-(B+C);
            if(n<0)
                printf("NO\n");
            else if(n%3==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if(b>=a && b>=c)
        {
            A=b-a;
            C=b-c;
            n=n-(A+C);
            if(n<0)
                printf("NO\n");
            else if(n%3==0)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            A=c-a;
            B=c-b;
            n=n-(A+B);
            if(n<0)
                printf("NO\n");
            else if(n%3==0)
                printf("YES\n");
            else
                printf("NO\n");
        }

    }
    return 0;
}
