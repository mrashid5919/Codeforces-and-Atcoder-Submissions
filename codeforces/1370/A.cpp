#include<stdio.h>
int main()
{
    long int t,n,ans;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        ans=n/2;
        printf("%ld\n",ans);
    }
    return 0;
}
