#include<stdio.h>
#include<string.h>
int main()
{
    char s[102],t[102];
    int i,p=0,n;
    scanf("%s",&s);
    scanf("%s",&t);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]!=t[n-1-i])
        {
            p=1;
            break;
        }
    }
    if(p==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
