#include<stdio.h>
int main()
{
    char word[7];
    scanf("%s",&word);
    if(word[2]==word[3] && word[4]==word[5])
        printf("Yes");
    else
        printf("No");
    return 0;
}