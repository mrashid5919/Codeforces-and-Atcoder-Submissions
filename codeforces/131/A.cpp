#include<stdio.h>
#include<string.h>
int main()
{
    int i,p=0;
    char s[105];
    scanf("%s",&s);
    for(i=1;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            p=1;
            break;
        }
    }
    if(p==0)
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]=s[i]-32;
            else
                s[i]=s[i]+32;
        }
    }
    printf("%s",s);
    return 0;
}
