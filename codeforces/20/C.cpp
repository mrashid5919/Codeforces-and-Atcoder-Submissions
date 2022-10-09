#include<bits/stdc++.h>
#include<stdio.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

vector<pair<long long,long long> > adj[100005];
long long dist[100005],parent[100005],inf=1000000000000;

void dijkstra(long long n,long long source)
{
    for(long long i=0; i<n; i++)
    {
        dist[i]=inf;
        parent[i]=-1;
    }
    dist[source]=0;
    set<pair<long long,long long> > st;
    st.insert(make_pair(0,source));
    while(!st.empty())
    {
        long long x=st.begin()->second;
        st.erase(st.begin());
        for(long long i=0; i<adj[x].size(); i++)
        {
            long long dif=(adj[x][i]).second;
            long long nxt=(adj[x][i]).first;
            if(dist[x]+dif<dist[nxt])
            {
                st.erase({dist[nxt],nxt});
                dist[nxt]=dist[x]+dif;
                parent[nxt]=x;
                st.insert(make_pair(dist[nxt],nxt));
            }
        }
    }
}

int main()
{
    fastio;
    //freopen("input.txt","r",stdin);
    long long n,m,u,v,w,source;
    cin>>n>>m;
    for(long long i=0; i<m; i++)
    {
        cin>>u>>v>>w;
        u--;
        v--;
        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    /*sort(adj,adj+n);
    for(long long i=0; i<n; i++)
    {
        for(long long j=1; j<adj[i].size(); j++)
        {
            if(adj[i][j].first==adj[i][j-1].first)
            {
                //cout<<adj[i][j-1].first<<" "<<adj[i][j].first<<"\n";
                adj[i].erase(adj[i].begin()+j);
            }
        }
    }*/
    /*for(long long i=0;i<m;i++)
    {
        long long high,low,mid,flag;
        low=0;
        high=adj[i].size()-1;
        flag=-1;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(adj[inp][mid].first==v)
            {
                adj[u][mid].second=min(adj[u][mid].second,w);
                flag=mid;
                break;
            }
            else if(adj[u][mid].first>v)
                high=mid-1;
            else
                low=mid+1;
        }
        if(flag==-1)
            adj[u].push_back(make_pair(v,w));
    }*/
    dijkstra(n,0);
    /*for(long long i=0;i<n;i++)
        cout<<dist[i]<<" ";
    cout<<"\n";*/
    if(dist[n-1]==inf)
        cout<<-1<<"\n";
    else
    {
        vector<long long> path;
        long long temp=n-1;
        while(temp!=-1)
        {
            path.push_back(temp);
            temp=parent[temp];
        }
        for(long long i=path.size()-1; i>=0; i--)
        {
            cout<<path[i]+1<<" ";
        }
    }

    return 0;
}
