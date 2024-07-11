#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];


int main()
{
    fastio;
    long long t,n,k,ans,i;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>k;
        for(i=0;i<k;i++)
            cin>>ara[i];
        sort(ara,ara+k);
        for(i=0;i<k-1;i++)
            ans+=2*ara[i]-1;
        cout<<ans<<"\n";
    }
    return 0;
}