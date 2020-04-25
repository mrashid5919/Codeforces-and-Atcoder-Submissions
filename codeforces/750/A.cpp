#include<stdio.h>
int main()
{
    int n,k,r,s=0,i;
    scanf("%d%d",&n,&k);
    r=240-k;
    for(i=1;;i++)
    {
        s=s+5*i;
        if(s>r)
        {
            printf("%d",i-1);
            break;
        }
        else if(i>n)
        {
            printf("%d",n);
            break;
        }
    }
    return 0;
}
