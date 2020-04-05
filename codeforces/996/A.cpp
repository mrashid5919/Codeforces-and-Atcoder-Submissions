#include<stdio.h>
int main()
{
    long long int n,i,d,sum;
    scanf("%lld",&n);
    sum=n;
    if(n==0)
        printf("0");
    else
    {
        for(i=0;sum>0;i++)
        {
            if(sum>=100)
            {
                sum=sum-100;
            }
            else if(sum>=20)
            {
                sum=sum-20;
            }
            else if(sum>=10)
            {
                sum=sum-10;
            }
            else if(sum>=5)
            {
                sum=sum-5;
            }
            else if(sum>=1)
            {
                sum=sum-1;
            }
        }

    }
    printf("%lld",i);
    return 0;
}
