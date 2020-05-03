#include<stdio.h>
int main()
{
    char word[4];
    scanf("%s",&word);
    if(word[1]=='B')
        printf("ARC");
    else
        printf("ABC");
    return 0;
}