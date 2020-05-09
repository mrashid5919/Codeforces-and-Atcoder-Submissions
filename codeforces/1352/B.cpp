#include<stdio.h>
int main()
{
    long long int t,n,k,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        if(n%2==0)
        {
            if(k>n)
                printf("NO\n");
            else if(k<=n/2)
            {
                if(k%2==0)
                {
                    printf("YES\n");
                    for(i=1;i<=k;i++)
                    {
                        if(i==k)
                            printf("%lld\n",n+1-i);
                        else
                            printf("1 ");
                    }
                }
                else
                {
                    printf("YES\n");
                    for(i=1;i<=k;i++)
                    {
                        if(i==k)
                            printf("%lld\n",n+2-i*2);
                        else
                            printf("2 ");
                    }
                }
            }
            else
            {
                if(k==n)
                {
                    printf("YES\n");
                    for(i=1;i<=k;i++)
                    {
                        if(i==k)
                            printf("1\n");
                        else
                            printf("1 ");
                    }
                }
                else if(k%2==1)
                    printf("NO\n");
                else
                {
                    printf("YES\n");
                    for(i=1;i<=k;i++)
                    {
                        if(i==k)
                            printf("%lld\n",n+1-i);
                        else
                            printf("1 ");
                    }
                }
            }
        }
        else
        {
            if(k>n)
                printf("NO\n");
            else if(k%2==0)
                printf("NO\n");
            else
            {
                if(k==n)
                {
                    printf("YES\n");
                    for(i=1; i<=k; i++)
                    {
                        if(i==k)
                            printf("1\n");
                        else
                            printf("1 ");
                    }
                }

                else
                {
                    printf("YES\n");
                    for(i=1;i<=k;i++)
                    {
                        if(i==k)
                            printf("%lld\n",n+1-i);
                        else
                            printf("1 ");
                    }
                }

            }
        }
    }
    return 0;
}
