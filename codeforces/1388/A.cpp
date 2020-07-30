#include<stdio.h>
int main()
{
    long int t,n;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&n);
        if(n<=30)
            printf("NO\n");
        else if(n==36)
        {
            printf("YES\n");
            printf("6 10 15 %ld\n",n-31);
        }
        else if(n==40)
        {
            printf("YES\n");
            printf("6 10 15 %ld\n",n-31);
        }
        else if(n==44)
        {
            printf("YES\n");
            printf("6 10 15 %ld\n",n-31);
        }
        else
        {
            printf("YES\n");
            printf("6 10 14 %ld\n",n-30);
        }
    }
    return 0;
}
