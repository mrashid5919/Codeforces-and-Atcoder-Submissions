#include<stdio.h>
int main()
{
    long long int t,n,d,i,x,p=0;
    scanf("%lld",&t);
    while(t--)
    {
        p=0;
        scanf("%lld%lld",&n,&d);
        if(n>=d)
            printf("YES\n");
        else
        {
            for(i=1;i<n;i++)
            {
                if(d%(i+1)==0)
                    x=i+d/(i+1);
                else
                    x=i+d/(i+1)+1;
                if(x<=n)
                {
                    p=1;
                    break;
                }
            }
            if(p==1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
