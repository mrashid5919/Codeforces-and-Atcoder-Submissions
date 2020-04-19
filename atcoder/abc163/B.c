#include<stdio.h>
int main()
{
    long long int N,M,A[10000],i,sum=0,r;
    scanf("%lld%lld",&N,&M);
    for(i=0;i<M;i++)
    {
        scanf("%lld",&A[i]);
        sum=sum+A[i];
    }
    if(sum<=N)
        r=N-sum;
    else
        r=-1;
    printf("%lld",r);
    return 0;
}
