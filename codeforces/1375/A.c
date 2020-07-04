#include<stdio.h>
int main()
{
    long long int t,n,i,ara[101];
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&ara[i]);
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(ara[i]>0)
                    ara[i]=(-1)*ara[i];
            }
            else
            {
                if(ara[i]<0)
                    ara[i]=(-1)*ara[i];
            }
        }
        for(i=0;i<n;i++)
            printf("%lld ",ara[i]);
        printf("\n");
    }
    return 0;
}
