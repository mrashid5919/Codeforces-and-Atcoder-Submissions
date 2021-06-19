#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long ara[300005],u[300005],c[300005];

int main()
{
    fastio;
    long long n,i,ans,count=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            u[count]=ara[i];
            c[count]=1;
        }
        else if(ara[i]!=ara[i-1])
        {
            count++;
            u[count]=ara[i];
            c[count]=1;
        }
        else
        {
            c[count]++;
        }
    }
    ans=(n*(n-1))/2;
    for(i=0;i<=count;i++)
        ans-=(c[i]*(c[i]-1))/2;
    cout<<ans<<"\n";
    return 0;
}
