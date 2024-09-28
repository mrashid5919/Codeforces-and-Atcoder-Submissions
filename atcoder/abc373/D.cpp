#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long val[200005],vis[200005];

vector<pair<long long,long long> > adj[200005];

void DFS(long long v,long long w)
{
    vis[v]=1;
    val[v]=w;
    for(long long i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i].first]==0)
        {
            DFS(adj[v][i].first,w+adj[v][i].second);
        }
    }
}

int main()
{
    fastio;
    long long n,m,i,j,u,v,w;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        adj[u-1].push_back({v-1,w});
        adj[v-1].push_back({u-1,(-1)*w});
    }
    for(i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            DFS(i,0);
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<val[i]<<" ";
    }
    cout<<"\n";
    return 0;
}