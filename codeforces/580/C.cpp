//Took help
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int m,ara[100005],cnt[100005],visited[100005];
vector<int> adj[100005];
vector<int> leaves;

void dfs(int u)
{
    visited[u]=1;
    for(int i=0;i<adj[u].size();i++)
    {
        int temp=adj[u][i];
        if(visited[temp]==0)
        {
            cnt[temp]=cnt[u]+ara[temp];
            if(ara[temp]==0)
                cnt[temp]=0;
            if(cnt[temp]>m)
                continue;
            dfs(temp);
        }
    }
}

int main()
{
    fastio;
    int n,i,ans=0,x,y;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cnt[0]=ara[0];
    for(i=1;i<n;i++)
    {
        if(adj[i].size()==1)
            leaves.push_back(i);
    }
    dfs(0);
    for(i=0;i<leaves.size();i++)
    {
        if(visited[leaves[i]]==1)
            ans++;
    }
    cout<<ans<<"\n";
    return 0;
}
