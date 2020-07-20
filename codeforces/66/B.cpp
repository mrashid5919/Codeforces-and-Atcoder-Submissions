#include<stdio.h>
int main()
{
    int n,i,ara[1002],ans[1002],m=0,high,low;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<n;i++)
    {
        for(low=i;low>=0;low--)
        {
            if(low==0)
                break;
            else if(ara[low-1]>ara[low])
            {
                break;
            }
        }
        for(high=i;high<n;high++)
        {
            if(high==n-1)
                break;
            else if(ara[high+1]>ara[high])
                break;
        }
        ans[i]=high-low+1;
    }
    for(i=0;i<n;i++)
    {
        if(m<ans[i])
            m=ans[i];
    }
    printf("%d\n",m);
    return 0;
}
