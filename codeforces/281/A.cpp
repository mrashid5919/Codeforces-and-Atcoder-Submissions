#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    if(s[0]>='a' && s[0]<='z')
        s[0]=s[0]-32;
    printf("%s",s);
    return 0;
}
