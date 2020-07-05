//Neighbour Grid
#include<stdio.h>
int main()
{
    long long int t,n,m,i,j,ara[301][301],p,b[301][301];
    scanf("%lld",&t);
    while(t--)
    {
        p=0;
        scanf("%lld%lld",&n,&m);
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
                scanf("%lld",&b[i][j]);
        }
        for(i=1; i<n-1; i++)
        {
            for(j=1; j<m-1; j++)
                ara[i][j]=4;
        }
        for(i=0; i<n; i++)
        {
            if(i==0 || i==n-1)
            {
                for(j=1; j<m-1; j++)
                    ara[i][j]=3;
            }
            else
            {
                ara[i][0]=3;
                ara[i][m-1]=3;
            }
        }
        ara[0][0]=2;
        ara[0][m-1]=2;
        ara[n-1][0]=2;
        ara[n-1][m-1]=2;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(b[i][j]>ara[i][j])
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==1)
            printf("NO\n");
        else
        {
            printf("YES\n");
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                    printf("%d ",ara[i][j]);
                printf("\n");
            }
        }
    }
    return 0;
}
