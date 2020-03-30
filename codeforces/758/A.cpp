#include<stdio.h>
int main()
{
    long int n,a,S,i,sum=0,max=0;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a);
        sum=sum+a;
        if(max<a)
            max=a;
        else
            continue;
    }
    S=max*n-sum;
    printf("%ld",S);
    return 0;
}
