#include<stdio.h>
int main()
{
    int n,ara[102],count=0,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    for(i=1;i<=5;i++)
    {
        if((sum+i)%(n+1)!=1)
            count++;
    }
    printf("%d",count);
    return 0;
}
