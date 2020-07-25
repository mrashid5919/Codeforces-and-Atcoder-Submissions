#include<stdio.h>
int main()
{
    int a,b,c,k,x=0,y=0;
    scanf("%d%d%d",&a,&b,&c);
    scanf("%d",&k);
    while(b<=a)
    {
        b=b*2;
        x++;
    }
    while(c<=b)
    {
        c=c*2;
        y++;
    }
    if(x+y<=k)
        printf("Yes");
    else
        printf("No");
    return 0;
}