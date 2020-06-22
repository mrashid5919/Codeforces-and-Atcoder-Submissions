#include<stdio.h>
int main()
{
    long long int n,c,t[100005],i,count;
    scanf("%lld%lld",&n,&c);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&t[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            count=1;
        else
        {
            if(t[i]-t[i-1]<=c)
                count++;
            else
                count=1;
        }
    }
    printf("%lld",count);
    return 0;
}
