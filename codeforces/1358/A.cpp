#include<stdio.h>
int main()
{
    long long int t,n,m,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        if((n*m)%2==0)
            ans=(n*m)/2;
        else
            ans=((n*m)+1)/2;
        printf("%lld\n",ans);
    }
    return 0;
}
