#include<stdio.h>
int main()
{
    long int t,n,m,i,j,a[1000],sum;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&n,&m);
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
            sum=sum+a[j];
        }
        if(sum<=m)
        {
            printf("%ld\n",sum);
        }
        else
        {
            printf("%ld\n",m);
        }
    }
    return 0;
}
