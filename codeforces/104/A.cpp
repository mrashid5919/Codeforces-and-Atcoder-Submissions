#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    if(n==20)
        a=15;
    else if(n>=11 && n<=21)
        a=4;
    else
        a=0;
    printf("%d",a);
    return 0;
}
