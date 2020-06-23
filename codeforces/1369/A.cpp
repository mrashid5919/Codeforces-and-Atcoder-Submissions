#include<stdio.h>
int main()
{
    long long int t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%4==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
