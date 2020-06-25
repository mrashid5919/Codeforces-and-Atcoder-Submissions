#include<stdio.h>
int main()
{
    long long int n,i,a[1005],m,l[1001],r[1001],sum=0,p=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sum=sum+a[i];
    }
    scanf("%lld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%lld%lld",&l[i],&r[i]);
    }
    for(i=0;i<m;i++)
    {
        if(sum<=l[i])
        {
            printf("%lld",l[i]);
            p=1;
            break;
        }
        else if(sum<=r[i])
        {
            printf("%lld",sum);
            p=1;
            break;
        }
    }
    if(p==0)
        printf("-1");
    return 0;
}
