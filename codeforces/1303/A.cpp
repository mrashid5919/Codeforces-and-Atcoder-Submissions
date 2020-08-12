#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,m,n,count,p;
    char ara[103];
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        count=0;
        scanf("%s",&ara);
        for(i=0;i<strlen(ara);i++)
        {
            if(ara[i]=='1')
            {
                m=i;
                p=1;
                break;
            }
        }
        if(p==0)
        {
            printf("0\n");
            continue;
        }
        else
        {
            for(i=strlen(ara)-1;i>=0;i--)
            {
                if(ara[i]=='1')
                {
                    n=i;
                    break;
                }
            }
            for(i=m+1;i<n;i++)
            {
                if(ara[i]=='0')
                    count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
