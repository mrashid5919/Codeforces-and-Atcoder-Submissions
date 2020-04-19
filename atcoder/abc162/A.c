#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n/100;
    b=(n%100)/10;
    c=(n%100)%10;
    if(a==7 || b==7 || c==7)
        printf("Yes");
    else
        printf("No");
    return 0;
}
