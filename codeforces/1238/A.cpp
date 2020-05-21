#include<stdio.h>
int main()
{
    unsigned long long int t,x,y;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu%llu",&x,&y);
        if(x-y>1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
