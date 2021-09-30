#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,n,i,ans,M=1000000007;
    cin>>t;
    while(t--)
    {
        ans=1;
        cin>>n;
        for(i=3;i<=2*n;i++)
        {
            ans=(ans*i)%M;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
