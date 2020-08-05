#include<stdio.h>
int main()
{
    int t,n,i,j,swap,p;
    static int ara[60];
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(ara[j]>ara[j+1])
                {
                    swap=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=swap;
                }
            }
        }
        if(n==1)
        {
            printf("YES\n");
            continue;
        }
        else
        {
            for(i=1;i<n;i++)
            {
                if(ara[i]-ara[i-1]>1)
                {
                    printf("NO\n");
                    p=1;
                    break;
                }
            }
            if(p==0)
                printf("YES\n");
        }
    }
    return 0;
}
