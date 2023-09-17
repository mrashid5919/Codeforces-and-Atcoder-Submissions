//Seen editorial
#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

struct Node{
    long long to;
    long long x;
    long long y;
};

long long vis[200005];
vector<Node> adj[200005];
vector<pair<long long,long long> > pos(200005);

void DFS(long long v,long long x,long long y)
{
    vis[v]=1;
    pos[v]={x,y};
    for(long long i=0;i<adj[v].size();i++)
    {
        if(!vis[adj[v][i].to])
        {
            DFS(adj[v][i].to,x+adj[v][i].x,y+adj[v][i].y);
        }
    }
}


int main()
{
    fastio;
    long long n,m,i,j,u,v,x,y;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>x>>y;
        u--;
        v--;
        Node nd;
        nd.to=v;
        nd.x=x;
        nd.y=y;
        adj[u].push_back(nd);
        nd.to=u;
        nd.x=(-1)*x;
        nd.y=(-1)*y;
        adj[v].push_back(nd);
    }
    DFS(0,0,0);
    for(long long i=0;i<n;i++)
    {
        if(vis[i])
            cout<<pos[i].first<<" "<<pos[i].second<<"\n";
        else
            cout<<"undecidable\n";
    }
}