#include<stdio.h>
int main()
{
    unsigned long long int a,b,c,ans;
    scanf("%llu%llu%llu",&a,&b,&c);
    if(a==b)
        ans=a+b+2*c;
    else if(a>b)
        ans=2*c+b+b+1;
    else
        ans=2*c+a+a+1;
    printf("%llu",ans);
    return 0;
}
