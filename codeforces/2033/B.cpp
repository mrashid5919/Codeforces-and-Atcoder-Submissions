#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[505][505];

int main()
{
    fastio;
    long long t,n,i,j,k,ans,mx;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>ara[i][j];
            }
        }
        for(k=0;k<n;k++)
        {
            mx=0;
            for(i=k;i<n;i++)
            {
                if(ara[i][i-k]<0)
                    mx=max(mx,abs(ara[i][i-k]));
            }
            ans+=mx;
        }
        for(k=1;k<n;k++)
        {
            mx=0;
            for(i=k;i<n;i++)
            {
                if(ara[i-k][i]<0)
                    mx=max(mx,abs(ara[i-k][i]));
            }
            ans+=mx;
        }
        cout<<ans<<"\n";
    }
    return 0;
}