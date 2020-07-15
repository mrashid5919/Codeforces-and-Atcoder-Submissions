#include<stdio.h>
int main()
{
    long long int t,n,m,i,j,ans,odd_p,odd_q,even_p,even_q;
    static long long int p[100002],q[100002];
    scanf("%lld",&t);
    while(t--)
    {
        ans=0;
        odd_p=0;
        odd_q=0;
        even_p=0;
        even_q=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&p[i]);
        scanf("%lld",&m);
        for(i=0;i<m;i++)
            scanf("%lld",&q[i]);
        for(i=0;i<n;i++)
        {
            if(p[i]%2==0)
                even_p++;
            else
                odd_p++;
        }
        for(i=0;i<m;i++)
        {
            if(q[i]%2==0)
                even_q++;
            else
                odd_q++;
        }
        ans=odd_p*odd_q+even_p*even_q;
        printf("%lld\n",ans);
    }
    return 0;
}
