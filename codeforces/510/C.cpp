#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int count=0,vis[40]={0},par[40]={0},flag;
vector<int> adj[40];
vector<int> ans;

void dfs(int v) {
    vis[v]=1;
    for (int i=0;i<adj[v].size();i++) {
        if (vis[adj[v][i]]==0)
            dfs(adj[v][i]);
        if(vis[adj[v][i]] && par[adj[v][i]]==0)
            flag=1;
    }
    ans.push_back(v);
    par[v]++;
}


/*int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}*/

int main()
{
    fastio;
    int n,i,j;
    string ara[105];
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ara[i];
    // for(i=0;i<26;i++)
    //     parent[i]=i;
    for(i=1;i<n;i++)
    {
        int f=0;
        for(j=0;j<min(ara[i-1].size(),ara[i].size());j++)
        {
            if(ara[i-1][j]!=ara[i][j]){
                adj[ara[i][j]-'a'].push_back(ara[i-1][j]-'a');
                f=1;
                break;
            }
        }
        if(f==0 && ara[i-1].size()>ara[i].size())
        {
            flag=1;
        }
    }
    dfs(ara[0][0]-'a');
    for(i=0;i<26;i++)
    {
        if(vis[i]==0)
            dfs(i);
    }
    if(flag)
        cout<<"Impossible\n";
    else
    {
        for(i=0;i<ans.size();i++)
            cout<<(char)(ans[i]+'a');
    }
    return 0;
}