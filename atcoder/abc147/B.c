#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,h=0;
    char s[101];
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n/2;i++)
    {
        if(s[i]!=s[n-1-i])
            h++;
    }
    printf("%d",h);
    return 0;
}