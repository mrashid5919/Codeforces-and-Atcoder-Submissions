#include<stdio.h>
#include<string.h>
int main()
{
    char s[105];
    int i,p=0,n;
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(p==0)
        {
            if(s[i]=='h')
            {
                p=1;
                continue;
            }
        }
        else if(p==1)
        {
            if(s[i]=='e')
            {
                p=2;
                continue;
            }
        }
        else if(p==2)
        {
            if(s[i]=='l')
            {
                p=3;
                continue;
            }
        }
        else if(p==3)
        {
            if(s[i]=='l')
            {
                p=4;
                continue;
            }
        }
        else if(p==4)
        {
            if(s[i]=='o')
            {
                p=5;
                break;
            }
        }
    }
    if(p==5)
        printf("YES");
    else
        printf("NO");
    return 0;
}
