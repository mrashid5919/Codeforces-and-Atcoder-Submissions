#include<stdio.h>
int main()
{
    int n,k,a[2201],i,j,ans=0,c;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        ans=ans+a[i];
    }
    printf("%d",ans);
    return 0;
}
