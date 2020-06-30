#include<stdio.h>
int main()
{
    long long int n,i,count=0,ara[5000];
    scanf("%lld",&n);
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ara[count]=i;
            count++;
        }
    }
    if(ara[count-1]*ara[count-1]==n)
        printf("%lld\n",2*count-1);
    else
        printf("%lld\n",2*count);
    return 0;
}
