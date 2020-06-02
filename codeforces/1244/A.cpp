#include<stdio.h>
int main()
{
    int t,a,b,c,d,k,x,y,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&k);
        if(a%c==0)
            x=a/c;
        else
            x=(a/c)+1;
        if(b%d==0)
            y=b/d;
        else
            y=(b/d)+1;
        sum=x+y;
        if(sum<=k)
            printf("%d %d\n",x,y);
        else
            printf("-1\n");
    }
    return 0;
}
