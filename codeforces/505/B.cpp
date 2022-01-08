//Took help from editorial
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<pair<int,int> > adj[105];

int visited[105];

bool dfs(int u,int c,int v)
{
    visited[u]=1;
    if(u==v)
        return 1;
    for(int i=0;i<adj[u].size();i++)
    {
        pair<int,int> x=adj[u][i];
        if(x.second==c && !visited[x.first])
        {
            if(dfs(x.first,c,v))
                return true;
        }
    }
    return false;
}

int main()
{
    fastio;
    int n,m,i,a,b,c,q,u,v;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        a--; b--; c--;
        adj[a].push_back(make_pair(b,c));
        adj[b].push_back(make_pair(a,c));
    }
    cin>>q;
    while(q--)
    {
        cin>>u>>v;
        u--; v--;
        int ans=0;
        for(i=0;i<100;i++)
        {
            memset((visited),0,sizeof(visited));
            if(dfs(u,i,v))
                ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
