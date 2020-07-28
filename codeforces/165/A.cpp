#include<stdio.h>
int main()
{
    int n,x[202],y[202],l,r,u,d,i,j,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]);
    for(i=0;i<n;i++)
    {
        l=0;
        r=0;
        u=0;
        d=0;
        for(j=0;j<n;j++)
        {
            if(j==i)
                continue;
            else
            {
                if(x[j]<x[i] && y[j]==y[i])
                    l++;
                else if(x[j]>x[i] && y[j]==y[i])
                    r++;
                else if(x[j]==x[i] && y[j]<y[i])
                    d++;
                else if(x[j]==x[i] && y[j]>y[i])
                    u++;
            }
        }
        if(l>=1 && r>=1 && u>=1 && d>=1)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
