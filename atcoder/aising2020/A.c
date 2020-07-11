#include<stdio.h>
int main()
{
    int a,b,c,ans;
    scanf("%d%d%d",&a,&b,&c);
    if(a/c==0)
    {
        ans=b/c;
    }
    else
    {
        if(a%c==0)
            ans=(b/c)-(a/c)+1;
        else
            ans=(b/c)-(a/c);
    }
    printf("%d",ans);
    return 0;
}