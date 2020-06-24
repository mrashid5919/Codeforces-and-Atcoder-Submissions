#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int n,i,x[102],sum,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
            m=x[i];
        else
            m=gcd(m,x[i]);
    }
    printf("%d",m*n);
    return 0;
}
