#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,m,i,j,min;
    char ara[103][103];
    scanf("%d",&t);
    while(t--)
    {
        min=0;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
            scanf("%s",&ara[i]);
        for(i=0;i<n-1;i++)
        {
            if(ara[i][m-1]=='R')
                min++;
        }
        for(j=0;j<m-1;j++)
        {
            if(ara[n-1][j]=='D')
                min++;
        }
        printf("%d\n",min);
    }
    return 0;
}
