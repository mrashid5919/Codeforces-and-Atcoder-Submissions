#include<stdio.h>
int main()
{
    int i,t,h,m,sum,min;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&h,&m);
        sum=(60*h)+m;
        min=1440-sum;
        printf("%d\n",min);
    }
    return 0;
}
