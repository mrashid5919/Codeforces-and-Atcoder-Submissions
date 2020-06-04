#include<stdio.h>
int main()
{
    unsigned long long int t,a,b,m,i,d;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu%llu",&a,&b);
        d=1;
        if(a==b)
            printf("0\n");
        else if(a>b)
        {
            if((a%b)!=0)
            {
                printf("-1\n");
            }
            else if((a/b)%2!=0)
                printf("-1\n");
            else
            {
                for(i=0;; i++)
                {
                    if(d>a/b)
                    {
                        printf("-1\n");
                        break;
                    }
                    else if(d==a/b)
                    {
                        if(i%3==0)
                        {
                            printf("%llu\n",i/3);
                            break;
                        }
                        else
                        {
                            printf("%llu\n",(i/3)+1);
                            break;
                        }
                    }
                    else
                        d=2*d;
                }
            }
        }
        else
        {
            if((b%a)!=0)
            {
                printf("-1\n");
            }
            else if((b/a)%2!=0)
                printf("-1\n");
            else
            {
                for(i=0;; i++)
                {
                    if(d>b/a)
                    {
                        printf("-1\n");
                        break;
                    }
                    else if(d==b/a)
                    {
                        if(i%3==0)
                        {
                            printf("%llu\n",i/3);
                            break;
                        }
                        else
                        {
                            printf("%llu\n",i/3+1);
                            break;
                        }
                    }
                    else
                            d=2*d;
                }
            }
        }
    }
    return 0;
}
