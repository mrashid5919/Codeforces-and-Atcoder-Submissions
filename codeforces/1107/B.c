#include<stdio.h>
int main()
{
    long long int n,k,x,ans;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld%lld",&k,&x);
        ans=x+(k-1)*9;
        printf("%lld\n",ans);
    }
    return 0;
}
