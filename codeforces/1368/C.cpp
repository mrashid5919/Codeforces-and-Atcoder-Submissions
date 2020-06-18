#include<stdio.h>
int main()
{
    int n,k,i,j;
    scanf("%d",&n);
    k=4+3*n;
    printf("%d\n",k);
    for(i=0;i<=n+1;i++)
    {
        if(i==0)
        {
            for(j=0;j<=1;j++)
            {
                printf("%d %d\n",i,j);
            }
        }
        else if(i==n+1)
        {
            for(j=i-1;j<=i;j++)
            {
                printf("%d %d\n",i,j);
            }
        }
        else
        {
            for(j=i-1;j<=i+1;j++)
            {
                printf("%d %d\n",i,j);
            }
        }
    }
    return 0;
}
