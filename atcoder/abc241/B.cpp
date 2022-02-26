#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long n,m,i,j,ara[1005],b[1005],vis[1005]={0},p;
    cin>>n>>m;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(ara,ara+n);
    for(i=0;i<m;i++)
    {
        p=0;
        for(j=0;j<n;j++)
        {
            if(ara[j]>b[i])
                break;
            if(ara[j]==b[i] && vis[j]==0)
            {
                p=1;
                vis[j]=1;
                break;
            }
        }
        if(p==0)
            break;
    }
    if(p==0)
        cout<<"No"<<"\n";
    else
        cout<<"Yes"<<"\n";
    return 0;
}
