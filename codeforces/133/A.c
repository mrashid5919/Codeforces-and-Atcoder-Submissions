#include<stdio.h>
#include<string.h>
int main()
{
    int i,p=0;
    char s[105];
    scanf("%s",&s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            p=1;
            printf("YES");
            break;
        }
    }
    if(p==0)
        printf("NO");
    return 0;
}
