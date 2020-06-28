#include<stdio.h>
int main()
{
    long long int t,n,i,x,y,ans;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        x=0;
        y=0;
        while(n%2==0)
        {
            n=n/2;
            x++;
        }
        while(n%3==0)
        {
            n=n/3;
            y++;
        }
        if(n==1)
        {
            if(x>y)
                ans=-1;
            else if(x==y)
                ans=x;
            else
                ans=y+(y-x);
        }
        else
            ans=-1;
        printf("%lld\n",ans);
    }
    return 0;
}
