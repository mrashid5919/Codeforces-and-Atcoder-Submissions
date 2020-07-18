#include<stdio.h>
int main()
{
    int ara[4][4],ans[4][4],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&ara[i][j]);
    }
    ans[0][0]=ara[0][0]+ara[0][1]+ara[1][0];
    ans[0][1]=ara[0][0]+ara[0][1]+ara[0][2]+ara[1][1];
    ans[0][2]=ara[0][1]+ara[0][2]+ara[1][2];
    ans[1][0]=ara[0][0]+ara[1][0]+ara[1][1]+ara[2][0];
    ans[1][1]=ara[0][1]+ara[1][0]+ara[1][1]+ara[1][2]+ara[2][1];
    ans[1][2]=ara[0][2]+ara[1][1]+ara[1][2]+ara[2][2];
    ans[2][0]=ara[1][0]+ara[2][0]+ara[2][1];
    ans[2][1]=ara[1][1]+ara[2][0]+ara[2][1]+ara[2][2];
    ans[2][2]=ara[1][2]+ara[2][1]+ara[2][2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(ans[i][j]%2==0)
                ans[i][j]=1;
            else
                ans[i][j]=0;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
