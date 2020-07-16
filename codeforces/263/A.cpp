#include<stdio.h>
int main()
{
    int i,j,a,b,c,ara[6][6];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&ara[i][j]);
            if(ara[i][j]==1)
            {
                a=i;
                b=j;
            }
        }
    }
    if(a>=3 && b>=3)
    {
        c=(a-3)+(b-3);
    }
    else if(a<3 && b>=3)
    {
        c=(3-a)+(b-3);
    }
    else if(b<3 && a>=3)
    {
        c=(a-3)+(3-b);
    }
    else
    {
        c=(3-a)+(3-b);
    }
    printf("%d",c);
    return 0;
}
