#include<stdio.h>
int main()
{
    int n,i,j,k,min,max,ans,ara[102];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            min=ara[i];
            j=i;
        }
        else if(ara[i]<=min)
        {
            min=ara[i];
            j=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            max=ara[i];
            k=i;
        }
        else if(ara[i]>max)
        {
            max=ara[i];
            k=i;
        }
    }
    if(min==max)
        printf("0");
    else
    {
        if(k<j)
            ans=k+(n-1-j);
        else
            ans=k+(n-1-j)-1;
        printf("%d",ans);
    }
    return 0;
}
