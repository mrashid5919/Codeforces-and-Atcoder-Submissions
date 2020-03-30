#include<stdio.h>
int main()
{
    int n,xi,yi,zi,i,x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&xi,&yi,&zi);
        x=x+xi;
        y=y+yi;
        z=z+zi;
    }
    if(x==0 && y==0 && z==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}
