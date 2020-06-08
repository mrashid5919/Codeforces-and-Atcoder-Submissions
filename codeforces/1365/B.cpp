#include<stdio.h>
int main()
{
    int t,n,a[501],b[501],i,j,c,sorted,one,zero;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        sorted=1;
        zero=0;
        one=0;
        for(i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
                sorted=0;
        }
        if(sorted==1)
            printf("Yes\n");
        else
        {
            for(i=0;i<n;i++)
            {
                if(b[i]==0)
                    zero++;
                else
                    one++;
            }
            if((zero>0 && zero<n)&&(one>0 && one<n))
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
