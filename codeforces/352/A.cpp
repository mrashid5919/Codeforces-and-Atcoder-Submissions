#include<stdio.h>
int main()
{
    int n,i,ara[1003],fi=0,ze=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==0)
            ze++;
        else
            fi++;
    }
    if(ze==0)
        printf("-1");
    else if(fi<9)
        printf("0");
    else
    {
        for(i=1;i<=(fi/9)*9;i++)
            printf("5");
        for(i=1;i<=ze;i++)
            printf("0");
    }
    return 0;
}
