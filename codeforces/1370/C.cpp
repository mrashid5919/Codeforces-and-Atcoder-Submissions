//Number game (Incomplete)
#include<stdio.h>
int main()
{
    long long int i,t,n,m,p=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1)
            printf("FastestFinger\n");
        else if(n%2==1)
            printf("Ashishgup\n");
        else if(n%4==0)
        {
            m=n;
            while(m%2==0)
                m=m/2;
            if(m==1)
                printf("FastestFinger\n");
            else
                printf("Ashishgup\n");
        }
        else
        {
            if(n/2==1)
                printf("Ashishgup\n");
            else
            {
                p=0;
                n=n/2;
                for(i=3;i*i<=n;i++)
                {
                    if(n%i==0)
                        p=1;
                }
                if(p==0)
                    printf("FastestFinger\n");
                else
                    printf("Ashishgup\n");
            }

        }
    }
    return 0;
}
