#include<stdio.h>
int main()
{
    long long int n,ara[1001],i,ans,j,c;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
        scanf("%lld",&ara[i]);
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                c=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=c;
            }
        }
    }
    ans=(ara[n-1]-ara[0])-n+1;
    printf("%lld\n",ans);
    return 0;
}
