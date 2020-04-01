#include<stdio.h>
int main()
{
    int a,b,max,same;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
        max=a;
        same=(b-a)/2;
    }
    else if(b<a)
    {
        max=b;
        same=(a-b)/2;
    }
    else
    {
        max=a;
        same=0;
    }
    printf("%d %d",max,same);
    return 0;
}
