#include<stdio.h>
int main()
{
    long long int y,k,n,ans,i;
    scanf("%lld%lld%lld",&y,&k,&n);
    if(y>=n)
        printf("-1\n");
    else if((n%k!=0)&&(y/k==n/k))
        printf("-1\n");
    else
    {
        if((y+1)%k==0)
            ans=1;
        else
            ans=(((y+1)/k)+1)*k-y;

        printf("%lld ",ans);
        for(i=0;; i++)
        {
            ans=ans+k;
            if(ans<=(n-y))
                printf("%lld ",ans);
            else
                break;
        }


    }
    return 0;
}
