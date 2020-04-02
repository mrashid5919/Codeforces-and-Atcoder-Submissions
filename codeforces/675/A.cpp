#include<stdio.h>
int main()
{
    long long int a,b,c,i;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a==b)
        printf("YES");
    else if(c==0)
    {
        if(a==b)
            printf("YES");
        else
            printf("NO");
    }
    else if(c>0)
    {
        for(i=0;;i++)
        {
            a=a+c;
            if(a<b)
                continue;
            else if(a==b)
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
                break;
            }

        }
    }
    else
    {
        for(i=0;;i++)
        {
            a=a+c;
            if(a>b)
                continue;
            else if(a==b)
            {
                printf("YES");
                break;
            }
            else
            {
                printf("NO");
                break;
            }

        }
    }
    return 0;
}
