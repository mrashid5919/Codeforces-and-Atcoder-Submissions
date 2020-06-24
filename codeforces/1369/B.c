#include<stdio.h>
int main()
{
    int t,n,zero,one,i;
    char s[100005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",&s);
        zero=0;
        one=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
                break;
            else
                zero++;
        }
        for(i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
                break;
            else
                one++;
        }
        if(zero+one==n)
        {
            printf("%s",s);
            printf("\n");
        }
        else
        {
            for(i=0;i<=zero;i++)
                printf("0");
            for(i=0;i<one;i++)
                printf("1");
            printf("\n");
        }
    }
    return 0;
}
