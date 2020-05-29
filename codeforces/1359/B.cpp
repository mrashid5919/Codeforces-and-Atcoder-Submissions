#include<stdio.h>
int main()
{
    long long int t,n,m,x,y,i,j,a,b,ans;
    char ara[101][1001];
    scanf("%lld",&t);
    while(t--)
    {
        ans=0;
        a=0;
        b=0;
        scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
        for(i=0;i<n;i++)
        {
            scanf("%s",ara[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(ara[i][j]=='*')
                    continue;
                else if(ara[i][j]=='.')
                {
                    if(ara[i][j+1]=='.' && 2*x>y)
                    {
                        b++;
                        j++;
                    }
                    else
                        a++;
                }
            }
        }
        ans=a*x+b*y;
        printf("%lld\n",ans);
    }
    return 0;
}
