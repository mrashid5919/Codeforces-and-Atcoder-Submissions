#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long power(long long x,long long y)
{
    if(y==0)
        return 1;
    else
    {
        long long i,u=1;
        for(i=0;i<y;i++)
            u=u*x;
        return u;
    }
}

int main()
{
    fastio;
    long long t,n,i,ara[55],sum,d,j;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        for(i=0;i<n-1;i++)
        {
            if(max(ara[i],ara[i+1])%min(ara[i],ara[i+1])==0)
                d=max(ara[i],ara[i+1])/min(ara[i],ara[i+1]);
            else
                d=max(ara[i],ara[i+1])/min(ara[i],ara[i+1])+1;
            if(d<=2)
                continue;
            else
            {
                for(j=2;;j++)
                {
                    if(power(2,j)>=d)
                    {
                        sum+=j-1;
                        break;
                    }
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
