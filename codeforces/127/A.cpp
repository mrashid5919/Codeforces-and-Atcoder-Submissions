#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,k,x[101],y[101],i;
    float sum=0.0,d;
    scanf("%lld%lld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%lld%lld",&x[i],&y[i]);
    }
    for(i=0;i<n-1;i++)
    {
        d=(float)sqrt((x[i+1]-x[i])*(x[i+1]-x[i])+(y[i+1]-y[i])*(y[i+1]-y[i]));
        sum=sum+d;
    }
    sum=sum*k;
    printf("%.6f",sum/50.0);
    return 0;
}
