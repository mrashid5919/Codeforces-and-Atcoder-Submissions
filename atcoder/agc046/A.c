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
    int n,ans;
    scanf("%d",&n);
    ans=(360*n)/gcd(360,n);
    printf("%d",ans/n);
    return 0;
}