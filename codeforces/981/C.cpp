#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long deg[100005],cnt[100005],mx;

int main()
{
    fastio;
    long long n,i,j,u,v;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }
    for(i=1;i<=n;i++)
    {
        mx=max(mx,deg[i]);
        cnt[deg[i]]++;
    }
    if(cnt[1]==2 && cnt[2]==n-2)
    {
        cout<<"Yes\n1\n";
        for(i=1;i<=n;i++)
        {
            if(deg[i]==1)
                cout<<i<<" ";
        }
        cout<<"\n";
    }
    else if(cnt[1]==mx)
    {
        cout<<"Yes\n"<<mx<<"\n";
        long long r;
        for(i=1;i<=n;i++)
        {
            if(deg[i]==mx)
            {
                r=i;
                break;
            }
        }
        for(i=1;i<=n;i++)
        {
            if(deg[i]==1)
                cout<<r<<" "<<i<<"\n";
        }
    }
    else
        cout<<"No\n";
    return 0;
}