#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a;
    a=b;
    b=d;
    d=a;
    a=c;
    c=d;
    printf("%d %d %d",a,b,c);
    return 0;
}
