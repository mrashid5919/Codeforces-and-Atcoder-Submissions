#include<stdio.h>
int main()
{
    int n,k,i,ara[2001],y=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]+k<=5)
            y++;
    }
    printf("%d\n",y/3);
    return 0;
}
