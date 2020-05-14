#include<stdio.h>
int main()
{
    long long int t,n,m,s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        if(n==1)
            s=0;
        else if(n==2)
            s=m;
        else
            s=2*m;
        printf("%lld\n",s);
    }
    return 0;
}
