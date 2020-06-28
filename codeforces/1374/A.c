#include<stdio.h>
int main()
{
    long long int t,x,y,n,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld%lld",&x,&y,&n);
        if(n<x)
            ans=y;
        else if(n%x<y)
            ans=x*(n/x-1)+y;
        else if(n%x==y)
            ans=n;
        else
            ans=x*(n/x)+y;
        printf("%lld\n",ans);
    }
    return 0;
}
