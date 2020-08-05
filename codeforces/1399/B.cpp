#include<stdio.h>
int main()
{
    unsigned long long int sum,t,n,i,amin,bmin;
    static unsigned long long int a[52],b[52];
    scanf("%llu",&t);
    while(t--)
    {
        sum=0;
        scanf("%llu",&n);
        for(i=0;i<n;i++)
        {
            scanf("%llu",&a[i]);
            if(i==0)
                amin=a[i];
            else if(a[i]<amin)
                amin=a[i];
        }
        for(i=0;i<n;i++)
        {
            scanf("%llu",&b[i]);
            if(i==0)
                bmin=b[i];
            else if(b[i]<bmin)
                bmin=b[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]-amin>=b[i]-bmin)
                sum=sum+a[i]-amin;
            else
                sum=sum+b[i]-bmin;
        }
        printf("%llu\n",sum);
    }
    return 0;
}
