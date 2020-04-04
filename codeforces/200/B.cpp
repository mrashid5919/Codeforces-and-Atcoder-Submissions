#include<stdio.h>
int main()
{
    int n,i,p,sum=0;
    float percent;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p);
        sum=sum+p;
    }
    percent=(float)sum/(float)n;
    printf("%f",percent);
    return 0;
}
