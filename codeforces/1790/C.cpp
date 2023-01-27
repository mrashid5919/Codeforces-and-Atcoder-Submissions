#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,j,ara[150][150],cnt[150],x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1;i<=n;i++)
            cnt[i]=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
                cin>>ara[i][j];
            cnt[ara[i][0]]++;
        }
        for(i=1;i<=n;i++)
        {
            if(cnt[i]>1)
            {
                x=i;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ara[i][0]!=x)
            {
                cout<<x<<" ";
                for(j=0;j<n-1;j++)
                    cout<<ara[i][j]<<" ";
                cout<<"\n";
                break;
            }
        }
    }
    return 0;
}
