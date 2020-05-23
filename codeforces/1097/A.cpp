//Gennady and a card game
#include<stdio.h>
#include<string.h>
int main()
{
    char s[3],s1[3],s2[3],s3[3],s4[3],s5[3];
    scanf("%s",&s);
    scanf("%s%s%s%s%s",&s1,&s2,&s3,&s4,&s5);
    if((s[0]==s1[0])||(s[0]==s2[0])||(s[0]==s3[0])||(s[0]==s4[0])||(s[0]==s5[0]))
        printf("YES");
    else if((s[1]==s1[1])||(s[1]==s2[1])||(s[1]==s3[1])||(s[1]==s4[1])||(s[1]==s5[1]))
        printf("YES");
    else
        printf("NO");
    return 0;
}
