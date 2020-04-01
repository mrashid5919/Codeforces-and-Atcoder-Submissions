#include<stdio.h>
int main()
{
    long long int t,x,y,a,b,i,k;
    double j;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        j=(double)(y-x)/(a+b);
        k=(long long int)j;
        if(j-k==0)
            printf("%lld\n",k);
        else
            printf("-1\n");
            //printf("%lf, %lld\n",j,k);
    }
    return 0;
}
