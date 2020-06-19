#include<stdio.h>
int main()
{
    int h,w,n,ans;
    scanf("%d%d%d",&h,&w,&n);
    if(h>=w)
    {
        if(n%h==0)
            ans=n/h;
        else
            ans=n/h+1;
    }
    else
    {
        if(n%w==0)
            ans=n/w;
        else
            ans=n/w+1;
    }
    printf("%d",ans);
    return 0;
}