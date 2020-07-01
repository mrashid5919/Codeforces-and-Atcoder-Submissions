#include<stdio.h>
int main()
{
    unsigned long long int t,a,b,n,m;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu%llu%llu%llu",&a,&b,&n,&m);
        if(a+b<n+m)
            printf("No\n");
        else if(a<=b)
        {
            if(a<m)
                printf("No\n");
            else
                printf("Yes\n");
        }
        else
        {
            if(b<m)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}
