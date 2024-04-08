#include<bits/stdc++.h>
using namespace std;
 
#define fastio ios::sync_with_stdio(0);cin.tie(0)
 
int main()
{
    fastio;
    long long t,n,a,b,ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>a>>b;
        if(b<=2*a)
            ans=(n/2)*b+(n%2)*a;
        else
            ans=n*a;
        cout<<ans<<"\n";
    }
    return 0;
}