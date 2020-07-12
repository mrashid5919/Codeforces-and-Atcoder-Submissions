#include<stdio.h>
int main()
{
    int t,n,ara[1001],i,j,p,x,y;
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=1;i<n-1;i++)
        {
            p=0;
            for(j=0;j<i;j++)
            {
                if(ara[j]<ara[i])
                {
                    x=j;
                    p=1;
                    break;
                }
            }
            if(p==0)
                continue;
            else
            {
                for(j=i+1;j<n;j++)
                {
                    if(ara[j]<ara[i])
                    {
                        y=j;
                        p=2;
                        break;
                    }
                }
                if(p==1)
                    continue;
                else
                {
                    printf("YES\n");
                    printf("%d %d %d\n",x+1,i+1,y+1);
                    p=2;
                    break;
                }
            }
        }
        if(p==0 || p==1)
            printf("NO\n");
    }
    return 0;
}
