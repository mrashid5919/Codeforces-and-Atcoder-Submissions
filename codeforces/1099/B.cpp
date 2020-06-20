#include<stdio.h>
int main()
{
    long long int n,ans,i,ara[100001];
    scanf("%lld",&n);
    ara[2]=2;
    for(i=3;i<=100000;i++)
    {
       ara[i]=ara[i-1]+i/2;
    }
    for(i=0;; i++)
    {
        if(n==ara[i])
        {
            printf("%lld\n",i+1);
            break;
        }
        else if(n<ara[i])
        {
            printf("%lld\n",i);
            break;
        }
    }
    return 0;
}
