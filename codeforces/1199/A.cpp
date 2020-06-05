#include<stdio.h>
int main()
{
    int n,x,y,i,j,p;
    long long int a[100005];
    scanf("%d%d%d",&n,&x,&y);
    for(i=1;i<=n;i++)
        scanf("%lld",&a[i]);

    for(i=1;i<=n;i++)
    {
        p=0;
        if(i-x<1 && i+y>n)
        {
            for(j=1;j<=n;j++)
            {
                if(j==i)
                    continue;
                else if(a[j]<=a[i])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                printf("%d",i);
                break;
            }
        }
        else if(i-x<1)
        {
            for(j=1;j<=i+y;j++)
            {
                if(j==i)
                    continue;
                else if(a[j]<=a[i])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                printf("%d",i);
                break;
            }
        }
        else if(i+y>n)
        {
            for(j=i-x;j<=n;j++)
            {
                if(j==i)
                    continue;
                else if(a[j]<=a[i])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                printf("%d",i);
                break;
            }
        }
        else
        {
            for(j=i-x;j<=i+y;j++)
            {
                if(j==i)
                    continue;
                else if(a[j]<=a[i])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}
