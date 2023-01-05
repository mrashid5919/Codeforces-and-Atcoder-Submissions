#include<bits/stdc++.h>
#include<string>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    fastio;
    long long a,b,n,ans;
    cin>>a>>b>>n;
    if(n==1)
        ans=(a/b)-a*(1/b);
    else if(b==1)
        ans=0;
    else
        ans=(a*min(b-1,n))/b;
    cout<<ans<<"\n";
    return 0;
}
