//Looked editorial
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int dp[100005],d[100005],ara[100005],mx;

int main()
{
    fastio;
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    if(n==1)
    {
        cout<<1<<"\n";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        for(j=2;j*j<=ara[i];j++)
        {
            if(ara[i]%j==0)
            {
                dp[ara[i]]=max(dp[ara[i]],d[j]+1);
                dp[ara[i]]=max(dp[ara[i]],d[ara[i]/j]+1);
            }
        }
        dp[ara[i]]=max(1,dp[ara[i]]);
        for(j=2;j*j<=ara[i];j++)
        {
            if(ara[i]%j==0)
            {
                d[j]=dp[ara[i]];
                d[ara[i]/j]=dp[ara[i]];
            }
        }
        d[ara[i]]=dp[ara[i]];
    }
    for(i=0;i<n;i++)
    {
        //cout<<dp[ara[i]]<<"\n";
        mx=max(mx,dp[ara[i]]);
    }
    cout<<mx<<"\n";
}
