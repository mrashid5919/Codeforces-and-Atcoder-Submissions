#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],ans[200005],vis[200005];

int main()
{
    fastio;
    long long n,m,i,j,u,v,w;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>ara[i];
    vector<pair<long long,long long> > adj[n+5];
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        u--,v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    ans[0]=ara[0];
    vis[0]=1;
    queue<long long> q;
    q.push(0);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<adj[u].size();i++)
        {
            v=adj[u][i].first;
            w=adj[u][i].second;
            if(vis[v]==0)
            {
                vis[v]=1;
                ans[v]=ans[u]+ara[v]+w;
                q.push(v);
            }
            else if(ans[v]>ans[u]+ara[v]+w)
            {
                ans[v]=ans[u]+ara[v]+w;
                q.push(v);
            }
        }
    }
    for(i=1;i<n;i++)
        cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}