#include<stdio.h>
int main()
{
    long int x,a,b,c,d,e,sum;
    scanf("%ld",&x);
    a=x/5;
    b=(x%5)/4;
    c=((x%5)%4)/3;
    d=(((x%5)%4)%3)/2;
    e=(((x%5)%4)%3)%2;
    sum=a+b+c+d+e;
    printf("%ld",sum);
    return 0;
}
