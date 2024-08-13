#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],vis[200005];

int main()
{
    fastio;
    long long t,n,i,p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            vis[i]=0;
            cin>>ara[i];
        }
        vis[ara[1]]=1;
        p=0;
        for(i=2;i<=n;i++)
        {
            if(ara[i]==n)
            {
                if(vis[n-1]==1)
                    vis[ara[i]]=1;
                else
                {
                    p=1;
                    break;
                }
            }
            else if(ara[i]==1)
            {
                if(vis[2]==1)
                    vis[ara[i]]=1;
                else
                {
                    p=1;
                    break;
                }
            }
            else
            {
                if(vis[ara[i]-1]==1 || vis[ara[i]+1]==1)
                    vis[ara[i]]=1;
                else
                {
                    p=1;
                    break;
                }
            }
        }
        if(p==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}