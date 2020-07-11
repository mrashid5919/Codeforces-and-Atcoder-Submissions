#include<stdio.h>
int main()
{
    int t,n,i,ara[1002];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            ara[i]=1;
        for(i=0;i<n;i++)
            printf("%d ",ara[i]);
        printf("\n");
    }
    return 0;
}
