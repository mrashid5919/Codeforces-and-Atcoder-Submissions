#include<stdio.h>
int main()
{
    int n,i,m,c,m1=0,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&m,&c);
        if(m>c)
        {
            m1=m1+1;
        }
        else if(c>m)
        {
            c1=c1+1;
        }
        else
            continue;
    }
    if(m1>c1)
    {
        printf("Mishka");
    }
    else if(c1>m1)
    {
        printf("Chris");
    }
    else
    {
        printf("Friendship is magic!^^");
    }
}
