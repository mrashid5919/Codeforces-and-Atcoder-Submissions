#include<stdio.h>
int main()
{
    int n,m,i,j;
    char ara[101][101];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]=='.')
            {
                if((i+j)%2==0)
                    ara[i][j]='B';
                else
                    ara[i][j]='W';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%c",ara[i][j]);
        printf("\n");
    }
    return 0;
}
