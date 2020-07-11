#include<stdio.h>
int main()
{
    long long t,n,i,p,d;
    scanf("%lld",&t);
    while(t--)
    {
       p=0;
       scanf("%lld",&n);
       if(n%2==0)
       {
           printf("%lld %lld\n",n/2,n/2);
           continue;
       }
       else
       {
           for(i=3;i*i<=n;i++)
           {
               if(n%i==0)
               {
                   d=n/i;
                   p=1;
                   break;
               }
           }
           if(p==1)
                printf("%lld %lld\n",d,n-d);
           else
                printf("1 %lld\n",n-1);
       }
    }
    return 0;
}
