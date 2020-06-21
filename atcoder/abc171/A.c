#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("A");
    else
        printf("a");
    return 0;
}
