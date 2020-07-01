#include<stdio.h>
int main()
{
    long long int t,n,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2==0)
            ans=n/2;
        else
            ans=n/2+1;
        printf("%lld\n",ans);
    }
    return 0;
}
