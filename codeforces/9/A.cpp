#include<stdio.h>
int main()
{
    int Y,W,a,A,B;
    scanf("%d%d",&Y,&W);
    if(Y>=W)
    {
        a=(6-Y)+1;
    }
    else
    {
        a=(6-W)+1;
    }
    if(a%6==0)
    {
        A=a/6;
        B=1;
    }
    else if(a%2==0)
    {
        A=a/2;
        B=3;
    }
    else if(a%3==0)
    {
        A=a/3;
        B=2;
    }
    else
    {
        A=a;
        B=6;
    }
    printf("%d/%d",A,B);
    return 0;

}
