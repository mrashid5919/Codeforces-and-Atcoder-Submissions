#include<stdio.h>
int main()
{
    long long int n,a;
    scanf("%lld",&n);
    if(n%2==0)
        a=n/2;
    else
        a=n/2+1;
    if(a%2==0)
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
