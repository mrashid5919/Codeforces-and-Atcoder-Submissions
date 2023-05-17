#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    int t,n,m,i,j,k,l,ans,p,cnt;
    char ara[506][506];
    cin>>t;
    while(t--)
    {
        ans=0;
        cnt=0;
        cin>>n>>m;
        int dp[n+5][m+5];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ara[i][j];
                if(ara[i][j]=='*')
                    dp[i][j]=1;
                else
                    dp[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            cnt=0;
            for(j=0;j<m;j++)
            {
                if(ara[i][j]=='*')
                {
                    cnt++;
                    if(cnt>0)
                    {
                        for(k=1;k<=min(i,(cnt-1)/2);k++)
                        {
                            if(dp[i-k][j-k]==k)
                                dp[i-k][j-k]++;
                            else
                                break;
                        }
                    }
                }
                else
                {
                    cnt=0;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                ans+=dp[i][j];
        }
        cout<<ans<<"\n";
    }
    return 0;
}
