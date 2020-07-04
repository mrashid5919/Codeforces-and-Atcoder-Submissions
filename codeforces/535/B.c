#include<stdio.h>
long long int power(long long int u,long long int v)
{
    long long int i,x;
    if(v==0)
        return 1;
    else if(v==1)
        return u;
    else
    {
        x=u;
        for(i=0;i<v-1;i++)
            x=x*u;
        return x;
    }
}
int main()
{
    long long int n,sum=0,count=0,a;
    scanf("%lld",&n);
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        if(a==4)
            sum=sum+power(2,count);
        else
            sum=sum+power(2,count+1);
        count++;
    }
    printf("%lld",sum);
    return 0;
}
