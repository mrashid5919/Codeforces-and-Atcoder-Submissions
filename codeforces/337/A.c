#include<stdio.h>
int main()
{
    int n,m,f[52],i,j,swap,dif,ans;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
        scanf("%d",&f[i]);
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-i-1;j++)
        {
            if(f[j]>f[j+1])
            {
                swap=f[j];
                f[j]=f[j+1];
                f[j+1]=swap;
            }
        }
    }
    for(i=0;i<=m-n;i++)
    {
        if(i==0)
            ans=f[i+n-1]-f[i];
        else
        {
            dif=f[i+n-1]-f[i];
            if(dif<ans)
                ans=dif;
        }
    }
    printf("%d",ans);
    return 0;
}
