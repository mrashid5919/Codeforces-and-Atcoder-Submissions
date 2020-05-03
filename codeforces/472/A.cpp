#include<stdio.h>
int main()
{
    long int n,x,y;
    scanf("%ld",&n);
    if(n%2==0)
    {
        if((n/2)%2==0)
        {
            x=n/2;
            y=n/2;
        }
        else
        {
            x=n/2-1;
            y=n/2+1;
        }
    }
    else
    {
        x=9;
        y=n-9;
    }
    printf("%ld %ld",x,y);
    return 0;
}
