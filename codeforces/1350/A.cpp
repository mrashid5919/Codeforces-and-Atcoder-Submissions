#include<stdio.h>
int main()
{
    long long int t,n,k,sum,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        if(n%2==0)
        {
            sum=n+2*k;
        }
        else
        {
            for(i=2;;i++)
            {
                if(n%i==0)
                    break;
            }
            sum=n+i+2*(k-1);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
