#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int visited[150];
vector<int> adj[150];

void dfs(int v)
{
    visited[v]=1;
    for(int i=0;i<adj[v].size();i++)
    {
        if(visited[adj[v][i]]!=1)
            dfs(adj[v][i]);
    }
}

int main()
{
    fastio;
    int n,m,u,v,cnt,i;
    cnt=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(i=0;i<n;i++)
        visited[i]=0;
    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            cnt++;
            dfs(i);
        }
    }
    cout<<cnt<<"\n";
    return 0;
}
