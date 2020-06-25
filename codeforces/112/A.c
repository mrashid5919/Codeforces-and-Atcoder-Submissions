#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,p=0;
    char a[101],b[101];
    scanf("%s",&a);
    scanf("%s",&b);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            continue;
        else if((a[i]>='A'&&a[i]<='Z'&&b[i]>='A'&&b[i]<='Z')||(a[i]>='a'&&a[i]<='z'&&b[i]>='a'&&b[i]<='z'))
        {
            if(a[i]<b[i])
            {
                p=1;
                printf("-1");
                break;
            }
            else
            {
                p=1;
                printf("1");
                break;
            }
        }
        else if(a[i]>='A'&&a[i]<='Z'&&b[i]>='a'&&b[i]<='z')
        {
            if(a[i]+32<b[i])
            {
                p=1;
                printf("-1");
                break;
            }
            else if(a[i]+32>b[i])
            {
                p=1;
                printf("1");
                break;
            }
        }
        else if(a[i]>='a'&&a[i]<='z'&&b[i]>='A'&&b[i]<='Z')
        {
            if(a[i]-32<b[i])
            {
                p=1;
                printf("-1");
                break;
            }
            else if(a[i]-32>b[i])
            {
                p=1;
                printf("1");
                break;
            }
        }
    }
    if(p==0)
        printf("0");
    return 0;
}
