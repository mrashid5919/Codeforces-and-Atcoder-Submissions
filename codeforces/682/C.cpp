#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long pr[100005],cst[100005],des[100005],nd[100005],vis[100005],ans;
vector<pair<long long,long long> > adj[100005];

void subNodeCount(long long v)
{
    vis[v]=1;
    for(long long i=0;i<adj[v].size();i++)
    {
        if(!vis[adj[v][i].first]){
            pr[adj[v][i].first]=v;
            subNodeCount(adj[v][i].first);
            des[v]+=des[adj[v][i].first];
        }
    }
    des[v]++;
}

void DFS(long long v)
{
    vis[v]=1;
    for(long long i=0;i<adj[v].size();i++)
    {
        if(!vis[adj[v][i].first])
        {
            if(cst[v]+adj[v][i].second>nd[adj[v][i].first])
            {
                ans+=des[adj[v][i].first];
            }
            else if(cst[v]<0 && adj[v][i].second>nd[adj[v][i].first])
            {
                ans+=des[adj[v][i].first];
            }
            else
            {
                cst[adj[v][i].first]=max(cst[v]+adj[v][i].second,adj[v][i].second);
                DFS(adj[v][i].first);
            }            
        }
    }
}

int main()
{
    fastio;
    long long n,i,p,c;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>nd[i];
    for(i=0;i<n-1;i++)
    {
        cin>>p>>c;
        adj[i+1].push_back({p-1,c});
        adj[p-1].push_back({i+1,c});
    }
    subNodeCount(0);
    //for(i=0;i<n;i++)
        //cout<<des[i]<<"\n";
    for(i=0;i<n;i++)
        vis[i]=0;
    pr[0]=-1;
    DFS(0);
    cout<<ans<<"\n";
    return 0;
}