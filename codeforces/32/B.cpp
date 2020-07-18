#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,count=0;
    char str[202],ans[202];
    scanf("%s",&str);
    n=strlen(str);
    count=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='.')
        {
            ans[count]='0';
            count++;
        }
        else
        {
            if(str[i+1]=='.')
            {
                ans[count]='1';
                count++;
                i++;
            }
            else
            {
                ans[count]='2';
                count++;
                i++;
            }
        }
    }
    for(i=0;i<count;i++)
        printf("%c",ans[i]);
    return 0;
}
