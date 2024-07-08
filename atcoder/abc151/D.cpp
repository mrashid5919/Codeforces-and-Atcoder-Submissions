#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int n,m,i,j,mx=0,c,vis[500]={0},dist[500]={0};
    char ara[30][30];
    vector<int> adj[500];
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]=='.')
            {
                if(i>0)
                {
                    if(ara[i-1][j]=='.')
                        adj[i*m+j].push_back((i-1)*m+j);
                }
                if(i<n-1)
                {
                    if(ara[i+1][j]=='.')
                        adj[i*m+j].push_back((i+1)*m+j);
                }
                if(j>0)
                {
                    if(ara[i][j-1]=='.')
                        adj[i*m+j].push_back(i*m+j-1);
                }
                if(j<m-1)
                {
                    if(ara[i][j+1]=='.')
                        adj[i*m+j].push_back(i*m+j+1);
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(ara[i][j]=='#')
                continue;
            c=0;
            for(int k=0;k<n*m;k++)
            {
                vis[k]=0;
                dist[k]=0;
            }
            vis[i*m+j]=1;
            dist[i*m+j]=0;
            queue<int> q;
            q.push(i*m+j);
            while(!q.empty())
            {
                int cur=q.front();
                q.pop();
                for(int k=0;k<adj[cur].size();k++)
                {
                    if(vis[adj[cur][k]]==0)
                    {
                        vis[adj[cur][k]]=1;
                        dist[adj[cur][k]]=dist[cur]+1;
                        c=max(c,dist[adj[cur][k]]);
                        q.push(adj[cur][k]);
                    }
                }
            }
            mx=max(mx,c);
        }
    }
    cout<<mx<<"\n";
    return 0;
}