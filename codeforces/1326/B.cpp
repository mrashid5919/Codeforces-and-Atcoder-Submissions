#include<stdio.h>
int main()
{
    long long int n,i,max;
    static long long int b[200001],a[200001];
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&b[i]);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            a[i]=b[i];
            max=b[i];
        }
        else
        {
            if(b[i]>0)
            {
                max=max+b[i];
                a[i]=max;
            }
            else
            {
                a[i]=max+b[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%lld ",a[i]);
    }
    return 0;
}
