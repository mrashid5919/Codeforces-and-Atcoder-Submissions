#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ans,M=1000000007;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n;
        ans=(ans*(n+1))%M;
        ans=(ans*(4*n-1)%M)%M;
        ans=(ans*337)%M;
        ans=(ans+M)%M;
        cout<<ans<<"\n";
    }
    return 0;
}
