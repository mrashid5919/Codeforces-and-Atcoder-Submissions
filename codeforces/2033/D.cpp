#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[100005];

int main()
{
    fastio;
    long long t,n,i,ans,ps,dist,j,ls;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>ara[i];
        ans=0; ls=0;
        ps=0;
        dist=1;
        map<long long,long long> mp;
        mp[0]=1;
        vector<long long> pos[n+5];
        vector<pair<long long,long long> > seg;
        pos[1].push_back(0);
        for(i=1;i<=n;i++)
        {
            ps+=ara[i];
            if(mp[ps]==0)
            {
                dist++;
                mp[ps]=dist;
            }
            pos[mp[ps]].push_back(i);
        }
        for(i=1;i<=dist;i++)
        {
            for(j=1;j<pos[i].size();j++)
            {
                seg.push_back({pos[i][j],pos[i][j-1]+1});
            }
        }  
        long long sz=seg.size();
        //cout<<sz<<"\n";
         sort(seg.begin(), seg.end());

        for(i=0;i<sz;i++)
        {
            if(seg[i].second>ls)
            {
                ans++;
                ls=seg[i].first;
            }
        }

        cout<<ans<<"\n";

        // for(i=0;i<sz;i++)
        // {
        //     cout<<seg[i].first<<" "<<seg[i].second<<"\n";
        // }
        // dp[0][0]=0; dp[1][0]=0;
        // ls[0][0]=0; ls[1][0]=0;
        // for(j=1;j<=sz;j++)
        //     {
        //         if(j==1)
        //         {
        //             dp[0][j]=0; dp[1][j]=1;
        //             ls[0][j]=0; ls[1][j]=seg[j-1].second;
        //         }
        //         else
        //         {
        //             dp[0][j]=0; dp[1][j]=0;
        //             if(seg[j-1].first>ls[0][j-1])
        //             {
        //                 dp[1][j]=dp[0][j-1]+1;
        //                 ls[1][j]=seg[j-1].second;
        //             }
        //             if(seg[j-1].first>ls[1][j-1])
        //             {
        //                 if(dp[1][j]<dp[1][j-1]+1)
        //                 {
        //                     dp[1][j]=dp[1][j-1]+1;
        //                     ls[1][j]=seg[j-1].second;
        //                 }
        //                 else if(dp[1][j]==dp[1][j-1]+1)
        //                 {
        //                     ls[1][j]=min(ls[1][j],seg[j-1].second);
        //                 }
        //             }
        //             if(dp[1][j]==0)
        //             {
        //                 if(dp[0][j-1]>dp[1][j-1])
        //                 {
        //                     dp[1][j]=dp[0][j-1];
        //                     ls[1][j]=ls[0][j-1];
        //                 }
        //                 else if(dp[0][j-1]==dp[1][j-1])
        //                 {
        //                     ls[1][j]=min(ls[1][j],ls[0][j-1]);
        //                 }
        //                 else
        //                 {
        //                     dp[1][j]=dp[1][j-1];
        //                     ls[1][j]=ls[1][j-1];
        //                 }
        //             }
        //             if(dp[0][j-1]>dp[1][j-1])
        //             {
        //                 dp[0][j]=dp[0][j-1];
        //                 ls[0][j]=ls[0][j-1];
        //             }
        //             else if(dp[0][j-1]==dp[1][j-1])
        //             {
        //                 dp[0][j]=dp[0][j-1];
        //                 ls[0][j]=min(ls[0][j-1],ls[1][j-1]);
        //             }
        //             else
        //             {
        //                 dp[0][j]=dp[1][j-1];
        //                 ls[0][j]=ls[1][j-1];
        //             }
        //         }
        //     }
        // // for(i=0;i<2;i++)
        // // {
        // //     for(j=0;j<=sz;j++)
        // //     {
        // //         cout<<dp[i][j]<<" ";
        // //     }
        // //     cout<<"\n";
        // // }
        // // for(i=0;i<2;i++)
        // // {
        // //     for(j=0;j<=sz;j++)
        // //     {
        // //         cout<<ls[i][j]<<" ";
        // //     }
        // //     cout<<"\n";
        // // }
        // cout<<max(dp[0][sz],dp[1][sz])<<"\n";
    }
    return 0;
}