#include<stdio.h>
int main()
{
    unsigned long long int l,r,i;
    scanf("%llu%llu",&l,&r);
    printf("YES\n");
    for(i=1;i<=(r-l+1)/2;i++)
    {
        printf("%llu %llu\n",(l-1)+2*i-1,(l-1)+2*i);
    }
    return 0;
}
