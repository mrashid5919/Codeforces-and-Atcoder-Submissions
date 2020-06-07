#include<stdio.h>
int main()
{
    long long int n,m,sum=0,a[100005],i;
    scanf("%lld%lld",&n,&m);
    for(i=0;i<m;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<m;i++)
    {
        if(i==0)
        {
            sum=a[i]-1;
        }
        else
        {
            if(a[i]>=a[i-1])
                sum=sum+a[i]-a[i-1];
            else
                sum=sum+n-a[i-1]+a[i];
        }
    }
    printf("%lld",sum);
    return 0;
}
