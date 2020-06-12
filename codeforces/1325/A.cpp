#include<stdio.h>
int main()
{
    long long int t,x;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&x);
        printf("1 %lld\n",x-1);
    }
    return 0;
}
