#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<vector<int>>adj;
bool visited[2005];

void dfs(int x)
{
    if(visited[x])
        return;
    visited[x]=true;
    for(auto y:adj[x])
        dfs(y);
}

int main()
{
    fastio;
    int node,edge,x,y,i,j,sum=0;
    cin>>node>>edge;
    adj.resize(node);
    for(i=0;i<edge;i++)
    {
        cin>>x>>y;
        adj[x-1].push_back(y-1);
    }
    for(i=0;i<node;i++)
    {
        for(j=0;j<node;j++)
            visited[j]=false;
        dfs(i);
        for(j=0;j<node;j++)
        {
            if(visited[j]==true)
                sum++;
        }
    }
    cout<<sum<<"\n";
    return 0;
}
