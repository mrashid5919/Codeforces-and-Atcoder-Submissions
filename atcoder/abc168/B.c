#include<stdio.h>
#include<string.h>
int main()
{
    int length,k,i;
    char s[104];
    scanf("%d",&k);
    scanf("%s",&s);
    length=strlen(s);
    if(length>k)
    {
        s[k]='.';
        s[k+1]='.';
        s[k+2]='.';
        for(i=0;i<=k+2;i++)
            printf("%c",s[i]);
    }
    else
    {
        for(i=0;i<length;i++)
            printf("%c",s[i]);
    }
    return 0;
}
