#include<stdio.h>
int main()
{
    long int n,k,i,p[1005],j,swap,sum=0;
    scanf("%ld%ld",&n,&k);
    for(i=0;i<n;i++)
        scanf("%ld",&p[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(p[j]>p[j+1])
            {
                swap=p[j];
                p[j]=p[j+1];
                p[j+1]=swap;
            }
        }
    }
    for(i=0;i<k;i++)
        sum=sum+p[i];
    printf("%ld\n",sum);
    return 0;
}
