#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int ara[1005],vis[1005];

int main()
{
    fastio;
    int t,n,i,j,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> adj[n+5];
        for(i=1;i<=n;i++)
        {
            vis[i]=0;
            ara[i]=0;
        }
        queue<int> q;
        vis[1]=1;
        for(i=2;i<=n;i++)
        {
            cout<<"? 1 "<<i<<endl;
            cin>>x;
            if(x==1)
            {
                adj[1].push_back(i);
                ara[i]=1;
                q.push(i);
                vis[i]=1;
            }
            else
            {
                adj[x].push_back(i);
                ara[i]=x;
            }
        }
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            for(i=0;i<adj[u].size();i++)
            {
                if(vis[adj[u][i]]) continue;
                cout<<"? "<<adj[u][i]<<" "<<ara[u]<<endl;
                cin>>x;
                if(x==u)
                {
                    q.push(adj[u][i]);
                    vis[adj[u][i]]=1;
                    ara[adj[u][i]]=u;
                }
                else
                {
                    adj[x].push_back(adj[u][i]);
                    ara[adj[u][i]]=x;
                }
            }
        }
        cout<<"! ";
        for(i=2;i<=n;i++)
        {
            cout<<i<<" "<<ara[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}