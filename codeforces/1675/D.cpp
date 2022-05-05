#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int ara[200005],child[200005],visited[200005];
vector<int> temp;
vector<int> adj[200005];

void DFS(int vertex)
{
    visited[vertex]=1;
    temp.push_back(vertex);
    if(child[vertex]==-1)
    {
        cout<<temp.size()<<"\n";
        for(int i=0;i<temp.size();i++)
            cout<<temp[i]+1<<" ";
        cout<<"\n";
        temp.clear();
        return;
    }
    for(int i=0;i<adj[vertex].size();i++)
    {
        if(adj[vertex][i]==vertex || visited[adj[vertex][i]]==1)
            continue;
        DFS(adj[vertex][i]);
    }
}

int main()
{
    fastio;
    int t,n,i,rt,x;
    cin>>t;
    while(t--)
    {
        if(temp.size()!=0)
            temp.clear();
        x=0;
        cin>>n;
        for(i=0;i<n;i++){
            child[i]=0;
            visited[i]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            ara[i]--;
            if(ara[i]==i)
                rt=i;
            adj[ara[i]].push_back(i);
            child[ara[i]]++;
        }
        if(n==1)
        {
            cout<<1<<"\n"<<1<<"\n"<<1<<"\n";
            adj[0].clear();
            continue;
        }
        for(i=0;i<n;i++)
        {
            if(child[i]==0)
                child[i]=-1;
            else
            {
                x+=child[i]-1;
            }
        }
        cout<<x<<"\n";
        DFS(rt);
        for(i=0;i<n;i++)
        {
            if(child[i]!=-1)
                adj[i].clear();
        }
    }
    return 0;
}
