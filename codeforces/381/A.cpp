//Sereja and Dima
#include<stdio.h>
int main()
{
    int n,arr[1005],a=0,b=0,i,c,low,high;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    low=0;
    high=n-1;
    c=1;
    while(c<=(n+1))
    {
        if(c==n+1)
            break;
        else if(c%2==1)
        {
            if(arr[low]>arr[high])
            {
                a=a+arr[low];
                low=low+1;
                c=c+1;
            }
            else
            {
                a=a+arr[high];
                high=high-1;
                c=c+1;
            }
        }
        else
        {
            if(arr[low]>arr[high])
            {
                b=b+arr[low];
                low=low+1;
                c=c+1;
            }
            else
            {
                b=b+arr[high];
                high=high-1;
                c=c+1;
            }
        }
    }
    printf("%d %d\n",a,b);
    return 0;

}
