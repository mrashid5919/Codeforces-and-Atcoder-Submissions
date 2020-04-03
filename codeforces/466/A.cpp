#include<stdio.h>
int main()
{
    int n,m,a,b,c,d,r;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    c=n*a;
    d=(n/m)*b;
    if(n%m==0)
    {
        if(d<=c)
            r=d;
        else
            r=c;
    }
    else
    {
        if(d<c)
        {
            if((n%m)*a<=b)
            {
               r=(n/m)*b+(n%m)*a;
            }
            else
            {
                r=((n/m)+1)*b;
            }
        }

        else
            r=c;
    }
    printf("%d",r);
    return 0;
}
