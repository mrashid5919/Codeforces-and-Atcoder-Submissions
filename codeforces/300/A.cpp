#include<stdio.h>
int main()
{
    int n,neg,pos,zero,ara[101],ne[101],p[101],z[101],i;
    neg=0;
    pos=0;
    zero=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
    {
        if(ara[i]<0)
        {
            ++neg;
            ne[neg]=ara[i];
        }
        else if(ara[i]==0)
        {
            ++zero;
            z[zero]=ara[i];
        }
        else
        {
            ++pos;
            p[pos]=ara[i];
        }
    }
    if(pos==0)
    {
        printf("1 %d\n",ne[1]);
        printf("2 %d %d\n",ne[2],ne[3]);
        if(neg==3)
        {
            printf("%d ",zero);
            for(i=1;i<=zero;i++)
                printf("0 ");
        }
        else
        {
            printf("%d ",zero+neg-3);
            for(i=1;i<=zero;i++)
                printf("0 ");
            for(i=4;i<=neg;i++)
                printf("%d ",ne[i]);
        }
    }
    else
    {
        printf("1 %d\n",ne[1]);
        printf("%d ",pos);
        for(i=1;i<=pos;i++)
            printf("%d ",p[i]);
        if(neg==1)
        {
            printf("\n%d ",zero);
            for(i=1;i<=zero;i++)
                printf("0 ");
        }
        else
        {
            printf("\n%d ",zero+neg-1);
            for(i=1;i<=zero;i++)
                printf("0 ");
            for(i=2;i<=neg;i++)
                printf("%d ",ne[i]);
        }
    }
    return 0;
}
