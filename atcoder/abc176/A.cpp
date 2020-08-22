#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

int main()
{
    fastio;
    long long n,x,t,ans;
    cin>>n>>x>>t;
    if(n%x==0)
        ans=(n/x)*t;
    else
        ans=(n/x+1)*t;
    cout<<ans<<"\n";
    return 0;
}