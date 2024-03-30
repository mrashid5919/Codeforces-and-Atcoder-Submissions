#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005],vis[200005],ans[200005];

int main()
{
    fastio;
    long long t,n,i,mn;
    cin>>t;
    while(t--)
    {
        mn=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            vis[i]=0;
        }
        for(i=0;i<n;i++)
        {
            if(ara[i]<0)
            {
                ans[i]=mn-ara[i];
                vis[mn-ara[i]]=1;
            }
            else
            {
                ans[i]=mn;
                vis[mn]=1;
                while(vis[mn] & mn<n)
                    mn++;
            }
        }
        for(i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}