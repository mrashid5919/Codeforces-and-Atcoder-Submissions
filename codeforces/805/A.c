#include<stdio.h>
int main()
{
    long long int l,r;
    scanf("%lld%lld",&l,&r);
    if(l==r)
        printf("%lld",l);
    else
        printf("2");
    return 0;
}
