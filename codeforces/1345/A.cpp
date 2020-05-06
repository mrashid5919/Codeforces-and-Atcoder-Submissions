#include<stdio.h>
int main()
{
    long int t,n,m,i;
    scanf("%ld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld%ld",&n,&m);
        if(n==1 || m==1 || (n==2 && m==2))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
