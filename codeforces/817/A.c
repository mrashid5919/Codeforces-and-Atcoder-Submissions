#include<stdio.h>
int main()
{
    long long int x1,y1,x2,y2,x,y,a,b;
    scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
    scanf("%lld%lld",&x,&y);
    if((x1-x2)%x==0 && (y1-y2)%y==0)
    {
        a=(x1-x2)/x;
        b=(y1-y2)/y;
        if(a%2==b%2 || a%2==-(b%2))
            printf("YES\n");
        else
            printf("NO\n");
    }
    else
        printf("NO\n");
    return 0;
}
