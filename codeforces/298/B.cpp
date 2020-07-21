#include<stdio.h>
int main()
{
    long long int t,cx,cy,dx,dy,i,p=0;
    char ara[100003];
    scanf("%lld%lld%lld%lld%lld",&t,&cx,&cy,&dx,&dy);
    scanf("%s",&ara);
    for(i=0;i<t;i++)
    {
        if(ara[i]=='N')
        {
            if(cy<dy)
                cy++;
        }
        else if(ara[i]=='E')
        {
            if(cx<dx)
                cx++;
        }
        else if(ara[i]=='S')
        {
            if(cy>dy)
                cy--;
        }
        else if(ara[i]=='W')
        {
            if(cx>dx)
                cx--;
        }
        if(cx==dx && cy==dy)
        {
            printf("%lld\n",i+1);
            p=1;
            break;
        }
    }
    if(p==0)
        printf("-1\n");
    return 0;
}
