#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long c[100006],dp[100006];

int main()
{
    fastio;
    long long n,i,x,sum1=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        c[x]+=x;
    }
    dp[0]=0;
    dp[1]=c[1];
    for(i=2;i<=100000;i++)
    {
        dp[i]=max(dp[i-1],dp[i-2]+c[i]);
    }
    cout<<dp[100000]<<"\n";
    return 0;
}
