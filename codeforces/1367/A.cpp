#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,n;
    char b[101],a[53];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&b);
        n=strlen(b);
        if(n==2)
        {
            printf("%s\n",b);
        }
        else
        {
            for(i=0;i<=n/2;i++)
            {
                if(i==n/2)
                    a[i]=b[n-1];
                else
                {
                    a[i]=b[2*i];
                }
            }
            for(i=0;i<=n/2;i++)
            {
                printf("%c",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
