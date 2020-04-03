#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a+b>c && b+c>a && c+a>b) || (a+b>d && b+d>a && d+a>b) || (a+c>d && c+d>a && d+a>c) || (b+c>d && c+d>b && d+b>c))
        printf("TRIANGLE");
    else if(a+b==c || a+b==d || a+c==b || a+c==d || a+d==b || a+d==c || b+c==d || b+c==a || b+d==c || b+d==a || c+d==b || c+d==a)
        printf("SEGMENT");
    else
        printf("IMPOSSIBLE");
    return 0;
}
