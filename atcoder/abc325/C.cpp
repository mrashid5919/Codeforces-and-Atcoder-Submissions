#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

char ara[1005][1005];
long long vis[1000005];
vector<long long> adj[1000005];
map<pair<long long,long long>,long long> mp;

void DFS(long long v)
{
    vis[v]=1;
    for(long long i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i]]==0){
            //cout<<adj[v][i]<<"\n";
            DFS(adj[v][i]);
        }
    }
}

int main()
{
    fastio;
    long long h,w,i,j,cnt=0,ans=0;
    cin>>h>>w;
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
            cin>>ara[i][j];
    }
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(ara[i][j]=='#')
            {
                if(mp[{i,j}]==0)
                {
                    mp[{i,j}]=cnt+1;
                    cnt++;
                }
                long long v=mp[{i,j}];
                if(i>0)
                {
                    if(j>0 && ara[i-1][j-1]=='#')
                    {
                        adj[v].push_back(mp[{i-1,j-1}]);
                    }
                    if(ara[i-1][j]=='#')
                    {
                        adj[v].push_back(mp[{i-1,j}]);
                    }
                    if(j<w-1 && ara[i-1][j+1]=='#')
                    {
                        adj[mp[{i,j}]].push_back(mp[{i-1,j+1}]);
                    }
                }
                if(j>0 && ara[i][j-1]=='#')
                {
                    if(mp[{i,j-1}]==0)
                    {
                        mp[{i,j-1}]=cnt+1;
                        cnt++;
                    }
                    adj[v].push_back(mp[{i,j-1}]);
                }
                    
                if(j<w-1 && ara[i][j+1]=='#')
                {
                    if(mp[{i,j+1}]==0)
                    {
                        mp[{i,j+1}]=cnt+1;
                        cnt++;
                    }
                    adj[v].push_back(mp[{i,j+1}]);
                }
                if(i<h-1)
                {
                    if(j>0 && ara[i+1][j-1]=='#')
                    {
                        if(mp[{i+1,j-1}]==0)
                        {
                            mp[{i+1,j-1}]=cnt+1;
                            cnt++;
                        }
                        adj[v].push_back(mp[{i+1,j-1}]);
                    }
                    if(ara[i+1][j]=='#')
                    {
                        if(mp[{i+1,j}]==0)
                        {
                            mp[{i+1,j}]=cnt+1;
                            cnt++;
                        }
                        adj[v].push_back(mp[{i+1,j}]);
                    }
                    if(j<w-1 && ara[i+1][j+1]=='#')
                    {
                        if(mp[{i+1,j+1}]==0)
                        {
                            mp[{i+1,j+1}]=cnt+1;
                            cnt++;
                        }
                        adj[v].push_back(mp[{i+1,j+1}]);
                    }
                }
            }
        }
    }
    //cout<<cnt<<"\n";
    for(i=1;i<=cnt;i++)
    {
        if(!vis[i])
        {
            //cout<<i<<"\n";
            ans++;
            DFS(i);
        }
    }
    cout<<ans<<"\n";
    return 0;
}