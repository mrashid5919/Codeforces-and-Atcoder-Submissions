#include<stdio.h>
int main()
{
    long long int n,i,odd=0,ara[100005];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
        if(ara[i]%2==1)
            odd++;
    }
    if(odd%2==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}