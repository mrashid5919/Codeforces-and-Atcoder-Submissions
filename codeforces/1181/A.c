#include<stdio.h>
int main()
{
    unsigned long long int x,y,z,ans,m,n;
    scanf("%llu%llu%llu",&x,&y,&z);
    ans=(x+y)/z;
    if(x%z==0 && y%z==0)
        m=0;
    else if((x/z)+(y/z)==ans)
        m=0;
    else
    {
        if(x%z<=((x/z)+1)*z-x)
            m=x%z;
        else
            m=((x/z)+1)*z-x;
        if(y%z<=((y/z)+1)*z-y)
            n=y%z;
        else
            n=((y/z)+1)*z-y;
        if(n<m)
            m=n;
    }
    //printf("%llu %llu",y%z,((y/z)+1)*z-y);
    printf("%llu %llu",ans,m);
    return 0;
}
