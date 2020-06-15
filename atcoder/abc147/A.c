#include<stdio.h>
int main()
{
    int a1,a2,a3,sum=0;
    scanf("%d%d%d",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(sum>=22)
        printf("bust");
    else
        printf("win");
    return 0;
}