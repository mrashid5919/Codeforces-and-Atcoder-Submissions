#include<stdio.h>
int main()
{
    int n,arr[100],b=0,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=0)
        {
            b=b+arr[i];
        }
        else
        {
            c=c+arr[i];
        }
    }
    printf("%d",b-c);
    return 0;

}
