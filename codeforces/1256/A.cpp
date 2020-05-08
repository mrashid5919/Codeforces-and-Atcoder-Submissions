#include<stdio.h>
int main()
{
    long long int q,a,b,n,s;
    scanf("%lld",&q);
    while(q--)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&n,&s);
        if(s%n>b)
            printf("NO\n");
        else if(a*n+b>=s)
            printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
