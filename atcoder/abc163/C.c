#include<stdio.h>
int main()
{
    long int n,i,x,a[200000],sum,j;
    scanf("%ld",&n);
    for(i=0;i<=n;i++)
    {
        a[i]=0;
    }
    for(i=1;i<n;i++)
    {
        scanf("%ld",&x);
        a[x]++;
    }
    a[n]=0;
    for(j=1;j<=n;j++)
    {
        printf("%ld\n",a[j]);
    }
    return 0;

}
