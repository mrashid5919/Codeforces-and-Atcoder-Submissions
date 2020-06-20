#include<stdio.h>
int main()
{
    long long int n,i,j,a[1001],b[1001],swap;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            b[i]=a[i/2];
        else
            b[i]=a[n-1-(i-1)/2];
    }
    for(i=0;i<n;i++)
    {
        printf("%lld ",b[i]);
    }
    return 0;
}
