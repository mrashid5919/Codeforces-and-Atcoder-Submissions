#include<stdio.h>
int main()
{
    int t,n,i;
    char s[100002];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1)
            printf("-1\n");
        else
        {
            if((n/2)%3==0)
            {
                for(i=0; i<(n/2-1); i++)
                    s[i]='2';
                for(i=n/2-1; i<n; i++)
                    s[i]='3';
            }
            else
            {
                for(i=0; i<n/2; i++)
                    s[i]='2';
                for(i=n/2; i<n; i++)
                    s[i]='3';
            }
            for(i=0; i<n; i++)
            {
                printf("%c",s[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
