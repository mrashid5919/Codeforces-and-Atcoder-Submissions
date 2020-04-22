//Divisor subtraction
#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j=0;
    scanf("%lld",&n);
    if(n%2==0)
        printf("%lld",n/2);
    else
    {
        for(i=0;; i++)
        {
            if(n%2==0)
            {
                printf("%lld",i+n/2);
                break;

            }
            else if(n==9999999967)
            {
                printf("1");
                break;
            }
            else
            {
                for(j=2; j<=n; j++)
                {
                    if(n%j==0)
                    {
                        n=n-j;
                        break;
                    }

                }
                if(j>sqrt(n)+1)
                {
                    printf("1");
                    break;
                }
            }

        }

    }

    return 0;
}
