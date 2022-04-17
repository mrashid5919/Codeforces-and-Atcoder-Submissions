#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[200005],sum[200005];

int main()
{
    fastio;
    long long t,n,a,b,i,mn,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        mn=INT_MAX;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(i==0)
                sum[i]=ara[i];
            else
                sum[i]=sum[i-1]+ara[i];
        }
        mn=b*sum[n-1];
        for(i=0;i<n;i++)
        {
            x=(a+b)*ara[i]+b*(sum[n-1]-sum[i]-(n-1-i)*ara[i]);
            mn=min(mn,x);
        }
        cout<<mn<<"\n";
    }
    return 0;
}
