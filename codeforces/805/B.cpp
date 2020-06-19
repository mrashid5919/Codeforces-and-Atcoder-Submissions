#include<stdio.h>
int main()
{
    char p[200001];
    long int i,n;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        if((i/2)%2==0)
            p[i]='a';
        else
            p[i]='b';
    }
    for(i=0;i<n;i++)
        printf("%c",p[i]);
    return 0;
}
