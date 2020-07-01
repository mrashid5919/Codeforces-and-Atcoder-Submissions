//Grid-00100(Incomplete)
#include<stdio.h>
int main()
{
    int t,n,k,i,j,ara[305][305],count=0,p,q,m;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        p=0;
        q=0;
        scanf("%d%d",&n,&k);
        if(k%n==0)
            printf("0\n");
        else
            printf("2\n");
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                ara[i][j]=0;
        }
        while(1)
        {
            for(i=1;i<=n;i++)
            {
                if(count==k)
                    break;
                else if(i+p>n)
                    ara[i][i+p-n]=1;
                else
                    ara[i][i+p]=1;
                count++;
            }
            p++;
            if(count==k)
                break;
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
                printf("%d",ara[i][j]);
            printf("\n");
        }
    }
    return 0;
}
