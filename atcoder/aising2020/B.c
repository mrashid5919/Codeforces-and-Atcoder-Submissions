#include<stdio.h>
int main()
{
    int n,i,ara[102],count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&ara[i]);
    for(i=1;i<=n;i=i+2)
    {
        if(ara[i]%2==1)
            count++;
    }
    printf("%d",count);
    return 0;
}