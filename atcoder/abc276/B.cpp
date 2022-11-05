#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<int> adj[100005];

int main()
{
    fastio;
    int n,m,i,j,u,v;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    for(i=0;i<n;i++)
    {
        cout<<adj[i].size()<<" ";
        sort(adj[i].begin(),adj[i].end());
        for(j=0;j<adj[i].size();j++)
            cout<<adj[i][j]+1<<" ";
        cout<<"\n";
    }
    return 0;
}
