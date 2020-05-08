#include<stdio.h>
int main()
{
    int t,a1,b1,a2,b2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
        if(a1==a2 && b1+b2==a1)
            printf("Yes\n");
        else if(a1==b2 && a2+b1==a1)
            printf("Yes\n");
        else if(b1==a2 && a1+b2==b1)
            printf("Yes\n");
        else if(b1==b2 && a1+a2==b1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
