//Incomplete
#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,mx,p,d,ans;
    static long long ara[200005],b[200005],idx[200005];
    cin>>t;
    while(t--)
    {
        p=0;
        cin>>n;
        for(i=1;i<=n;i++)
            ara[i]=0;
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            ara[b[i]]++;
            idx[b[i]]=i+1;
        }
        for(i=1;i<=n;i++)
        {
            if(ara[i]==1)
            {
                p=1;
                ans=idx[i];
                break;
            }
        }
        if(p==0)
        {
            cout<<"-1"<<"\n";
            continue;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
