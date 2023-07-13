#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long vis[2005],cnt=0;
vector<long long> adj[2005];

void dfs(long long v)
{
    vis[v]=1;
    //cout<<v<<"\n";
    cnt++;
    for(long long i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i]]==0)
            dfs(adj[v][i]);
    }
}

int main()
{
    fastio;
    long long n,m,i,j,u,v;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            vis[j]=0;
        //cout<<i<<":\n";
        dfs(i);
    }
    cout<<cnt<<"\n";
    return 0;
}