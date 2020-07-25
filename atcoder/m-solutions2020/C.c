#include<stdio.h>
int main()
{
    long long int n,k,i;
    static long long int ara[200005];
    scanf("%lld%lld",&n,&k);
    for(i=1;i<=n;i++)
        scanf("%lld",&ara[i]);
    for(i=1;i<=n-k;i++)
    {
        if(ara[i]<ara[i+k])
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
