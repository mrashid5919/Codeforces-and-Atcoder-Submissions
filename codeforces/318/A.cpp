#include<stdio.h>
int main()
{
    long long int n,k,out;
    scanf("%lld%lld",&n,&k);
    if(n%2==0)
    {
        if(k<=n/2)
            out=2*k-1;
        else
            out=(k-n/2)*2;
    }
    else
    {
        if(k<=(n+1)/2)
            out=2*k-1;
        else
            out=(k-(n+1)/2)*2;
    }
    printf("%lld",out);
    return 0;
}
