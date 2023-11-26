#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int pr[300005],l[300005],r[300005],cst[300005],vis[300005];
vector<int> adj[300005];

string s;

void DFS(int v)
{
    vis[v]=1;
    for(int i=0;i<adj[v].size();i++)
    {
        if(adj[v][i]==l[v])
        {
            if(s[v]=='L')
                cst[adj[v][i]]=cst[v];
            else
                cst[adj[v][i]]=cst[v]+1;
        }
        else if(s[v]=='R')
            cst[adj[v][i]]=cst[v];
        else
            cst[adj[v][i]]=cst[v]+1;
        DFS(adj[v][i]);
    }
}

int main()
{
    fastio;
    int t,n,i,mn;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        pr[0]=-1;
        vector<long long> leaves;
        for(i=0;i<n;i++)
        {
            cin>>l[i]>>r[i];
            vis[i]=0;
            cst[i]=0;
            if(l[i]==0 && r[i]==0)
            {
                leaves.push_back(i);
            }
            if(l[i]!=0)
            {
                l[i]--;
                adj[i].push_back(l[i]);
                pr[l[i]]=i;
            }
            if(r[i]!=0)
            {
                r[i]--;            
                adj[i].push_back(r[i]);                
                pr[r[i]]=i;
            }            
        }
        DFS(0);
        for(i=0;i<leaves.size();i++)
        {
            if(i==0)
                mn=cst[leaves[i]];
            else
                mn=min(mn,cst[leaves[i]]);
        }
        cout<<mn<<"\n";
        for(i=0;i<n;i++)
            adj[i].clear();
    }
    return 0;
}