#include<stdio.h>
int main()
{
    int t,n,i,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%4==0)
        {
            for(i=0;i<n-(n/4);i++)
                printf("9");
            for(i=0;i<n/4;i++)
                printf("8");
            printf("\n");
        }
        else
        {
            for(i=0;i<n-1-n/4;i++)
                printf("9");
            for(i=0;i<n/4+1;i++)
                printf("8");
            printf("\n");
        }
    }
    return 0;
}
