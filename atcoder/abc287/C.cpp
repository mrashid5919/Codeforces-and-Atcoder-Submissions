#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int pr[200005],vis[200005],flag=0;
vector<int> adj[200005];

void dfs(int v)
{
    //cout<<v<<"\n";
    vis[v]=1;
    for(int i=0;i<adj[v].size();i++)
    {
        //cout<<v<<" "<<adj[v][i]<<"\n";
        if(vis[adj[v][i]]==1)
        {
            if(pr[v]!=adj[v][i])
                flag=1;
            continue;
        }
        else
        {
            pr[adj[v][i]]=v;
            dfs(adj[v][i]);
        }
    }
}

int main()
{
    fastio;
    int n,m,i,u,v,x;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        vis[i]=0;
        pr[i]=-1;
    }
    for(i=0;i<m;i++)
    {
        cin>>u>>v;
        if(i==0)
            x=u-1;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    if(m==0)
        cout<<"No\n";
    else
    {
        pr[x]=-1;
        dfs(x);
        //cout<<flag<<"\n";
        if(flag==1)
            cout<<"No\n";
        else
        {
            for(i=0;i<n;i++)
            {
                if(vis[i]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout<<"No\n";
            else
                cout<<"Yes\n";
        }
    }
    return 0;
}
