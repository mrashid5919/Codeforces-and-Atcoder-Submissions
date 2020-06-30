#include<stdio.h>
#include<string.h>
int main()
{
    char a[102],b[102];
    int i,n,m,p=0;
    scanf("%s",&a);
    scanf("%s",&b);
    n=strlen(a);
    m=strlen(b);
    if(n!=m)
        printf("1\n");
    else
    {
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                p=1;
                printf("1\n");
                break;
            }
        }
        if(p==0)
            printf("%s",a);
    }
    return 0;
}
