//Took help
#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

long long vis[200005],globalFlag;
set<long long> adj[200005];

void DFS(long long v,long long pr)
{
    if(pr==-1)
        vis[v]=1;
    else
    {
        long long col=vis[pr];
        if(vis[v]!=-1)
        {
            if(vis[v]==col)
                globalFlag=1;
            return;
        }
        else
        {
            if(col==1)
                vis[v]=2;
            else
                vis[v]=1;
        }
    }
    for(auto nxt:adj[v])
    {
        if(nxt==pr)
            continue;
        if(vis[nxt]!=-1)
        {
            long long childCol=vis[nxt];
            if(childCol==vis[v])
            {
                globalFlag=1;
                continue;
            }
        }
        DFS(nxt,v);
    }
}

int main()
{
    fastio;
    long long t,n,i,p,a,b;
    cin>>t;
    while(t--)
    {
        globalFlag=0;
        cin>>n;
        for(i=0;i<=n;i++)
        {
            adj[i].clear();
            vis[i]=-1;
        }
        map<long long,long long> mp;
        map<long long,long long> prevMp;
        p=0;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a==b)
            {
                p=1;
            }
            mp[a]++;
            mp[b]++;
            if(mp[a]==1)
                prevMp[a]=i+1;
            else if(mp[a]==2)
            {
                adj[prevMp[a]].insert(i+1);
                adj[i+1].insert(prevMp[a]);
            }
            else
                p=1;
            if(mp[b]==1)
                prevMp[b]=i+1;
            else if(mp[b]==2)
            {
                adj[prevMp[b]].insert(i+1);
                adj[i+1].insert(prevMp[b]);
            }
            else
                p=1;
        }
        if(p==1)
        {
            cout<<"NO\n";
            continue;
        }
        for(i=1;i<=n;i++)
        {
            if(vis[i]==-1)
                DFS(i,-1);
        }
        if(globalFlag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
