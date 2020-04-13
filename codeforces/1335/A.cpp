#include<stdio.h>
int main()
{
    long long int t,i,n,w;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n%2==0)
        {
            w=n/2-1;
        }
        else
        {
            w=(n-1)/2;
        }
        printf("%lld\n",w);
    }
    return 0;
}
