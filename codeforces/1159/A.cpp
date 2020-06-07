#include<stdio.h>
int main()
{
    char s[102];
    int m,i,n;
    scanf("%d",&n);
    scanf("%s",&s);
    m=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='-')
        {
            if(m==0)
                continue;
            else
                m=m-1;
        }
        else
            m=m+1;
    }
    printf("%d\n",m);
    return 0;
}
