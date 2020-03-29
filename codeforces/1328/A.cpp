#include<stdio.h>
int main()
{
    long int t,a,b,i,j;
    scanf("%ld",&t);
    for(i=t;i>0;i--)
    {
        scanf("%ld%ld",&a,&b);
        j=a%b;
        if(j==0)

                printf("0\n");

        else
            printf("%ld\n",b-j);

    }

    return 0;
}
