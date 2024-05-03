#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int main()
{
    fastio;
    int i,n,m,x,y,vis[10]={0},ans[10]={0},p=0;
    cin>>n>>m;
    if(n!=1)
        ans[0]=1;
    for(i=0;i<m;i++)
    {
        cin>>x>>y;
        if(x==1 && y==0 && n>1)
        {
            p=1;
            break;
        }
        if(vis[x-1]==0)
        {
            ans[x-1]=y;
            vis[x-1]=1;
        }
        else if(ans[x-1]!=y)
        {
            p=1;
            break;
        }
    }
    if(p==1)
        cout<<-1<<"\n";
    else
    {
        for(i=0;i<n;i++)
            cout<<ans[i];
    }
    return 0;
}