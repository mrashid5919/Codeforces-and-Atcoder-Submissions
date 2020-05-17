#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n%10;
    if(n==2 || n==5 || n==4 || n==7 || n==9)
        printf("hon");
    else if(n==3)
        printf("bon");
    else
        printf("pon");
    return 0;
}