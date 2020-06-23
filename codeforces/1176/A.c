#include<stdio.h>
int main()
{
    unsigned long long int q,n,i;
    scanf("%llu",&q);
    while(q--)
    {
        scanf("%llu",&n);
        for(i=0;;i++)
        {
            if(n==1)
            {
                printf("%llu\n",i);
                break;
            }
            else if(n%2!=0 && n%3!=0 && n%5!=0)
            {
                printf("-1\n");
                break;
            }
            else if(n%5==0)
                n=(4*n)/5;
            else if(n%3==0)
                n=(2*n)/3;
            else if(n%2==0)
                n=n/2;
        }
    }
    return 0;
}
