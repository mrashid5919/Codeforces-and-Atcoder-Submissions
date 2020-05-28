#include<stdio.h>
int main()
{
    int t,n,m,k,ans,d,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&k);
        if((n/k)>=m)
            ans=m;
        else if(m==0)
            ans=0;
        else if(n==k)
        {
            if(m==1)
                ans=1;
            else
                ans=0;
        }
        else
        {
            ans=(n-m)/(k-1);

        }
        printf("%d\n",ans);
    }
    return 0;
}
