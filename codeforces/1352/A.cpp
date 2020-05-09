#include<stdio.h>
int main()
{
    int t,n,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=n/1000;
        b=(n%1000)/100;
        c=((n%1000)%100)/10;
        d=((n%1000)%100)%10;
        if(a>0)
        {
            if(b>0 && c>0 && d>0)
            {
                printf("4\n");
                printf("%d %d %d %d\n",a*1000,b*100,c*10,d);
            }
            else if(b>0 && c>0)
            {
                printf("3\n");
                printf("%d %d %d\n",a*1000,b*100,c*10);
            }
            else if(b>0 && d>0)
            {
                printf("3\n");
                printf("%d %d %d\n",a*1000,b*100,d);
            }
            else if(c>0 && d>0)
            {
                printf("3\n");
                printf("%d %d %d\n",a*1000,c*10,d);
            }
            else if(b>0)
            {
                printf("2\n");
                printf("%d %d\n",a*1000,b*100);
            }
            else if(c>0)
            {
                printf("2\n");
                printf("%d %d\n",a*1000,c*10);
            }
            else if(d>0)
            {
                printf("2\n");
                printf("%d %d\n",a*1000,d);
            }
            else
            {
                printf("1\n");
                printf("%d\n",a*1000);
            }
        }
        else if(b>0)
        {
            if(c>0 && d>0)
            {
                printf("3\n");
                printf("%d %d %d\n",b*100,c*10,d);
            }
            else if(c>0)
            {
                printf("2\n");
                printf("%d %d\n",b*100,c*10);
            }
            else if(d>0)
            {
                printf("2\n");
                printf("%d %d\n",b*100,d);
            }
            else
            {
                printf("1\n");
                printf("%d\n",b*100);
            }

        }
        else if(c>0)
        {
            if(d>0)
            {
                printf("2\n");
                printf("%d %d\n",c*10,d);
            }
            else
            {
                printf("1\n");
                printf("%d\n",c*10);
            }
        }
        else
        {
            printf("1\n");
            printf("%d\n",d);
        }
    }
    return 0;
}
