#include<stdio.h>
int main()
{
    int n,i,a[105],sum=0,count=0,p[105],q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    q=a[0];
    if(a[0]>sum/2)
    {
        printf("1\n");
        printf("1\n");
    }
    else
    {
        for(i=1;i<n;i++)
        {
            if(a[0]>sum/2)
                break;
            else if(count==0)
            {
                if(a[i]<=q/2)
                {
                    count=2;
                    p[0]=1;
                    p[1]=i+1;
                    a[0]=a[0]+a[i];
                }
            }
            else
            {
                if(a[i]<=q/2)
                {
                    p[count]=i+1;
                    a[0]=a[0]+a[i];
                    count++;
                }
            }
        }
        if(a[0]<sum/2+1)
            printf("0");
        else
        {
            printf("%d\n",count);
            for(i=0; i<count; i++)
                printf("%d ",p[i]);
        }
    }
    return 0;
}
