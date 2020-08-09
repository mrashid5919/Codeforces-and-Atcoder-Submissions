#include<stdio.h>
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            printf("%d ",i);
        printf("\n");
    }
    return 0;
}