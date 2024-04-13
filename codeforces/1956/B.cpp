#include<bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(0);cin.tie(0)

long long ara[200005];

int main()
{
    fastio;
    long long t,n,i,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        for(i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1])
                ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}