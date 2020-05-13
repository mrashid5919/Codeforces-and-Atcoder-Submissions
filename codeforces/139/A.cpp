#include<stdio.h>
int main()
{
    int n,arr[8],sum=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=7;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;;j++)
    {
        if(j%7==0)
            sum=sum+arr[7];
        else
            sum=sum+arr[j%7];
        if(sum>=n)
        {
            if(j%7==0)
            {
                printf("7");
                break;
            }
            else
            {
                printf("%d",j%7);
                break;
            }
        }
    }
    return 0;
}
