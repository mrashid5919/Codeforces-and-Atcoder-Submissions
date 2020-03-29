#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,sum;
    scanf("%lli",&n);
    if(n%2==0)
    {
        sum=n/2;
    }
    else
    {
        sum=(n+1)/-2;
    }
    printf("%lli",sum);

    return 0;
}
