#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long k,n,x,t,d,ans;
    cin>>k;
    while(k--)
    {
        cin>>n>>x>>t;
        d=min(n,t/x);
        ans=(n-d)*d+(d*(d-1))/2;
        cout<<ans<<"\n";
    }
    return 0;
}
