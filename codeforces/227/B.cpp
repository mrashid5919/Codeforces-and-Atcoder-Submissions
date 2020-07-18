#include<stdio.h>
int main()
{
    unsigned long long int n,m,v=0,p=0,i,j;
    static int ara[100005],b[100005],ans[100005];
    scanf("%llu",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&ara[i]);
    scanf("%llu",&m);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=1;i<=n;i++)
    {
        ans[ara[i]]=i;
    }
    for(i=0;i<m;i++)
    {
        v=v+ans[b[i]];
        p=p+(n-ans[b[i]]+1);
    }
    printf("%llu %llu\n",v,p);
    return 0;
}
