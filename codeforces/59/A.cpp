#include<stdio.h>
#include<string.h>
int main()
{
    int n,c=0,s=0,i;
    char ara[101];
    scanf("%s",&ara);
    n=strlen(ara);
    for(i=0;i<n;i++)
    {
        if(ara[i]>='a' && ara[i]<='z')
            s++;
        else
            c++;
    }
    if(s>=c)
    {
        for(i=0;i<n;i++)
        {
            if(ara[i]>='A' && ara[i]<='Z')
                ara[i]=ara[i]+32;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(ara[i]>='a' && ara[i]<='z')
                ara[i]=ara[i]-32;
        }
    }
    for(i=0;i<n;i++)
        printf("%c",ara[i]);
    return 0;
}
