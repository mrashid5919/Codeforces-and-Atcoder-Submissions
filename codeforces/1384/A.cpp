//Common prefixes(Incomplete)
#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,i,j,ara[103];
    char str[203];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<200;i++)
            str[i]='a';
        for(i=0;i<200;i++)
            printf("%c",str[i]);
        printf("\n");
        for(i=0;i<n;i++)
        {
            if(str[ara[i]]=='a')
                str[ara[i]]='b';
            else
                str[ara[i]]='a';
            for(j=0;j<200;j++)
                printf("%c",str[j]);
            printf("\n");
        }
    }
    return 0;
}
