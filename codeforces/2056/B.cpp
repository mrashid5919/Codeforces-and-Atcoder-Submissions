#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long power(long long x,long long y)
{
    long long res=1;
    while(y>0)
    {
        res*=x;
        y--;
    }
    return res;
}

char ara[1005][1005];
long long vis[1005];

vector<long long> adj[1005],ans;

void DFS(long long v)
{
    vis[v]=1;
    for(long long i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i]]==0)
            DFS(adj[v][i]);
    }
    ans.push_back(v);
}

int main()
{
    fastio;
    long long t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            vis[i]=0;
            for(j=0;j<n;j++)
            {
                cin>>ara[i][j];
                if(j==i)
                    continue;
                if(j>i && ara[i][j]=='1')
                    adj[i].push_back(j);
            }
        }
        for(i=0;i<n;i++)
        {
            if(vis[i]==0)
                DFS(i);
        }
        for(i=n-1;i>=0;i--)
            cout<<ans[i]+1<<" ";
        cout<<"\n";
        for(i=0;i<n;i++)
            adj[i].clear();
        ans.clear();
    }
    return 0;
}