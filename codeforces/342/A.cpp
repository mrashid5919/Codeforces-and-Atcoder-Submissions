#include<stdio.h>
int main()
{
    int n,i,ara[100002],c[10];
    for(i=1;i<=7;i++)
        c[i]=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        c[ara[i]]++;
    }
    if(c[5]>0 || c[7]>0)
        printf("-1\n");
    else if(c[1]==n/3 && c[2]>=c[4] && c[6]>=c[3] && c[2]-c[4]==c[6]-c[3])
    {
        for(i=0;i<c[4];i++)
            printf("1 2 4\n");
        for(i=0;i<c[3];i++)
            printf("1 3 6\n");
        for(i=0;i<c[2]-c[4];i++)
            printf("1 2 6\n");
    }
    else
        printf("-1\n");
    return 0;
}
