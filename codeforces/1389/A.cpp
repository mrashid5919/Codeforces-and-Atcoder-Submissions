#include<stdio.h>
int main()
{
    long long int t,l,r,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&l,&r);
        for(i=2;;i++)
        {
            if(l*i>r)
            {
                printf("-1 -1\n");
                break;
            }
            else if(l*i<=r)
            {
                printf("%lld %lld\n",l,l*i);
                break;
            }
        }
    }
    return 0;
}
