#include<stdio.h>
int main()
{
    long long int n,i,p=0;
    scanf("%lld",&n);
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            p=1;
            break;
        }
    }
    if(p==1)
        printf("%lld",(n-i)/2+1);
    else
        printf("1");
    return 0;
}
