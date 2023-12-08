#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

int cnt[100005],r[100005];

int main()
{
    fastio;
    int n,m,i,x,y,ans=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cnt[i]=1;
    }
    r[1]=1;
    while(m--)
    {
        cin>>x>>y;
        cnt[x]--;
        cnt[y]++;
        if(r[x]==1)
            r[y]=1;
        if(cnt[x]==0)
            r[x]=0;
    }
    for(i=1;i<=n;i++)
    {
        if(r[i]==1)
            ans++;
    }
    cout<<ans<<"\n";
    return 0;
}