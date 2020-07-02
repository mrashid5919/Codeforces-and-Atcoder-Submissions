#include<stdio.h>
#include<string.h>
int main()
{
    char ara[100005];
    int n,a,b,c;
    scanf("%s",&ara);
    n=strlen(ara);
    if(n==1)
    {
        a=ara[0]-48;
        if(a%4==0)
            printf("4");
        else
            printf("0");
    }
    else
    {
        a=ara[n-1]-48;
        b=ara[n-2]-48;
        c=10*b+a;
        if(c%4==0)
            printf("4");
        else
            printf("0");
    }
    return 0;
}
