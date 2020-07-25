#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=1800)
        printf("1");
    else if(x>=1600)
        printf("2");
    else if(x>=1400)
        printf("3");
    else if(x>=1200)
        printf("4");
    else if(x>=1000)
        printf("5");
    else if(x>=800)
        printf("6");
    else if(x>=600)
        printf("7");
    else
        printf("8");
    return 0;
}
