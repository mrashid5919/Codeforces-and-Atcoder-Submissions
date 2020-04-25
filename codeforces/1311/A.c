#include<stdio.h>
int main()
{
    long int t,a,b,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&a,&b);
        if(a==b)
        {
            printf("0\n");
        }
        else if(a>b)
        {
            if((a%2==0 && b%2==0)||(a%2==1 && b%2==1))
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }

        }
        else
        {
            if((a%2==0 && b%2==0)||(a%2==1 && b%2==1))
            {
                printf("2\n");
            }
            else
            {
                printf("1\n");
            }
        }
    }
    return 0;
}
