#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long nxt[100005],vis[100005],pr[100005];
vector<long long> lp;

void DFS(long long v)
{
    //cout<<v<<endl;
    if(pr[v]==-1)
        vis[v]=1;
    else
        vis[v]=vis[pr[v]]+1;
    if(vis[nxt[v]]==-1){
        pr[nxt[v]]=v;
        DFS(nxt[v]);
    }
    else
    {
        lp.push_back(vis[v]-vis[nxt[v]]+1);
    }
}

int main()
{
    fastio;
    long long n,i,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>nxt[i];
        nxt[i]--;
        pr[i]=-1;
        vis[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        if(vis[i]==-1)
            DFS(i);
    }
    if(lp.size()==1)
    {
        cout<<n*n<<"\n";
    }
    else
    {
        sort(lp.begin(),lp.end());
        for(i=0;i<lp.size()-2;i++)
            ans+=lp[i]*lp[i];
        ans+=(lp[lp.size()-1]+lp[lp.size()-2])*(lp[lp.size()-1]+lp[lp.size()-2]);
        cout<<ans<<"\n";
    }
    return 0;
}