#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long dp[200005][5];

int main()
{
    fastio;
    long long n,i,x,y;
    char prv;
    string s;
    cin>>n;
    cin>>s;
    dp[0][0]=1; //won
    dp[0][1]=0; //lost
    for(i=1;i<n;i++)
    {
        if(s[i]=='R')
        {
            if(s[i-1]=='R')
            {
                dp[i][0]=dp[i-1][1]+1; //paper
                dp[i][1]=dp[i-1][0]; //rock
            }
            else if(s[i-1]=='P')
            {
                dp[i][0]=dp[i-1][0]+1;
                dp[i][1]=max(dp[i-1][0],dp[i-1][1]);
            }
            else
            {
                dp[i][0]=max(dp[i-1][0]+1,dp[i-1][1]+1);
                dp[i][1]=dp[i-1][1];
            }
        }
        else if(s[i]=='P')
        {
            if(s[i-1]=='P')
            {
                dp[i][0]=dp[i-1][1]+1;
                dp[i][1]=dp[i-1][0];
            }
            else if(s[i-1]=='S')
            {
                dp[i][0]=dp[i-1][0]+1;
                dp[i][1]=max(dp[i-1][0],dp[i-1][1]);
            }
            else
            {
                dp[i][0]=max(dp[i-1][0]+1,dp[i-1][1]+1);
                dp[i][1]=dp[i-1][1];
            }
        }
        else
        {
            if(s[i-1]=='S')
            {
                dp[i][0]=dp[i-1][1]+1;
                dp[i][1]=dp[i-1][0];
            }
            else if(s[i-1]=='R')
            {
                dp[i][0]=dp[i-1][0]+1;
                dp[i][1]=max(dp[i-1][0],dp[i-1][1]);
            }
            else
            {
                dp[i][0]=max(dp[i-1][0]+1,dp[i-1][1]+1);
                dp[i][1]=dp[i-1][1];
            }
        }
    }
    cout<<max(dp[n-1][0],dp[n-1][1])<<"\n";
    return 0;
}