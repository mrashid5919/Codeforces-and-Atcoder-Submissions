#include<stdio.h>
int main()
{
    int ara[6],i;
    for(i=1;i<=5;i++)
        scanf("%d",&ara[i]);
    for(i=1;i<=5;i++)
    {
        if(ara[i]==0)
        {
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
