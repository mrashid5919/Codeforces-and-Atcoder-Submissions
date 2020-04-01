#include<stdio.h>
int main()
{
    int n,i,a,b,c,sum,solve=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;
        if(sum>=2)
            solve=solve+1;
        else
            continue;

    }
    printf("%d",solve);
    return 0;
}
