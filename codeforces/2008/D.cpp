#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],vis[200005],pr[200005],ans[200005];
string s;

//char ara[1005][1005];

void DFS(long long u,long long p)
{
    vis[u]=1;
    pr[u]=p;
    if(s[u-1]=='0')
        ans[p]++;
    if(vis[ara[u]]==0)
        DFS(ara[u],p);
}

int main()
{
    fastio;
    long long t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>ara[i];
            vis[i]=0;
            ans[i]=0;
        }
        cin>>s;
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                DFS(i,i);
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<ans[pr[i]]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}