#include<stdio.h>
int main()
{
    long long int a,v,b,w,t,ans;
    scanf("%lld%lld",&a,&v);
    scanf("%lld%lld",&b,&w);
    scanf("%lld",&t);
    if(w>=v)
    {
        printf("NO\n");
    }
    else
    {
        if(b>a)
        {
            if((b-a)%(v-w)==0)
                ans=(b-a)/(v-w);
            else
                ans=1+(b-a)/(v-w);
        }
        else
        {
            if((a-b)%(v-w)==0)
                ans=(a-b)/(v-w);
            else
                ans=1+(a-b)/(v-w);
        }
        if(ans<=t)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
