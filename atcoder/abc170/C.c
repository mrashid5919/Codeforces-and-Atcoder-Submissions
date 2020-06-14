#include<stdio.h>
int main()
{
    int x,n,p[101],y,z,a,b,i,j,swap,q=0,s;
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                swap=p[j];
                p[j]=p[j+1];
                p[j+1]=swap;
            }
        }
    }
    for(i=0;;i++)
    {
        if(p[i]==x)
        {
            q=1;
            s=i;
            break;
        }
        else if(i==n)
        {
            break;
        }
    }
    y=x+1;
    z=x;
    if(q==0)
        printf("%d",x);
    else
    {
        for(i=s+1;i<n;i++)
        {
            if(p[i]>y)
                break;
            else if(p[i]==y)
                y++;
            else
                continue;
        }
        for(i=s;i>=0;i--)
        {
            if(p[i]<z)
                break;
            else if(p[i]==z)
                z--;
            else
                continue;
        }
        a=y-x;
        b=x-z;
        if(a<b)
            printf("%d",y);
        else
            printf("%d",z);
    }
    return 0;
}
