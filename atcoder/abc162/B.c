#include<stdio.h>
int main()
{
    unsigned long long int n,sum=0,i;
    scanf("%llu",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
            sum=sum;
        else
            sum=sum+i;
    }
    printf("%llu",sum);
    return 0;
}
