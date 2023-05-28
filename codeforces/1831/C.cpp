#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,u,v,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<long long,long long> > adj[n+5];
        long long vis[n+5]={0},level[n+5]={0},pos[n+5]={-1};
        vis[0]=1;
        level[0]=0;
        queue<long long> q;
        //q.push(0LL);
        for(i=0;i<n-1;i++)
        {
            cin>>u>>v;
            adj[u-1].push_back(make_pair(v-1,i));
            adj[v-1].push_back(make_pair(u-1,i));
            if(v==1)
                swap(u,v);
            if(u==1)
            {
                vis[v-1]=1;
                level[v-1]=1;
                pos[v-1]=i;
                q.push(v-1);
            }
        }
        //cout<<level[2]<<"\n";
        while(!q.empty())
        {
            long long x=q.front();
            //cout<<x<<"\n";
            for(i=0;i<adj[x].size();i++)
            {
                if(vis[adj[x][i].first])
                {
                    if(adj[x][i].second<pos[x])
                    {
                        if(level[adj[x][i].first]>level[x]+1)
                        {
                            level[adj[x][i].first]=level[x]+1;
                            pos[adj[x][i].first]=adj[x][i].second;
                        }
                    }
                    else
                    {
                        if(level[adj[x][i].first]>level[x])
                        {
                            level[adj[x][i].first]=level[x];
                            pos[adj[x][i].first]=adj[x][i].second;
                        }
                    }
                }
                else
                {
                    vis[adj[x][i].first]=1;
                    if(adj[x][i].second<pos[x]){
                        level[adj[x][i].first]=level[x]+1;
                        //if(adj[x][i].first==4)
                            //cout<<x<<" "<<level[x]<<"\n";
                    }
                    else{
                        level[adj[x][i].first]=level[x];
                        //if(adj[x][i].first==4)
                            //cout<<2<<"\n";
                    }
                    pos[adj[x][i].first]=adj[x][i].second;
                    q.push(adj[x][i].first);
                    //if(adj[x][i].first==4)
                        //cout<<level[4]<<"\n";
                }
            }
            q.pop();
        }
        mx=0;
        //cout<<level[2]<<"\n";
        for(i=0;i<n;i++)
            mx=max(mx,level[i]);
        cout<<mx<<"\n";
    }
    return 0;
}
