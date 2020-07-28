#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,ara[30],i;
    char str[102];
    for(i=1;i<=26;i++)
        ara[i]=0;
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++)
        ara[str[i]-96]++;
    for(i=1;i<=26;i++)
    {
        if(ara[i]>0)
            count++;
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
