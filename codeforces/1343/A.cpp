#include<stdio.h>
int main()
{
    long long int t,n,j,k,i,x,sum;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        sum=1;
        scanf("%lld",&n);
        for(j=1;;j++)
        {
            sum=sum+pow(2,j);
            if(n%sum==0)
            {
                x=n/sum;
                printf("%lld\n",x);
                break;
            }
        }
    }
}
