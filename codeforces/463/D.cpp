#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

set<int> adj[1005];
int vis[1005],mx,rep[1005];

/*void DFS(int prv,int v,int cur)
{
    if(prv==-1){
        cur++;
        vis[v]=1;
    }
    //cout<<v<<" "<<cur<<"\n";
    mx=max(mx,cur);
    for(int i=0;i<adj[v].size();i++)
    {
        if(!vis[adj[v][i]])
        {
            vis[adj[v][i]]=1;
            rep[adj[v][i]]=1;
            DFS(v,adj[v][i],cur+1);
            vis[adj[v][i]]=0;
        }
    }
}*/


int main()
{
    fastio;
    int n,k,i,j,l,ara[10][1005],p,ans;
    int pos[10][1005];
    cin>>n>>k;
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>ara[i][j];
            pos[i][ara[i][j]-1]=j;
        }
    }
    /*for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
            cout<<pos[i][j]<<" ";
        cout<<"\n";
    }*/
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            p=0;
            if(i==j)
                continue;
            for(l=0;l<k;l++)
            {
                if(pos[l][i]>pos[l][j])
                {
                    p=1;
                    break;
                }
            }
            if(p==0)
                adj[i].insert(j);
        }
    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<adj[i].size();j++)
            cout<<adj[i][j]<<" ";
        cout<<"\n";
    }*/
    
    /*for(i=0;i<n;i++)
    {   
        if(i>=n-ans)
            break;
        mx=0;
        if(!rep[ara[0][i]-1])
        {
            DFS(-1,ara[0][i]-1,0);
            ans=max(ans,mx);
        }
       
    }*/
    set<int>::iterator it;
    for(i=0;i<n;i++)
    {
        rep[i]=1;
        for(j=0;j<i;j++)
        {
            it=adj[ara[0][j]-1].find(ara[0][i]-1);
            if(it!=adj[ara[0][j]-1].end())
                rep[i]=max(rep[i],rep[j]+1);
        }
    }
    mx=1;
    for(i=0;i<n;i++)
    {
        mx=max(mx,rep[i]);
    }
    cout<<mx<<"\n";
    return 0;
}