#include<stdio.h>
int main()
{
    long long int t,n,m,i,j,ara[301][301],p;
    scanf("%lld",&t);
    while(t--)
    {
        p=0;
        scanf("%lld%lld",&n,&m);
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                scanf("%lld",&ara[i][j]);
        }
        if(ara[0][0]>2 || ara[0][m-1]>2 || ara[n-1][0]>2 || ara[n-1][m-1]>2)
        {
            printf("NO\n");
            continue;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i==0 || i==n-1)
                {
                    for(j=1;j<m-1;j++)
                    {
                        if(ara[i][j]>3)
                        {
                            p=1;
                            break;
                        }
                    }
                    if(p==1)
                        break;
                }
                else
                {
                    if(ara[i][0]>3 || ara[i][m-1]>3)
                    {
                        p=1;
                        break;
                    }
                }
            }
            if(p==1)
            {
                printf("NO\n");
                continue;
            }
            else
            {
                for(i=0;i<n;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        if(ara[i][j]>4)
                        {
                            p=2;
                            break;
                        }
                    }
                    if(p==2)
                        break;
                }
            }
            if(p==2)
            {
                printf("NO\n");
                continue;
            }
            else
            {
                printf("YES\n");
                for(i=1;i<n-1;i++)
                {
                    for(j=1;j<m-1;j++)
                        ara[i][j]=4;
                }
                for(i=0;i<n;i++)
                {
                    if(i==0 || i==n-1)
                    {
                        for(j=1;j<m-1;j++)
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
                        printf("%lld ",ara[i][j]);
                    printf("\n");
                }
            }
        }
    }
    return 0;
}
