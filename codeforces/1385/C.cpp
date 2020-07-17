#include<stdio.h>
int main()
{
    long int t,n,i,c,mid,p;
    static long int ara[200004];
    scanf("%ld",&t);
    while(t--)
    {
        p=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
            scanf("%ld",&ara[i]);
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
                continue;
            else if(ara[i]<ara[i+1])
            {
                mid=i+1;
                p=1;
                break;
            }
        }
        if(p==0)
        {
            printf("0\n");
            continue;
        }
        else
        {
            for(i=mid-1;i>0;i--)
            {
                if(ara[i-1]>ara[i])
                {
                    c=i;
                    p=2;
                    break;
                }
            }
            if(p==1)
            {
                printf("0\n");
                continue;
            }
            else
                printf("%ld\n",c);
        }
    }
    return 0;
}
