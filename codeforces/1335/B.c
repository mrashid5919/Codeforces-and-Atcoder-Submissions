#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,a,b,i;
    char ara[30];
    for(i=1;i<=26;i++)
    {
        ara[i]='a'-1+i;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&a,&b);
        for(i=1;i<=n;i++)
        {
            if(i%b==0)
                printf("%c",ara[b]);
            else
                printf("%c",ara[i%b]);
        }
        printf("\n");
    }
    return 0;
}
