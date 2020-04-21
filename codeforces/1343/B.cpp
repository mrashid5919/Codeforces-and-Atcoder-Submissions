#include<stdio.h>
int main()
{
    long int t,n,a,i,j,sum;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld",&n);
        if((n/2)%2==1)
            printf("NO\n");
        else
        {
            printf("YES\n");
            a=0;
            for(j=0;j<n/2;j++)
            {
                a=a+2;
                printf("%ld ",a);
            }
            a=0;
            sum=0;
            for(j=n/2;j<n;j++)
            {
                if(j<n-1)
                {
                    a=2*(j-n/2)+1;
                    printf("%ld ",a);
                    sum=sum+a;
                }
                else
                {
                    a=(n/2)*(n/2+1)-sum;
                    printf("%ld\n",a);
                }
            }



        }
    }
    return 0;
}
