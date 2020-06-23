#include<stdio.h>
unsigned long long int power(unsigned long long int u,unsigned long long int v)
{
    unsigned long long int d,j;
    if(v==0)
        return 1;
    else if(v==1)
        return u;
    else
    {
        d=u;
        for(j=1;j<v;j++)
            d=d*u;
        return d;
    }
}
int main()
{
    unsigned long long int i,n,l,r,min=0,max=0,count=0;
    scanf("%llu%llu%llu",&n,&l,&r);
    for(i=l-1;i>0;i--)
    {
        min=min+power(2,i);
        count++;
    }
    min=min+n-count;
    count=0;
    for(i=0;i<=r-1;i++)
    {
        max=max+power(2,i);
        count++;
    }
    max=max+(n-count)*power(2,r-1);
    printf("%llu %llu",min,max);
    return 0;
}
