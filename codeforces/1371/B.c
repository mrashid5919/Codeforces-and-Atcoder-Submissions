#include<stdio.h>
int main()
{
    unsigned long long int t,n,r,ans;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu%llu",&n,&r);
        if(n<=r)
            ans=1+(n-1)*n/2;
        else
            ans=r*(r+1)/2;
        printf("%llu\n",ans);
    }
    return 0;
}
