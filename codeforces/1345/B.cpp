
#include<stdio.h>
int main()
{
    int t;
    long long int n,m,sum,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        count=0;
        while(n>1)
        {
            m=1;
            sum=0;

                while(sum<n)
                {
                    sum=3*m-1;
                    m++;
                    if(n>=sum)
                    {
                        n=n-sum;
                    }
                    else
                        break;
                }
                count++;


        }
        printf("%lld\n",count);
    }
    return 0;
}
