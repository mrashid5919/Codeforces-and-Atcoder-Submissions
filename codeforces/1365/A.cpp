//Matrix game (incomplete)
#include<stdio.h>
int main()
{
    int t,n,m,s,x,ans,i,j,a[51][51];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        s=0;
        x=0;
        ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]==1)
                {
                    s++;
                    break;
                }
            }
        }
        for(j=0;j<m;j++)
        {
            for(i=0;i<n;i++)
            {
                if(a[i][j]==1)
                {
                    x++;
                    break;
                }
            }
        }
        if(n-s>=m-x)
            ans=m-x;
        else
            ans=n-s;
        if(ans%2==0)
            printf("Vivek\n");
        else
            printf("Ashish\n");
    }
    return 0;
}
