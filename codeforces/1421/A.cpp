#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        ans=a^b;
        cout<<ans<<"\n";
    }
    return 0;
}
