#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long t,a,b,c,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        ans=a+b+c-1;
        cout<<ans<<"\n";
    }
    return 0;
}
