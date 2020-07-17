#include<stdio.h>
int main()
{
    int t,n,i,j,ara[103],s[53],count,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<2*n;i++)
            scanf("%d",&ara[i]);
        count=0;
        for(i=0;i<2*n;i++)
        {
            p=0;
            if(i==0)
            {
                count=1;
                s[count]=ara[i];
            }
            else
            {
                for(j=1;j<=count;j++)
                {
                    if(ara[i]==s[j])
                    {
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    continue;
                else
                {
                    count++;
                    s[count]=ara[i];
                }
            }
        }
        for(i=1;i<=n;i++)
            printf("%d ",s[i]);
        printf("\n");
    }
    return 0;
}
