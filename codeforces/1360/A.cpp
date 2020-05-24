#include<stdio.h>
int main()
{
    long int t,a,b,area,i;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld",&a,&b);
        if(a==b)
            area=4*a*a;
        else if(a>b)
        {
            if(2*b>=a)
            {
                area=4*b*b;
            }
            else
                area=a*a;
        }
        else
        {
            if(2*a>=b)
            {
                area=4*a*a;
            }
            else
                area=b*b;
        }
        printf("%ld\n",area);
    }
    return 0;
}
