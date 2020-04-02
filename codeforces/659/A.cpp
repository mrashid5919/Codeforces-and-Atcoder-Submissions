#include<stdio.h>
int main()
{
    int n,a,b,h;
    scanf("%d%d%d",&n,&a,&b);

    if(b<0)
    {
        //if(-b<=n)
            //h=n+a+b;
        //else
        //{
            if(-b%n>=a)
                h=n+a+b%n;
            else
                h=a+b%n;
        //}

    }
    else if(b>0)
    {
       if(a+b%n>n)
        h=(a+b%n)-n;
       else
        h=a+b%n;
    }
    else
        h=a;
    printf("%d",h);
    return 0;
}
