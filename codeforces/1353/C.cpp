#include<stdio.h>
int main()
{
    unsigned long long int sum,t,n,i;
    scanf("%llu",&t);
    while(t--)
    {
        sum=0;
        scanf("%llu",&n);
        if(n==1)
            sum=0;
        else
        {
            for(i=1;i<=n/2;i++)
            {
                sum=sum+i*((2*i+1)*(2*i+1)-(2*i-1)*(2*i-1));
            }
        }
        printf("%llu\n",sum);
    }
    return 0;
}
