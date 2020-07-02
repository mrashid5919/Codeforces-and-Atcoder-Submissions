#include<stdio.h>
int main()
{
    long long int n,m,ans;
    scanf("%lld%lld",&n,&m);
    /*if(n>=m)
    {
        if(m>=n/2)
        {
            if(n%2==0)
                ans=n/2;
            else
            {
                if(m-n/2>=2)
                    ans=n/2+1;
                else
                    ans=n/2;
            }
        }
        else
            ans=m;
    }
    else
    {
        if(n>=m/2)
        {
            if(m%2==0)
                ans=m/2;
            else
            {
                if(n-m/2>=2)
                    ans=m/2+1;
                else
                    ans=m/2;
            }
        }
        else
            ans=n;
    }*/
    if(m<(m+n)/3 && n<(m+n)/3)
    {
        if(m<=n)
            ans=m;
        else
            ans=n;
    }
    else if(m<(m+n)/3)
        ans=m;
    else if(n<(m+n)/3)
        ans=n;
    else
        ans=(m+n)/3;
    printf("%lld\n",ans);
    return 0;
}
