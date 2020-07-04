#include<stdio.h>
int main()
{
    long long int t,n,i;
    static long long int ara[300002];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&ara[i]);
        if(ara[0]<ara[n-1])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
