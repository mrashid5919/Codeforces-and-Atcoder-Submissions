
#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,n,k,i,s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        s=n;

        for(i=1;i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i<=k)
                {
                    if(s>=(n/i))
                        s=n/i;
                }
                if((n/i)<=k)
                {
                    if(s>=i)
                        s=i;
                }
            }
        }
        printf("%lld\n",s);

    }


    return 0;
}
