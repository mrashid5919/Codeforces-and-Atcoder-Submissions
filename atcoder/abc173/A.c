#include<stdio.h>
int main()
{
    int n,ans;
    scanf("%d",&n);
    if(n%1000==0)
        printf("0");
    else
    {
        ans=((n/1000)+1)*1000-n;
        printf("%d",ans);
    }
    return 0;
}
