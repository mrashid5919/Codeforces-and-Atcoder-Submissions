#include<stdio.h>
int main()
{
    unsigned long long int n,a[100001],mul,i,j,c;
    scanf("%llu",&n);
    for(i=0;i<n;i++)
    {
        scanf("%llu",&a[i]);
    }
    mul=1;
    c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
            c++;
    }
    if(c>0)
    {
        printf("0");
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<=1000000000000000000/mul)
           mul=mul*a[i];
        else
        {
            printf("-1");
            return 0;
        }
    }
    printf("%llu\n",mul);
    return 0;
}
