#include<stdio.h>
int main()
{
    char ara[9][9];
    int i,j,p=0;
    for(i=0;i<8;i++)
        scanf("%s",&ara[i]);
    for(i=0;i<8;i++)
    {
        for(j=0;j<7;j++)
        {
            if((ara[i][j]=='B' && ara[i][j+1]=='B')||(ara[i][j]=='W' && ara[i][j+1]=='W'))
            {
                p=1;
                break;
            }
        }
    }
    if(p==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
