#include<stdio.h>
int main()
{
    int a,b,i,x,y,f=0,s=0,d=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=6;i++)
    {
        if(a>=i && b>=i)
        {
            x=a-i;
            y=b-i;
        }
        else if(a<i && b>=i)
        {
            x=i-a;
            y=b-i;
        }
        else if(a>=i && b<i)
        {
            x=a-i;
            y=i-b;
        }
        else
        {
            x=i-a;
            y=i-b;
        }
        if(x<y)
            f=f+1;
        else if(y<x)
            s=s+1;
        else
            d=d+1;
    }
    printf("%d %d %d",f,d,s);
    return 0;
}
