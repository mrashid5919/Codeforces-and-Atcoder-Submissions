#include<stdio.h>
int main()
{
    long long int n,i,ara[100001],min,ans,count=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            min=ara[i];
        else if(ara[i]<min)
            min=ara[i];
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==min)
        {
            ans=i;
            count=count+1;
        }
    }
    if(count==1)
        printf("%lld\n",ans+1);
    else
        printf("Still Rozdil\n");
    return 0;
}
