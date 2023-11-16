#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int pr[250005],lvl[250005],vis[250005];
vector<int> adj[250005];
pair<int,int> fr[250005];
map<pair<int,int>,int > mp;

void DFS(int v)
{
    vis[v]=1;
    if(v==1)
        lvl[v]=0;
    else
        lvl[v]=lvl[pr[v]]+1;
    for(int i=0;i<adj[v].size();i++)
    {
        if(!vis[adj[v][i]])
        {
            pr[adj[v][i]]=v;
            DFS(adj[v][i]);
        }
    }
}

int main()
{
    fastio;
    int n,m,k,i,j,cnt=0;
    char ara[505][505];
    cin>>n>>m>>k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>ara[i][j];
            if(ara[i][j]=='.')
            {
                cnt++;
                fr[cnt]={i,j};
                mp[{i,j}]=cnt;
            }
        }
    }
    for(i=1;i<=cnt;i++)
    {
        pair<int,int> pr=fr[i];
        int x=pr.first,y=pr.second;
        if(x<n-1 && ara[x+1][y]=='.')
        {
            adj[i].push_back(mp[{x+1,y}]);
            adj[mp[{x+1,y}]].push_back(i);
        }
        if(y<m-1 && ara[x][y+1]=='.')
        {
            adj[i].push_back(mp[{x,y+1}]);
            adj[mp[{x,y+1}]].push_back(i);
        }
    }
    DFS(1);
    vector<pair<int,int> > vect;
    for(i=1;i<=cnt;i++)
        vect.push_back({lvl[i],i});
    sort(vect.begin(),vect.end(),greater<pair<int,int> >());
    for(i=0;i<k;i++)
        ara[fr[vect[i].second].first][fr[vect[i].second].second]='X';
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            cout<<ara[i][j];
        cout<<"\n";
    }
    return 0;
}