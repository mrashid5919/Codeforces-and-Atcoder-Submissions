#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

vector<long long>adj[200005];
long long ch[200005],dep[200005],vis[200005];

// struct comp
// {
//     inline bool operator() (const pair<long long,long long>& p1,const pair<long long,long long>& p2)
//     {
//         if(p1.first==p2.first)
//             return p2.second<p1.second;
//         else
//             return p1.first<p2.first;
//     }
// };

void DFS(long long v)
{
    vis[v]=1;
    for(long long i=0;i<adj[v].size();i++)
    {
        if(vis[adj[v][i]]==0)
        {
            ch[v]++;
            dep[adj[v][i]]=dep[v]+1;
            DFS(adj[v][i]);
            ch[v]+=ch[adj[v][i]];
        }
    }
}

int main()
{
    fastio;
    long long n,k,u,v,i,j,ans=0;
    vector<long long> vect;
    cin>>n>>k;
    for(i=0;i<n-1;i++)
    {
        cin>>u>>v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    DFS(0);
    for(i=0;i<n;i++)
        vect.push_back(dep[i]-ch[i]);
    sort(vect.begin(),vect.end(),greater<long long>());
    /*for(i=0;i<n;i++)
    {
        cout<<"\n"<<vect[i].first<<" "<<vect[i].second;
    }*/
    for(i=0;i<k;i++)
        ans+=vect[i];
    cout<<ans<<"\n";
    return 0;
}