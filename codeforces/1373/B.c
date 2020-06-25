#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,one,zero,n,m;
    char s[101];
    scanf("%d",&t);
    while(t--)
    {
        one=0;
        zero=0;
        scanf("%s",&s);
        n=strlen(s);
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        if(zero<=one)
            m=zero;
        else
            m=one;
        if(m%2==0)
            printf("NET\n");
        else
            printf("DA\n");
    }
    return 0;
}
