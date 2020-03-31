#include<stdio.h>
int main()
{
    long int n,r,min,max;
    scanf("%ld",&n);
    r=n%7;
    if(n<=2)
    {
        min=0;
        max=n;
    }
    else
    {
        if(r==1)
        {
            min=(n/7)*2;
            max=(n/7)*2+1;
        }
        else if(r==6)
        {
            min=(n/7)*2+1;
            max=(n/7)*2+2;
        }
        else if(r==0)
        {
            min=(n/7)*2;
            max=(n/7)*2;
        }
        else
        {
            min=(n/7)*2;
            max=(n/7)*2+2;
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
