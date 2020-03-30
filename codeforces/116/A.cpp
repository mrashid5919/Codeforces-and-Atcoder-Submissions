#include<stdio.h>
int main()
{
    int n,a,b,i,sum=0,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=sum+(b-a);
        if(max<sum)
            max=sum;
        else
            max=max;

    }
    printf("%d",max);
    return 0;
}
