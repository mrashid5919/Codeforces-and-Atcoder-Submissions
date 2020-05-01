#include<stdio.h>
int main()
{
    int t,n,i,j,k;
    long long int sum,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d",&n);
        for(j=1;j<=n/2;j++)
        {
            m=1;
            for(k=1;k<=j;k++)
            {
                m=2*m;
            }
            sum=sum+m;

        }
        printf("%lld\n",sum);
    }
    return 0;
}
