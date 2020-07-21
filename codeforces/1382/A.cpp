#include<stdio.h>
int main()
{
    int t,n,m,i,a[1003],b[1003],aa[1003],bb[1003],ans,p;
    scanf("%d",&t);
    while(t--)
    {
        p=0;
        for(i=1;i<=1000;i++)
        {
            aa[i]=0;
            bb[i]=0;
        }
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            aa[a[i]]++;
        }
        for(i=0;i<m;i++)
        {
            scanf("%d",&b[i]);
            bb[b[i]]++;
        }
        for(i=1;i<=1000;i++)
        {
            if(aa[i]>0 && bb[i]>0)
            {
                printf("YES\n");
                printf("1 %d\n",i);
                p=1;
                break;
            }
        }
        if(p==0)
            printf("NO\n");
    }
    return 0;
}
