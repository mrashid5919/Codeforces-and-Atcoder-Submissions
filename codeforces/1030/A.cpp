#include<stdio.h>
int main()
{
    int n,i,x,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        sum=sum+x;
    }
    if(sum==0)
        printf("EASY");
    else
        printf("HARD");
    return 0;
}
