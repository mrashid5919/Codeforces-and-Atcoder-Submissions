#include<stdio.h>
int main()
{
    int n,k,i,d,a,r[101],j,l,sum=0;
    scanf("%d%d",&n,&k);
    for(l=0;l<=n;l++)
    {
        r[l]=0;
    }
    for(i=0;i<k;i++)
    {
        scanf("%d",&d);
        for(j=0;j<d;j++)
        {
            scanf("%d",&a);
            r[a]=r[a]+1;
        }
    }
    for(l=1;l<=n;l++)
    {
        if(r[l]==0)
        {
            sum=sum+1;
        }
    }
    printf("%d",sum);
}
