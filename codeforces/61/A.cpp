#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101],c[101];
    int i,n;
    scanf("%s",&a);
    scanf("%s",&b);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            c[i]='0';
        else
            c[i]='1';
    }
    for(i=0;i<n;i++)
        printf("%c",c[i]);
    return 0;
}
