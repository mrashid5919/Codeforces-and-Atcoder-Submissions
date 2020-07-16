#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=2*n;i++)
    {
        if(i<=n)
        {
            for(j=0;j<2*(n-i);j++)
                printf(" ");
            for(j=0;j<=i;j++)
            {
                if(i==0)
                    printf("%d",j);
                else
                   printf("%d ",j);
            }
            for(j=i-1;j>=0;j--)
            {
                if(j==0)
                    printf("%d",j);
                else
                    printf("%d ",j);
            }
            printf("\n");
        }
        else
        {
            for(j=0;j<2*(i-n);j++)
                printf(" ");
            for(j=0;j<=n-(i-n);j++)
            {
                if(i==2*n)
                    printf("%d",j);
                else
                    printf("%d ",j);
            }
            for(j=n-(i-n)-1;j>=0;j--)
            {
                if(j==0)
                    printf("%d",j);
                else
                    printf("%d ",j);
            }
            printf("\n");
        }
    }
    return 0;
}
