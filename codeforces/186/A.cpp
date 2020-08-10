#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,i,a,b,sum=0;
    static char s[100001],t[100001];
    scanf("%s%s",&s,&t);
    n=strlen(s);
    m=strlen(t);
    if(n!=m)
        printf("NO");
    else
    {
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
                sum++;
        }
        if(sum!=2)
            printf("NO");
        else
        {
            for(i=0;i<n;i++)
            {
                if(s[i]!=t[i])
                {
                    a=i;
                    break;
                }
            }
            for(i=a+1;i<n;i++)
            {
                if(s[i]!=t[i])
                {
                    b=i;
                    break;
                }
            }
            if(s[a]==t[b] && t[a]==s[b])
                printf("YES");
            else
                printf("NO");
        }
    }
    return 0;
}
