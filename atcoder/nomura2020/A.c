#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,k,t1,t2,ans;
    scanf("%d%d%d%d%d",&h1,&m1,&h2,&m2,&k);
    t1=h1*60+m1;
    t2=h2*60+m2;
    ans=t2-t1-k;
    printf("%d\n",ans);
    return 0;
}
