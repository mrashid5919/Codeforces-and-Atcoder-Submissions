#include<stdio.h>
int main()
{
    unsigned long long int n;
    scanf("%llu",&n);
    if(n==0)
        printf("%llu",n);
    else if(n%2==0)
        printf("%llu",n+1);

    else
        printf("%llu",n/2+1);
    return 0;
}
